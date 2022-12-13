// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkCredential
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkCredential : public ::Il2CppObject/*, public ::System::Net::ICredentials*/ {
    public:
    public:
    // private System.String m_domain
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_domain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_userName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.SecureString m_password
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::SecureString* m_password;
    // Field size check
    static_assert(sizeof(::System::Security::SecureString*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Net::ICredentials
    operator ::System::Net::ICredentials() noexcept {
      return *reinterpret_cast<::System::Net::ICredentials*>(this);
    }
    // Creating interface conversion operator: i_ICredentials
    inline ::System::Net::ICredentials* i_ICredentials() noexcept {
      return reinterpret_cast<::System::Net::ICredentials*>(this);
    }
    // Get instance field reference: private System.String m_domain
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_domain();
    // Get instance field reference: private System.String m_userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_userName();
    // Get instance field reference: private System.Security.SecureString m_password
    [[deprecated("Use field access instead!")]] ::System::Security::SecureString*& dyn_m_password();
    // public System.String get_UserName()
    // Offset: 0x1AF712C
    ::StringW get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x1AF7020
    void set_UserName(::StringW value);
    // public System.String get_Password()
    // Offset: 0x1AF7134
    ::StringW get_Password();
    // public System.Void set_Password(System.String value)
    // Offset: 0x1AF7090
    void set_Password(::StringW value);
    // public System.String get_Domain()
    // Offset: 0x1AF714C
    ::StringW get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x1AF70BC
    void set_Domain(::StringW value);
    // public System.Void .ctor(System.String userName, System.String password)
    // Offset: 0x1AF6ED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::StringW userName, ::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password)));
    }
    // public System.Void .ctor(System.String userName, System.String password, System.String domain)
    // Offset: 0x1AF6F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::StringW userName, ::StringW password, ::StringW domain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password, domain)));
    }
    // System.String InternalGetUserName()
    // Offset: 0x1AF7154
    ::StringW InternalGetUserName();
    // System.String InternalGetPassword()
    // Offset: 0x1AF7140
    ::StringW InternalGetPassword();
    // System.String InternalGetDomain()
    // Offset: 0x1AF715C
    ::StringW InternalGetDomain();
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0x1AF7164
    ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);
  }; // System.Net.NetworkCredential
  #pragma pack(pop)
  static check_size<sizeof(NetworkCredential), 32 + sizeof(::System::Security::SecureString*)> __System_Net_NetworkCredentialSizeCheck;
  static_assert(sizeof(NetworkCredential) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_UserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_UserName
// Il2CppName: set_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::StringW)>(&System::Net::NetworkCredential::set_UserName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_Password)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::StringW)>(&System::Net::NetworkCredential::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_Domain
// Il2CppName: get_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_Domain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::StringW)>(&System::Net::NetworkCredential::set_Domain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkCredential::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetUserName
// Il2CppName: InternalGetUserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetUserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetUserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetPassword
// Il2CppName: InternalGetPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetDomain
// Il2CppName: InternalGetDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetDomain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (System::Net::NetworkCredential::*)(::System::Uri*, ::StringW)>(&System::Net::NetworkCredential::GetCredential)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, authType});
  }
};
