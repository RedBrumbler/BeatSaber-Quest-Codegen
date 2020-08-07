// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DefaultWatcherData
  class DefaultWatcherData;
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
  // Forward declaring type: FileAction
  struct FileAction;
  // Forward declaring type: FileData
  class FileData;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.DefaultWatcher
  class DefaultWatcher : public ::Il2CppObject, public System::IO::IFileWatcher {
    public:
    // Get static field: static private System.IO.DefaultWatcher instance
    static System::IO::DefaultWatcher* _get_instance();
    // Set static field: static private System.IO.DefaultWatcher instance
    static void _set_instance(System::IO::DefaultWatcher* value);
    // Get static field: static private System.Threading.Thread thread
    static System::Threading::Thread* _get_thread();
    // Set static field: static private System.Threading.Thread thread
    static void _set_thread(System::Threading::Thread* value);
    // Get static field: static private System.Collections.Hashtable watches
    static System::Collections::Hashtable* _get_watches();
    // Set static field: static private System.Collections.Hashtable watches
    static void _set_watches(System::Collections::Hashtable* value);
    // Get static field: static private System.String[] NoStringsArray
    static ::Array<::Il2CppString*>* _get_NoStringsArray();
    // Set static field: static private System.String[] NoStringsArray
    static void _set_NoStringsArray(::Array<::Il2CppString*>* value);
    // static public System.Boolean GetInstance(System.IO.IFileWatcher watcher)
    // Offset: 0xF4D3CC
    static bool GetInstance(System::IO::IFileWatcher*& watcher);
    // private System.Void Monitor()
    // Offset: 0xF4DFDC
    void Monitor();
    // private System.Boolean UpdateDataAndDispatch(System.IO.DefaultWatcherData data, System.Boolean dispatch)
    // Offset: 0xF4DC3C
    bool UpdateDataAndDispatch(System::IO::DefaultWatcherData* data, bool dispatch);
    // static private System.Void DispatchEvents(System.IO.FileSystemWatcher fsw, System.IO.FileAction action, System.String filename)
    // Offset: 0xF4E970
    static void DispatchEvents(System::IO::FileSystemWatcher* fsw, System::IO::FileAction action, ::Il2CppString* filename);
    // private System.Void DoFiles(System.IO.DefaultWatcherData data, System.String directory, System.Boolean dispatch)
    // Offset: 0xF4E708
    void DoFiles(System::IO::DefaultWatcherData* data, ::Il2CppString* directory, bool dispatch);
    // private System.Void IterateAndModifyFilesData(System.IO.DefaultWatcherData data, System.String directory, System.Boolean dispatch, System.String[] files)
    // Offset: 0xF4ECD4
    void IterateAndModifyFilesData(System::IO::DefaultWatcherData* data, ::Il2CppString* directory, bool dispatch, ::Array<::Il2CppString*>* files);
    // static private System.IO.FileData CreateFileData(System.String directory, System.String filename)
    // Offset: 0xF4FCD4
    static System::IO::FileData* CreateFileData(::Il2CppString* directory, ::Il2CppString* filename);
    // static private System.Void .cctor()
    // Offset: 0xF4FDC4
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0xF4D3C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultWatcher* New_ctor();
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xF4D4B4
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StartDispatching(System.IO.FileSystemWatcher fsw)
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xF4DD50
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StopDispatching(System.IO.FileSystemWatcher fsw)
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
  }; // System.IO.DefaultWatcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::DefaultWatcher*, "System.IO", "DefaultWatcher");
#pragma pack(pop)