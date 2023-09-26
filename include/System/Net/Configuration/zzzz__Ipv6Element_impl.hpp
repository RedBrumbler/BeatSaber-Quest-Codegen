#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__Ipv6Element_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: System::Net::Configuration::Ipv6Element._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::Ipv6Element::*)()>(&System::Net::Configuration::Ipv6Element::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27e2610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::Ipv6Element>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Configuration::Ipv6Element.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Configuration::ConfigurationPropertyCollection (System::Net::Configuration::Ipv6Element::*)()>(&System::Net::Configuration::Ipv6Element::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27e2648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Configuration::Ipv6Element),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::Ipv6Element>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Net::Configuration::Ipv6Element::Ipv6Element()  : System::Configuration::ConfigurationElement(THROW_UNLESS(::il2cpp_utils::New<Ipv6Element>())) {}
 void System::Net::Configuration::Ipv6Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::Ipv6Element>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Configuration::ConfigurationPropertyCollection System::Net::Configuration::Ipv6Element::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::Ipv6Element>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Configuration::ConfigurationPropertyCollection, false>(const_cast<void*>(instance), ___internal_method);
}
