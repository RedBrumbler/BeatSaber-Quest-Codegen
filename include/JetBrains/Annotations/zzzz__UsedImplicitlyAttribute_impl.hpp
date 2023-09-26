#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__UsedImplicitlyAttribute_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::UsedImplicitlyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::UsedImplicitlyAttribute::*)()>(&JetBrains::Annotations::UsedImplicitlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b5ac94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::UsedImplicitlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: JetBrains::Annotations::UsedImplicitlyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::UsedImplicitlyAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags)>(&JetBrains::Annotations::UsedImplicitlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b5acb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::UsedImplicitlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<JetBrains::Annotations::ImplicitUseKindFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<JetBrains::Annotations::ImplicitUseTargetFlags>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void JetBrains::Annotations::UsedImplicitlyAttribute::__set__UseKindFlags_k__BackingField(JetBrains::Annotations::ImplicitUseKindFlags value)  {
::cordl_internals::setInstanceField<JetBrains::Annotations::ImplicitUseKindFlags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<JetBrains::Annotations::ImplicitUseKindFlags>(value));
}
constexpr JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::UsedImplicitlyAttribute::__get__UseKindFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<JetBrains::Annotations::ImplicitUseKindFlags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void JetBrains::Annotations::UsedImplicitlyAttribute::__set__TargetFlags_k__BackingField(JetBrains::Annotations::ImplicitUseTargetFlags value)  {
::cordl_internals::setInstanceField<JetBrains::Annotations::ImplicitUseTargetFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<JetBrains::Annotations::ImplicitUseTargetFlags>(value));
}
constexpr JetBrains::Annotations::ImplicitUseTargetFlags JetBrains::Annotations::UsedImplicitlyAttribute::__get__TargetFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<JetBrains::Annotations::ImplicitUseTargetFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 JetBrains::Annotations::UsedImplicitlyAttribute::UsedImplicitlyAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<UsedImplicitlyAttribute>())) {}
 void JetBrains::Annotations::UsedImplicitlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::UsedImplicitlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "useKindFlags", ty: "JetBrains::Annotations::ImplicitUseKindFlags", modifiers: "", def_value: None }, CppParam { name: "targetFlags", ty: "JetBrains::Annotations::ImplicitUseTargetFlags", modifiers: "", def_value: None }]
 JetBrains::Annotations::UsedImplicitlyAttribute::UsedImplicitlyAttribute(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<UsedImplicitlyAttribute>(useKindFlags, targetFlags))) {}
 void JetBrains::Annotations::UsedImplicitlyAttribute::_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::UsedImplicitlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<JetBrains::Annotations::ImplicitUseKindFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<JetBrains::Annotations::ImplicitUseTargetFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, useKindFlags, targetFlags);
}
