// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPGlobalProperties
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
  class UnixNoLibCIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
    public:
    // Creating value type constructor for type: UnixNoLibCIPGlobalProperties
    UnixNoLibCIPGlobalProperties() noexcept {}
    // public override System.String get_DomainName()
    // Offset: 0x14918CC
    // Implemented from: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
    // Base method: System.String CommonUnixIPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x148DD10
    // Implemented from: System.Net.NetworkInformation.UnixIPGlobalProperties
    // Base method: System.Void UnixIPGlobalProperties::.ctor()
    // Base method: System.Void CommonUnixIPGlobalProperties::.ctor()
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixNoLibCIPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixNoLibCIPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
  #pragma pack(pop)
  // Writing MetadataGetter for method: UnixNoLibCIPGlobalProperties::get_DomainName
  // Il2CppName: get_DomainName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnixNoLibCIPGlobalProperties::*)()>(&UnixNoLibCIPGlobalProperties::get_DomainName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnixNoLibCIPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: UnixNoLibCIPGlobalProperties::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnixNoLibCIPGlobalProperties::*)()>(&UnixNoLibCIPGlobalProperties::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnixNoLibCIPGlobalProperties*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnixNoLibCIPGlobalProperties::*)()>(&UnixNoLibCIPGlobalProperties::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnixNoLibCIPGlobalProperties*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
