#pragma once
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::FocusEvent.PreDispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusEvent::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::FocusEvent::PreDispatch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d0cfac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::FocusEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEvent>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::FocusEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusEvent::*)()>(&UnityEngine::UIElements::FocusEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d0d054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::FocusEvent::PreDispatch(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEvent>::get(),
                            "PreDispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
// Ctor Parameters []
 UnityEngine::UIElements::FocusEvent::FocusEvent()  : UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::FocusEvent>(THROW_UNLESS(::il2cpp_utils::New<FocusEvent>())) {}
 void UnityEngine::UIElements::FocusEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
