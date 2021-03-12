/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <vector>

using namespace Dali::Toolkit::DevelControl;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityActivateSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityActivateSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal(void* arg1) {
    Dali::Toolkit::DevelControl::AccessibilityReadingSkippedSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityReadingSkippedSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityReadingPausedSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityReadingPausedSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityReadingResumedSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityReadingResumedSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityReadingCancelledSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityReadingCancelledSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityReadingStoppedSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityReadingStoppedSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityGetNameSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityGetNameSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityGetNameSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityGetDescriptionSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityGetDescriptionSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityGetDescriptionSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityDoGestureSignal(void *arg1) {
    Dali::Toolkit::DevelControl::AccessibilityDoGestureSignalType *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Toolkit::Control* control = (Dali::Toolkit::Control*) arg1;
        result = &(AccessibilityDoGestureSignal(*control));
    });
    return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AppendAccessibilityRelation(void *arg1, void *arg2, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        Dali::Actor *destination = (Dali::Actor*) arg2;
        Dali::Accessibility::RelationType relation = (Dali::Accessibility::RelationType) arg3;
        AppendAccessibilityRelation(*control, *destination, relation);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_RemoveAccessibilityRelation(void *arg1, void *arg2, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        Dali::Actor *destination = (Dali::Actor*) arg2;
        Dali::Accessibility::RelationType relation = (Dali::Accessibility::RelationType) arg3;
        RemoveAccessibilityRelation(*control, *destination, relation);
    });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_GetAccessibilityRelations(void *arg1) {
    std::vector<std::vector<Dali::Accessibility::Address>> *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = new std::vector<std::vector<Dali::Accessibility::Address>>(GetAccessibilityRelations(*control));
    });
    return (void*)result;
}

//SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityRelations_Size(void *arg1) {
//    unsigned int result = 0;
//    GUARD_ON_NULL_RET0(arg1);
//    try_catch([&]() {
//        auto *vect = (std::vector<std::vector<Dali::Accessibility::Address>>*) arg1;
//        result = vect->size();
//    });
//    return result;
//}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityRelations_RelationSize(void *arg1, int rel) {
    unsigned int result = 0;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        auto *vect = (std::vector<std::vector<Dali::Accessibility::Address>>*) arg1;
        if (((unsigned int) rel) >= vect->size())
            result = 0;
        else
            result = vect->at(rel).size();
    });
    return result;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_GetAccessibilityRelations_At(void *arg1, int rel, int pos, int id) {
    GUARD_ON_NULL_RET0(arg1);
    char *result = nullptr;
    try_catch([&]() {
        auto *vect = (std::vector<std::vector<Dali::Accessibility::Address>>*) arg1;
        const auto &r = vect->at(rel);
        const auto &e = r.at(pos);

        if (id == 0)
            result = SWIG_csharp_string_callback(e.GetBus().c_str());

        if (id == 1)
            result = SWIG_csharp_string_callback(e.GetPath().c_str());
    });
    return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_delete_AccessibilityRelations(void *arg1) {
    try_catch([&]() {
        delete static_cast<std::vector<std::vector<Dali::Accessibility::Address>>*>(arg1);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ClearAccessibilityRelations(void *arg1) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        ClearAccessibilityRelations(*control);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AppendAccessibilityAttribute(void *arg1, char *arg2, char *arg3) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    GUARD_ON_NULL_RET(arg3);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        const std::string key(arg2);
        const std::string value(arg3);
        AppendAccessibilityAttribute(*control, key, value);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_RemoveAccessibilityAttribute(void *arg1, char *arg2) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        const std::string key(arg2);
        RemoveAccessibilityAttribute(*control, key);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ClearAccessibilityAttributes(void *arg1) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        ClearAccessibilityAttributes(*control);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityReadingInfoType(void *arg1, void *arg2) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        Dali::Accessibility::ReadingInfoTypes *types = (Dali::Accessibility::ReadingInfoTypes*) arg2;
        SetAccessibilityReadingInfoType(*control, *types);
    });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_ReadingInfoType() {
    Dali::Accessibility::ReadingInfoTypes *result = nullptr;
    try_catch([&]() {
        result = new Dali::Accessibility::ReadingInfoTypes();
    });
    return (void*) result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_GetAccessibilityReadingInfoType(void *arg1) {
    Dali::Accessibility::ReadingInfoTypes *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = new Dali::Accessibility::ReadingInfoTypes(GetAccessibilityReadingInfoType(*control));
    });
    return (void*) result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_delete_ReadingInfoType(void *arg1) {
    try_catch([&]() {
        delete static_cast<Dali::Accessibility::ReadingInfoTypes*>(arg1);
    });
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ReadingInfoType_Get(void *arg1, int arg2) {
    bool result = false;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Accessibility::ReadingInfoTypes *types = (Dali::Accessibility::ReadingInfoTypes*) arg1;
        Dali::Accessibility::ReadingInfoType type = (Dali::Accessibility::ReadingInfoType) arg2;
        result = types->operator[](type);
    });
    return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ReadingInfoType_Set(void *arg1, int arg2, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Accessibility::ReadingInfoTypes *types = (Dali::Accessibility::ReadingInfoTypes*) arg1;
        Dali::Accessibility::ReadingInfoType type = (Dali::Accessibility::ReadingInfoType) arg2;
        types->operator[](type) = (bool)arg3;
    });
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ClearAccessibilityHighlight(void *arg1) {
    bool result = false;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = ClearAccessibilityHighlight(*control);
    });
    return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GrabAccessibilityHighlight(void *arg1) {
    bool result = false;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = GrabAccessibilityHighlight(*control);
    });
    return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_States() {
    Dali::Accessibility::States *result = nullptr;
    try_catch([&]() {
        result = new Dali::Accessibility::States();
    });
    return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_new_GetAccessibilityStates(void *arg1) {
    Dali::Accessibility::States *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = new Dali::Accessibility::States(GetAccessibilityStates(*control));
    });
    return (void*)result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_States_Get(void *arg1, int arg2) {
    bool result = false;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Accessibility::States *states = (Dali::Accessibility::States*) arg1;
        Dali::Accessibility::State state = (Dali::Accessibility::State) arg2;
        result = states->operator[](state);
    });
    return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_States_Set(void *arg1, int arg2, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Accessibility::States *states = (Dali::Accessibility::States*) arg1;
        Dali::Accessibility::State state = (Dali::Accessibility::State) arg2;
        states->operator[](state) = (bool)arg3;
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_delete_States(void *arg1) {
    try_catch([&]() {
        delete static_cast<Dali::Accessibility::States*>(arg1);
    });
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_States_Copy(void *arg1) {
    Dali::Accessibility::States *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
       auto &states = *static_cast<Dali::Accessibility::States *>(arg1);
       result = new Dali::Accessibility::States(states);
    });
    return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_NotifyAccessibilityStateChange(void *arg1, void *arg2, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    GUARD_ON_NULL_RET(arg2);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        Dali::Accessibility::States *states = (Dali::Accessibility::States*) arg2;
        bool doRecursive = arg3 ? true : false;
        NotifyAccessibilityStateChange(*control, *states, doRecursive);
    });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetBoundAccessibilityObject(void *arg1) {
    Dali::Accessibility::Accessible *result = nullptr;
    GUARD_ON_NULL_RET0(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        result = GetBoundAccessibilityObject(*control);
    });
    return (void*)result;
}

