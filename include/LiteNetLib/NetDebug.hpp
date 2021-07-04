// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: LiteNetLib.NetLogLevel
#include "LiteNetLib/NetLogLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: INetLogger
  class INetLogger;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetDebug
  class NetDebug : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetDebug
    NetDebug() noexcept {}
    // Get static field: static public LiteNetLib.INetLogger Logger
    static LiteNetLib::INetLogger* _get_Logger();
    // Set static field: static public LiteNetLib.INetLogger Logger
    static void _set_Logger(LiteNetLib::INetLogger* value);
    // Get static field: static private readonly System.Object DebugLogLock
    static ::Il2CppObject* _get_DebugLogLock();
    // Set static field: static private readonly System.Object DebugLogLock
    static void _set_DebugLogLock(::Il2CppObject* value);
    // static private System.Void WriteLogic(LiteNetLib.NetLogLevel logLevel, System.String str, params System.Object[] args)
    // Offset: 0x1B3F8A4
    static void WriteLogic(LiteNetLib::NetLogLevel logLevel, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteLogic(LiteNetLib.NetLogLevel logLevel, System.String str, params System.Object[] args)
    static void WriteLogic(LiteNetLib::NetLogLevel logLevel, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteLogic(LiteNetLib.NetLogLevel logLevel, System.String str, params System.Object[] args)
    template<class ...TParams>
    static void WriteLogic(LiteNetLib::NetLogLevel logLevel, ::Il2CppString* str, TParams&&... args) {
      WriteLogic(logLevel, str, {args...});
    }
    // static System.Void Write(System.String str, params System.Object[] args)
    // Offset: 0x1B3FAA4
    static void Write(::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Write(System.String str, params System.Object[] args)
    static void Write(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Write(System.String str, params System.Object[] args)
    template<class ...TParams>
    static void Write(::Il2CppString* str, TParams&&... args) {
      Write(str, {args...});
    }
    // static System.Void Write(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x1B3FB1C
    static void Write(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Write(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    static void Write(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Write(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    template<class ...TParams>
    static void Write(LiteNetLib::NetLogLevel level, ::Il2CppString* str, TParams&&... args) {
      Write(level, str, {args...});
    }
    // static System.Void WriteForce(System.String str, params System.Object[] args)
    // Offset: 0x1B3FB98
    static void WriteForce(::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteForce(System.String str, params System.Object[] args)
    static void WriteForce(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteForce(System.String str, params System.Object[] args)
    template<class ...TParams>
    static void WriteForce(::Il2CppString* str, TParams&&... args) {
      WriteForce(str, {args...});
    }
    // static System.Void WriteForce(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x1B3FC10
    static void WriteForce(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteForce(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    static void WriteForce(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteForce(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    template<class ...TParams>
    static void WriteForce(LiteNetLib::NetLogLevel level, ::Il2CppString* str, TParams&&... args) {
      WriteForce(level, str, {args...});
    }
    // static System.Void WriteError(System.String str, params System.Object[] args)
    // Offset: 0x1B39298
    static void WriteError(::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteError(System.String str, params System.Object[] args)
    static void WriteError(::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteError(System.String str, params System.Object[] args)
    template<class ...TParams>
    static void WriteError(::Il2CppString* str, TParams&&... args) {
      WriteError(str, {args...});
    }
    // static private System.Void .cctor()
    // Offset: 0x1B3FC8C
    static void _cctor();
  }; // LiteNetLib.NetDebug
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetDebug*, "LiteNetLib", "NetDebug");
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteLogic
// Il2CppName: WriteLogic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::WriteLogic)> {
  const MethodInfo* get() {
    static auto* logLevel = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteLogic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logLevel, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::Write)> {
  const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::Write)> {
  const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteForce
// Il2CppName: WriteForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::WriteForce)> {
  const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteForce
// Il2CppName: WriteForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::WriteForce)> {
  const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteError
// Il2CppName: WriteError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::NetDebug::WriteError)> {
  const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetDebug::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
