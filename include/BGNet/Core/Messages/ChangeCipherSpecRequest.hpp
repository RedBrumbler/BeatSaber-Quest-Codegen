// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IHandshakeServerToClientMessage
#include "BGNet/Core/Messages/IHandshakeServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ChangeCipherSpecRequest
  class ChangeCipherSpecRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ChangeCipherSpecRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ChangeCipherSpecRequest*, "BGNet.Core.Messages", "ChangeCipherSpecRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ChangeCipherSpecRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ChangeCipherSpecRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IHandshakeServerToClientMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage
    operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeServerToClientMessage
    inline ::BGNet::Core::Messages::IHandshakeServerToClientMessage* i_IHandshakeServerToClientMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // static public PacketPool`1<BGNet.Core.Messages.ChangeCipherSpecRequest> get_pool()
    // Offset: 0x15E8130
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x15EFB70
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChangeCipherSpecRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ChangeCipherSpecRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChangeCipherSpecRequest*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x15EFB14
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.ChangeCipherSpecRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ChangeCipherSpecRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*>* (*)()>(&BGNet::Core::Messages::ChangeCipherSpecRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ChangeCipherSpecRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ChangeCipherSpecRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ChangeCipherSpecRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ChangeCipherSpecRequest::*)()>(&BGNet::Core::Messages::ChangeCipherSpecRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ChangeCipherSpecRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
