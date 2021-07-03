// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IBeatmapObjectSpawnController
  class IBeatmapObjectSpawnController;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapObjectAvoidanceYOffsetEvaluator
  class BeatmapObjectAvoidanceYOffsetEvaluator;
  // Forward declaring type: BeatmapObjectAvoidancePathEvaluator
  class BeatmapObjectAvoidancePathEvaluator;
  // Forward declaring type: BeatmapObjectAvoidanceTiltEvaluator
  class BeatmapObjectAvoidanceTiltEvaluator;
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
  // Forward declaring type: OffsetDirection
  struct OffsetDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsAvoidance
  class BeatmapObjectsAvoidance : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE12FFC
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x18
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yOffset
    // Size: 0x4
    // Offset: 0x1C
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE13058
    // private UnityEngine.Vector2 _gravity
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [HeaderAttribute] Offset: 0xE130A4
    // private UnityEngine.Transform _towardsPlayerWrapperTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* towardsPlayerWrapperTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE130F0
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xE13100
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0xE13110
    // private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xE13120
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // private BeatmapObjectAvoidanceYOffsetEvaluator _avoidanceYOffsetEvaluatorProvider
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* avoidanceYOffsetEvaluatorProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*) == 0x8);
    // private BeatmapObjectAvoidancePathEvaluator _pathEvaluator
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* pathEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*) == 0x8);
    // private BeatmapObjectAvoidanceTiltEvaluator _tiltEvaluator
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* tiltEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*) == 0x8);
    // private BezierSplineEvaluator _pathBezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::BezierSplineEvaluator* pathBezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private BezierSplineEvaluator _accelerationBezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BezierSplineEvaluator* accelerationBezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectsAvoidance
    BeatmapObjectsAvoidance(float zOffset_ = {}, float yOffset_ = {}, UnityEngine::Vector2 gravity_ = {}, UnityEngine::Transform* towardsPlayerWrapperTransform_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::IReadonlyBeatmapData* beatmapData_ = {}, GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* avoidanceYOffsetEvaluatorProvider_ = {}, GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* pathEvaluator_ = {}, GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* tiltEvaluator_ = {}, GlobalNamespace::BezierSplineEvaluator* pathBezierSplineEvaluator_ = {}, GlobalNamespace::BezierSplineEvaluator* accelerationBezierSplineEvaluator_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : zOffset{zOffset_}, yOffset{yOffset_}, gravity{gravity_}, towardsPlayerWrapperTransform{towardsPlayerWrapperTransform_}, audioTimeSource{audioTimeSource_}, beatmapData{beatmapData_}, beatmapObjectSpawnController{beatmapObjectSpawnController_}, playerTransforms{playerTransforms_}, avoidanceYOffsetEvaluatorProvider{avoidanceYOffsetEvaluatorProvider_}, pathEvaluator{pathEvaluator_}, tiltEvaluator{tiltEvaluator_}, pathBezierSplineEvaluator{pathBezierSplineEvaluator_}, accelerationBezierSplineEvaluator{accelerationBezierSplineEvaluator_}, transform{transform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x110BE30
    void Awake();
    // protected System.Void Start()
    // Offset: 0x110BE58
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x110C35C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x110C454
    void Update();
    // private System.Void SetupAndRun()
    // Offset: 0x110BFD8
    void SetupAndRun();
    // private System.Boolean BuildAnimationCurvePath()
    // Offset: 0x110C628
    bool BuildAnimationCurvePath();
    // private System.Void AdjustPositionWithOffsetDirection(ref UnityEngine.Vector2 position, System.Int32 lineIndex, OffsetDirection offsetDirection)
    // Offset: 0x110CBF8
    void AdjustPositionWithOffsetDirection(UnityEngine::Vector2& position, int lineIndex, GlobalNamespace::OffsetDirection offsetDirection);
    // private System.Void HandleBeatmapObjectSpawnControllerDidInit()
    // Offset: 0x110D6F8
    void HandleBeatmapObjectSpawnControllerDidInit();
    // public System.Void .ctor()
    // Offset: 0x110D6FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsAvoidance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectsAvoidance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsAvoidance*, creationType>()));
    }
  }; // BeatmapObjectsAvoidance
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsAvoidance), 120 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BeatmapObjectsAvoidanceSizeCheck;
  static_assert(sizeof(BeatmapObjectsAvoidance) == 0x80);
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::Awake
  // Il2CppName: Awake
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::Awake)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::Update
  // Il2CppName: Update
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::Update)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::SetupAndRun
  // Il2CppName: SetupAndRun
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::SetupAndRun)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "SetupAndRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::BuildAnimationCurvePath
  // Il2CppName: BuildAnimationCurvePath
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::BuildAnimationCurvePath)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "BuildAnimationCurvePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection
  // Il2CppName: AdjustPositionWithOffsetDirection
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)(UnityEngine::Vector2&, int, GlobalNamespace::OffsetDirection)>(&BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "AdjustPositionWithOffsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OffsetDirection>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit
  // Il2CppName: HandleBeatmapObjectSpawnControllerDidInit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), "HandleBeatmapObjectSpawnControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapObjectsAvoidance::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectsAvoidance::*)()>(&BeatmapObjectsAvoidance::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectsAvoidance*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsAvoidance*, "", "BeatmapObjectsAvoidance");
