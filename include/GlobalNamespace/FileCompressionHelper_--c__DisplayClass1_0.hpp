// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: FileCompressionHelper
#include "GlobalNamespace/FileCompressionHelper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FileCompressionHelper/<>c__DisplayClass1_0
  class FileCompressionHelper::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public System.Boolean success
    // Offset: 0x10
    bool success;
    // public System.String sourceArchiveFileName
    // Offset: 0x18
    ::Il2CppString* sourceArchiveFileName;
    // public System.String destinationDirectoryName
    // Offset: 0x20
    ::Il2CppString* destinationDirectoryName;
    // public System.Action`1<System.Boolean> finishCallback
    // Offset: 0x28
    System::Action_1<bool>* finishCallback;
    // System.Void <ExtractZipToDirectoryAsync>b__0()
    // Offset: 0xC9B754
    void $ExtractZipToDirectoryAsync$b__0();
    // System.Void <ExtractZipToDirectoryAsync>b__1()
    // Offset: 0xC9B760
    void $ExtractZipToDirectoryAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0xC9B594
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FileCompressionHelper::$$c__DisplayClass1_0* New_ctor();
  }; // FileCompressionHelper/<>c__DisplayClass1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass1_0*, "", "FileCompressionHelper/<>c__DisplayClass1_0");
#pragma pack(pop)