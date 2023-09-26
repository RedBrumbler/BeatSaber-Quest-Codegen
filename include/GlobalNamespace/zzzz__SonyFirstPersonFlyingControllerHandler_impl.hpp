#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SonyFirstPersonFlyingControllerHandler_def.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingController_def.hpp"
//  Writing Method size for method: GlobalNamespace::SonyFirstPersonFlyingControllerHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SonyFirstPersonFlyingControllerHandler::*)()>(&GlobalNamespace::SonyFirstPersonFlyingControllerHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ca9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyFirstPersonFlyingControllerHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SonyFirstPersonFlyingControllerHandler::__set__fpsFlying(GlobalNamespace::FirstPersonFlyingController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FirstPersonFlyingController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FirstPersonFlyingController>(value));
}
constexpr GlobalNamespace::FirstPersonFlyingController GlobalNamespace::SonyFirstPersonFlyingControllerHandler::__get__fpsFlying() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FirstPersonFlyingController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::SonyFirstPersonFlyingControllerHandler::SonyFirstPersonFlyingControllerHandler()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SonyFirstPersonFlyingControllerHandler>())) {}
 void GlobalNamespace::SonyFirstPersonFlyingControllerHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyFirstPersonFlyingControllerHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
