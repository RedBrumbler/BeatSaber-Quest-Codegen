#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExcludeFromObjectFactoryAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::ExcludeFromObjectFactoryAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ExcludeFromObjectFactoryAttribute::*)()>(&UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8e27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ExcludeFromObjectFactoryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::ExcludeFromObjectFactoryAttribute::ExcludeFromObjectFactoryAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ExcludeFromObjectFactoryAttribute>())) {}
 void UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ExcludeFromObjectFactoryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
