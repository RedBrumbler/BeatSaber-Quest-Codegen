#pragma once
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::JsonConverterCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonConverterCollection::*)()>(&Newtonsoft::Json::JsonConverterCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25052e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonConverterCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Newtonsoft::Json::JsonConverterCollection::JsonConverterCollection()  : System::Collections::ObjectModel::Collection_1<Newtonsoft::Json::JsonConverter>(THROW_UNLESS(::il2cpp_utils::New<JsonConverterCollection>())) {}
 void Newtonsoft::Json::JsonConverterCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonConverterCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
