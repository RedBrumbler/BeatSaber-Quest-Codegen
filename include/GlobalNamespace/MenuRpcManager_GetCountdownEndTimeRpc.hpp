// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: MenuRpcManager/GetCountdownEndTimeRpc
  class MenuRpcManager::GetCountdownEndTimeRpc : public GlobalNamespace::RemoteProcedureCall {
    public:
    // Creating value type constructor for type: GetCountdownEndTimeRpc
    GetCountdownEndTimeRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x15011F8
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::GetCountdownEndTimeRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::GetCountdownEndTimeRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::GetCountdownEndTimeRpc*, creationType>()));
    }
  }; // MenuRpcManager/GetCountdownEndTimeRpc
  #pragma pack(pop)
  // Writing MetadataGetter for method: MenuRpcManager::GetCountdownEndTimeRpc::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MenuRpcManager::GetCountdownEndTimeRpc::*)()>(&MenuRpcManager::GetCountdownEndTimeRpc::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MenuRpcManager::GetCountdownEndTimeRpc*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MenuRpcManager::GetCountdownEndTimeRpc::*)()>(&MenuRpcManager::GetCountdownEndTimeRpc::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MenuRpcManager::GetCountdownEndTimeRpc*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::GetCountdownEndTimeRpc*, "", "MenuRpcManager/GetCountdownEndTimeRpc");
