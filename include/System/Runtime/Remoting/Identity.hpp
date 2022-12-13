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
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Identity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Identity*, "System.Runtime.Remoting", "Identity");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Identity
  // [TokenAttribute] Offset: FFFFFFFF
  class Identity : public ::Il2CppObject {
    public:
    public:
    // protected System.String _objectUri
    // Size: 0x8
    // Offset: 0x10
    ::StringW objectUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Runtime.Remoting.Messaging.IMessageSink _channelSink
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Messaging::IMessageSink* channelSink;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // protected System.Runtime.Remoting.Messaging.IMessageSink _envoySink
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Remoting::Messaging::IMessageSink* envoySink;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* clientDynamicProperties;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*) == 0x8);
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* serverDynamicProperties;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*) == 0x8);
    // protected System.Runtime.Remoting.ObjRef _objRef
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::Remoting::ObjRef* objRef;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::ObjRef*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x40
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: protected System.String _objectUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__objectUri();
    // Get instance field reference: protected System.Runtime.Remoting.Messaging.IMessageSink _channelSink
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn__channelSink();
    // Get instance field reference: protected System.Runtime.Remoting.Messaging.IMessageSink _envoySink
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn__envoySink();
    // Get instance field reference: private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& dyn__clientDynamicProperties();
    // Get instance field reference: private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& dyn__serverDynamicProperties();
    // Get instance field reference: protected System.Runtime.Remoting.ObjRef _objRef
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::ObjRef*& dyn__objRef();
    // Get instance field reference: private System.Boolean _disposed
    [[deprecated("Use field access instead!")]] bool& dyn__disposed();
    // public System.Runtime.Remoting.Messaging.IMessageSink get_ChannelSink()
    // Offset: 0x1D3A8BC
    ::System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink();
    // public System.Void set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink value)
    // Offset: 0x1D3A8C4
    void set_ChannelSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySink()
    // Offset: 0x1D3A8CC
    ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink();
    // public System.String get_ObjectUri()
    // Offset: 0x1D3A8D4
    ::StringW get_ObjectUri();
    // public System.Void set_ObjectUri(System.String value)
    // Offset: 0x1D3A8DC
    void set_ObjectUri(::StringW value);
    // public System.Boolean get_IsConnected()
    // Offset: 0x1D3A8E4
    bool get_IsConnected();
    // public System.Boolean get_Disposed()
    // Offset: 0x1D3A8F4
    bool get_Disposed();
    // public System.Void set_Disposed(System.Boolean value)
    // Offset: 0x1D3A8FC
    void set_Disposed(bool value);
    // public System.Runtime.Remoting.Contexts.DynamicPropertyCollection get_ClientDynamicProperties()
    // Offset: 0x1D379C8
    ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties();
    // public System.Boolean get_HasServerDynamicSinks()
    // Offset: 0x1D3A908
    bool get_HasServerDynamicSinks();
    // public System.Void .ctor(System.String objectUri)
    // Offset: 0x1D339C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Identity* New_ctor(::StringW objectUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Identity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Identity*, creationType>(objectUri)));
    }
    // public System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);
    // public System.Void NotifyClientDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1D3A94C
    void NotifyClientDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // public System.Void NotifyServerDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1D3A9E0
    void NotifyServerDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
  }; // System.Runtime.Remoting.Identity
  #pragma pack(pop)
  static check_size<sizeof(Identity), 64 + sizeof(bool)> __System_Runtime_Remoting_IdentitySizeCheck;
  static_assert(sizeof(Identity) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_ChannelSink
// Il2CppName: get_ChannelSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_ChannelSink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_ChannelSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::set_ChannelSink
// Il2CppName: set_ChannelSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Identity::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Identity::set_ChannelSink)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "set_ChannelSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_EnvoySink
// Il2CppName: get_EnvoySink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_EnvoySink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_EnvoySink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_ObjectUri
// Il2CppName: get_ObjectUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_ObjectUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_ObjectUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::set_ObjectUri
// Il2CppName: set_ObjectUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Identity::*)(::StringW)>(&System::Runtime::Remoting::Identity::set_ObjectUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "set_ObjectUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_IsConnected
// Il2CppName: get_IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_Disposed
// Il2CppName: get_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_Disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::set_Disposed
// Il2CppName: set_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Identity::*)(bool)>(&System::Runtime::Remoting::Identity::set_Disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "set_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_ClientDynamicProperties
// Il2CppName: get_ClientDynamicProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_ClientDynamicProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_ClientDynamicProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::get_HasServerDynamicSinks
// Il2CppName: get_HasServerDynamicSinks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Identity::*)()>(&System::Runtime::Remoting::Identity::get_HasServerDynamicSinks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "get_HasServerDynamicSinks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::CreateObjRef
// Il2CppName: CreateObjRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (System::Runtime::Remoting::Identity::*)(::System::Type*)>(&System::Runtime::Remoting::Identity::CreateObjRef)> {
  static const MethodInfo* get() {
    static auto* requestedType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "CreateObjRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestedType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::NotifyClientDynamicSinks
// Il2CppName: NotifyClientDynamicSinks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Identity::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&System::Runtime::Remoting::Identity::NotifyClientDynamicSinks)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* req_msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* client_site = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* async = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "NotifyClientDynamicSinks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, req_msg, client_site, async});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Identity::NotifyServerDynamicSinks
// Il2CppName: NotifyServerDynamicSinks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Identity::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&System::Runtime::Remoting::Identity::NotifyServerDynamicSinks)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* req_msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* client_site = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* async = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Identity*), "NotifyServerDynamicSinks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, req_msg, client_site, async});
  }
};
