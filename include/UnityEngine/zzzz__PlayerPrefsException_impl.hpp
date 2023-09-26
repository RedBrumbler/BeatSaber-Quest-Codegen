#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__PlayerPrefsException_def.hpp"
//  Writing Method size for method: UnityEngine::PlayerPrefsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerPrefsException::*)(::StringW)>(&UnityEngine::PlayerPrefsException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b5acec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PlayerPrefsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "error", ty: "::StringW", modifiers: "", def_value: None }]
 UnityEngine::PlayerPrefsException::PlayerPrefsException(::StringW error)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<PlayerPrefsException>(error))) {}
 void UnityEngine::PlayerPrefsException::_ctor(::StringW error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PlayerPrefsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
