#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DoesNotRequireDomainReloadInitAttribute_def.hpp"
//  Writing Method size for method: GlobalNamespace::DoesNotRequireDomainReloadInitAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::*)()>(&GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fca8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DoesNotRequireDomainReloadInitAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::DoesNotRequireDomainReloadInitAttribute()  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<DoesNotRequireDomainReloadInitAttribute>())) {}
 void GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DoesNotRequireDomainReloadInitAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
