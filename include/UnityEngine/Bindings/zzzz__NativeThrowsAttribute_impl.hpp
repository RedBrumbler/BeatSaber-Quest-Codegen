#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeThrowsAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Bindings::NativeThrowsAttribute.set_ThrowsException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeThrowsAttribute::*)(bool)>(&UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bd3980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::NativeThrowsAttribute>::get(),
                            "set_ThrowsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Bindings::NativeThrowsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeThrowsAttribute::*)()>(&UnityEngine::Bindings::NativeThrowsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bd398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::NativeThrowsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Bindings::NativeThrowsAttribute::__set__ThrowsException_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Bindings::NativeThrowsAttribute::__get__ThrowsException_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::NativeThrowsAttribute>::get(),
                            "set_ThrowsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::Bindings::NativeThrowsAttribute::NativeThrowsAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<NativeThrowsAttribute>())) {}
 void UnityEngine::Bindings::NativeThrowsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::NativeThrowsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
