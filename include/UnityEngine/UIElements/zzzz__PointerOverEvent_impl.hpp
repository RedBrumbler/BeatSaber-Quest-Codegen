#pragma once
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOverEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::PointerOverEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerOverEvent::*)()>(&UnityEngine::UIElements::PointerOverEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d0b67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerOverEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::PointerOverEvent::PointerOverEvent()  : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerOverEvent>(THROW_UNLESS(::il2cpp_utils::New<PointerOverEvent>())) {}
 void UnityEngine::UIElements::PointerOverEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerOverEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
