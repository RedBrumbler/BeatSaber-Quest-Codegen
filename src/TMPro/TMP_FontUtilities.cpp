// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_FontUtilities
#include "TMPro/TMP_FontUtilities.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: TMPro.TMP_FontAsset
#include "TMPro/TMP_FontAsset.hpp"
// Including type: TMPro.TMP_Character
#include "TMPro/TMP_Character.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedFontAssets
System::Collections::Generic::List_1<int>* TMPro::TMP_FontUtilities::_get_k_searchedFontAssets() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<int>*>("TMPro", "TMP_FontUtilities", "k_searchedFontAssets"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedFontAssets
void TMPro::TMP_FontUtilities::_set_k_searchedFontAssets(System::Collections::Generic::List_1<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_FontUtilities", "k_searchedFontAssets", value));
}
// Autogenerated method: TMPro.TMP_FontUtilities.SearchForCharacter
TMPro::TMP_FontAsset* TMPro::TMP_FontUtilities::SearchForCharacter(TMPro::TMP_FontAsset* font, uint unicode, TMPro::TMP_Character*& character) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_FontAsset*>("TMPro", "TMP_FontUtilities", "SearchForCharacter", font, unicode, character));
}
// Autogenerated method: TMPro.TMP_FontUtilities.SearchForCharacter
TMPro::TMP_FontAsset* TMPro::TMP_FontUtilities::SearchForCharacter(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fonts, uint unicode, TMPro::TMP_Character*& character) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_FontAsset*>("TMPro", "TMP_FontUtilities", "SearchForCharacter", fonts, unicode, character));
}
// Autogenerated method: TMPro.TMP_FontUtilities.SearchForCharacterInternal
TMPro::TMP_FontAsset* TMPro::TMP_FontUtilities::SearchForCharacterInternal(TMPro::TMP_FontAsset* font, uint unicode, TMPro::TMP_Character*& character) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_FontAsset*>("TMPro", "TMP_FontUtilities", "SearchForCharacterInternal", font, unicode, character));
}
// Autogenerated method: TMPro.TMP_FontUtilities.SearchForCharacterInternal
TMPro::TMP_FontAsset* TMPro::TMP_FontUtilities::SearchForCharacterInternal(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fonts, uint unicode, TMPro::TMP_Character*& character) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_FontAsset*>("TMPro", "TMP_FontUtilities", "SearchForCharacterInternal", fonts, unicode, character));
}
