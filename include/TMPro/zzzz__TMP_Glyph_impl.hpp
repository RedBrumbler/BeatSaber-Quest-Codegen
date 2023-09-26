#pragma once
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "TMPro/zzzz__TMP_Glyph_def.hpp"
//  Writing Method size for method: TMPro::TMP_Glyph.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_Glyph (*)(TMPro::TMP_Glyph)>(&TMPro::TMP_Glyph::Clone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2aa89b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Glyph>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Glyph>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_Glyph._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Glyph::*)()>(&TMPro::TMP_Glyph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa8a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Glyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 TMPro::TMP_Glyph TMPro::TMP_Glyph::Clone(TMPro::TMP_Glyph source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Glyph>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Glyph>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::TMP_Glyph, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
 TMPro::TMP_Glyph::TMP_Glyph()  : TMPro::TMP_TextElement_Legacy(THROW_UNLESS(::il2cpp_utils::New<TMP_Glyph>())) {}
 void TMPro::TMP_Glyph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Glyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
