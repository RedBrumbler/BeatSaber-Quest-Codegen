#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20be434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::*)(LiteNetLib::NetPeer)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20be560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::*)(LiteNetLib::NetPeer, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20be574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20be594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::LiteNetLib__EventBasedNetListener__OnPeerConnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnPeerConnected>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::Invoke(LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::BeginInvoke(LiteNetLib::NetPeer peer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, peer, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20be5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::*)(LiteNetLib::NetPeer, LiteNetLib::DisconnectInfo)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20be6d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::*)(LiteNetLib::NetPeer, LiteNetLib::DisconnectInfo, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20be6e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20be778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::LiteNetLib__EventBasedNetListener__OnPeerDisconnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnPeerDisconnected>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::Invoke(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, disconnectInfo);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::BeginInvoke(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, peer, disconnectInfo, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20be784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::*)(System::Net::IPEndPoint, System::Net::Sockets::SocketError)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20be8b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::*)(System::Net::IPEndPoint, System::Net::Sockets::SocketError, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20be8c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20be95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::LiteNetLib__EventBasedNetListener__OnNetworkError(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnNetworkError>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::Invoke(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, socketError);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::BeginInvoke(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, endPoint, socketError, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20be968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::*)(LiteNetLib::NetPeer, LiteNetLib::NetPacketReader, LiteNetLib::DeliveryMethod)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20bea98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::*)(LiteNetLib::NetPeer, LiteNetLib::NetPacketReader, LiteNetLib::DeliveryMethod, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20beaac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20beb44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::LiteNetLib__EventBasedNetListener__OnNetworkReceive(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnNetworkReceive>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::Invoke(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, reader, deliveryMethod);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::BeginInvoke(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, peer, reader, deliveryMethod, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20beb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(System::Net::IPEndPoint, LiteNetLib::NetPacketReader, LiteNetLib::UnconnectedMessageType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20bec80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(System::Net::IPEndPoint, LiteNetLib::NetPacketReader, LiteNetLib::UnconnectedMessageType, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20bec94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20bed2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader, messageType);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader, messageType, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20bed38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::*)(LiteNetLib::NetPeer, int32_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20bee68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::*)(LiteNetLib::NetPeer, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20bee7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20bef10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke(LiteNetLib::NetPeer peer, int32_t latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, latency);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke(LiteNetLib::NetPeer peer, int32_t latency, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, peer, latency, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20bef1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::*)(LiteNetLib::ConnectionRequest)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20bf048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::*)(LiteNetLib::ConnectionRequest, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20bf05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20bf07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::LiteNetLib__EventBasedNetListener__OnConnectionRequest(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnConnectionRequest>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::Invoke(LiteNetLib::ConnectionRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::BeginInvoke(LiteNetLib::ConnectionRequest request, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, request, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20bf088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::*)(LiteNetLib::NetPeer, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20bf1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::*)(LiteNetLib::NetPeer, ::bs_hook::Il2CppWrapperType, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20bf1cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::*)(System::IAsyncResult)>(&LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20bf1f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::LiteNetLib__EventBasedNetListener__OnDeliveryEvent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__EventBasedNetListener__OnDeliveryEvent>(object, method))) {}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::Invoke(LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, userData);
}
 System::IAsyncResult LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::BeginInvoke(LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, peer, userData, callback, object);
}
 void LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_PeerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected)>(&LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bd94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_PeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_PeerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected)>(&LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bd9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_PeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_PeerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected)>(&LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bda84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_PeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_PeerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected)>(&LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_PeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_NetworkErrorEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError)>(&LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_NetworkErrorEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError)>(&LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_NetworkReceiveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive)>(&LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_NetworkReceiveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive)>(&LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_NetworkReceiveUnconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected)>(&LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bde2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_NetworkReceiveUnconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected)>(&LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_NetworkLatencyUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate)>(&LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20bdf64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_NetworkLatencyUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate)>(&LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20be000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_ConnectionRequestEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest)>(&LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20be09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_ConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_ConnectionRequestEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest)>(&LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20be138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_ConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.add_DeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent)>(&LiteNetLib::EventBasedNetListener::add_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20be1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_DeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.remove_DeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent)>(&LiteNetLib::EventBasedNetListener::remove_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20be270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_DeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearPeerConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearPeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearPeerDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearPeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearNetworkErrorEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearNetworkReceiveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearNetworkReceiveUnconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearNetworkLatencyUpdateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearConnectionRequestEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.ClearDeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::ClearDeliveryEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::NetPeer)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::NetPeer, LiteNetLib::DisconnectInfo)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(System::Net::IPEndPoint, System::Net::Sockets::SocketError)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::NetPeer, LiteNetLib::NetPacketReader, LiteNetLib::DeliveryMethod)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(System::Net::IPEndPoint, LiteNetLib::NetPacketReader, LiteNetLib::UnconnectedMessageType)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::NetPeer, int32_t)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnConnectionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::ConnectionRequest)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener.LiteNetLib_IDeliveryEventListener_OnMessageDelivered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)(LiteNetLib::NetPeer, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20be410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.IDeliveryEventListener.OnMessageDelivered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::EventBasedNetListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::*)()>(&LiteNetLib::EventBasedNetListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20be42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::INetEventListener
constexpr  LiteNetLib::EventBasedNetListener::operator LiteNetLib::INetEventListener() const noexcept {
return LiteNetLib::INetEventListener(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::IDeliveryEventListener
constexpr  LiteNetLib::EventBasedNetListener::operator LiteNetLib::IDeliveryEventListener() const noexcept {
return LiteNetLib::IDeliveryEventListener(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_PeerConnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected LiteNetLib::EventBasedNetListener::__get_PeerConnectedEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_PeerDisconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected LiteNetLib::EventBasedNetListener::__get_PeerDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkErrorEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError LiteNetLib::EventBasedNetListener::__get_NetworkErrorEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkReceiveEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive LiteNetLib::EventBasedNetListener::__get_NetworkReceiveEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkReceiveUnconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected LiteNetLib::EventBasedNetListener::__get_NetworkReceiveUnconnectedEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkLatencyUpdateEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate LiteNetLib::EventBasedNetListener::__get_NetworkLatencyUpdateEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_ConnectionRequestEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest LiteNetLib::EventBasedNetListener::__get_ConnectionRequestEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::EventBasedNetListener::__set_DeliveryEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent value)  {
::cordl_internals::setInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>(value));
}
constexpr LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent LiteNetLib::EventBasedNetListener::__get_DeliveryEvent() const {
return ::cordl_internals::getInstanceField<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_PeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_PeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerConnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_PeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_PeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnPeerDisconnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceive>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_NetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_NetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_ConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_ConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::add_DeliveryEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "add_DeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::remove_DeliveryEvent(LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "remove_DeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__EventBasedNetListener__OnDeliveryEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearPeerConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearPeerDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkErrorEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkReceiveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkReceiveUnconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearNetworkLatencyUpdateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearConnectionRequestEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::ClearDeliveryEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "ClearDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnPeerConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnPeerDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DisconnectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, disconnectInfo);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, socketErrorCode);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, reader, deliveryMethod);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacketReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::UnconnectedMessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader, messageType);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer peer, int32_t latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, latency);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.INetEventListener.OnConnectionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::ConnectionRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 void LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered(LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            "LiteNetLib.IDeliveryEventListener.OnMessageDelivered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, userData);
}
// Ctor Parameters []
 LiteNetLib::EventBasedNetListener::EventBasedNetListener()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EventBasedNetListener>())) {}
 void LiteNetLib::EventBasedNetListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::EventBasedNetListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
