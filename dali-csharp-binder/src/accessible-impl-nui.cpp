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

using namespace Dali::Toolkit::DevelControl;

namespace {

// Keep this structure layout binary compatible with the respective C# structure!
struct AccessibilityDelegate
{
    char *(*getName)(); // 1
    char *(*getDescription)(); // 2
    bool (*doAction)(const char *); // 3
    std::uint64_t (*calculateStates)(std::uint64_t); // 4
    int (*getActionCount)(); // 5
    char *(*getActionName)(int); // 6
    bool (*shouldReportZeroChildren)(); // 7
    double (*getMinimum)(); // 8
    double (*getCurrent)(); // 9
    double (*getMaximum)(); // 10
    bool (*setCurrent)(double); // 11
    double (*getMinimumIncrement)(); // 12
    bool (*isScrollable)(); // 13
    char *(*getText)(int, int); // 14
    int (*getCharacterCount)(); // 15
    int (*getCursorOffset)(); // 16
    bool (*setCursorOffset)(int); // 17
    Dali::Accessibility::Range *(*getTextAtOffset)(int, int); // 18
    Dali::Accessibility::Range *(*getRangeOfSelection)(int); // 19
    bool (*removeSelection)(int); // 20
    bool (*setRangeOfSelection)(int, int, int); // 21
    bool (*copyText)(int, int); // 22
    bool (*cutText)(int, int); // 23
    bool (*insertText)(int, const char *); // 24
    bool (*setTextContents)(const char *); // 25
    bool (*deleteText)(int, int); // 26
    bool (*scrollToChild)(Dali::Actor *); // 27
    int (*getSelectedChildrenCount)(); // 28
    Dali::Actor *(*getSelectedChild)(int); // 29
    bool (*selectChild)(int); // 30
    bool (*deselectSelectedChild)(int); // 31
    bool (*isChildSelected)(int); // 32
    bool (*selectAll)(); // 33
    bool (*clearSelection)(); // 34
    bool (*deselectChild)(int); // 35
};

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

struct NUIViewAccessible : public ControlAccessible
{
    // Points to memory managed from the C# side
    const AccessibilityDelegate *table;

    NUIViewAccessible() = delete;
    NUIViewAccessible(const NUIViewAccessible &) = delete;
    NUIViewAccessible(NUIViewAccessible &&) = delete;

    NUIViewAccessible& operator=(const NUIViewAccessible &) = delete;
    NUIViewAccessible& operator=(NUIViewAccessible &&) = delete;

    NUIViewAccessible(Dali::Actor actor, Dali::Accessibility::Role role, const AccessibilityDelegate *vtable)
    : ControlAccessible(actor, role, false), table{vtable} {}

    std::string GetNameRaw() const override
    {
        std::string ret{};

        if (table->getName)
        {
            ret = stealString(table->getName());
        }

        return ret;
    }

    std::string GetDescriptionRaw() const override
    {
        std::string ret{};

        if (table->getDescription)
        {
            ret = stealString(table->getDescription());
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
            auto size = Self().GetProperty<Dali::Vector2>(Dali::Actor::Property::SIZE);
            mCurrentHighlightActor.GetHandle().SetProperty(Dali::Actor::Property::SIZE, size);
        }

        return ret;
    }

    std::string GetActionName(std::size_t index) const override
    {
        std::string ret{};

        if (table->getActionName)
        {
            ret = stealString(table->getActionName(static_cast<int>(index)));
        }

        return ret;
    }

    std::size_t GetActionCount() const override
    {
        std::size_t ret{0};

        if (table->getActionCount)
        {
            ret = static_cast<std::size_t>(table->getActionCount());
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
            ret = table->doAction(name.data());
        }

        return ret;
    }

    Dali::Accessibility::States CalculateStates() override
    {
        using Dali::Accessibility::States;

        States ret = ControlAccessible::CalculateStates();

        if (table->calculateStates)
        {
            ret = States{table->calculateStates(ret.GetRawData64())};
        }

        return ret;
    }

    Dali::Property::Index GetNamePropertyIndex() override
    {
        return Dali::Property::INVALID_INDEX;
    }

    Dali::Property::Index GetDescriptionPropertyIndex() override
    {
        return Dali::Property::INVALID_INDEX;
    }

    // Ideally, this could be removed along with the DoGetChildren() override below if NUI controls
    // switch to setting the AccessibilityHidden property instead. It can be used for the same
    // purpose, and it offers more fine-grained control.
    virtual bool ShouldReportZeroChildren() const
    {
        bool ret{false};

        if (table->shouldReportZeroChildren)
        {
            ret = table->shouldReportZeroChildren();
        }

        return ret;
    }

