#pragma once
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
//  Writing Method size for method: GlobalNamespace::Vector3SO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector3SO::*)()>(&GlobalNamespace::Vector3SO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fbf590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Vector3SO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::Vector3SO::Vector3SO()  : GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector3>(THROW_UNLESS(::il2cpp_utils::New<Vector3SO>())) {}
 void GlobalNamespace::Vector3SO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Vector3SO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
