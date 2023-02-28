// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightRotationEventEffect
  class LightRotationEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationEventEffect*, "", "LightRotationEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LightRotationEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightRotationEventEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BasicBeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private UnityEngine.Vector3 _rotationVector
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 rotationVector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _rotationSpeedMultiplier
    // Size: 0x4
    // Offset: 0x28
    float rotationSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rotationSpeedMultiplier and: beatmapCallbacksController
    char __padding2[0x4] = {};
    // [InjectAttribute] Offset: 0x1124EEC
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x1124EFC
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion _startRotation
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single _rotationSpeed
    // Size: 0x4
    // Offset: 0x58
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rotationSpeed and: beatmapDataCallbackWrapper
    char __padding7[0x4] = {};
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 20;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // Get instance field reference: private BasicBeatmapEventType _event
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__event();
    // Get instance field reference: private UnityEngine.Vector3 _rotationVector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rotationVector();
    // Get instance field reference: private System.Single _rotationSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__rotationSpeedMultiplier();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Quaternion _startRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__startRotation();
    // Get instance field reference: private System.Single _rotationSpeed
    [[deprecated("Use field access instead!")]] float& dyn__rotationSpeed();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x1556054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationEventEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1555CBC
    void Start();
    // protected System.Void Update()
    // Offset: 0x1555E04
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x1555F04
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x1555F20
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
  }; // LightRotationEventEffect
  #pragma pack(pop)
  static check_size<sizeof(LightRotationEventEffect), 96 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_LightRotationEventEffectSizeCheck;
  static_assert(sizeof(LightRotationEventEffect) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightRotationEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightRotationEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationEventEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationEventEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::LightRotationEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
