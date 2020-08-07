// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SFB.IStandaloneFileBrowser
#include "SFB/IStandaloneFileBrowser.hpp"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SFB.IStandaloneFileBrowser.OpenFilePanel
::Array<::Il2CppString*>* SFB::IStandaloneFileBrowser::OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "OpenFilePanel", title, directory, extensions, multiselect));
}
// Autogenerated method: SFB.IStandaloneFileBrowser.OpenFolderPanel
::Array<::Il2CppString*>* SFB::IStandaloneFileBrowser::OpenFolderPanel(::Il2CppString* title, ::Il2CppString* directory, bool multiselect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "OpenFolderPanel", title, directory, multiselect));
}
// Autogenerated method: SFB.IStandaloneFileBrowser.SaveFilePanel
::Il2CppString* SFB::IStandaloneFileBrowser::SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "SaveFilePanel", title, directory, defaultName, extensions));
}
// Autogenerated method: SFB.IStandaloneFileBrowser.OpenFilePanelAsync
void SFB::IStandaloneFileBrowser::OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenFilePanelAsync", title, directory, extensions, multiselect, cb));
}
// Autogenerated method: SFB.IStandaloneFileBrowser.OpenFolderPanelAsync
void SFB::IStandaloneFileBrowser::OpenFolderPanelAsync(::Il2CppString* title, ::Il2CppString* directory, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenFolderPanelAsync", title, directory, multiselect, cb));
}
// Autogenerated method: SFB.IStandaloneFileBrowser.SaveFilePanelAsync
void SFB::IStandaloneFileBrowser::SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions, System::Action_1<::Il2CppString*>* cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SaveFilePanelAsync", title, directory, defaultName, extensions, cb));
}