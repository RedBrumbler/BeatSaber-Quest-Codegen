// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileHelpers
#include "GlobalNamespace/FileHelpers.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FileHelpers.GetEscapedURLForFilePath
::CsString* GlobalNamespace::FileHelpers::GetEscapedURLForFilePath(::CsString* filePath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("", "FileHelpers", "GetEscapedURLForFilePath", filePath));
}
// Autogenerated method: FileHelpers.GetUniqueDirectoryNameByAppendingNumber
::CsString* GlobalNamespace::FileHelpers::GetUniqueDirectoryNameByAppendingNumber(::CsString* dirName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("", "FileHelpers", "GetUniqueDirectoryNameByAppendingNumber", dirName));
}
// Autogenerated method: FileHelpers.GetFilePaths
::Array<::CsString*>* GlobalNamespace::FileHelpers::GetFilePaths(::CsString* directoryPath, System::Collections::Generic::HashSet_1<::CsString*>* extensions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>("", "FileHelpers", "GetFilePaths", directoryPath, extensions));
}
// Autogenerated method: FileHelpers.GetFileNamesFromFilePaths
::Array<::CsString*>* GlobalNamespace::FileHelpers::GetFileNamesFromFilePaths(::Array<::CsString*>* filePaths) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>("", "FileHelpers", "GetFileNamesFromFilePaths", filePaths));
}
// Autogenerated method: FileHelpers.SaveToJSONFile
void GlobalNamespace::FileHelpers::SaveToJSONFile(::CsObject* obj, ::CsString* filePath, ::CsString* tempFilePath, ::CsString* backupFilePath) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "FileHelpers", "SaveToJSONFile", obj, filePath, tempFilePath, backupFilePath));
}
// Autogenerated method: FileHelpers.LoadJSONFile
::CsString* GlobalNamespace::FileHelpers::LoadJSONFile(::CsString* filePath, ::CsString* backupFilePath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("", "FileHelpers", "LoadJSONFile", filePath, backupFilePath));
}
// Autogenerated method: FileHelpers..ctor
GlobalNamespace::FileHelpers* GlobalNamespace::FileHelpers::New_ctor() {
  return (FileHelpers*)THROW_UNLESS(il2cpp_utils::New("", "FileHelpers"));
}
