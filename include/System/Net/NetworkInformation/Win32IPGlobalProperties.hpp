// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPGlobalProperties
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.Win32IPGlobalProperties
  class Win32IPGlobalProperties : public System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // public override System.String get_DomainName()
    // Offset: 0x10C8130
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x10C4490
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    static Win32IPGlobalProperties* New_ctor();
  }; // System.Net.NetworkInformation.Win32IPGlobalProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32IPGlobalProperties*, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
#pragma pack(pop)