// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Internal.InternalTraceLevel
#include "NUnit/Framework/Internal/InternalTraceLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.Logger
  class Logger : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.String TIME_FMT
    static ::Il2CppString* _get_TIME_FMT();
    // Set static field: static private readonly System.String TIME_FMT
    static void _set_TIME_FMT(::Il2CppString* value);
    // Get static field: static private readonly System.String TRACE_FMT
    static ::Il2CppString* _get_TRACE_FMT();
    // Set static field: static private readonly System.String TRACE_FMT
    static void _set_TRACE_FMT(::Il2CppString* value);
    // private System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private System.String fullname
    // Offset: 0x18
    ::Il2CppString* fullname;
    // private NUnit.Framework.Internal.InternalTraceLevel maxLevel
    // Offset: 0x20
    NUnit::Framework::Internal::InternalTraceLevel maxLevel;
    // private System.IO.TextWriter writer
    // Offset: 0x28
    System::IO::TextWriter* writer;
    // public System.Void .ctor(System.String name, NUnit.Framework.Internal.InternalTraceLevel level, System.IO.TextWriter writer)
    // Offset: 0x18D4590
    static Logger* New_ctor(::Il2CppString* name, NUnit::Framework::Internal::InternalTraceLevel level, System::IO::TextWriter* writer);
    // public System.Void Error(System.String message)
    // Offset: 0x18D4900
    void Error(::Il2CppString* message);
    // public System.Void Debug(System.String message)
    // Offset: 0x18D4940
    void Debug(::Il2CppString* message);
    // public System.Void Debug(System.String message, System.Object[] args)
    // Offset: 0x18D4964
    void Debug(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // private System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String message)
    // Offset: 0x18D4924
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* message);
    // private System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String format, System.Object[] args)
    // Offset: 0x18D4974
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // private System.Void WriteLog(NUnit.Framework.Internal.InternalTraceLevel level, System.String message)
    // Offset: 0x18D49C0
    void WriteLog(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* message);
    // static private System.Void .cctor()
    // Offset: 0x18D4C80
    static void _cctor();
  }; // NUnit.Framework.Internal.Logger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Logger*, "NUnit.Framework.Internal", "Logger");
#pragma pack(pop)