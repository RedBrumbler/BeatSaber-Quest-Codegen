#pragma once
#include "GlobalNamespace/zzzz__OculusInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: GlobalNamespace::OculusInvitePlatformHandler.get_isSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusInvitePlatformHandler::*)()>(&GlobalNamespace::OculusInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusInvitePlatformHandler.OpenInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInvitePlatformHandler::*)()>(&GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x222c7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OculusInvitePlatformHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInvitePlatformHandler::*)()>(&GlobalNamespace::OculusInvitePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IInvitePlatformHandler
constexpr  GlobalNamespace::OculusInvitePlatformHandler::operator GlobalNamespace::IInvitePlatformHandler() const noexcept {
return GlobalNamespace::IInvitePlatformHandler(::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::OculusInvitePlatformHandler::get_isSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OculusInvitePlatformHandler::OculusInvitePlatformHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OculusInvitePlatformHandler>())) {}
 void GlobalNamespace::OculusInvitePlatformHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OculusInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
