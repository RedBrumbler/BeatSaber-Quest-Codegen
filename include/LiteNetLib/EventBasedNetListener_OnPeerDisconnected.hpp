// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  class EventBasedNetListener::OnPeerDisconnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnPeerDisconnected
    OnPeerDisconnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B3D2E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnPeerDisconnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnPeerDisconnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnPeerDisconnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0x1B3B2F0
    void Invoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B3D2F0
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B3D38C
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  #pragma pack(pop)
  // Writing MetadataGetter for method: EventBasedNetListener::OnPeerDisconnected::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EventBasedNetListener::OnPeerDisconnected::*)(::Il2CppObject*, System::IntPtr)>(&EventBasedNetListener::OnPeerDisconnected::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(EventBasedNetListener::OnPeerDisconnected*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EventBasedNetListener::OnPeerDisconnected::*)(::Il2CppObject*, System::IntPtr)>(&EventBasedNetListener::OnPeerDisconnected::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(EventBasedNetListener::OnPeerDisconnected*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: EventBasedNetListener::OnPeerDisconnected::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EventBasedNetListener::OnPeerDisconnected::*)(LiteNetLib::NetPeer*, LiteNetLib::DisconnectInfo)>(&EventBasedNetListener::OnPeerDisconnected::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(EventBasedNetListener::OnPeerDisconnected*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPeer*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::DisconnectInfo>()});
    }
  };
  // Writing MetadataGetter for method: EventBasedNetListener::OnPeerDisconnected::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (EventBasedNetListener::OnPeerDisconnected::*)(LiteNetLib::NetPeer*, LiteNetLib::DisconnectInfo, System::AsyncCallback*, ::Il2CppObject*)>(&EventBasedNetListener::OnPeerDisconnected::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(EventBasedNetListener::OnPeerDisconnected*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPeer*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::DisconnectInfo>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: EventBasedNetListener::OnPeerDisconnected::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EventBasedNetListener::OnPeerDisconnected::*)(System::IAsyncResult*)>(&EventBasedNetListener::OnPeerDisconnected::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(EventBasedNetListener::OnPeerDisconnected*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
