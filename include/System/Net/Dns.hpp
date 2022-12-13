// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: Dns
  class Dns;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Dns);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Dns*, "System.Net", "Dns");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Dns
  // [TokenAttribute] Offset: FFFFFFFF
  class Dns : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::Dns::GetHostAddressesCallback
    class GetHostAddressesCallback;
    // static public System.IAsyncResult BeginGetHostAddresses(System.String hostNameOrAddress, System.AsyncCallback requestCallback, System.Object state)
    // Offset: 0x1AAEF38
    static ::System::IAsyncResult* BeginGetHostAddresses(::StringW hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::Il2CppObject* state);
    // static public System.Net.IPAddress[] EndGetHostAddresses(System.IAsyncResult asyncResult)
    // Offset: 0x1AAF0B8
    static ::ArrayW<::System::Net::IPAddress*> EndGetHostAddresses(::System::IAsyncResult* asyncResult);
    // static private System.Boolean GetHostByName_internal(System.String host, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x1AAF1BC
    static bool GetHostByName_internal(::StringW host, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW>> h_aliases, ByRef<::ArrayW<::StringW>> h_addr_list, int hint);
    // static private System.Boolean GetHostByAddr_internal(System.String addr, out System.String h_name, out System.String[] h_aliases, out System.String[] h_addr_list, System.Int32 hint)
    // Offset: 0x1AAF1C0
    static bool GetHostByAddr_internal(::StringW addr, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW>> h_aliases, ByRef<::ArrayW<::StringW>> h_addr_list, int hint);
    // static private System.Boolean GetHostName_internal(out System.String h_name)
    // Offset: 0x1AAF1C4
    static bool GetHostName_internal(ByRef<::StringW> h_name);
    // static private System.Void Error_11001(System.String hostName)
    // Offset: 0x1AAF1C8
    static void Error_11001(::StringW hostName);
    // static private System.Net.IPHostEntry hostent_to_IPHostEntry(System.String originalHostName, System.String h_name, System.String[] h_aliases, System.String[] h_addrlist)
    // Offset: 0x1AAF254
    static ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW> h_aliases, ::ArrayW<::StringW> h_addrlist);
    // static private System.Net.IPHostEntry GetHostByAddressFromString(System.String address, System.Boolean parse)
    // Offset: 0x1AAF540
    static ::System::Net::IPHostEntry* GetHostByAddressFromString(::StringW address, bool parse);
    // static public System.Net.IPHostEntry GetHostEntry(System.String hostNameOrAddress)
    // Offset: 0x1AAF660
    static ::System::Net::IPHostEntry* GetHostEntry(::StringW hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostEntry(System.Net.IPAddress address)
    // Offset: 0x1AAF7B0
    static ::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress* address);
    // static public System.Net.IPAddress[] GetHostAddresses(System.String hostNameOrAddress)
    // Offset: 0x1AAF930
    static ::ArrayW<::System::Net::IPAddress*> GetHostAddresses(::StringW hostNameOrAddress);
    // static public System.Net.IPHostEntry GetHostByName(System.String hostName)
    // Offset: 0x1AAF844
    static ::System::Net::IPHostEntry* GetHostByName(::StringW hostName);
    // static public System.String GetHostName()
    // Offset: 0x1AAFAE4
    static ::StringW GetHostName();
    // static public System.Threading.Tasks.Task`1<System.Net.IPAddress[]> GetHostAddressesAsync(System.String hostNameOrAddress)
    // Offset: 0x1AAFB1C
    static ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* GetHostAddressesAsync(::StringW hostNameOrAddress);
  }; // System.Net.Dns
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Dns::BeginGetHostAddresses
// Il2CppName: BeginGetHostAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Dns::BeginGetHostAddresses)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "BeginGetHostAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress, requestCallback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::EndGetHostAddresses
// Il2CppName: EndGetHostAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::System::IAsyncResult*)>(&System::Net::Dns::EndGetHostAddresses)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "EndGetHostAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByName_internal
// Il2CppName: GetHostByName_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>, ByRef<::ArrayW<::StringW>>, ByRef<::ArrayW<::StringW>>, int)>(&System::Net::Dns::GetHostByName_internal)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* h_addr_list = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByName_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, h_name, h_aliases, h_addr_list, hint});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByAddr_internal
// Il2CppName: GetHostByAddr_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>, ByRef<::ArrayW<::StringW>>, ByRef<::ArrayW<::StringW>>, int)>(&System::Net::Dns::GetHostByAddr_internal)> {
  static const MethodInfo* get() {
    static auto* addr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* h_addr_list = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByAddr_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr, h_name, h_aliases, h_addr_list, hint});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostName_internal
// Il2CppName: GetHostName_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::StringW>)>(&System::Net::Dns::GetHostName_internal)> {
  static const MethodInfo* get() {
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostName_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h_name});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::Error_11001
// Il2CppName: Error_11001
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Net::Dns::Error_11001)> {
  static const MethodInfo* get() {
    static auto* hostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "Error_11001", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostName});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::hostent_to_IPHostEntry
// Il2CppName: hostent_to_IPHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&System::Net::Dns::hostent_to_IPHostEntry)> {
  static const MethodInfo* get() {
    static auto* originalHostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* h_aliases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* h_addrlist = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "hostent_to_IPHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalHostName, h_name, h_aliases, h_addrlist});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByAddressFromString
// Il2CppName: GetHostByAddressFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW, bool)>(&System::Net::Dns::GetHostByAddressFromString)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByAddressFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, parse});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostEntry
// Il2CppName: GetHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&System::Net::Dns::GetHostEntry)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostEntry
// Il2CppName: GetHostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::System::Net::IPAddress*)>(&System::Net::Dns::GetHostEntry)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostAddresses
// Il2CppName: GetHostAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::StringW)>(&System::Net::Dns::GetHostAddresses)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostByName
// Il2CppName: GetHostByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)(::StringW)>(&System::Net::Dns::GetHostByName)> {
  static const MethodInfo* get() {
    static auto* hostName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostName});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostName
// Il2CppName: GetHostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Net::Dns::GetHostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Dns::GetHostAddressesAsync
// Il2CppName: GetHostAddressesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* (*)(::StringW)>(&System::Net::Dns::GetHostAddressesAsync)> {
  static const MethodInfo* get() {
    static auto* hostNameOrAddress = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Dns*), "GetHostAddressesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostNameOrAddress});
  }
};
