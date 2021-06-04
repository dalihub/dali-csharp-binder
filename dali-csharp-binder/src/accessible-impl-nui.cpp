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
#include "control-devel_wrap.h"

#include <dali/devel-api/adaptor-framework/accessibility.h>
#include <dali/devel-api/adaptor-framework/accessibility-impl.h>
#include <stdexcept>

using namespace Dali::Toolkit::DevelControl;

namespace {

// Keep this structure layout binary compatible with the respective C# structure!
struct AccessibilityDelegate
{
    char *(*getName)(); // 1
    char *(*getDescription)(); // 2
    bool (*doAction)(const char *); // 3
    Dali::Accessibility::States *(*calculateStates)(); // 4
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
    int (*getCaretOffset)(); // 16
    bool (*setCaretOffset)(int); // 17
    Dali::Accessibility::Range *(*getTextAtOffset)(int, int); // 18
    Dali::Accessibility::Range *(*getSelection)(int); // 19
    bool (*removeSelection)(int); // 20
    bool (*setSelection)(int, int, int); // 21
    bool (*copyText)(int, int); // 22
    bool (*cutText)(int, int); // 23
    bool (*insertText)(int, const char *); // 24
    bool (*setTextContents)(const char *); // 25
    bool (*deleteText)(int, int); // 26
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

struct AccessibleImpl_NUI : public AccessibleImpl
{
    // Points to memory managed from the C# side
    const AccessibilityDelegate *v;

    AccessibleImpl_NUI() = delete;
    AccessibleImpl_NUI(const AccessibleImpl_NUI &) = delete;
    AccessibleImpl_NUI(AccessibleImpl_NUI &&) = delete;

    AccessibleImpl_NUI& operator=(const AccessibleImpl_NUI &) = delete;
    AccessibleImpl_NUI& operator=(AccessibleImpl_NUI &&) = delete;

    AccessibleImpl_NUI(Dali::Actor actor, Dali::Accessibility::Role role, const AccessibilityDelegate *vtable)
    : AccessibleImpl(actor, role, false), v{vtable} {}

    std::string GetNameRaw() override
    {
        std::string ret{};

        if (v->getName)
        {
            ret = stealString(v->getName());
        }

        return ret;
    }

    std::string GetDescriptionRaw() override
    {
        std::string ret{};

        if (v->getDescription)
        {
            ret = stealString(v->getDescription());
        }

        return ret;
    }

    bool GrabHighlight() override
    {
        bool ret = AccessibleImpl::GrabHighlight();

        if (ret)
        {
            // Note: Currently (2021-03-26), size negotiation between the default highlight frame
            // and NUI Components is known to be broken (and possibly in other cases, too). Please
            // remove this override for GrabHighlight() when it is fixed.
            auto size = Self().GetProperty<Dali::Vector2>(Dali::Actor::Property::SIZE);
            currentHighlightActor.GetHandle().SetProperty(Dali::Actor::Property::SIZE, size);
        }

        return ret;
    }

    std::string GetActionName(std::size_t index) override
    {
        std::string ret{};

        if (v->getActionName)
        {
            ret = stealString(v->getActionName(static_cast<int>(index)));
        }

        return ret;
    }

