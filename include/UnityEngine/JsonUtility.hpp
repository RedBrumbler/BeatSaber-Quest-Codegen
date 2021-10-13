// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.JsonUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EBF4DC
  class JsonUtility : public ::Il2CppObject {
    public:
    // static private System.String ToJsonInternal(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x26125C0
    static ::Il2CppString* ToJsonInternal(::Il2CppObject* obj, bool prettyPrint);
    // static private System.Object FromJsonInternal(System.String json, System.Object objectToOverwrite, System.Type type)
    // Offset: 0x2612610
    static ::Il2CppObject* FromJsonInternal(::Il2CppString* json, ::Il2CppObject* objectToOverwrite, System::Type* type);
    // static public System.String ToJson(System.Object obj)
    // Offset: 0x2612668
    static ::Il2CppString* ToJson(::Il2CppObject* obj);
    // static public System.String ToJson(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x2612670
    static ::Il2CppString* ToJson(::Il2CppObject* obj, bool prettyPrint);
    // static public T FromJson(System.String json)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FromJson(::Il2CppString* json) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::JsonUtility::FromJson");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "JsonUtility", "FromJson", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(json)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, json);
    }
    // static public System.Object FromJson(System.String json, System.Type type)
    // Offset: 0x26127C4
    static ::Il2CppObject* FromJson(::Il2CppString* json, System::Type* type);
  }; // UnityEngine.JsonUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::JsonUtility::ToJsonInternal
// Il2CppName: ToJsonInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*, bool)>(&UnityEngine::JsonUtility::ToJsonInternal)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* prettyPrint = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::JsonUtility*), "ToJsonInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, prettyPrint});
  }
};
// Writing MetadataGetter for method: UnityEngine::JsonUtility::FromJsonInternal
// Il2CppName: FromJsonInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppString*, ::Il2CppObject*, System::Type*)>(&UnityEngine::JsonUtility::FromJsonInternal)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectToOverwrite = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::JsonUtility*), "FromJsonInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, objectToOverwrite, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::JsonUtility::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&UnityEngine::JsonUtility::ToJson)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::JsonUtility*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::JsonUtility::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*, bool)>(&UnityEngine::JsonUtility::ToJson)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* prettyPrint = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::JsonUtility*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, prettyPrint});
  }
};
// Writing MetadataGetter for method: UnityEngine::JsonUtility::FromJson
// Il2CppName: FromJson
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::JsonUtility::FromJson
// Il2CppName: FromJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppString*, System::Type*)>(&UnityEngine::JsonUtility::FromJson)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::JsonUtility*), "FromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, type});
  }
};
