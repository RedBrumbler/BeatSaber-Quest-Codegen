// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SpawnRotationChevron
#include "GlobalNamespace/SpawnRotationChevron.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: SpawnRotationBeatmapEventData
  class SpawnRotationBeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevronManager
  class SpawnRotationChevronManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager*, "", "SpawnRotationChevronManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationChevronManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SpawnRotationChevronManager::DirectionData
    class DirectionData;
    public:
    // private System.Single _fadeInTime
    // Size: 0x4
    // Offset: 0x18
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutTime
    // Size: 0x4
    // Offset: 0x1C
    float fadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpStartOffsetTime
    // Size: 0x4
    // Offset: 0x20
    float jumpStartOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cutOffsetTime
    // Size: 0x4
    // Offset: 0x24
    float cutOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _fadeInLightAmountCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* fadeInLightAmountCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeOutLightAmountCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* fadeOutLightAmountCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [InjectAttribute] Offset: 0x1125BC4
    // private readonly SpawnRotationChevron/Pool _chevronPool
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SpawnRotationChevron::Pool* chevronPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SpawnRotationChevron::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x1125BD4
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x1125BE4
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0x1125BF4
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _spawnRotationDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeatmapDataCallbackWrapper* spawnRotationDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapObjectDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapObjectDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,SpawnRotationChevronManager/DirectionData> _directionToDataDictionary
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>* directionToDataDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> _activeDirections
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::HashSet_1<int>* activeDirections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> _reusableDirectionsList
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<int>* reusableDirectionsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x80
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _halfJumpDuration
    // Size: 0x4
    // Offset: 0x84
    float halfJumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _currentSpawnRotation
    // Size: 0x4
    // Offset: 0x88
    float currentSpawnRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _fadeInTime
    [[deprecated("Use field access instead!")]] float& dyn__fadeInTime();
    // Get instance field reference: private System.Single _fadeOutTime
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutTime();
    // Get instance field reference: private System.Single _jumpStartOffsetTime
    [[deprecated("Use field access instead!")]] float& dyn__jumpStartOffsetTime();
    // Get instance field reference: private System.Single _cutOffsetTime
    [[deprecated("Use field access instead!")]] float& dyn__cutOffsetTime();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeInLightAmountCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__fadeInLightAmountCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeOutLightAmountCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__fadeOutLightAmountCurve();
    // Get instance field reference: private readonly SpawnRotationChevron/Pool _chevronPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SpawnRotationChevron::Pool*& dyn__chevronPool();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _spawnRotationDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__spawnRotationDataCallbackWrapper();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapObjectDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapObjectDataCallbackWrapper();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,SpawnRotationChevronManager/DirectionData> _directionToDataDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>*& dyn__directionToDataDictionary();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> _activeDirections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<int>*& dyn__activeDirections();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> _reusableDirectionsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn__reusableDirectionsList();
    // Get instance field reference: private System.Single _moveDuration
    [[deprecated("Use field access instead!")]] float& dyn__moveDuration();
    // Get instance field reference: private System.Single _halfJumpDuration
    [[deprecated("Use field access instead!")]] float& dyn__halfJumpDuration();
    // Get instance field reference: private System.Single _currentSpawnRotation
    [[deprecated("Use field access instead!")]] float& dyn__currentSpawnRotation();
    // public System.Void .ctor()
    // Offset: 0x1422A88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationChevronManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnRotationChevronManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationChevronManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1421A28
    void Start();
    // protected System.Void Update()
    // Offset: 0x1421C60
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x1422640
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallback(BeatmapObjectData beatmapObjectData)
    // Offset: 0x142273C
    void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // private System.Void HandleSpawnRotationBeatmapEvent(SpawnRotationBeatmapEventData beatmapEventData)
    // Offset: 0x1422A04
    void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);
    // private System.Void HandleBeatmapObjectSpawnControllerDidInit()
    // Offset: 0x1421B48
    void HandleBeatmapObjectSpawnControllerDidInit();
    // private System.Single ComputeAheadTime()
    // Offset: 0x1422A20
    float ComputeAheadTime();
  }; // SpawnRotationChevronManager
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationChevronManager), 136 + sizeof(float)> __GlobalNamespace_SpawnRotationChevronManagerSizeCheck;
  static_assert(sizeof(SpawnRotationChevronManager) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback
// Il2CppName: HandleBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent
// Il2CppName: HandleSpawnRotationBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::SpawnRotationBeatmapEventData*)>(&GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "SpawnRotationBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleSpawnRotationBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit
// Il2CppName: HandleBeatmapObjectSpawnControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleBeatmapObjectSpawnControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime
// Il2CppName: ComputeAheadTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "ComputeAheadTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
