#pragma once
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::LaunchUnblockFlowResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::LaunchUnblockFlowResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::LaunchUnblockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25cf304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LaunchUnblockFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LaunchUnblockFlowResult::__set_DidCancel(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidCancel() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LaunchUnblockFlowResult::__set_DidUnblock(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidUnblock() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::LaunchUnblockFlowResult::LaunchUnblockFlowResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LaunchUnblockFlowResult>(o))) {}
 void Oculus::Platform::Models::LaunchUnblockFlowResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LaunchUnblockFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
