// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IUnconnectedMessageReceiver
  class IUnconnectedMessageReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageReceiver*, "", "IUnconnectedMessageReceiver");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IUnconnectedMessageReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class IUnconnectedMessageReceiver {
    public:
    // public System.Void ReceiveUnconnectedMessage(System.Net.IPEndPoint endPoint, LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReceiveUnconnectedMessage(::System::Net::IPEndPoint* endPoint, ::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PollUpdate();
  }; // IUnconnectedMessageReceiver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage
// Il2CppName: ReceiveUnconnectedMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageReceiver::*)(::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageReceiver*), "ReceiveUnconnectedMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedMessageReceiver::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageReceiver::*)()>(&GlobalNamespace::IUnconnectedMessageReceiver::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedMessageReceiver*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
