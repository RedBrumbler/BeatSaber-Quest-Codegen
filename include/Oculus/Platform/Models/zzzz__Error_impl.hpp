#pragma once
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::Error._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::Error::*)(int32_t, ::StringW, int32_t)>(&Oculus::Platform::Models::Error::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25ce914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::Error>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Error::__set_Code(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::Models::Error::__get_Code() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Error::__set_HttpCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::Models::Error::__get_HttpCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::Error::__set_Message(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::Error::__get_Message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "code", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpCode", ty: "int32_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::Error::Error(int32_t code, ::StringW message, int32_t httpCode)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Error>(code, message, httpCode))) {}
 void Oculus::Platform::Models::Error::_ctor(int32_t code, ::StringW message, int32_t httpCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::Error>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, code, message, httpCode);
}
