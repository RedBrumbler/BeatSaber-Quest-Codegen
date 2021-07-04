// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ILogger
#include "UnityEngine/ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ILogHandler because it is already included!
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Logger
  class Logger : public ::Il2CppObject/*, public UnityEngine::ILogger*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD93624
    // [DebuggerBrowsableAttribute] Offset: 0xD93624
    // private UnityEngine.ILogHandler <logHandler>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ILogHandler* logHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::ILogHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD93660
    // [DebuggerBrowsableAttribute] Offset: 0xD93660
    // private System.Boolean <logEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool logEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: logEnabled and: filterLogType
    char __padding1[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xD9369C
    // [CompilerGeneratedAttribute] Offset: 0xD9369C
    // private UnityEngine.LogType <filterLogType>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::LogType filterLogType;
    // Field size check
    static_assert(sizeof(UnityEngine::LogType) == 0x4);
    // Creating value type constructor for type: Logger
    Logger(UnityEngine::ILogHandler* logHandler_ = {}, bool logEnabled_ = {}, UnityEngine::LogType filterLogType_ = {}) noexcept : logHandler{logHandler_}, logEnabled{logEnabled_}, filterLogType{filterLogType_} {}
    // Creating interface conversion operator: operator UnityEngine::ILogger
    operator UnityEngine::ILogger() noexcept {
      return *reinterpret_cast<UnityEngine::ILogger*>(this);
    }
    // public System.Void .ctor(UnityEngine.ILogHandler logHandler)
    // Offset: 0x1C0AAF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Logger* New_ctor(UnityEngine::ILogHandler* logHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Logger*, creationType>(logHandler)));
    }
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0x1C0AB30
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void set_logHandler(UnityEngine.ILogHandler value)
    // Offset: 0x1C0AB38
    void set_logHandler(UnityEngine::ILogHandler* value);
    // public System.Boolean get_logEnabled()
    // Offset: 0x1C0AB40
    bool get_logEnabled();
    // public System.Void set_logEnabled(System.Boolean value)
    // Offset: 0x1C0AB48
    void set_logEnabled(bool value);
    // public UnityEngine.LogType get_filterLogType()
    // Offset: 0x1C0AB54
    UnityEngine::LogType get_filterLogType();
    // public System.Void set_filterLogType(UnityEngine.LogType value)
    // Offset: 0x1C0AB5C
    void set_filterLogType(UnityEngine::LogType value);
    // public System.Boolean IsLogTypeAllowed(UnityEngine.LogType logType)
    // Offset: 0x1C0AB64
    bool IsLogTypeAllowed(UnityEngine::LogType logType);
    // static private System.String GetString(System.Object message)
    // Offset: 0x1C0ABA0
    static ::Il2CppString* GetString(::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0x1C0ACD0
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0x1C0AE44
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0x1C0AFC8
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, format, {args...});
    }
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1C0B0DC
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, context, format, {args...});
    }
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1C0B1F4
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.Logger
  #pragma pack(pop)
  static check_size<sizeof(Logger), 28 + sizeof(UnityEngine::LogType)> __UnityEngine_LoggerSizeCheck;
  static_assert(sizeof(Logger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Logger*, "UnityEngine", "Logger");
// Writing MetadataGetter for method: UnityEngine::Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Logger::get_logHandler
// Il2CppName: get_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ILogHandler* (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_logHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_logHandler
// Il2CppName: set_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::ILogHandler*)>(&UnityEngine::Logger::set_logHandler)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ILogHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::get_logEnabled
// Il2CppName: get_logEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_logEnabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_logEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_logEnabled
// Il2CppName: set_logEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(bool)>(&UnityEngine::Logger::set_logEnabled)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_logEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::get_filterLogType
// Il2CppName: get_filterLogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LogType (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_filterLogType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_filterLogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_filterLogType
// Il2CppName: set_filterLogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType)>(&UnityEngine::Logger::set_filterLogType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_filterLogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::IsLogTypeAllowed
// Il2CppName: IsLogTypeAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Logger::*)(UnityEngine::LogType)>(&UnityEngine::Logger::IsLogTypeAllowed)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "IsLogTypeAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&UnityEngine::Logger::GetString)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppObject*)>(&UnityEngine::Logger::Log)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::Logger::Log)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Logger::LogFormat)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Logger::LogFormat)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::Logger::LogException)> {
  const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
