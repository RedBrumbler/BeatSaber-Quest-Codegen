#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadCancelResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ade54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetAssetFileDownloadCancelResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadCancelResult (Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)()>(&Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25b00e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadCancelResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadCancelResult (Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25b0120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadCancelResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithAssetFileDownloadCancelResult::MessageWithAssetFileDownloadCancelResult(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadCancelResult>(THROW_UNLESS(::il2cpp_utils::New<MessageWithAssetFileDownloadCancelResult>(c_message))) {}
 void Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::AssetFileDownloadCancelResult Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                            "GetAssetFileDownloadCancelResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadCancelResult, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::AssetFileDownloadCancelResult Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadCancelResult>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadCancelResult, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
