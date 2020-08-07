// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ColorPalette
#include "UnityEngine/ProBuilder/ColorPalette.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.ObjectModel.ReadOnlyCollection`1
#include "System/Collections/ObjectModel/ReadOnlyCollection_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.get_current
UnityEngine::Color UnityEngine::ProBuilder::ColorPalette::get_current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_current"));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.set_current
void UnityEngine::ProBuilder::ColorPalette::set_current(UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_current", value));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.get_colors
System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>* UnityEngine::ProBuilder::ColorPalette::get_colors() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>*>(this, "get_colors"));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.SetColors
void UnityEngine::ProBuilder::ColorPalette::SetColors(System::Collections::Generic::IEnumerable_1<UnityEngine::Color>* colors) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColors", colors));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.get_Item
UnityEngine::Color UnityEngine::ProBuilder::ColorPalette::get_Item(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_Item", i));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.set_Item
void UnityEngine::ProBuilder::ColorPalette::set_Item(int i, UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", i, value));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.get_Count
int UnityEngine::ProBuilder::ColorPalette::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette.SetDefaultValues
void UnityEngine::ProBuilder::ColorPalette::SetDefaultValues() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultValues"));
}
// Autogenerated method: UnityEngine.ProBuilder.ColorPalette..ctor
UnityEngine::ProBuilder::ColorPalette* UnityEngine::ProBuilder::ColorPalette::New_ctor() {
  return (ColorPalette*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "ColorPalette"));
}