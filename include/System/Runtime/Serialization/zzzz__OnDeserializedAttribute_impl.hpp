#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OnDeserializedAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::OnDeserializedAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::OnDeserializedAttribute::*)()>(&System::Runtime::Serialization::OnDeserializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238aaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::OnDeserializedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Runtime::Serialization::OnDeserializedAttribute::OnDeserializedAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<OnDeserializedAttribute>())) {}
 void System::Runtime::Serialization::OnDeserializedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::OnDeserializedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