/***********************************************
 **************** Accessibility ****************
 ***********************************************/

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitAccessibilityEvent(void *arg1, int arg2_event) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        auto accessible = GetBoundAccessibilityObject(*control);
        if (accessible)
            accessible->Emit((Dali::Accessibility::ObjectPropertyChangeEvent)arg2_event);
        else
            SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitAccessibilityStateChangedEvent(void *arg1, int arg2_state, int arg3) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        auto accessible = GetBoundAccessibilityObject(*control);
        if (accessible)
            accessible->EmitStateChanged((Dali::Accessibility::State)arg2_state, arg3);
        else
            SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextInsertedEvent(void *arg1, int arg2_position, int arg3_length, char *arg4_content) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        auto accessible = GetBoundAccessibilityObject(*control);
        std::string content(arg4_content ? arg4_content : "");
        if (accessible)
            accessible->EmitTextInserted(arg2_position, arg3_length, content);
        else
            SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextDeletedEvent(void *arg1, int arg2_position, int arg3_length, char *arg4_content) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        auto accessible = GetBoundAccessibilityObject(*control);
        std::string content(arg4_content ? arg4_content : "");
        if (accessible)
            accessible->EmitTextDeleted(arg2_position, arg3_length, content);
        else
            SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextCaretMovedEvent(void *arg1, int arg2_position) {
    GUARD_ON_NULL_RET(arg1);
    try_catch([&]() {
        Dali::Actor *control = (Dali::Actor*) arg1;
        auto accessible = GetBoundAccessibilityObject(*control);
        if (accessible)
            accessible->EmitTextCaretMoved(arg2_position);
        else
            SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Accessibility_new_Range(int arg1_start, int arg2_end, char *arg3_content) {
    Dali::Accessibility::Range *result = nullptr;
    try_catch([&]() {
        result = new Dali::Accessibility::Range(arg1_start, arg2_end, arg3_content);
    });
    return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_delete_Range(void *arg1_range) {
    try_catch([&]() {
        delete static_cast<Dali::Accessibility::Range*>(arg1_range);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_Add_Popup(void *arg1_actor) {
    GUARD_ON_NULL_RET(arg1_actor);
    try_catch([&]() {
        Dali::Actor *actor = (Dali::Actor*) arg1_actor;
        auto accessible = Dali::Accessibility::Accessible::Get(*actor);
        auto bridge = Dali::Accessibility::Bridge::GetCurrentBridge();

        if (!accessible) {
            SWIG_CSharpException(SWIG_RuntimeError, "No accessible object bind with actor.");
            return;
        }

        bridge->AddPopup(accessible);
    });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_Remove_Popup(void *arg1_actor) {
    GUARD_ON_NULL_RET(arg1_actor);
    try_catch([&]() {
        Dali::Actor *actor = (Dali::Actor*) arg1_actor;
        auto accessible = Dali::Accessibility::Accessible::Get(*actor);
        auto bridge = Dali::Accessibility::Bridge::GetCurrentBridge();

        if (!accessible) {
            SWIG_CSharpException(SWIG_RuntimeError, "No accessible object bind with actor.");
            return;
        }

        bridge->RemovePopup(accessible);
    });
}

#ifdef __cplusplus
} // extern "C"
#endif
