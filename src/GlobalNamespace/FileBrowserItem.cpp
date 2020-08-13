// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileBrowserItem
#include "GlobalNamespace/FileBrowserItem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FileBrowserItem.get_displayName
::CsString* GlobalNamespace::FileBrowserItem::get_displayName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_displayName"));
}
// Autogenerated method: FileBrowserItem.set_displayName
void GlobalNamespace::FileBrowserItem::set_displayName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_displayName", value));
}
// Autogenerated method: FileBrowserItem.get_fullPath
::CsString* GlobalNamespace::FileBrowserItem::get_fullPath() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_fullPath"));
}
// Autogenerated method: FileBrowserItem.set_fullPath
void GlobalNamespace::FileBrowserItem::set_fullPath(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_fullPath", value));
}
// Autogenerated method: FileBrowserItem.get_isDirectory
bool GlobalNamespace::FileBrowserItem::get_isDirectory() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isDirectory"));
}
// Autogenerated method: FileBrowserItem.set_isDirectory
void GlobalNamespace::FileBrowserItem::set_isDirectory(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_isDirectory", value));
}
// Autogenerated method: FileBrowserItem..ctor
GlobalNamespace::FileBrowserItem* GlobalNamespace::FileBrowserItem::New_ctor(::CsString* displayName, ::CsString* fullPath, bool isDirectory) {
  return (FileBrowserItem*)THROW_UNLESS(il2cpp_utils::New("", "FileBrowserItem", displayName, fullPath, isDirectory));
}
