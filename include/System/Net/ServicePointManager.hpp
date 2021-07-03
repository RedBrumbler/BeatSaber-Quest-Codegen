// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SecurityProtocolType
#include "System/Net/SecurityProtocolType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICertificatePolicy
  class ICertificatePolicy;
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: HybridDictionary
  class HybridDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePointManager
  class ServicePointManager : public ::Il2CppObject {
    public:
    // Nested type: System::Net::ServicePointManager::SPKey
    class SPKey;
    // Creating value type constructor for type: ServicePointManager
    ServicePointManager() noexcept {}
    // Get static field: static private System.Collections.Specialized.HybridDictionary servicePoints
    static System::Collections::Specialized::HybridDictionary* _get_servicePoints();
    // Set static field: static private System.Collections.Specialized.HybridDictionary servicePoints
    static void _set_servicePoints(System::Collections::Specialized::HybridDictionary* value);
    // Get static field: static private System.Net.ICertificatePolicy policy
    static System::Net::ICertificatePolicy* _get_policy();
    // Set static field: static private System.Net.ICertificatePolicy policy
    static void _set_policy(System::Net::ICertificatePolicy* value);
    // Get static field: static private System.Int32 defaultConnectionLimit
    static int _get_defaultConnectionLimit();
    // Set static field: static private System.Int32 defaultConnectionLimit
    static void _set_defaultConnectionLimit(int value);
    // Get static field: static private System.Int32 maxServicePointIdleTime
    static int _get_maxServicePointIdleTime();
    // Set static field: static private System.Int32 maxServicePointIdleTime
    static void _set_maxServicePointIdleTime(int value);
    // Get static field: static private System.Int32 maxServicePoints
    static int _get_maxServicePoints();
    // Set static field: static private System.Int32 maxServicePoints
    static void _set_maxServicePoints(int value);
    // Get static field: static private System.Int32 dnsRefreshTimeout
    static int _get_dnsRefreshTimeout();
    // Set static field: static private System.Int32 dnsRefreshTimeout
    static void _set_dnsRefreshTimeout(int value);
    // Get static field: static private System.Boolean _checkCRL
    static bool _get__checkCRL();
    // Set static field: static private System.Boolean _checkCRL
    static void _set__checkCRL(bool value);
    // Get static field: static private System.Net.SecurityProtocolType _securityProtocol
    static System::Net::SecurityProtocolType _get__securityProtocol();
    // Set static field: static private System.Net.SecurityProtocolType _securityProtocol
    static void _set__securityProtocol(System::Net::SecurityProtocolType value);
    // Get static field: static private System.Boolean expectContinue
    static bool _get_expectContinue();
    // Set static field: static private System.Boolean expectContinue
    static void _set_expectContinue(bool value);
    // Get static field: static private System.Boolean useNagle
    static bool _get_useNagle();
    // Set static field: static private System.Boolean useNagle
    static void _set_useNagle(bool value);
    // Get static field: static private System.Net.ServerCertValidationCallback server_cert_cb
    static System::Net::ServerCertValidationCallback* _get_server_cert_cb();
    // Set static field: static private System.Net.ServerCertValidationCallback server_cert_cb
    static void _set_server_cert_cb(System::Net::ServerCertValidationCallback* value);
    // Get static field: static private System.Boolean tcp_keepalive
    static bool _get_tcp_keepalive();
    // Set static field: static private System.Boolean tcp_keepalive
    static void _set_tcp_keepalive(bool value);
    // Get static field: static private System.Int32 tcp_keepalive_time
    static int _get_tcp_keepalive_time();
    // Set static field: static private System.Int32 tcp_keepalive_time
    static void _set_tcp_keepalive_time(int value);
    // Get static field: static private System.Int32 tcp_keepalive_interval
    static int _get_tcp_keepalive_interval();
    // Set static field: static private System.Int32 tcp_keepalive_interval
    static void _set_tcp_keepalive_interval(int value);
    // static private System.Void .cctor()
    // Offset: 0x14982E8
    static void _cctor();
    // static System.Net.ICertificatePolicy GetLegacyCertificatePolicy()
    // Offset: 0x14983AC
    static System::Net::ICertificatePolicy* GetLegacyCertificatePolicy();
    // static public System.Boolean get_CheckCertificateRevocationList()
    // Offset: 0x1498414
    static bool get_CheckCertificateRevocationList();
    // static public System.Int32 get_DnsRefreshTimeout()
    // Offset: 0x149847C
    static int get_DnsRefreshTimeout();
    // static public System.Net.SecurityProtocolType get_SecurityProtocol()
    // Offset: 0x14984E4
    static System::Net::SecurityProtocolType get_SecurityProtocol();
    // static System.Net.ServerCertValidationCallback get_ServerCertValidationCallback()
    // Offset: 0x149854C
    static System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();
    // static public System.Net.ServicePoint FindServicePoint(System.Uri address, System.Net.IWebProxy proxy)
    // Offset: 0x14985B4
    static System::Net::ServicePoint* FindServicePoint(System::Uri* address, System::Net::IWebProxy* proxy);
    // static System.Void CloseConnectionGroup(System.String connectionGroupName)
    // Offset: 0x1498C08
    static void CloseConnectionGroup(::Il2CppString* connectionGroupName);
  }; // System.Net.ServicePointManager
  #pragma pack(pop)
  // Writing MetadataGetter for method: ServicePointManager::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ServicePointManager::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::GetLegacyCertificatePolicy
  // Il2CppName: GetLegacyCertificatePolicy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICertificatePolicy* (*)()>(&ServicePointManager::GetLegacyCertificatePolicy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "GetLegacyCertificatePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::get_CheckCertificateRevocationList
  // Il2CppName: get_CheckCertificateRevocationList
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ServicePointManager::get_CheckCertificateRevocationList)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "get_CheckCertificateRevocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::get_DnsRefreshTimeout
  // Il2CppName: get_DnsRefreshTimeout
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&ServicePointManager::get_DnsRefreshTimeout)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "get_DnsRefreshTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::get_SecurityProtocol
  // Il2CppName: get_SecurityProtocol
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SecurityProtocolType (*)()>(&ServicePointManager::get_SecurityProtocol)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "get_SecurityProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::get_ServerCertValidationCallback
  // Il2CppName: get_ServerCertValidationCallback
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServerCertValidationCallback* (*)()>(&ServicePointManager::get_ServerCertValidationCallback)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "get_ServerCertValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::FindServicePoint
  // Il2CppName: FindServicePoint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint* (*)(System::Uri*, System::Net::IWebProxy*)>(&ServicePointManager::FindServicePoint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "FindServicePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Uri*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IWebProxy*>()});
    }
  };
  // Writing MetadataGetter for method: ServicePointManager::CloseConnectionGroup
  // Il2CppName: CloseConnectionGroup
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&ServicePointManager::CloseConnectionGroup)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ServicePointManager*), "CloseConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePointManager*, "System.Net", "ServicePointManager");
