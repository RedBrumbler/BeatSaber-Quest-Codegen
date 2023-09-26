#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__SwitchLevelAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Diagnostics::SwitchLevelAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::SwitchLevelAttribute::*)(System::Type)>(&System::Diagnostics::SwitchLevelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2809474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::SwitchLevelAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::SwitchLevelAttribute.set_SwitchLevelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::SwitchLevelAttribute::*)(System::Type)>(&System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28094a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::SwitchLevelAttribute>::get(),
                            "set_SwitchLevelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::SwitchLevelAttribute::__set_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Diagnostics::SwitchLevelAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "switchLevelType", ty: "System::Type", modifiers: "", def_value: None }]
 System::Diagnostics::SwitchLevelAttribute::SwitchLevelAttribute(System::Type switchLevelType)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<SwitchLevelAttribute>(switchLevelType))) {}
 void System::Diagnostics::SwitchLevelAttribute::_ctor(System::Type switchLevelType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::SwitchLevelAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, switchLevelType);
}
 void System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType(System::Type value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::SwitchLevelAttribute>::get(),
                            "set_SwitchLevelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
