// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObstacleControllerBase
#include "GlobalNamespace/ObstacleControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StretchableObstacle
  class StretchableObstacle;
  // Forward declaring type: ObstacleController
  class ObstacleController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MirroredObstacleController
  class MirroredObstacleController : public GlobalNamespace::ObstacleControllerBase {
    public:
    // Nested type: GlobalNamespace::MirroredObstacleController::Pool
    class Pool;
    // private StretchableObstacle _stretchableObstacle
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StretchableObstacle* stretchableObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StretchableObstacle*) == 0x8);
    // private ObstacleController _followedObstacle
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ObstacleController* followedObstacle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _followedTransform
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* followedTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: MirroredObstacleController
    MirroredObstacleController(GlobalNamespace::StretchableObstacle* stretchableObstacle_ = {}, GlobalNamespace::ObstacleController* followedObstacle_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Transform* followedTransform_ = {}) noexcept : stretchableObstacle{stretchableObstacle_}, followedObstacle{followedObstacle_}, transform{transform_}, followedTransform{followedTransform_} {}
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x1091C58
    void set_hide(bool value);
    // protected System.Void Awake()
    // Offset: 0x109232C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1092354
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x109242C
    void Update();
    // private System.Void RemoveListeners()
    // Offset: 0x1092358
    void RemoveListeners();
    // private System.Void UpdatePositionAndRotation()
    // Offset: 0x1092430
    void UpdatePositionAndRotation();
    // public System.Void Mirror(ObstacleController obstacleController)
    // Offset: 0x10917F8
    void Mirror(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleDidStartDissolving(ObstacleControllerBase obstacleController, System.Single duration)
    // Offset: 0x1092558
    void HandleDidStartDissolving(GlobalNamespace::ObstacleControllerBase* obstacleController, float duration);
    // public System.Void .ctor()
    // Offset: 0x1092564
    // Implemented from: ObstacleControllerBase
    // Base method: System.Void ObstacleControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredObstacleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredObstacleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredObstacleController*, creationType>()));
    }
  }; // MirroredObstacleController
  #pragma pack(pop)
  static check_size<sizeof(MirroredObstacleController), 64 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_MirroredObstacleControllerSizeCheck;
  static_assert(sizeof(MirroredObstacleController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredObstacleController*, "", "MirroredObstacleController");
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::set_hide
// Il2CppName: set_hide
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::RemoveListeners
// Il2CppName: RemoveListeners
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::UpdatePositionAndRotation
// Il2CppName: UpdatePositionAndRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Mirror
// Il2CppName: Mirror
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::HandleDidStartDissolving
// Il2CppName: HandleDidStartDissolving
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!