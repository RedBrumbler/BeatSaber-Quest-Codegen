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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IPHostEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPHostEntry*, "System.Net", "IPHostEntry");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IPHostEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class IPHostEntry : public ::Il2CppObject {
    public:
    public:
    // private System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::StringW hostName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] aliases
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> aliases;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Net.IPAddress[] addressList
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Net::IPAddress*> addressList;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::IPAddress*>) == 0x8);
    // System.Boolean isTrustedHost
    // Size: 0x1
    // Offset: 0x28
    bool isTrustedHost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String hostName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hostName();
    // Get instance field reference: private System.String[] aliases
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_aliases();
    // Get instance field reference: private System.Net.IPAddress[] addressList
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::IPAddress*>& dyn_addressList();
    // Get instance field reference: System.Boolean isTrustedHost
    [[deprecated("Use field access instead!")]] bool& dyn_isTrustedHost();
    // public System.String get_HostName()
    // Offset: 0x1AF3BF4
    ::StringW get_HostName();
    // public System.Void set_HostName(System.String value)
    // Offset: 0x1AF3BFC
    void set_HostName(::StringW value);
    // public System.Void set_Aliases(System.String[] value)
    // Offset: 0x1AF3C04
    void set_Aliases(::ArrayW<::StringW> value);
    // public System.Net.IPAddress[] get_AddressList()
    // Offset: 0x1AF3C0C
    ::ArrayW<::System::Net::IPAddress*> get_AddressList();
    // public System.Void set_AddressList(System.Net.IPAddress[] value)
    // Offset: 0x1AF3C14
    void set_AddressList(::ArrayW<::System::Net::IPAddress*> value);
    // public System.Void .ctor()
    // Offset: 0x1AF3C1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPHostEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::IPHostEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPHostEntry*, creationType>()));
    }
  }; // System.Net.IPHostEntry
  #pragma pack(pop)
  static check_size<sizeof(IPHostEntry), 40 + sizeof(bool)> __System_Net_IPHostEntrySizeCheck;
  static_assert(sizeof(IPHostEntry) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_HostName
// Il2CppName: get_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_HostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_HostName
// Il2CppName: set_HostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::StringW)>(&System::Net::IPHostEntry::set_HostName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_HostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_Aliases
// Il2CppName: set_Aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::ArrayW<::StringW>)>(&System::Net::IPHostEntry::set_Aliases)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_Aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::get_AddressList
// Il2CppName: get_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (System::Net::IPHostEntry::*)()>(&System::Net::IPHostEntry::get_AddressList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "get_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::set_AddressList
// Il2CppName: set_AddressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPHostEntry::*)(::ArrayW<::System::Net::IPAddress*>)>(&System::Net::IPHostEntry::set_AddressList)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Net", "IPAddress"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPHostEntry*), "set_AddressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::IPHostEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
