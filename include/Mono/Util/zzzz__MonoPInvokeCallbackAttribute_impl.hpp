#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Mono/Util/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Mono::Util::MonoPInvokeCallbackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Util::MonoPInvokeCallbackAttribute::*)(System::Type)>(&Mono::Util::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Util::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "t", ty: "System::Type", modifiers: "", def_value: None }]
 Mono::Util::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute(System::Type t)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MonoPInvokeCallbackAttribute>(t))) {}
 void Mono::Util::MonoPInvokeCallbackAttribute::_ctor(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Util::MonoPInvokeCallbackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
