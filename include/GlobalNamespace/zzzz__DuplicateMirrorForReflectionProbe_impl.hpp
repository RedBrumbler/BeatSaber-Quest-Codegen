#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DuplicateMirrorForReflectionProbe_def.hpp"
//  Writing Method size for method: GlobalNamespace::DuplicateMirrorForReflectionProbe._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DuplicateMirrorForReflectionProbe::*)()>(&GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d4f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DuplicateMirrorForReflectionProbe>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::DuplicateMirrorForReflectionProbe::DuplicateMirrorForReflectionProbe()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DuplicateMirrorForReflectionProbe>())) {}
 void GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DuplicateMirrorForReflectionProbe>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
