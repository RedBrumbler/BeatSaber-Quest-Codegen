// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogOption
  struct LogOption;
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
  // Forward declaring type: DebugLogHandler
  class DebugLogHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::DebugLogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DebugLogHandler*, "UnityEngine", "DebugLogHandler");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.DebugLogHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1091768
  class DebugLogHandler : public ::Il2CppObject/*, public ::UnityEngine::ILogHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ILogHandler
    operator ::UnityEngine::ILogHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::ILogHandler*>(this);
    }
    // Creating interface conversion operator: i_ILogHandler
    inline ::UnityEngine::ILogHandler* i_ILogHandler() noexcept {
      return reinterpret_cast<::UnityEngine::ILogHandler*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x2019E18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugLogHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::DebugLogHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugLogHandler*, creationType>()));
    }
    // static System.Void Internal_Log(UnityEngine.LogType level, UnityEngine.LogOption options, System.String msg, UnityEngine.Object obj)
    // Offset: 0x2019E20
    static void Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object* obj);
    // static System.Void Internal_LogException(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x2019E88
    static void Internal_LogException(::System::Exception* exception, ::UnityEngine::Object* obj);
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x2019ED8
    void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::Il2CppObject*> args);
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x2019F44
    void LogException(::System::Exception* exception, ::UnityEngine::Object* context);
  }; // UnityEngine.DebugLogHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::Internal_Log
// Il2CppName: Internal_Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::StringW, ::UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::Internal_Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogOption")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "Internal_Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, options, msg, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::Internal_LogException
// Il2CppName: Internal_LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::Internal_LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "Internal_LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(::UnityEngine::LogType, ::UnityEngine::Object*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::DebugLogHandler::LogFormat)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(::System::Exception*, ::UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
