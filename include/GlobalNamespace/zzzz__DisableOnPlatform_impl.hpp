#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisableOnPlatform.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableOnPlatform::*)()>(&GlobalNamespace::DisableOnPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x214d530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableOnPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DisableOnPlatform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableOnPlatform::*)()>(&GlobalNamespace::DisableOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214d5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableOnPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableOnPlatform::__set__disabledPlatforms(::ArrayW<UnityEngine::RuntimePlatform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::RuntimePlatform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::RuntimePlatform>>(value));
}
constexpr ::ArrayW<UnityEngine::RuntimePlatform> GlobalNamespace::DisableOnPlatform::__get__disabledPlatforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::RuntimePlatform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DisableOnPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableOnPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::DisableOnPlatform::DisableOnPlatform()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DisableOnPlatform>())) {}
 void GlobalNamespace::DisableOnPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableOnPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
