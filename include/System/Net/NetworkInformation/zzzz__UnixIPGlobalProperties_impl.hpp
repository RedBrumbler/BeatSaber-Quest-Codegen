#pragma once
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::UnixIPGlobalProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnixIPGlobalProperties::*)()>(&System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28900ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Net::NetworkInformation::UnixIPGlobalProperties::UnixIPGlobalProperties()  : System::Net::NetworkInformation::CommonUnixIPGlobalProperties(THROW_UNLESS(::il2cpp_utils::New<UnixIPGlobalProperties>())) {}
 void System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
