#pragma once
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadRequest_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
//  Writing Method size for method: Mono::Net::Security::AsyncReadRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncReadRequest::*)(Mono::Net::Security::MobileAuthenticatedStream, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Mono::Net::Security::AsyncReadRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bf3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncReadRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::AsyncReadRequest.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::AsyncOperationStatus (Mono::Net::Security::AsyncReadRequest::*)(Mono::Net::Security::AsyncOperationStatus)>(&Mono::Net::Security::AsyncReadRequest::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26bf3c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::AsyncReadRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncReadRequest>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "parent", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
 Mono::Net::Security::AsyncReadRequest::AsyncReadRequest(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  : Mono::Net::Security::AsyncReadOrWriteRequest(THROW_UNLESS(::il2cpp_utils::New<AsyncReadRequest>(parent, sync, buffer, offset, size))) {}
 void Mono::Net::Security::AsyncReadRequest::_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncReadRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, sync, buffer, offset, size);
}
 Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncReadRequest::Run(Mono::Net::Security::AsyncOperationStatus status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncReadRequest>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::AsyncOperationStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method, status);
}
