#pragma once
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionStartEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::TransitionStartEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TransitionStartEvent::*)()>(&UnityEngine::UIElements::TransitionStartEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d09764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionStartEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::TransitionStartEvent::TransitionStartEvent()  : UnityEngine::UIElements::TransitionEventBase_1<UnityEngine::UIElements::TransitionStartEvent>(THROW_UNLESS(::il2cpp_utils::New<TransitionStartEvent>())) {}
 void UnityEngine::UIElements::TransitionStartEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionStartEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
