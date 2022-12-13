// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewControllerTransitionHelpers
  class ViewControllerTransitionHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class ViewControllerTransitionHelpers : public ::Il2CppObject {
    public:
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$DoPresentTransition$d__3
    class $DoPresentTransition$d__3;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$DoDismissTransition$d__4
    class $DoDismissTransition$d__4;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$DoHorizontalTransition$d__5
    class $DoHorizontalTransition$d__5;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$DoVerticalTransition$d__6
    class $DoVerticalTransition$d__6;
    // Nested type: ::HMUI::ViewControllerTransitionHelpers::$AnimationCoroutine$d__8
    class $AnimationCoroutine$d__8;
    // static field const value: static private System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 0.4;
    // Get static field: static private System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static private System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // static field const value: static private System.Single kHorizontalTransitionMoveOffset
    static constexpr const float kHorizontalTransitionMoveOffset = 2;
    // Get static field: static private System.Single kHorizontalTransitionMoveOffset
    static float _get_kHorizontalTransitionMoveOffset();
    // Set static field: static private System.Single kHorizontalTransitionMoveOffset
    static void _set_kHorizontalTransitionMoveOffset(float value);
    // static field const value: static private System.Single kVerticalTransitionMoveOffset
    static constexpr const float kVerticalTransitionMoveOffset = 0.5;
    // Get static field: static private System.Single kVerticalTransitionMoveOffset
    static float _get_kVerticalTransitionMoveOffset();
    // Set static field: static private System.Single kVerticalTransitionMoveOffset
    static void _set_kVerticalTransitionMoveOffset(float value);
    // public System.Void .ctor()
    // Offset: 0x2AE5B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ViewControllerTransitionHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers*, creationType>()));
    }
    // static public System.Collections.IEnumerator DoPresentTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/HMUI.AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x2AE5320
    static ::System::Collections::IEnumerator* DoPresentTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController, ::HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static public System.Collections.IEnumerator DoDismissTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, HMUI.ViewController/HMUI.AnimationDirection animationDirection, System.Single moveOffsetMultiplier)
    // Offset: 0x2AE4EFC
    static ::System::Collections::IEnumerator* DoDismissTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController, ::HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoHorizontalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x2AE5904
    static ::System::Collections::IEnumerator* DoHorizontalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static private System.Collections.IEnumerator DoVerticalTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController, System.Single moveOffsetMultiplier)
    // Offset: 0x2AE59BC
    static ::System::Collections::IEnumerator* DoVerticalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier);
    // static public System.Void ImmediateTransition(HMUI.ViewController toPresentViewController, HMUI.ViewController toDismissViewController)
    // Offset: 0x2AE4F90
    static void ImmediateTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController);
    // static private System.Collections.IEnumerator AnimationCoroutine(System.Action`1<System.Single> transitionAnimation)
    // Offset: 0x2AE5A74
    static ::System::Collections::IEnumerator* AnimationCoroutine(::System::Action_1<float>* transitionAnimation);
  }; // HMUI.ViewControllerTransitionHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::DoPresentTransition
// Il2CppName: DoPresentTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController::AnimationDirection, float)>(&HMUI::ViewControllerTransitionHelpers::DoPresentTransition)> {
  static const MethodInfo* get() {
    static auto* toPresentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* toDismissViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationDirection = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationDirection")->byval_arg;
    static auto* moveOffsetMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "DoPresentTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPresentViewController, toDismissViewController, animationDirection, moveOffsetMultiplier});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::DoDismissTransition
// Il2CppName: DoDismissTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController::AnimationDirection, float)>(&HMUI::ViewControllerTransitionHelpers::DoDismissTransition)> {
  static const MethodInfo* get() {
    static auto* toPresentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* toDismissViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationDirection = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationDirection")->byval_arg;
    static auto* moveOffsetMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "DoDismissTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPresentViewController, toDismissViewController, animationDirection, moveOffsetMultiplier});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::DoHorizontalTransition
// Il2CppName: DoHorizontalTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, float)>(&HMUI::ViewControllerTransitionHelpers::DoHorizontalTransition)> {
  static const MethodInfo* get() {
    static auto* toPresentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* toDismissViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* moveOffsetMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "DoHorizontalTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPresentViewController, toDismissViewController, moveOffsetMultiplier});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::DoVerticalTransition
// Il2CppName: DoVerticalTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, float)>(&HMUI::ViewControllerTransitionHelpers::DoVerticalTransition)> {
  static const MethodInfo* get() {
    static auto* toPresentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* toDismissViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* moveOffsetMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "DoVerticalTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPresentViewController, toDismissViewController, moveOffsetMultiplier});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::ImmediateTransition
// Il2CppName: ImmediateTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HMUI::ViewController*, ::HMUI::ViewController*)>(&HMUI::ViewControllerTransitionHelpers::ImmediateTransition)> {
  static const MethodInfo* get() {
    static auto* toPresentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* toDismissViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "ImmediateTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toPresentViewController, toDismissViewController});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::AnimationCoroutine
// Il2CppName: AnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Action_1<float>*)>(&HMUI::ViewControllerTransitionHelpers::AnimationCoroutine)> {
  static const MethodInfo* get() {
    static auto* transitionAnimation = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers*), "AnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionAnimation});
  }
};
