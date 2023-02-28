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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyCenterStageLayoutAnimator
  class MultiplayerLobbyCenterStageLayoutAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*, "", "MultiplayerLobbyCenterStageLayoutAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyCenterStageLayoutAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyCenterStageLayoutAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform _nextLevelTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* nextLevelTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x112DFBC
    // private UnityEngine.RectTransform _nextLevelBasePosition
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* nextLevelBasePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _nextLevelCountdownPosition
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* nextLevelCountdownPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x112E004
    // private System.Single _transitionDuration
    // Size: 0x4
    // Offset: 0x30
    float transitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: transitionDuration and: tweeningManager
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0x112E03C
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x38
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _nextLevelTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__nextLevelTransform();
    // Get instance field reference: private UnityEngine.RectTransform _nextLevelBasePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__nextLevelBasePosition();
    // Get instance field reference: private UnityEngine.RectTransform _nextLevelCountdownPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__nextLevelCountdownPosition();
    // Get instance field reference: private System.Single _transitionDuration
    [[deprecated("Use field access instead!")]] float& dyn__transitionDuration();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // public System.Void .ctor()
    // Offset: 0x13FE9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterStageLayoutAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterStageLayoutAnimator*, creationType>()));
    }
    // public System.Void StartCountdown()
    // Offset: 0x13FE65C
    void StartCountdown();
    // public System.Void StopCountdown(System.Boolean instant)
    // Offset: 0x13FE888
    void StopCountdown(bool instant);
    // private System.Void Move(UnityEngine.Vector3 from, UnityEngine.Vector3 to, System.Single duration)
    // Offset: 0x13FE75C
    void Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float duration);
    // private System.Void <Move>b__7_0(UnityEngine.Vector3 pos)
    // Offset: 0x13FE9B8
    void $Move$b__7_0(::UnityEngine::Vector3 pos);
  }; // MultiplayerLobbyCenterStageLayoutAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterStageLayoutAnimator), 56 + sizeof(::Tweening::TimeTweeningManager*)> __GlobalNamespace_MultiplayerLobbyCenterStageLayoutAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterStageLayoutAnimator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown
// Il2CppName: StartCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "StartCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown
// Il2CppName: StopCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(bool)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "StopCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::$Move$b__7_0
// Il2CppName: <Move>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(::UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::$Move$b__7_0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*), "<Move>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
