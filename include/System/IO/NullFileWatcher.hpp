// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: NullFileWatcher
  class NullFileWatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::NullFileWatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::NullFileWatcher*, "System.IO", "NullFileWatcher");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.NullFileWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class NullFileWatcher : public ::Il2CppObject/*, public ::System::IO::IFileWatcher*/ {
    public:
    // Creating interface conversion operator: operator ::System::IO::IFileWatcher
    operator ::System::IO::IFileWatcher() noexcept {
      return *reinterpret_cast<::System::IO::IFileWatcher*>(this);
    }
    // Creating interface conversion operator: i_IFileWatcher
    inline ::System::IO::IFileWatcher* i_IFileWatcher() noexcept {
      return reinterpret_cast<::System::IO::IFileWatcher*>(this);
    }
    // Get static field: static private System.IO.IFileWatcher instance
    static ::System::IO::IFileWatcher* _get_instance();
    // Set static field: static private System.IO.IFileWatcher instance
    static void _set_instance(::System::IO::IFileWatcher* value);
    // public System.Void .ctor()
    // Offset: 0x1DBDCB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullFileWatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::NullFileWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullFileWatcher*, creationType>()));
    }
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x1DBDCB0
    void StartDispatching(::System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x1DBDCB4
    void StopDispatching(::System::IO::FileSystemWatcher* fsw);
    // static public System.Boolean GetInstance(out System.IO.IFileWatcher watcher)
    // Offset: 0x1DBD2B4
    static bool GetInstance(ByRef<::System::IO::IFileWatcher*> watcher);
  }; // System.IO.NullFileWatcher
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::NullFileWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::NullFileWatcher::StartDispatching
// Il2CppName: StartDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::NullFileWatcher::*)(::System::IO::FileSystemWatcher*)>(&System::IO::NullFileWatcher::StartDispatching)> {
  static const MethodInfo* get() {
    static auto* fsw = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::NullFileWatcher*), "StartDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsw});
  }
};
// Writing MetadataGetter for method: System::IO::NullFileWatcher::StopDispatching
// Il2CppName: StopDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::NullFileWatcher::*)(::System::IO::FileSystemWatcher*)>(&System::IO::NullFileWatcher::StopDispatching)> {
  static const MethodInfo* get() {
    static auto* fsw = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::NullFileWatcher*), "StopDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsw});
  }
};
// Writing MetadataGetter for method: System::IO::NullFileWatcher::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::IO::IFileWatcher*>)>(&System::IO::NullFileWatcher::GetInstance)> {
  static const MethodInfo* get() {
    static auto* watcher = &::il2cpp_utils::GetClassFromName("System.IO", "IFileWatcher")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::NullFileWatcher*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{watcher});
  }
};
