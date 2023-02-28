// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.NetLogLevel
#include "LiteNetLib/NetLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: NetDebug
  class NetDebug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetDebug);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetDebug*, "LiteNetLib", "NetDebug");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetDebug
  // [TokenAttribute] Offset: FFFFFFFF
  class NetDebug : public ::Il2CppObject {
    public:
    // Get static field: static public LiteNetLib.INetLogger Logger
    static ::LiteNetLib::INetLogger* _get_Logger();
    // Set static field: static public LiteNetLib.INetLogger Logger
    static void _set_Logger(::LiteNetLib::INetLogger* value);
    // Get static field: static private readonly System.Object DebugLogLock
    static ::Il2CppObject* _get_DebugLogLock();
    // Set static field: static private readonly System.Object DebugLogLock
    static void _set_DebugLogLock(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x222A44C
    static void _cctor();
    // static private System.Void WriteLogic(LiteNetLib.NetLogLevel logLevel, System.String str, params System.Object[] args)
    // Offset: 0x222A064
    static void WriteLogic(::LiteNetLib::NetLogLevel logLevel, ::StringW str, ::ArrayW<::Il2CppObject*> args);
    // static System.Void Write(System.String str, params System.Object[] args)
    // Offset: 0x222A264
    static void Write(::StringW str, ::ArrayW<::Il2CppObject*> args);
    // static System.Void Write(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x222A2DC
    static void Write(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::Il2CppObject*> args);
    // static System.Void WriteForce(System.String str, params System.Object[] args)
    // Offset: 0x222A358
    static void WriteForce(::StringW str, ::ArrayW<::Il2CppObject*> args);
    // static System.Void WriteForce(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x222A3D0
    static void WriteForce(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::Il2CppObject*> args);
    // static System.Void WriteError(System.String str, params System.Object[] args)
    // Offset: 0x2223A58
    static void WriteError(::StringW str, ::ArrayW<::Il2CppObject*> args);
  }; // LiteNetLib.NetDebug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetDebug::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetDebug::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteLogic
// Il2CppName: WriteLogic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::WriteLogic)> {
  static const MethodInfo* get() {
    static auto* logLevel = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteLogic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logLevel, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::Write)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::Write)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteForce
// Il2CppName: WriteForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::WriteForce)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteForce
// Il2CppName: WriteForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::WriteForce)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetDebug::WriteError
// Il2CppName: WriteError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&LiteNetLib::NetDebug::WriteError)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetDebug*), "WriteError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, args});
  }
};
