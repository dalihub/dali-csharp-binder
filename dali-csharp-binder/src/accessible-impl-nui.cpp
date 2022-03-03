/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// EXTERNAL INCLUDES
#include <dali/devel-api/adaptor-framework/accessibility.h>
#include <dali/devel-api/adaptor-framework/accessibility-bridge.h>
#include <dali/devel-api/atspi-interfaces/editable-text.h>
#include <dali/devel-api/atspi-interfaces/text.h>
#include <dali/devel-api/atspi-interfaces/selection.h>
#include <dali/devel-api/atspi-interfaces/value.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include "control-devel-wrap.h"

using namespace Dali;
using namespace Dali::Toolkit;

namespace {

// Keep this structure layout binary compatible with the respective C# structure!
struct AccessibilityDelegate
{
    char *                  (*getName)                      (RefObject *);                      //  1
    char *                  (*getDescription)               (RefObject *);                      //  2
    bool                    (*doAction)                     (RefObject *, const char *);        //  3
    std::uint64_t           (*calculateStates)              (RefObject *, std::uint64_t);       //  4
    int                     (*getActionCount)               (RefObject *);                      //  5
    char *                  (*getActionName)                (RefObject *, int);                 //  6
    bool                    (*shouldReportZeroChildren)     (RefObject *);                      //  7
    double                  (*getMinimum)                   (RefObject *);                      //  8
    double                  (*getCurrent)                   (RefObject *);                      //  9
    double                  (*getMaximum)                   (RefObject *);                      // 10
    bool                    (*setCurrent)                   (RefObject *, double);              // 11
    double                  (*getMinimumIncrement)          (RefObject *);                      // 12
    bool                    (*isScrollable)                 (RefObject *);                      // 13
    char *                  (*getText)                      (RefObject *, int, int);            // 14
    int                     (*getCharacterCount)            (RefObject *);                      // 15
    int                     (*getCursorOffset)              (RefObject *);                      // 16
    bool                    (*setCursorOffset)              (RefObject *, int);                 // 17
    Accessibility::Range *  (*getTextAtOffset)              (RefObject *, int, int);            // 18
    Accessibility::Range *  (*getRangeOfSelection)          (RefObject *, int);                 // 19
    bool                    (*removeSelection)              (RefObject *, int);                 // 20
    bool                    (*setRangeOfSelection)          (RefObject *, int, int, int);       // 21
    bool                    (*copyText)                     (RefObject *, int, int);            // 22
    bool                    (*cutText)                      (RefObject *, int, int);            // 23
    bool                    (*insertText)                   (RefObject *, int, const char *);   // 24
    bool                    (*setTextContents)              (RefObject *, const char *);        // 25
    bool                    (*deleteText)                   (RefObject *, int, int);            // 26
    bool                    (*scrollToChild)                (RefObject *, Actor *);             // 27
    int                     (*getSelectedChildrenCount)     (RefObject *);                      // 28
    Actor *                 (*getSelectedChild)             (RefObject *, int);                 // 29
    bool                    (*selectChild)                  (RefObject *, int);                 // 30
    bool                    (*deselectSelectedChild)        (RefObject *, int);                 // 31
    bool                    (*isChildSelected)              (RefObject *, int);                 // 32
    bool                    (*selectAll)                    (RefObject *);                      // 33
    bool                    (*clearSelection)               (RefObject *);                      // 34
    bool                    (*deselectChild)                (RefObject *, int);                 // 35
    std::uint32_t           (*getInterfaces)                (RefObject *);                      // 36
};

// Points to memory managed from the C# side
const AccessibilityDelegate *gAccessibilityDelegate = nullptr;

class NUIViewAccessible : public DevelControl::ControlAccessible,
                          public virtual Accessibility::EditableText, // includes Text
                          public virtual Accessibility::Selection,
                          public virtual Accessibility::Value

{
private:
    using Interface = Accessibility::AtspiInterface;

    // Create an alias so that we don't have to use the long name everywhere
    static inline const AccessibilityDelegate *const &table = gAccessibilityDelegate;

    // Frees memory allocated in C# via a call to CSharp_Dali_Accessibility_DuplicateString
    static std::string StealString(char *str)
    {
        std::string ret{};

        if (str)
        {
            ret = {str};
            free(str);
        }

        return ret;
    }

    // Frees memory allocated in C# via a call to an interop that calls 'operator new'
    template <typename T>
    static T StealObject(T *obj)
    {
        T ret{};

        if (obj)
        {
            ret = std::move(*obj);
            delete obj;
        }

        return ret;
    }

    /**
     * @brief Safely calls a virtual C# method through AccessibilityDelegate.
     *
     * This verifies that the specified function pointer is not null and that
     * the specified interface is implemented by the target object. This is due
     * to the fact that dynamic_cast can see more interfaces than this object
     * is meant to represent (dynamic_cast cannot be used to examine C# objects,
     * so we have to rely on a set of AtspiInterfaces returned by GetInterfaces).
     *
     * @tparam I The interface that the method belongs to
     * @tparam R The return type of the method (deduced automatically)
     * @tparam Args The parameter types of the method (deduced automatically)
     *
     * @param method The method (function pointer from AccessibilityDelegate)
     * @param args Method arguments
     *
     * @return Value returned by the chosen method
     */
    template <Interface I, typename R, typename... Args>
    R CallMethod(R (*method)(RefObject *, Args...), Args... args) const
    {
        DALI_ASSERT_DEBUG(method);
        DALI_ASSERT_ALWAYS(GetInterfaces()[I]);

        return method(Self().GetObjectPtr(), args...);
    }

public:
    NUIViewAccessible() = delete;
    NUIViewAccessible(const NUIViewAccessible &) = delete;
    NUIViewAccessible(NUIViewAccessible &&) = delete;

    NUIViewAccessible& operator=(const NUIViewAccessible &) = delete;
    NUIViewAccessible& operator=(NUIViewAccessible &&) = delete;

    NUIViewAccessible(Actor actor, Accessibility::Role role)
    : ControlAccessible(actor, role, false)
    {
        DALI_ASSERT_DEBUG(gAccessibilityDelegate);
    }

    //
    // Standard interfaces (Accessible, Action, Component)
    //

    std::string GetNameRaw() const override
    {
        char *name = CallMethod<Interface::ACCESSIBLE>(table->getName);

        return StealString(name);
    }

    std::string GetDescriptionRaw() const override
    {
        char *description = CallMethod<Interface::ACCESSIBLE>(table->getDescription);

        return StealString(description);
    }

    bool GrabHighlight() override
    {
        bool ret = ControlAccessible::GrabHighlight();

        if (ret)
        {
            // Note: Currently (2021-03-26), size negotiation between the default highlight frame
            // and NUI Components is known to be broken (and possibly in other cases, too). Please
            // remove this override for GrabHighlight() when it is fixed.
            auto size = Self().GetProperty<Vector2>(Actor::Property::SIZE);
            mCurrentHighlightActor.GetHandle().SetProperty(Actor::Property::SIZE, size);
        }

        return ret;
    }

    std::string GetActionName(std::size_t index) const override
    {
        char *name = CallMethod<Interface::ACTION>(table->getActionName, static_cast<int>(index));

        return StealString(name);
    }

    std::size_t GetActionCount() const override
    {
        int count = CallMethod<Interface::ACTION>(table->getActionCount);

        return static_cast<std::size_t>(count);
    }

    bool DoAction(std::size_t index) override
    {
        return DoAction(GetActionName(index));
    }

    bool DoAction(const std::string &name) override
    {
        return CallMethod<Interface::ACTION>(table->doAction, name.c_str());
    }

    Accessibility::States CalculateStates() override
    {
        std::uint64_t states = ControlAccessible::CalculateStates().GetRawData64();

        states = CallMethod<Interface::ACCESSIBLE>(table->calculateStates, states);

        return Accessibility::States{states};
    }

    Property::Index GetNamePropertyIndex() override
    {
        return Property::INVALID_INDEX;
    }

    Property::Index GetDescriptionPropertyIndex() override
    {
        return Property::INVALID_INDEX;
    }

    // Ideally, this could be removed along with the DoGetChildren() override below if NUI controls
    // switch to setting the AccessibilityHidden property instead. It can be used for the same
    // purpose, and it offers more fine-grained control.
    virtual bool ShouldReportZeroChildren() const
    {
        return CallMethod<Interface::ACCESSIBLE>(table->shouldReportZeroChildren);
    }

    bool IsScrollable() const override
    {
        return CallMethod<Interface::COMPONENT>(table->isScrollable);
    }

    bool ScrollToChild(Actor child) override
    {
        return CallMethod<Interface::ACCESSIBLE>(table->scrollToChild, new Actor(child));
    }

    void DoGetChildren(std::vector<Accessible*>& children) override
    {
        if (ShouldReportZeroChildren())
        {
            // We still allow the highlight frame to be reported as a child of this actor
            // even though its ShouldReportZeroChildren() method returned true.
            if (Self() == Accessibility::Accessible::GetCurrentlyHighlightedActor())
            {
                children.push_back(Accessibility::Accessible::Get(mCurrentHighlightActor.GetHandle()));
            }
        }
        else
        {
            Accessibility::ActorAccessible::DoGetChildren(children);
        }
    }

    Accessibility::AtspiInterfaces DoGetInterfaces() const override
    {
        using Interfaces = Accessibility::AtspiInterfaces;

        Interfaces baseInterfaces;
        Interfaces extraInterfaces;

        // These are always implemented
        baseInterfaces[Interface::ACCESSIBLE] = true;
        baseInterfaces[Interface::ACTION] = true;
        baseInterfaces[Interface::COLLECTION] = true;
        baseInterfaces[Interface::COMPONENT] = true;

        // We cannot use CallMethod() here as that would cause recursion.
        // Note that the result will be cached and subsequent calls to GetInterfaces()
        // will not involve calling this virtual method or jumping into C# code.
        extraInterfaces = Interfaces{table->getInterfaces(Self().GetObjectPtr())};

        return baseInterfaces | extraInterfaces;
    }

    //
    // Value interface
    //

    double GetMinimum() const override
    {
        return CallMethod<Interface::VALUE>(table->getMinimum);
    }

    double GetCurrent() const override
    {
        return CallMethod<Interface::VALUE>(table->getCurrent);
    }

    double GetMaximum() const override
    {
        return CallMethod<Interface::VALUE>(table->getMaximum);
    }

    bool SetCurrent(double value) override
    {
        return CallMethod<Interface::VALUE>(table->setCurrent, value);
    }

    double GetMinimumIncrement() const override
    {
        return CallMethod<Interface::VALUE>(table->getMinimumIncrement);
    }

    //
    // Text interface
    //

    std::string GetText(std::size_t startOffset, std::size_t endOffset) const override
    {
        char *text = CallMethod<Interface::TEXT>(table->getText, static_cast<int>(startOffset), static_cast<int>(endOffset));

        return StealString(text);
    }

    std::size_t GetCharacterCount() const override
    {
        int count = CallMethod<Interface::TEXT>(table->getCharacterCount);

        return static_cast<std::size_t>(count);
    }

    std::size_t GetCursorOffset() const override
    {
        int offset = CallMethod<Interface::TEXT>(table->getCursorOffset);

        return static_cast<std::size_t>(offset);
    }

    bool SetCursorOffset(std::size_t offset) override
    {
        return CallMethod<Interface::TEXT>(table->setCursorOffset, static_cast<int>(offset));
    }

    Accessibility::Range GetTextAtOffset(std::size_t offset, Accessibility::TextBoundary boundary) const override
    {
        Accessibility::Range *range = CallMethod<Interface::TEXT>(table->getTextAtOffset, static_cast<int>(offset), static_cast<int>(boundary));

        return StealObject(range);
    }

    Accessibility::Range GetRangeOfSelection(std::size_t selectionIndex) const override
    {
        Accessibility::Range *range = CallMethod<Interface::TEXT>(table->getRangeOfSelection, static_cast<int>(selectionIndex));

        return StealObject(range);
    }

    bool RemoveSelection(std::size_t selectionIndex) override
    {
        return CallMethod<Interface::TEXT>(table->removeSelection, static_cast<int>(selectionIndex));
    }

    bool SetRangeOfSelection(std::size_t selectionIndex, std::size_t startOffset, std::size_t endOffset) override
    {
        return CallMethod<Interface::TEXT>(table->setRangeOfSelection, static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
    }

    //
    // EditableText interface
    //

    bool CopyText(std::size_t startPosition, std::size_t endPosition) override
    {
        return CallMethod<Interface::EDITABLE_TEXT>(table->copyText, static_cast<int>(startPosition), static_cast<int>(endPosition));
    }

    bool CutText(std::size_t startPosition, std::size_t endPosition) override
    {
        return CallMethod<Interface::EDITABLE_TEXT>(table->cutText, static_cast<int>(startPosition), static_cast<int>(endPosition));
    }

    bool InsertText(std::size_t startPosition, std::string text) override
    {
        return CallMethod<Interface::EDITABLE_TEXT>(table->insertText, static_cast<int>(startPosition), text.c_str());
    }

    bool SetTextContents(std::string newContents) override
    {
        return CallMethod<Interface::EDITABLE_TEXT>(table->setTextContents, newContents.c_str());
    }

    bool DeleteText(std::size_t startPosition, std::size_t endPosition) override
    {
        return CallMethod<Interface::EDITABLE_TEXT>(table->deleteText, static_cast<int>(startPosition), static_cast<int>(endPosition));
    }

    //
    // Selection interface
    //

    int GetSelectedChildrenCount() const override
    {
        return CallMethod<Interface::SELECTION>(table->getSelectedChildrenCount);
    }

    Accessibility::Accessible* GetSelectedChild(int selectedChildIndex) override
    {
        Actor *actor = CallMethod<Interface::SELECTION>(table->getSelectedChild, selectedChildIndex);

        return actor ? Accessibility::Accessible::Get(*actor) : nullptr;
    }

    bool SelectChild(int childIndex) override
    {
        return CallMethod<Interface::SELECTION>(table->selectChild, childIndex);
    }

    bool DeselectSelectedChild(int selectedChildIndex) override
    {
        return CallMethod<Interface::SELECTION>(table->deselectSelectedChild, selectedChildIndex);
    }

    bool IsChildSelected(int childIndex) const override
    {
        return CallMethod<Interface::SELECTION>(table->isChildSelected, childIndex);
    }

    bool SelectAll() override
    {
        return CallMethod<Interface::SELECTION>(table->selectAll);
    }

    bool ClearSelection() override
    {
        return CallMethod<Interface::SELECTION>(table->clearSelection);
    }

    bool DeselectChild(int childIndex) override
    {
        return CallMethod<Interface::SELECTION>(table->deselectChild, childIndex);
    }
};

} // anonymous namespace

extern "C" {

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityConstructor_NUI(void *arg1_self, int arg2_role)
{
    GUARD_ON_NULL_RET(arg1_self);
    try_catch(([&]()
    {
        Actor self = *(Actor *)arg1_self;
        auto role = static_cast<Accessibility::Role>(arg2_role);

        DevelControl::SetAccessibilityConstructor(self, [role](Actor actor)
        {
            return std::make_unique<NUIViewAccessible>(actor, role);
        });
    }));
}

SWIGEXPORT char *SWIGSTDCALL CSharp_Dali_Accessibility_DuplicateString(const char *arg)
{
    return strdup(arg);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_SetAccessibilityDelegate(const void *arg1_accessibilityDelegate, int arg2_accessibilityDelegateSize)
{
    GUARD_ON_NULL_RET(arg1_accessibilityDelegate);

    const auto *accessibilityDelegate = static_cast<const AccessibilityDelegate *>(arg1_accessibilityDelegate);
    auto accessibilityDelegateSize = static_cast<std::size_t>(arg2_accessibilityDelegateSize);

    try_catch(([&]()
    {
        if (accessibilityDelegateSize != sizeof(*accessibilityDelegate))
        {
            throw std::runtime_error("SetAccessibilityDelegate error: Marshal.SizeOf<AccessibilityDelegate>() != sizeof(AccessibilityDelegate)");
        }

        if (gAccessibilityDelegate)
        {
            DALI_LOG_ERROR("Overwriting global AccessibilityDelegate");
        }

        gAccessibilityDelegate = accessibilityDelegate;
    }));
}

} // extern "C"
