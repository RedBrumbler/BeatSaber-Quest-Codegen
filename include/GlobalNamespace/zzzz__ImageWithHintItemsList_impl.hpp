#pragma once
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ImageWithHintItemsList_def.hpp"
//  Writing Method size for method: GlobalNamespace::ImageWithHintItemsList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImageWithHintItemsList::*)()>(&GlobalNamespace::ImageWithHintItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x215c8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ImageWithHintItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::ImageWithHintItemsList::ImageWithHintItemsList()  : HMUI::UIItemsList_1<HMUI::ImageWithHint>(THROW_UNLESS(::il2cpp_utils::New<ImageWithHintItemsList>())) {}
 void GlobalNamespace::ImageWithHintItemsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ImageWithHintItemsList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
