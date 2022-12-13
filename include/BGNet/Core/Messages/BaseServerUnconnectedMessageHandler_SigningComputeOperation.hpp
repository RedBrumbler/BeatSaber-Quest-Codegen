// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
// Including type: AsyncComputeOperation`1
#include "GlobalNamespace/AsyncComputeOperation_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICertificateEncryptionProvider
  class ICertificateEncryptionProvider;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/SigningComputeOperation");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.SigningComputeOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseServerUnconnectedMessageHandler::SigningComputeOperation : public ::GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>> {
    public:
    public:
    // private readonly System.Byte[] _clientRandom
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] _serverRandom
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> serverRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] _serverKey
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> serverKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly ICertificateEncryptionProvider _certificateEncryptionProvider
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ICertificateEncryptionProvider*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _writer
    // Size: 0x8
    // Offset: 0x48
    ::LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Threading::Tasks::TaskCompletionSource_1<T>*
    // Cannot delete conversion operator because it seems to have a generic type in the definition! This may not be defined!
    // Get instance field reference: private readonly System.Byte[] _clientRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__clientRandom();
    // Get instance field reference: private readonly System.Byte[] _serverRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__serverRandom();
    // Get instance field reference: private readonly System.Byte[] _serverKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__serverKey();
    // Get instance field reference: private readonly ICertificateEncryptionProvider _certificateEncryptionProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ICertificateEncryptionProvider*& dyn__certificateEncryptionProvider();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetDataWriter _writer
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataWriter*& dyn__writer();
    // public System.Void .ctor(System.Byte[] clientRandom, System.Byte[] serverRandom, System.Byte[] serverKey, ICertificateEncryptionProvider certificateEncryptionProvider, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15EE44C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseServerUnconnectedMessageHandler::SigningComputeOperation* New_ctor(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider, ::LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseServerUnconnectedMessageHandler::SigningComputeOperation*, creationType>(clientRandom, serverRandom, serverKey, certificateEncryptionProvider, writer)));
    }
    // protected System.Byte[] Compute()
    // Offset: 0x15EF9E8
    ::ArrayW<uint8_t> Compute();
    // protected override System.Void Finally()
    // Offset: 0x15EFAF8
    // Implemented from: AsyncComputeOperation`1
    // Base method: System.Void AsyncComputeOperation_1::Finally()
    void Finally();
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.SigningComputeOperation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::Compute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation*), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::Finally
// Il2CppName: Finally
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation::Finally)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation*), "Finally", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
