// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileData
  class FileData : public ::Il2CppObject {
    public:
    // public System.String Directory
    // Offset: 0x10
    ::Il2CppString* Directory;
    // public System.IO.FileAttributes Attributes
    // Offset: 0x18
    System::IO::FileAttributes Attributes;
    // public System.Boolean NotExists
    // Offset: 0x1C
    bool NotExists;
    // public System.DateTime CreationTime
    // Offset: 0x20
    System::DateTime CreationTime;
    // public System.DateTime LastWriteTime
    // Offset: 0x28
    System::DateTime LastWriteTime;
    // public System.Void .ctor()
    // Offset: 0xF4FDBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FileData* New_ctor();
  }; // System.IO.FileData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileData*, "System.IO", "FileData");
#pragma pack(pop)