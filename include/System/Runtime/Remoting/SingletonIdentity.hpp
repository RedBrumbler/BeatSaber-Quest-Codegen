// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.SingletonIdentity
  class SingletonIdentity : public System::Runtime::Remoting::ServerIdentity {
    public:
    // Creating value type constructor for type: SingletonIdentity
    SingletonIdentity() noexcept {}
    // public System.MarshalByRefObject GetServerObject()
    // Offset: 0x16015BC
    System::MarshalByRefObject* GetServerObject();
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    // Offset: 0x1601580
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Void ServerIdentity::.ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingletonIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::Contexts::Context* context, System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::SingletonIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingletonIdentity*, creationType>(objectUri, context, objectType)));
    }
    // public override System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x160176C
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessage ServerIdentity::SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public override System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1601858
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl ServerIdentity::AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.SingletonIdentity
  #pragma pack(pop)
  // Writing MetadataGetter for method: SingletonIdentity::GetServerObject
  // Il2CppName: GetServerObject
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject* (SingletonIdentity::*)()>(&SingletonIdentity::GetServerObject)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SingletonIdentity*), "GetServerObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SingletonIdentity::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SingletonIdentity::*)(::Il2CppString*, System::Runtime::Remoting::Contexts::Context*, System::Type*)>(&SingletonIdentity::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SingletonIdentity*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Contexts::Context*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SingletonIdentity::*)(::Il2CppString*, System::Runtime::Remoting::Contexts::Context*, System::Type*)>(&SingletonIdentity::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SingletonIdentity*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Contexts::Context*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SingletonIdentity::SyncObjectProcessMessage
  // Il2CppName: SyncObjectProcessMessage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (SingletonIdentity::*)(System::Runtime::Remoting::Messaging::IMessage*)>(&SingletonIdentity::SyncObjectProcessMessage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SingletonIdentity*), "SyncObjectProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessage*>()});
    }
  };
  // Writing MetadataGetter for method: SingletonIdentity::AsyncObjectProcessMessage
  // Il2CppName: AsyncObjectProcessMessage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl* (SingletonIdentity::*)(System::Runtime::Remoting::Messaging::IMessage*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&SingletonIdentity::AsyncObjectProcessMessage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SingletonIdentity*), "AsyncObjectProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessage*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessageSink*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SingletonIdentity*, "System.Runtime.Remoting", "SingletonIdentity");
