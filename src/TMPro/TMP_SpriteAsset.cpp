// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_SpriteAsset
#include "TMPro/TMP_SpriteAsset.hpp"
// Including type: TMPro.TMP_SpriteAsset/<>c
#include "TMPro/TMP_SpriteAsset_--c.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: TMPro.TMP_SpriteCharacter
#include "TMPro/TMP_SpriteCharacter.hpp"
// Including type: TMPro.TMP_SpriteGlyph
#include "TMPro/TMP_SpriteGlyph.hpp"
// Including type: TMPro.TMP_Sprite
#include "TMPro/TMP_Sprite.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
System::Collections::Generic::List_1<int>* TMPro::TMP_SpriteAsset::_get_k_searchedSpriteAssets() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<int>*>("TMPro", "TMP_SpriteAsset", "k_searchedSpriteAssets"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
void TMPro::TMP_SpriteAsset::_set_k_searchedSpriteAssets(System::Collections::Generic::List_1<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_SpriteAsset", "k_searchedSpriteAssets", value));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.get_version
::CsString* TMPro::TMP_SpriteAsset::get_version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_version"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.set_version
void TMPro::TMP_SpriteAsset::set_version(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_version", value));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.get_spriteCharacterTable
System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* TMPro::TMP_SpriteAsset::get_spriteCharacterTable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>*>(this, "get_spriteCharacterTable"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.set_spriteCharacterTable
void TMPro::TMP_SpriteAsset::set_spriteCharacterTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_spriteCharacterTable", value));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.get_spriteGlyphTable
System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* TMPro::TMP_SpriteAsset::get_spriteGlyphTable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>*>(this, "get_spriteGlyphTable"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.set_spriteGlyphTable
void TMPro::TMP_SpriteAsset::set_spriteGlyphTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_spriteGlyphTable", value));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.Awake
void TMPro::TMP_SpriteAsset::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.GetDefaultSpriteMaterial
UnityEngine::Material* TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>(this, "GetDefaultSpriteMaterial"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.UpdateLookupTables
void TMPro::TMP_SpriteAsset::UpdateLookupTables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateLookupTables"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.GetSpriteIndexFromHashcode
int TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode(int hashCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetSpriteIndexFromHashcode", hashCode));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.GetSpriteIndexFromUnicode
int TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode(uint unicode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetSpriteIndexFromUnicode", unicode));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.GetSpriteIndexFromName
int TMPro::TMP_SpriteAsset::GetSpriteIndexFromName(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetSpriteIndexFromName", name));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByUnicode
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByUnicode", spriteAsset, unicode, includeFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByUnicodeInternal
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, uint unicode, bool includeFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByUnicodeInternal", spriteAssets, unicode, includeFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByUnicodeInternal
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByUnicodeInternal", spriteAsset, unicode, includeFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByHashCode
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool includeFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByHashCode", spriteAsset, hashCode, includeFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByHashCodeInternal
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, int hashCode, bool searchFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByHashCodeInternal", spriteAssets, hashCode, searchFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SearchForSpriteByHashCodeInternal
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool searchFallbacks, int& spriteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<TMPro::TMP_SpriteAsset*>("TMPro", "TMP_SpriteAsset", "SearchForSpriteByHashCodeInternal", spriteAsset, hashCode, searchFallbacks, spriteIndex));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SortGlyphTable
void TMPro::TMP_SpriteAsset::SortGlyphTable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SortGlyphTable"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SortCharacterTable
void TMPro::TMP_SpriteAsset::SortCharacterTable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SortCharacterTable"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.SortGlyphAndCharacterTables
void TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SortGlyphAndCharacterTables"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset.UpgradeSpriteAsset
void TMPro::TMP_SpriteAsset::UpgradeSpriteAsset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpgradeSpriteAsset"));
}
// Autogenerated method: TMPro.TMP_SpriteAsset..ctor
TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::New_ctor() {
  return (TMP_SpriteAsset*)THROW_UNLESS(il2cpp_utils::New("TMPro", "TMP_SpriteAsset"));
}