    std::size_t GetActionCount() override
    {
        std::size_t ret{0};

        if (v->getActionCount)
        {
            ret = static_cast<std::size_t>(v->getActionCount());
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

        if (v->doAction)
        {
            ret = v->doAction(name.data());
        }

        return ret;
    }

    Dali::Accessibility::States CalculateStates() override
    {
        Dali::Accessibility::States ret{};

        if (v->calculateStates)
        {
            ret = stealObject(v->calculateStates());
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

    virtual bool ShouldReportZeroChildren()
    {
        bool ret{false};

        if (v->shouldReportZeroChildren)
        {
            ret = v->shouldReportZeroChildren();
        }

        return ret;
    }

    std::size_t GetChildCount() override
    {
        bool highlighted = (Self() == Dali::Accessibility::Accessible::GetCurrentlyHighlightedActor());

        if (ShouldReportZeroChildren())
        {
            std::size_t ret = 0;

            // We still allow the highlight frame to be reported as a child of this actor
            // even though its ShouldReportZeroChildren() method returned true.
            ret += static_cast<std::size_t>(highlighted);

            return ret;
        }
        else
        {
            return AccessibleImpl::GetChildCount();
        }
    }

    Dali::Accessibility::Accessible *GetChildAtIndex(std::size_t index) override
    {
        bool highlighted = (Self() == Dali::Accessibility::Accessible::GetCurrentlyHighlightedActor());

        if (ShouldReportZeroChildren())
        {
            if (highlighted && index == 0)
            {
                return Dali::Accessibility::Accessible::Get(currentHighlightActor.GetHandle());
            }
            else
            {
                // We should not end up here. When ShouldReportZeroChildren() returns true,
                // there are two possible cases:
                // (1) The actor is not highlighted, so GetChildCount() returns zero, and so
                // GetChildAtIndex() is not called.
                // (2) The actor is highlighted, so GetChildCount() returns one. The only valid
                // argument for GetChildAtIndex() is zero.
                throw std::domain_error{"Invalid index"};
            }
        }
        else
        {
            return AccessibleImpl::GetChildAtIndex(index);
        }
    }

    bool IsScrollable() override
    {
        bool ret{false};

        if (v->isScrollable)
        {
            ret = v->isScrollable();
        }

        return ret;
    }

#if 0
    void EnsureChildVisible(Dali::Actor child) override;
    void EnsureSelfVisible() override;
#endif
};

struct AccessibleImpl_NUI_Value : public AccessibleImpl_NUI,
                                  public virtual Dali::Accessibility::Value
{
    using AccessibleImpl_NUI::AccessibleImpl_NUI;

    double GetMinimum() override
    {
        double ret{0.0};

        if (v->getMinimum)
        {
            ret = v->getMinimum();
        }

        return ret;
    }

    double GetCurrent() override
    {
        double ret{0.0};

        if (v->getCurrent)
        {
            ret = v->getCurrent();
        }

        return ret;
    }

    double GetMaximum() override
    {
        double ret{0.0};

        if (v->getMaximum)
        {
            ret = v->getMaximum();
        }

        return ret;
    }

    bool SetCurrent(double val) override
    {
        bool ret{false};

        if (v->setCurrent)
        {
            ret = v->setCurrent(val);
        }

        return ret;
    }

    double GetMinimumIncrement() override
    {
        double ret{0.0};

        if (v->getMinimumIncrement)
        {
            ret = v->getMinimumIncrement();
        }

        return ret;
    }
};

struct AccessibleImpl_NUI_EditableText : public AccessibleImpl_NUI,
                                         public virtual Dali::Accessibility::Text,
                                         public virtual Dali::Accessibility::EditableText
{
    using AccessibleImpl_NUI::AccessibleImpl_NUI;

    std::string GetText(std::size_t startOffset, std::size_t endOffset) override
    {
        std::string ret{};

        if (v->getText)
        {
            ret = stealString(v->getText(static_cast<int>(startOffset), static_cast<int>(endOffset)));
        }

        return ret;
    }

    std::size_t GetCharacterCount() override
    {
        std::size_t ret{0};

        if (v->getCharacterCount)
        {
            ret = static_cast<std::size_t>(v->getCharacterCount());
        }

        return ret;
    }

    std::size_t GetCaretOffset() override
    {
        std::size_t ret{0};

        if (v->getCaretOffset)
        {
            ret = static_cast<std::size_t>(v->getCaretOffset());
        }

        return ret;
    }

    bool SetCaretOffset(std::size_t offset) override
    {
        bool ret{false};

        if (v->setCaretOffset)
        {
            ret = v->setCaretOffset(static_cast<int>(offset));
        }

        return ret;
    }

    Dali::Accessibility::Range GetTextAtOffset(std::size_t offset, Dali::Accessibility::TextBoundary boundary) override
    {
        Dali::Accessibility::Range ret{};

        if (v->getTextAtOffset)
        {
            ret = stealObject(v->getTextAtOffset(static_cast<int>(offset), static_cast<int>(boundary)));
        }

        return ret;
    }

    Dali::Accessibility::Range GetSelection(std::size_t selectionNum) override
    {
        Dali::Accessibility::Range ret{};

        if (v->getSelection)
        {
            ret = stealObject(v->getSelection(static_cast<int>(selectionNum)));
        }

        return ret;
    }

    bool RemoveSelection(std::size_t selectionNum) override
    {
        bool ret{false};

        if (v->removeSelection)
        {
            ret = v->removeSelection(static_cast<int>(selectionNum));
        }

        return ret;
    }

    bool SetSelection(std::size_t selectionNum, std::size_t startOffset, std::size_t endOffset) override
    {
        bool ret{false};

        if (v->setSelection)
        {
            ret = v->setSelection(static_cast<int>(selectionNum), static_cast<int>(startOffset), static_cast<int>(endOffset));
        }

        return ret;
    }

    bool CopyText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (v->copyText)
        {
            ret = v->copyText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool CutText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (v->cutText)
        {
            ret = v->cutText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }

    bool InsertText(std::size_t startPosition, std::string text) override
    {
        if (v->insertText)
        {
            return v->insertText(static_cast<int>(startPosition), text.c_str());
        }

        return false;
    }

    bool SetTextContents(std::string newContents) override
    {
        if (v->setTextContents)
        {
            return v->setTextContents(newContents.c_str());
        }

        return false;
    }

    bool DeleteText(std::size_t startPosition, std::size_t endPosition) override
    {
        bool ret{false};

        if (v->deleteText)
        {
            ret = v->deleteText(static_cast<int>(startPosition), static_cast<int>(endPosition));
        }

        return ret;
    }
};

enum {
    IFACE_NONE = 0,
    IFACE_VALUE = 1,
    IFACE_EDITABLE_TEXT = 2,
};

} // anonymous namespace

extern "C" {

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityConstructor_NUI
    (void *arg1_self, int arg2_role, int arg3_iface, const void *arg4_vtable, int arg5_vtableSize)
{
    GUARD_ON_NULL_RET(arg1_self);
    GUARD_ON_NULL_RET(arg4_vtable);
    try_catch([&]()
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
                accessible = new AccessibleImpl_NUI(actor, role, vtable);
                break;
            case IFACE_VALUE:
                accessible = new AccessibleImpl_NUI_Value(actor, role, vtable);
                break;
            case IFACE_EDITABLE_TEXT:
                accessible = new AccessibleImpl_NUI_EditableText(actor, role, vtable);
                break;
            }

            return std::unique_ptr<Dali::Accessibility::Accessible>(accessible);
        });
    });
}

SWIGEXPORT char *SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibleImpl_NUI_DuplicateString(const char *arg)
{
    return strdup(arg);
}

} // extern "C"
