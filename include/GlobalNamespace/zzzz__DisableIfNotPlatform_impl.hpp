#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableIfNotPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisableIfNotPlatform.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableIfNotPlatform::*)()>(&GlobalNamespace::DisableIfNotPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x214d454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableIfNotPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DisableIfNotPlatform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableIfNotPlatform::*)()>(&GlobalNamespace::DisableIfNotPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214d4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableIfNotPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableIfNotPlatform::__set__whitelistPlatforms(::ArrayW<UnityEngine::RuntimePlatform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::RuntimePlatform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::RuntimePlatform>>(value));
}
constexpr ::ArrayW<UnityEngine::RuntimePlatform> GlobalNamespace::DisableIfNotPlatform::__get__whitelistPlatforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::RuntimePlatform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DisableIfNotPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableIfNotPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::DisableIfNotPlatform::DisableIfNotPlatform()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DisableIfNotPlatform>())) {}
 void GlobalNamespace::DisableIfNotPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableIfNotPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
