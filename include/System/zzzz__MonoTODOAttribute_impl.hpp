#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MonoTODOAttribute_def.hpp"
//  Writing Method size for method: System::MonoTODOAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MonoTODOAttribute::*)()>(&System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTODOAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoTODOAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MonoTODOAttribute::*)(::StringW)>(&System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x249c4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTODOAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::MonoTODOAttribute::__set_comment(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::MonoTODOAttribute::__get_comment() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::MonoTODOAttribute::MonoTODOAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MonoTODOAttribute>())) {}
 void System::MonoTODOAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTODOAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "comment", ty: "::StringW", modifiers: "", def_value: None }]
 System::MonoTODOAttribute::MonoTODOAttribute(::StringW comment)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MonoTODOAttribute>(comment))) {}
 void System::MonoTODOAttribute::_ctor(::StringW comment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTODOAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comment);
}
