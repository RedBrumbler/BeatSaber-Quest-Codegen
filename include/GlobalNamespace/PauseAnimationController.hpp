// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PauseAnimationController
  class PauseAnimationController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PauseAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseAnimationController*, "", "PauseAnimationController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PauseAnimationController
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseAnimationController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private System.Action resumeFromPauseAnimationDidFinishEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* resumeFromPauseAnimationDidFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private System.Action resumeFromPauseAnimationDidFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_resumeFromPauseAnimationDidFinishEvent();
    // public System.Void add_resumeFromPauseAnimationDidFinishEvent(System.Action value)
    // Offset: 0x138DE10
    void add_resumeFromPauseAnimationDidFinishEvent(::System::Action* value);
    // public System.Void remove_resumeFromPauseAnimationDidFinishEvent(System.Action value)
    // Offset: 0x138DEB4
    void remove_resumeFromPauseAnimationDidFinishEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x138E128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PauseAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseAnimationController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x138DF58
    void Awake();
    // public System.Void StartEnterPauseAnimation()
    // Offset: 0x138DF94
    void StartEnterPauseAnimation();
    // public System.Void StartResumeFromPauseAnimation()
    // Offset: 0x138E014
    void StartResumeFromPauseAnimation();
    // public System.Void EnterPauseAnimationDidFinish()
    // Offset: 0x138E094
    void EnterPauseAnimationDidFinish();
    // public System.Void ResumeFromPauseAnimationDidFinish()
    // Offset: 0x138E0D0
    void ResumeFromPauseAnimationDidFinish();
  }; // PauseAnimationController
  #pragma pack(pop)
  static check_size<sizeof(PauseAnimationController), 32 + sizeof(::System::Action*)> __GlobalNamespace_PauseAnimationControllerSizeCheck;
  static_assert(sizeof(PauseAnimationController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::add_resumeFromPauseAnimationDidFinishEvent
// Il2CppName: add_resumeFromPauseAnimationDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)(::System::Action*)>(&GlobalNamespace::PauseAnimationController::add_resumeFromPauseAnimationDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "add_resumeFromPauseAnimationDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::remove_resumeFromPauseAnimationDidFinishEvent
// Il2CppName: remove_resumeFromPauseAnimationDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)(::System::Action*)>(&GlobalNamespace::PauseAnimationController::remove_resumeFromPauseAnimationDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "remove_resumeFromPauseAnimationDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)()>(&GlobalNamespace::PauseAnimationController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::StartEnterPauseAnimation
// Il2CppName: StartEnterPauseAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)()>(&GlobalNamespace::PauseAnimationController::StartEnterPauseAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "StartEnterPauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::StartResumeFromPauseAnimation
// Il2CppName: StartResumeFromPauseAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)()>(&GlobalNamespace::PauseAnimationController::StartResumeFromPauseAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "StartResumeFromPauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::EnterPauseAnimationDidFinish
// Il2CppName: EnterPauseAnimationDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)()>(&GlobalNamespace::PauseAnimationController::EnterPauseAnimationDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "EnterPauseAnimationDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseAnimationController::ResumeFromPauseAnimationDidFinish
// Il2CppName: ResumeFromPauseAnimationDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseAnimationController::*)()>(&GlobalNamespace::PauseAnimationController::ResumeFromPauseAnimationDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseAnimationController*), "ResumeFromPauseAnimationDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
