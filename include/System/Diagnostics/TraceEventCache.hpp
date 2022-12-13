// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceEventCache
  class TraceEventCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::TraceEventCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceEventCache*, "System.Diagnostics", "TraceEventCache");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceEventCache
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceEventCache : public ::Il2CppObject {
    public:
    public:
    // private System.Int64 timeStamp
    // Size: 0x8
    // Offset: 0x10
    int64_t timeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.DateTime dateTime
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime dateTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.String stackTrace
    // Size: 0x8
    // Offset: 0x20
    ::StringW stackTrace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Int32 processId
    static int _get_processId();
    // Set static field: static private System.Int32 processId
    static void _set_processId(int value);
    // Get static field: static private System.String processName
    static ::StringW _get_processName();
    // Set static field: static private System.String processName
    static void _set_processName(::StringW value);
    // Get instance field reference: private System.Int64 timeStamp
    [[deprecated("Use field access instead!")]] int64_t& dyn_timeStamp();
    // Get instance field reference: private System.DateTime dateTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_dateTime();
    // Get instance field reference: private System.String stackTrace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stackTrace();
    // public System.String get_Callstack()
    // Offset: 0x1DA12F8
    ::StringW get_Callstack();
    // public System.Collections.Stack get_LogicalOperationStack()
    // Offset: 0x1DA1324
    ::System::Collections::Stack* get_LogicalOperationStack();
    // public System.DateTime get_DateTime()
    // Offset: 0x1DA1340
    ::System::DateTime get_DateTime();
    // public System.Int32 get_ProcessId()
    // Offset: 0x1DA13F4
    int get_ProcessId();
    // public System.String get_ThreadId()
    // Offset: 0x1DA1454
    ::StringW get_ThreadId();
    // public System.Int64 get_Timestamp()
    // Offset: 0x1DA14F8
    int64_t get_Timestamp();
    // public System.Void .ctor()
    // Offset: 0x1DA1674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceEventCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::TraceEventCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceEventCache*, creationType>()));
    }
    // static private System.Void InitProcessInfo()
    // Offset: 0x1DA156C
    static void InitProcessInfo();
    // static System.Int32 GetProcessId()
    // Offset: 0x1DA13F8
    static int GetProcessId();
    // static System.Int32 GetThreadId()
    // Offset: 0x1DA14D4
    static int GetThreadId();
  }; // System.Diagnostics.TraceEventCache
  #pragma pack(pop)
  static check_size<sizeof(TraceEventCache), 32 + sizeof(::StringW)> __System_Diagnostics_TraceEventCacheSizeCheck;
  static_assert(sizeof(TraceEventCache) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_Callstack
// Il2CppName: get_Callstack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_Callstack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_Callstack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_LogicalOperationStack
// Il2CppName: get_LogicalOperationStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Stack* (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_LogicalOperationStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_LogicalOperationStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_DateTime
// Il2CppName: get_DateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_DateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_DateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_ProcessId
// Il2CppName: get_ProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_ProcessId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_ProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_ThreadId
// Il2CppName: get_ThreadId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_ThreadId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_ThreadId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::get_Timestamp
// Il2CppName: get_Timestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Diagnostics::TraceEventCache::*)()>(&System::Diagnostics::TraceEventCache::get_Timestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "get_Timestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::InitProcessInfo
// Il2CppName: InitProcessInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::TraceEventCache::InitProcessInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "InitProcessInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::GetProcessId
// Il2CppName: GetProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Diagnostics::TraceEventCache::GetProcessId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "GetProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceEventCache::GetThreadId
// Il2CppName: GetThreadId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Diagnostics::TraceEventCache::GetThreadId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceEventCache*), "GetThreadId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
