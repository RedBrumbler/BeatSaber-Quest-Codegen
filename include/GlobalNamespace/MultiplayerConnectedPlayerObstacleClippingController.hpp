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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerObstacleClippingController
  class MultiplayerConnectedPlayerObstacleClippingController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, "", "MultiplayerConnectedPlayerObstacleClippingController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerObstacleClippingController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerObstacleClippingController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*> materialPropertyBlockControllers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1122C78
    // Get static field: static private readonly System.Int32 _clippingPlanePositionID
    static int _get__clippingPlanePositionID();
    // Set static field: static private readonly System.Int32 _clippingPlanePositionID
    static void _set__clippingPlanePositionID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1122C88
    // Get static field: static private readonly System.Int32 _clippingPlaneNormalID
    static int _get__clippingPlaneNormalID();
    // Set static field: static private readonly System.Int32 _clippingPlaneNormalID
    static void _set__clippingPlaneNormalID(int value);
    // Get instance field reference: private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*>& dyn__materialPropertyBlockControllers();
    // public System.Void .ctor()
    // Offset: 0x146B5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerObstacleClippingController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerObstacleClippingController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x146B5D0
    static void _cctor();
    // public System.Void SetClippingParams(UnityEngine.Vector3 position, UnityEngine.Vector3 normal)
    // Offset: 0x146B41C
    void SetClippingParams(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal);
  }; // MultiplayerConnectedPlayerObstacleClippingController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerObstacleClippingController), 24 + sizeof(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*>)> __GlobalNamespace_MultiplayerConnectedPlayerObstacleClippingControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerObstacleClippingController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams
// Il2CppName: SetClippingParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*), "SetClippingParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, normal});
  }
};
