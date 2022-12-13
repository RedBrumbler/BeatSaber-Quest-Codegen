// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusConnectionManager::ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusConnectionManager::ConnectToServerParams*, "", "OculusConnectionManager/ConnectToServerParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusConnectionManager/ConnectToServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusConnectionManager::ConnectToServerParams : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>*/ {
    public:
    public:
    // public OculusNetworkPlayerModel oculusNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public System.UInt64 serverId
    // Size: 0x8
    // Offset: 0x18
    uint64_t serverId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>
    operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>*>(this);
    }
    // Creating interface conversion operator: i_OculusConnectionManager
    inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>* i_OculusConnectionManager() noexcept {
      return reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::OculusConnectionManager*>*>(this);
    }
    // Get instance field reference: public OculusNetworkPlayerModel oculusNetworkPlayerModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OculusNetworkPlayerModel*& dyn_oculusNetworkPlayerModel();
    // Get instance field reference: public System.UInt64 serverId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_serverId();
    // public System.Void .ctor()
    // Offset: 0x155C588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusConnectionManager::ConnectToServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusConnectionManager::ConnectToServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusConnectionManager::ConnectToServerParams*, creationType>()));
    }
  }; // OculusConnectionManager/ConnectToServerParams
  #pragma pack(pop)
  static check_size<sizeof(OculusConnectionManager::ConnectToServerParams), 24 + sizeof(uint64_t)> __GlobalNamespace_OculusConnectionManager_ConnectToServerParamsSizeCheck;
  static_assert(sizeof(OculusConnectionManager::ConnectToServerParams) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::ConnectToServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
