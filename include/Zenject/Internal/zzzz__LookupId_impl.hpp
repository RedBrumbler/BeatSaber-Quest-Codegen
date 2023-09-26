#pragma once
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
//  Writing Method size for method: Zenject::Internal::LookupId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::LookupId::*)()>(&Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dda014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::LookupId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::LookupId::*)(Zenject::IProvider, Zenject::BindingId)>(&Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2dda01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindingId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::LookupId.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Internal::LookupId::*)()>(&Zenject::Internal::LookupId::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2dda0b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::Internal::LookupId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::LookupId::__set_Provider(Zenject::IProvider value)  {
::cordl_internals::setInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IProvider>(value));
}
constexpr Zenject::IProvider Zenject::Internal::LookupId::__get_Provider() const {
return ::cordl_internals::getInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::LookupId::__set_BindingId(Zenject::BindingId value)  {
::cordl_internals::setInstanceField<Zenject::BindingId, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindingId>(value));
}
constexpr Zenject::BindingId Zenject::Internal::LookupId::__get_BindingId() const {
return ::cordl_internals::getInstanceField<Zenject::BindingId, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Internal::LookupId::LookupId()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LookupId>())) {}
 void Zenject::Internal::LookupId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "provider", ty: "Zenject::IProvider", modifiers: "", def_value: None }, CppParam { name: "bindingId", ty: "Zenject::BindingId", modifiers: "", def_value: None }]
 Zenject::Internal::LookupId::LookupId(Zenject::IProvider provider, Zenject::BindingId bindingId)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LookupId>(provider, bindingId))) {}
 void Zenject::Internal::LookupId::_ctor(Zenject::IProvider provider, Zenject::BindingId bindingId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindingId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provider, bindingId);
}
 int32_t Zenject::Internal::LookupId::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::LookupId>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
