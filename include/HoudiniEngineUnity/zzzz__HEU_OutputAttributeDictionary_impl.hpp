#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_SerializableDictionary_2_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttributeDictionary_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_OutputAttributeDictionary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_OutputAttributeDictionary::*)()>(&HoudiniEngineUnity::HEU_OutputAttributeDictionary::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2049758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_OutputAttributeDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::HEU_OutputAttributeDictionary::HEU_OutputAttributeDictionary()  : HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW,HoudiniEngineUnity::HEU_OutputAttribute>(THROW_UNLESS(::il2cpp_utils::New<HEU_OutputAttributeDictionary>())) {}
 void HoudiniEngineUnity::HEU_OutputAttributeDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_OutputAttributeDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
