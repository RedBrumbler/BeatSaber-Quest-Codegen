#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::ReloadEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::ReloadEvent::*)()>(&HoudiniEngineUnity::ReloadEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2014130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::ReloadEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::ReloadEvent::ReloadEvent()  : UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>>(THROW_UNLESS(::il2cpp_utils::New<ReloadEvent>())) {}
 void HoudiniEngineUnity::ReloadEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::ReloadEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
