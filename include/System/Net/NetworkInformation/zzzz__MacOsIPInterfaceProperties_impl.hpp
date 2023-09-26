#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsIPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)(System::Net::NetworkInformation::MacOsNetworkInterface, System::Collections::Generic::List_1<System::Net::IPAddress>)>(&System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x288ed98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::MacOsNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties.ParseRouteInfo_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<::StringW>>)>(&System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x288ee08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                            "ParseRouteInfo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties.get_GatewayAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::GatewayIPAddressInformationCollection (System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x288ee0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::MacOsIPInterfaceProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "iface", ty: "System::Net::NetworkInformation::MacOsNetworkInterface", modifiers: "", def_value: None }, CppParam { name: "addresses", ty: "System::Collections::Generic::List_1<System::Net::IPAddress>", modifiers: "", def_value: None }]
 System::Net::NetworkInformation::MacOsIPInterfaceProperties::MacOsIPInterfaceProperties(System::Net::NetworkInformation::MacOsNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses)  : System::Net::NetworkInformation::UnixIPInterfaceProperties(THROW_UNLESS(::il2cpp_utils::New<MacOsIPInterfaceProperties>(iface, addresses))) {}
 void System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor(System::Net::NetworkInformation::MacOsNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::MacOsNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iface, addresses);
}
 bool System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW>> gw_addr_list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                            "ParseRouteInfo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iface, gw_addr_list);
}
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsIPInterfaceProperties>::get(),
                            "get_GatewayAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::GatewayIPAddressInformationCollection, false>(const_cast<void*>(instance), ___internal_method);
}
