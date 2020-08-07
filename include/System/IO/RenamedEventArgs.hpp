// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileSystemEventArgs
#include "System/IO/FileSystemEventArgs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: WatcherChangeTypes because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.RenamedEventArgs
  class RenamedEventArgs : public System::IO::FileSystemEventArgs {
    public:
    // private System.String oldName
    // Offset: 0x28
    ::Il2CppString* oldName;
    // private System.String oldFullPath
    // Offset: 0x30
    ::Il2CppString* oldFullPath;
    // public System.Void .ctor(System.IO.WatcherChangeTypes changeType, System.String directory, System.String name, System.String oldName)
    // Offset: 0xF51284
    static RenamedEventArgs* New_ctor(System::IO::WatcherChangeTypes changeType, ::Il2CppString* directory, ::Il2CppString* name, ::Il2CppString* oldName);
  }; // System.IO.RenamedEventArgs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::RenamedEventArgs*, "System.IO", "RenamedEventArgs");
#pragma pack(pop)