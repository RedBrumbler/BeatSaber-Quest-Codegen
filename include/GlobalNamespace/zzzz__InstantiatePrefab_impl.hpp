#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InstantiatePrefab_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::InstantiatePrefab.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantiatePrefab::*)()>(&GlobalNamespace::InstantiatePrefab::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1fb4138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantiatePrefab>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::InstantiatePrefab._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantiatePrefab::*)()>(&GlobalNamespace::InstantiatePrefab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb4234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantiatePrefab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::InstantiatePrefab::__set__prefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::InstantiatePrefab::__get__prefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::InstantiatePrefab::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantiatePrefab>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::InstantiatePrefab::InstantiatePrefab()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<InstantiatePrefab>())) {}
 void GlobalNamespace::InstantiatePrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantiatePrefab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
