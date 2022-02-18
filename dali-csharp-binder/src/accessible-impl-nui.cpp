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
};

// Points to memory managed from the C# side
const AccessibilityDelegate *gAccessibilityDelegate = nullptr;

inline std::string stealString(char *str)
{
    std::string ret{};

    if (str)
    {
        ret = {str};
        free(str);
    }

    return ret;
}

template <typename T>
inline T stealObject(T *obj)
{
    T ret{};

    if (obj)
    {
        ret = *obj;
        delete obj;
    }

    return ret;
}

struct NUIViewAccessible : public DevelControl::ControlAccessible
{
    // Create an alias so that we don't have to use the long name everywhere
    static inline const AccessibilityDelegate *const &table = gAccessibilityDelegate;

    // NUI will use the RefObject to reroute the method call to the right View instance
    RefObject *SelfRef() const
    {
        return Self().GetObjectPtr();
    }

    NUIViewAccessible() = delete;
    NUIViewAccessible(const NUIViewAccessible &) = delete;
    NUIViewAccessible(NUIViewAccessible &&) = delete;

    NUIViewAccessible& operator=(const NUIViewAccessible &) = delete;
    NUIViewAccessible& operator=(NUIViewAccessible &&) = delete;

    NUIViewAccessible(Actor actor, Accessibility::Role role)
    : ControlAccessible(actor, role, false)
    {
    }

    std::string GetNameRaw() const override
    {
        std::string ret{};

        if (table->getName)
        {
            ret = stealString(table->getName(SelfRef()));
        }

        return ret;
    }

    std::string GetDescriptionRaw() const override
    {
        std::string ret{};

        if (table->getDescription)
        {
            ret = stealString(table->getDescription(SelfRef()));
        }

        return ret;
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
        std::string ret{};

        if (table->getActionName)
        {
            ret = stealString(table->getActionName(SelfRef(), static_cast<int>(index)));
        }

        return ret;
    }

    std::size_t GetActionCount() const override
    {
        std::size_t ret{0};

        if (table->getActionCount)
        {
            ret = static_cast<std::size_t>(table->getActionCount(SelfRef()));
        }

        return ret;
    }

    bool DoAction(std::size_t index) override
    {
        return DoAction(GetActionName(index));
    }

    bool DoAction(const std::string &name) override
    {
        bool ret{false};

        if (table->doAction)
        {
            ret = table->doAction(SelfRef(), name.data());
        }

        return ret;
    }

    Accessibility::States CalculateStates() override
    {
        using Dali::Accessibility::States;

        States ret = ControlAccessible::CalculateStates();

        if (table->calculateStates)
        {
            ret = States{table->calculateStates(SelfRef(), ret.GetRawData64())};
        }

        return ret;
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
        bool ret{false};

        if (table->shouldReportZeroChildren)
        {
            ret = table->shouldReportZeroChildren(SelfRef());
        }

        return ret;
    }

    bool IsScrollable() const override
    {
        bool ret{false};

        if (table->isScrollable)
        {
            ret = table->isScrollable(SelfRef());
        }

        return ret;
    }

