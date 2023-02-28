// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Forward declaring type: Log
  class Log;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::Log);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Log*, "ModestTree", "Log");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Log
  // [TokenAttribute] Offset: FFFFFFFF
  class Log : public ::Il2CppObject {
    public:
    // static public System.Void Debug(System.String message, params System.Object[] args)
    // Offset: 0x17C4FA4
    static void Debug(::StringW message, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void Info(System.String message, params System.Object[] args)
    // Offset: 0x17C4FA8
    static void Info(::StringW message, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void Warn(System.String message, params System.Object[] args)
    // Offset: 0x17C4844
    static void Warn(::StringW message, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void Trace(System.String message, params System.Object[] args)
    // Offset: 0x17C5030
    static void Trace(::StringW message, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void ErrorException(System.Exception e)
    // Offset: 0x17C50B8
    static void ErrorException(::System::Exception* e);
    // static public System.Void ErrorException(System.String message, System.Exception e)
    // Offset: 0x17C5120
    static void ErrorException(::StringW message, ::System::Exception* e);
    // static public System.Void Error(System.String message, params System.Object[] args)
    // Offset: 0x17C51A0
    static void Error(::StringW message, ::ArrayW<::Il2CppObject*> args);
  }; // ModestTree.Log
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Log::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&ModestTree::Log::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&ModestTree::Log::Info)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&ModestTree::Log::Warn)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&ModestTree::Log::Trace)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::ErrorException
// Il2CppName: ErrorException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&ModestTree::Log::ErrorException)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "ErrorException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::ErrorException
// Il2CppName: ErrorException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Exception*)>(&ModestTree::Log::ErrorException)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "ErrorException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, e});
  }
};
// Writing MetadataGetter for method: ModestTree::Log::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&ModestTree::Log::Error)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Log*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
