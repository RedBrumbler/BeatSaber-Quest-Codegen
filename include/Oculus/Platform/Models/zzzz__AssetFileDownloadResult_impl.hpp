#pragma once
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::AssetFileDownloadResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::AssetFileDownloadResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::AssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25ccd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::AssetFileDownloadResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__set_AssetId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::AssetFileDownloadResult::__get_AssetId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__set_Filepath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetFileDownloadResult::__get_Filepath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::AssetFileDownloadResult::AssetFileDownloadResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AssetFileDownloadResult>(o))) {}
 void Oculus::Platform::Models::AssetFileDownloadResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::AssetFileDownloadResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
