// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INetSocketListener
#include "LiteNetLib/INetSocketListener.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.INetSocketListener.OnMessageReceived
void LiteNetLib::INetSocketListener::LiteNetLib_INetSocketListener_OnMessageReceived(::Array<uint8_t>* data, int length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint* remoteEndPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnMessageReceived", data, length, errorCode, remoteEndPoint));
}