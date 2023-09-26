#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ImmediateModeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ImmediateModeException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ImmediateModeException::*)(System::Exception)>(&UnityEngine::UIElements::ImmediateModeException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c815b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ImmediateModeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "inner", ty: "System::Exception", modifiers: "", def_value: None }]
 UnityEngine::UIElements::ImmediateModeException::ImmediateModeException(System::Exception inner)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<ImmediateModeException>(inner))) {}
 void UnityEngine::UIElements::ImmediateModeException::_ctor(System::Exception inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ImmediateModeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inner);
}
