// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: HMUI.ViewController/HMUI.AnimationDirection
#include "HMUI/ViewController_AnimationDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*, "HMUI", "ViewControllerTransitionHelpers/<DoDismissTransition>d__4");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/HMUI.<DoDismissTransition>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ViewControllerTransitionHelpers::$DoDismissTransition$d__4 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    // Size: 0x4
    // Offset: 0x20
    ::HMUI::ViewController::AnimationDirection animationDirection;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController::AnimationDirection) == 0x4);
    // Padding between fields: animationDirection and: toPresentViewController
    char __padding2[0x4] = {};
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x30
    ::HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public System.Single moveOffsetMultiplier
    // Size: 0x4
    // Offset: 0x38
    float moveOffsetMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.ViewController/HMUI.AnimationDirection animationDirection
    [[deprecated("Use field access instead!")]] ::HMUI::ViewController::AnimationDirection& dyn_animationDirection();
    // Get instance field reference: public HMUI.ViewController toPresentViewController
    [[deprecated("Use field access instead!")]] ::HMUI::ViewController*& dyn_toPresentViewController();
    // Get instance field reference: public HMUI.ViewController toDismissViewController
    [[deprecated("Use field access instead!")]] ::HMUI::ViewController*& dyn_toDismissViewController();
    // Get instance field reference: public System.Single moveOffsetMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_moveOffsetMultiplier();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2AF0AB0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2AF0B18
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2AF0344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$DoDismissTransition$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$DoDismissTransition$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2AF0A0C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2AF0A10
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2AF0AB8
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ViewControllerTransitionHelpers/HMUI.<DoDismissTransition>d__4
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$DoDismissTransition$d__4), 56 + sizeof(float)> __HMUI_ViewControllerTransitionHelpers_$DoDismissTransition$d__4SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$DoDismissTransition$d__4) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::*)()>(&HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
