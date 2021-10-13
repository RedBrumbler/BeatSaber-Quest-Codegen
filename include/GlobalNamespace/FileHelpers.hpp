// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FileHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class FileHelpers : public ::Il2CppObject {
    public:
    // static public System.String GetEscapedURLForFilePath(System.String filePath)
    // Offset: 0x1364CCC
    static ::Il2CppString* GetEscapedURLForFilePath(::Il2CppString* filePath);
    // static public System.String GetUniqueDirectoryNameByAppendingNumber(System.String dirName)
    // Offset: 0x1364D30
    static ::Il2CppString* GetUniqueDirectoryNameByAppendingNumber(::Il2CppString* dirName);
    // static public System.String[] GetFilePaths(System.String directoryPath, System.Collections.Generic.HashSet`1<System.String> extensions)
    // Offset: 0x1364DE4
    static ::ArrayW<::Il2CppString*> GetFilePaths(::Il2CppString* directoryPath, System::Collections::Generic::HashSet_1<::Il2CppString*>* extensions);
    // static public System.String[] GetFileNamesFromFilePaths(System.String[] filePaths)
    // Offset: 0x1364F84
    static ::ArrayW<::Il2CppString*> GetFileNamesFromFilePaths(::ArrayW<::Il2CppString*> filePaths);
    // static public System.Void SaveToJSONFile(System.Object obj, System.String filePath, System.String tempFilePath, System.String backupFilePath)
    // Offset: 0x13650A4
    static void SaveToJSONFile(::Il2CppObject* obj, ::Il2CppString* filePath, ::Il2CppString* tempFilePath, ::Il2CppString* backupFilePath);
    // static public T LoadFromJSONFile(System.String filePath, System.String backupFilePath)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T LoadFromJSONFile(::Il2CppString* filePath, ::Il2CppString* backupFilePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileHelpers::LoadFromJSONFile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "FileHelpers", "LoadFromJSONFile", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(filePath), ::il2cpp_utils::ExtractType(backupFilePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, filePath, backupFilePath);
    }
    // static public System.String LoadJSONFile(System.String filePath, System.String backupFilePath)
    // Offset: 0x1365210
    static ::Il2CppString* LoadJSONFile(::Il2CppString* filePath, ::Il2CppString* backupFilePath);
    // public System.Void .ctor()
    // Offset: 0x1365388
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileHelpers*, creationType>()));
    }
  }; // FileHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileHelpers*, "", "FileHelpers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::GetEscapedURLForFilePath
// Il2CppName: GetEscapedURLForFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::FileHelpers::GetEscapedURLForFilePath)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "GetEscapedURLForFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::GetUniqueDirectoryNameByAppendingNumber
// Il2CppName: GetUniqueDirectoryNameByAppendingNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::FileHelpers::GetUniqueDirectoryNameByAppendingNumber)> {
  static const MethodInfo* get() {
    static auto* dirName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "GetUniqueDirectoryNameByAppendingNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dirName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::GetFilePaths
// Il2CppName: GetFilePaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppString*> (*)(::Il2CppString*, System::Collections::Generic::HashSet_1<::Il2CppString*>*)>(&GlobalNamespace::FileHelpers::GetFilePaths)> {
  static const MethodInfo* get() {
    static auto* directoryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "GetFilePaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directoryPath, extensions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::GetFileNamesFromFilePaths
// Il2CppName: GetFileNamesFromFilePaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppString*> (*)(::ArrayW<::Il2CppString*>)>(&GlobalNamespace::FileHelpers::GetFileNamesFromFilePaths)> {
  static const MethodInfo* get() {
    static auto* filePaths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "GetFileNamesFromFilePaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePaths});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::SaveToJSONFile
// Il2CppName: SaveToJSONFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::FileHelpers::SaveToJSONFile)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tempFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* backupFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "SaveToJSONFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, filePath, tempFilePath, backupFilePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::LoadFromJSONFile
// Il2CppName: LoadFromJSONFile
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::LoadJSONFile
// Il2CppName: LoadJSONFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::FileHelpers::LoadJSONFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* backupFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileHelpers*), "LoadJSONFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, backupFilePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
