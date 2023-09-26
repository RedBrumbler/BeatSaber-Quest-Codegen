#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalOnPointerClick_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: GlobalNamespace::SignalOnPointerClick.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnPointerClick::*)(UnityEngine::EventSystems::PointerEventData)>(&GlobalNamespace::SignalOnPointerClick::OnPointerClick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fbed20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SignalOnPointerClick>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SignalOnPointerClick._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnPointerClick::*)()>(&GlobalNamespace::SignalOnPointerClick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbed40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SignalOnPointerClick>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr  GlobalNamespace::SignalOnPointerClick::operator UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  GlobalNamespace::SignalOnPointerClick::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SignalOnPointerClick::__set__inputFieldClickedSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::SignalOnPointerClick::__get__inputFieldClickedSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SignalOnPointerClick::OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SignalOnPointerClick>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
// Ctor Parameters []
 GlobalNamespace::SignalOnPointerClick::SignalOnPointerClick()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SignalOnPointerClick>())) {}
 void GlobalNamespace::SignalOnPointerClick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SignalOnPointerClick>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