    bool ScrollToChild(Actor child) override
    {
        bool ret{false};

        if (table->scrollToChild)
        {
            ret = table->scrollToChild(SelfRef(), new Actor(child));
        }

        return ret;
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
};

struct NUIViewAccessible_Value : public NUIViewAccessible,
                                 public virtual Accessibility::Value
{
    using NUIViewAccessible::NUIViewAccessible;

    double GetMinimum() const override
    {
        double ret{0.0};

        if (table->getMinimum)
        {
            ret = table->getMinimum(SelfRef());
        }

        return ret;
    }

    double GetCurrent() const override
    {
        double ret{0.0};

        if (table->getCurrent)
        {
            ret = table->getCurrent(SelfRef());
        }

        return ret;
    }

    double GetMaximum() const override
    {
        double ret{0.0};

        if (table->getMaximum)
        {
            ret = table->getMaximum(SelfRef());
        }

        return ret;
    }

    bool SetCurrent(double value) override
    {
        bool ret{false};

        if (table->setCurrent)
        {
            ret = table->setCurrent(SelfRef(), value);
        }

        return ret;
    }

    double GetMinimumIncrement() const override
    {
        double ret{0.0};

        if (table->getMinimumIncrement)
        {
            ret = table->getMinimumIncrement(SelfRef());
        }

        return ret;
    }
};

struct NUIViewAccessible_EditableText : public NUIViewAccessible,
                                        public virtual Accessibility::EditableText
{
    using NUIViewAccessible::NUIViewAccessible;

    std::string GetText(std::size_t startOffset, std::size_t endOffset) const override
    {
        std::string ret{};

        if (table->getText)
        {
            ret = stealString(table->getText(SelfRef(), static_cast<int>(startOffset), static_cast<int>(endOffset)));
        }

        return ret;
    }

    std::size_t GetCharacterCount() const override
    {
        std::size_t ret{0};

        if (table->getCharacterCount)
        {
            ret = static_cast<std::size_t>(table->getCharacterCount(SelfRef()));
        }

        return ret;
    }

    std::size_t GetCursorOffset() const override
    {
        std::size_t ret{0};

        if (table->getCursorOffset)
        {
            ret = static_cast<std::size_t>(table->getCursorOffset(SelfRef()));
        }

        return ret;
    }

    bool SetCursorOffset(std::size_t offset) override
    {
        bool ret{false};

        if (table->setCursorOffset)
        {
            ret = table->setCursorOffset(SelfRef(), static_cast<int>(offset));
        }

        return ret;
    }

    Accessibility::Range GetTextAtOffset(std::size_t offset, Accessibility::TextBoundary boundary) const override
    {
        Accessibility::Range ret{};

        if (table->getTextAtOffset)
        {
            ret = stealObject(table->getTextAtOffset(SelfRef(), static_cast<int>(offset), static_cast<int>(boundary)));
        }

        return ret;
    }

    Accessibility::Range GetRangeOfSelection(std::size_t selectionIndex) const override
    {
        Accessibility::Range ret{};

        if (table->getRangeOfSelection)
        {
            ret = stealObject(table->getRangeOfSelection(SelfRef(), static_cast<int>(selectionIndex)));
        }

        return ret;
    }

    bool RemoveSelection(std::size_t selectionIndex) override
    {
        bool ret{false};

        if (table->removeSelection)
        {
            ret = table->removeSelection(SelfRef(), static_cast<int>(selectionIndex));
        }

        return ret;
    }

    bool SetRangeOfSelection(std::size_t selectionIndex, std::size_t startOffset, std::size_t endOffset) override
    {
        bool ret{false};

        if (table->setRangeOfSelection)
        {
            ret = table->setRangeOfSelection(SelfRef(), static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
        }

        return ret;
    }

    bool CopyText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->copyText)
        {
            ret = table->copyText(SelfRef(), static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool CutText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->cutText)
        {
            ret = table->cutText(SelfRef(), static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool InsertText(std::size_t startPosition, std::string text) override
    {
        if (table->insertText)
        {
            return table->insertText(SelfRef(), static_cast<int>(startPosition), text.c_str());
        }

        return false;
    }

    bool SetTextContents(std::string newContents) override
    {
        if (table->setTextContents)
        {
            return table->setTextContents(SelfRef(), newContents.c_str());
        }

        return false;
    }

    bool DeleteText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->deleteText)
        {
            ret = table->deleteText(SelfRef(), static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }
};

struct NUIViewAccessible_Selection : public NUIViewAccessible,
                                     public virtual Accessibility::Selection
{
    using NUIViewAccessible::NUIViewAccessible;

    int GetSelectedChildrenCount() const override
    {
        int ret{0};

        if (table->getSelectedChildrenCount)
        {
            ret = table->getSelectedChildrenCount(SelfRef());
        }

        return ret;
    }

    Accessibility::Accessible* GetSelectedChild(int selectedChildIndex) override
    {
        Accessibility::Accessible* ret{nullptr};

        if (table->getSelectedChild)
        {
            Actor *actor = table->getSelectedChild(SelfRef(), selectedChildIndex);
            if (actor)
            {
                ret = Accessibility::Accessible::Get(*actor);
            }
        }

        return ret;
    }

    bool SelectChild(int childIndex) override
    {
        bool ret{false};

        if (table->selectChild)
        {
            ret = table->selectChild(SelfRef(), childIndex);
        }

        return ret;
    }

    bool DeselectSelectedChild(int selectedChildIndex) override
    {
        bool ret{false};

        if (table->deselectSelectedChild)
        {
            ret = table->deselectSelectedChild(SelfRef(), selectedChildIndex);
        }

        return ret;
    }

    bool IsChildSelected(int childIndex) const override
    {
        bool ret{false};

        if (table->isChildSelected)
        {
            ret = table->isChildSelected(SelfRef(), childIndex);
        }

        return ret;
    }

    bool SelectAll() override
    {
        bool ret{false};

        if (table->selectAll)
        {
            ret = table->selectAll(SelfRef());
        }

        return ret;
    }

    bool ClearSelection() override
    {
        bool ret{false};

        if (table->clearSelection)
        {
            ret = table->clearSelection(SelfRef());
        }

        return ret;
    }

    bool DeselectChild(int childIndex) override
    {
        bool ret{false};

        if (table->deselectChild)
        {
            ret = table->deselectChild(SelfRef(), childIndex);
        }

        return ret;
    }
};

// Keep these enumeration values in sync with the respective C# enumeration!
enum {
    IFACE_NONE = 0,
    IFACE_VALUE = 1,
    IFACE_EDITABLE_TEXT = 2,
    IFACE_SELECTION = 3,
};

} // anonymous namespace

extern "C" {

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityConstructor_NUI(void *arg1_self, int arg2_role, int arg3_iface)
{
    GUARD_ON_NULL_RET(arg1_self);
    try_catch(([&]()
    {
        Actor self = *(Actor *)arg1_self;
        auto role = static_cast<Accessibility::Role>(arg2_role);
        int iface = arg3_iface;

        DevelControl::SetAccessibilityConstructor(self, [=](Actor actor)
        {
            Accessibility::Accessible *accessible{};

            switch (iface)
            {
            default:
                DALI_LOG_ERROR("SetAccessibilityConstructor_NUI error: unknown interface %d", iface);
                [[fallthrough]];
            case IFACE_NONE:
                accessible = new NUIViewAccessible(actor, role);
                break;
            case IFACE_VALUE:
                accessible = new NUIViewAccessible_Value(actor, role);
                break;
            case IFACE_EDITABLE_TEXT:
                accessible = new NUIViewAccessible_EditableText(actor, role);
                break;
            case IFACE_SELECTION:
                accessible = new NUIViewAccessible_Selection(actor, role);
                break;
            }

            return std::unique_ptr<Accessibility::Accessible>(accessible);
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
