#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::BakedEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::BakedEvent::*)()>(&HoudiniEngineUnity::BakedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2014250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::BakedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::BakedEvent::BakedEvent()  : UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>>(THROW_UNLESS(::il2cpp_utils::New<BakedEvent>())) {}
 void HoudiniEngineUnity::BakedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::BakedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
