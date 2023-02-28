// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPGlobalProperties
  class IPGlobalProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::IPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPGlobalProperties*, "System.Net.NetworkInformation", "IPGlobalProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.IPGlobalProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class IPGlobalProperties : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Boolean <PlatformNeedsLibCWorkaround>k__BackingField
    static bool _get_$PlatformNeedsLibCWorkaround$k__BackingField();
    // Set static field: static private readonly System.Boolean <PlatformNeedsLibCWorkaround>k__BackingField
    static void _set_$PlatformNeedsLibCWorkaround$k__BackingField(bool value);
    // static private System.Boolean get_PlatformNeedsLibCWorkaround()
    // Offset: 0x1B05C48
    static bool get_PlatformNeedsLibCWorkaround();
    // public System.String get_DomainName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_DomainName();
    // protected System.Void .ctor()
    // Offset: 0x1B05440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::IPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPGlobalProperties*, creationType>()));
    }
    // static public System.Net.NetworkInformation.IPGlobalProperties GetIPGlobalProperties()
    // Offset: 0x1B05C98
    static ::System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties();
    // static System.Net.NetworkInformation.IPGlobalProperties InternalGetIPGlobalProperties()
    // Offset: 0x1B05D30
    static ::System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties();
  }; // System.Net.NetworkInformation.IPGlobalProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPGlobalProperties::get_PlatformNeedsLibCWorkaround
// Il2CppName: get_PlatformNeedsLibCWorkaround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::NetworkInformation::IPGlobalProperties::get_PlatformNeedsLibCWorkaround)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPGlobalProperties*), "get_PlatformNeedsLibCWorkaround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::IPGlobalProperties::*)()>(&System::Net::NetworkInformation::IPGlobalProperties::get_DomainName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPGlobalProperties::GetIPGlobalProperties
// Il2CppName: GetIPGlobalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties* (*)()>(&System::Net::NetworkInformation::IPGlobalProperties::GetIPGlobalProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPGlobalProperties*), "GetIPGlobalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPGlobalProperties::InternalGetIPGlobalProperties
// Il2CppName: InternalGetIPGlobalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties* (*)()>(&System::Net::NetworkInformation::IPGlobalProperties::InternalGetIPGlobalProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPGlobalProperties*), "InternalGetIPGlobalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