    bool IsScrollable() const override
    {
        bool ret{false};

        if (table->isScrollable)
        {
            ret = table->isScrollable();
        }

        return ret;
    }

    bool ScrollToChild(Dali::Actor child) override
    {
        bool ret{false};

        if (table->scrollToChild)
        {
            ret = table->scrollToChild(new Dali::Actor(child));
        }

        return ret;
    }

    void DoGetChildren(std::vector<Accessible*>& children) override
    {
        if (ShouldReportZeroChildren())
        {
            // We still allow the highlight frame to be reported as a child of this actor
            // even though its ShouldReportZeroChildren() method returned true.
            if (Self() == Dali::Accessibility::Accessible::GetCurrentlyHighlightedActor())
            {
                children.push_back(Dali::Accessibility::Accessible::Get(mCurrentHighlightActor.GetHandle()));
            }
        }
        else
        {
            Dali::Accessibility::ActorAccessible::DoGetChildren(children);
        }
    }
};

struct NUIViewAccessible_Value : public NUIViewAccessible,
                                 public virtual Dali::Accessibility::Value
{
    using NUIViewAccessible::NUIViewAccessible;

    double GetMinimum() const override
    {
        double ret{0.0};

        if (table->getMinimum)
        {
            ret = table->getMinimum();
        }

        return ret;
    }

    double GetCurrent() const override
    {
        double ret{0.0};

        if (table->getCurrent)
        {
            ret = table->getCurrent();
        }

        return ret;
    }

    double GetMaximum() const override
    {
        double ret{0.0};

        if (table->getMaximum)
        {
            ret = table->getMaximum();
        }

        return ret;
    }

    bool SetCurrent(double value) override
    {
        bool ret{false};

        if (table->setCurrent)
        {
            ret = table->setCurrent(value);
        }

        return ret;
    }

    double GetMinimumIncrement() const override
    {
        double ret{0.0};

        if (table->getMinimumIncrement)
        {
            ret = table->getMinimumIncrement();
        }

        return ret;
    }
};

struct NUIViewAccessible_EditableText : public NUIViewAccessible,
                                        public virtual Dali::Accessibility::EditableText
{
    using NUIViewAccessible::NUIViewAccessible;

    std::string GetText(std::size_t startOffset, std::size_t endOffset) const override
    {
        std::string ret{};

        if (table->getText)
        {
            ret = stealString(table->getText(static_cast<int>(startOffset), static_cast<int>(endOffset)));
        }

        return ret;
    }

    std::size_t GetCharacterCount() const override
    {
        std::size_t ret{0};

        if (table->getCharacterCount)
        {
            ret = static_cast<std::size_t>(table->getCharacterCount());
        }

        return ret;
    }

    std::size_t GetCursorOffset() const override
    {
        std::size_t ret{0};

        if (table->getCursorOffset)
        {
            ret = static_cast<std::size_t>(table->getCursorOffset());
        }

        return ret;
    }

    bool SetCursorOffset(std::size_t offset) override
    {
        bool ret{false};

        if (table->setCursorOffset)
        {
            ret = table->setCursorOffset(static_cast<int>(offset));
        }

        return ret;
    }

    Dali::Accessibility::Range GetTextAtOffset(std::size_t offset, Dali::Accessibility::TextBoundary boundary) const override
    {
        Dali::Accessibility::Range ret{};

        if (table->getTextAtOffset)
        {
            ret = stealObject(table->getTextAtOffset(static_cast<int>(offset), static_cast<int>(boundary)));
        }

        return ret;
    }

    Dali::Accessibility::Range GetRangeOfSelection(std::size_t selectionIndex) const override
    {
        Dali::Accessibility::Range ret{};

        if (table->getRangeOfSelection)
        {
            ret = stealObject(table->getRangeOfSelection(static_cast<int>(selectionIndex)));
        }

        return ret;
    }

    bool RemoveSelection(std::size_t selectionIndex) override
    {
        bool ret{false};

        if (table->removeSelection)
        {
            ret = table->removeSelection(static_cast<int>(selectionIndex));
        }

        return ret;
    }

    bool SetRangeOfSelection(std::size_t selectionIndex, std::size_t startOffset, std::size_t endOffset) override
    {
        bool ret{false};

        if (table->setRangeOfSelection)
        {
            ret = table->setRangeOfSelection(static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
        }

        return ret;
    }

    bool CopyText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->copyText)
        {
            ret = table->copyText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool CutText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->cutText)
        {
            ret = table->cutText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool InsertText(std::size_t startPosition, std::string text) override
    {
        if (table->insertText)
        {
            return table->insertText(static_cast<int>(startPosition), text.c_str());
        }

        return false;
    }

    bool SetTextContents(std::string newContents) override
    {
        if (table->setTextContents)
        {
            return table->setTextContents(newContents.c_str());
        }

        return false;
    }

    bool DeleteText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (table->deleteText)
        {
            ret = table->deleteText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }
};

struct NUIViewAccessible_Selection : public NUIViewAccessible,
                                    public virtual Dali::Accessibility::Selection
{
    using NUIViewAccessible::NUIViewAccessible;

    int GetSelectedChildrenCount() const override
    {
        int ret{0};

        if (table->getSelectedChildrenCount)
        {
            ret = table->getSelectedChildrenCount();
        }

        return ret;
    }

    Dali::Accessibility::Accessible* GetSelectedChild(int selectedChildIndex) override
    {
        Dali::Accessibility::Accessible* ret{nullptr};

        if (table->getSelectedChild)
        {
            Dali::Actor *actor = table->getSelectedChild(selectedChildIndex);
            if (actor)
            {
                ret = Dali::Accessibility::Accessible::Get(*actor);
            }
        }

        return ret;
    }

    bool SelectChild(int childIndex) override
    {
        bool ret{false};

        if (table->selectChild)
        {
            ret = table->selectChild(childIndex);
        }

        return ret;
    }

    bool DeselectSelectedChild(int selectedChildIndex) override
    {
        bool ret{false};

        if (table->deselectSelectedChild)
        {
            ret = table->deselectSelectedChild(selectedChildIndex);
        }

        return ret;
    }

    bool IsChildSelected(int childIndex) const override
    {
        bool ret{false};

        if (table->isChildSelected)
        {
            ret = table->isChildSelected(childIndex);
        }

        return ret;
    }

    bool SelectAll() override
    {
        bool ret{false};

        if (table->selectAll)
        {
            ret = table->selectAll();
        }

        return ret;
    }

    bool ClearSelection() override
    {
        bool ret{false};

        if (table->clearSelection)
        {
            ret = table->clearSelection();
        }

        return ret;
    }

    bool DeselectChild(int childIndex) override
    {
        bool ret{false};

        if (table->deselectChild)
        {
            ret = table->deselectChild(childIndex);
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityConstructor_NUI
    (void *arg1_self, int arg2_role, int arg3_iface, const void *arg4_vtable, int arg5_vtableSize)
{
    GUARD_ON_NULL_RET(arg1_self);
    GUARD_ON_NULL_RET(arg4_vtable);
    try_catch(([&]()
    {
        Dali::Actor self = *(Dali::Actor *)arg1_self;
        auto role = static_cast<Dali::Accessibility::Role>(arg2_role);
        int iface = arg3_iface;
        const auto *vtable = static_cast<const AccessibilityDelegate *>(arg4_vtable);
        auto vtableSize = static_cast<std::size_t>(arg5_vtableSize);

        if (vtableSize != sizeof(*vtable))
        {
            throw std::runtime_error("SetAccessibilityConstructor_NUI interop error: Marshal.SizeOf<AccessibilityDelegate>() != sizeof(AccessibilityDelegate)");
        }

        SetAccessibilityConstructor(self, [=](Dali::Actor actor)
        {
            Dali::Accessibility::Accessible *accessible{};

            switch (iface)
            {
            default:
                DALI_LOG_ERROR("SetAccessibilityConstructor_NUI error: unknown interface %d", iface);
                // fall-through
            case IFACE_NONE:
                accessible = new NUIViewAccessible(actor, role, vtable);
                break;
            case IFACE_VALUE:
                accessible = new NUIViewAccessible_Value(actor, role, vtable);
                break;
            case IFACE_EDITABLE_TEXT:
                accessible = new NUIViewAccessible_EditableText(actor, role, vtable);
                break;
            case IFACE_SELECTION:
                accessible = new NUIViewAccessible_Selection(actor, role, vtable);
                break;
            }

            return std::unique_ptr<Dali::Accessibility::Accessible>(accessible);
        });
    }));
}

SWIGEXPORT char *SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibleImpl_NUI_DuplicateString(const char *arg)
{
    return strdup(arg);
}

} // extern "C"
