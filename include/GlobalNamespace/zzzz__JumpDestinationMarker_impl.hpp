#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
//  Writing Method size for method: GlobalNamespace::JumpDestinationMarker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JumpDestinationMarker::*)()>(&GlobalNamespace::JumpDestinationMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbefb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::JumpDestinationMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::JumpDestinationMarker::JumpDestinationMarker()  : UnityEngine::Timeline::Marker(THROW_UNLESS(::il2cpp_utils::New<JumpDestinationMarker>())) {}
 void GlobalNamespace::JumpDestinationMarker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::JumpDestinationMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
