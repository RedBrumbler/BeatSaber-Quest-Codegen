// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.EventBasedNatPunchListener
#include "LiteNetLib/EventBasedNatPunchListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class EventBasedNatPunchListener::OnNatIntroductionRequest : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22153A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNatPunchListener::OnNatIntroductionRequest* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNatPunchListener::OnNatIntroductionRequest*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    // Offset: 0x2214B44
    void Invoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22153B0
    ::System::IAsyncResult* BeginInvoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x22153E0
    void EndInvoke(::System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNatPunchListener/LiteNetLib.OnNatIntroductionRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::Invoke)> {
  static const MethodInfo* get() {
    static auto* localEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localEndPoint, remoteEndPoint, token});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* localEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localEndPoint, remoteEndPoint, token, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::*)(::System::IAsyncResult*)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
