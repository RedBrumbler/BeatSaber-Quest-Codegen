#pragma once
#include "GlobalNamespace/zzzz__NoInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoInvitePlatformHandler.get_isSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoInvitePlatformHandler::*)()>(&GlobalNamespace::NoInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoInvitePlatformHandler.OpenInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoInvitePlatformHandler::*)()>(&GlobalNamespace::NoInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x222c79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoInvitePlatformHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoInvitePlatformHandler::*)()>(&GlobalNamespace::NoInvitePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222c7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IInvitePlatformHandler
constexpr  GlobalNamespace::NoInvitePlatformHandler::operator GlobalNamespace::IInvitePlatformHandler() const noexcept {
return GlobalNamespace::IInvitePlatformHandler(::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::NoInvitePlatformHandler::get_isSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoInvitePlatformHandler::OpenInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::NoInvitePlatformHandler::NoInvitePlatformHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NoInvitePlatformHandler>())) {}
 void GlobalNamespace::NoInvitePlatformHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
