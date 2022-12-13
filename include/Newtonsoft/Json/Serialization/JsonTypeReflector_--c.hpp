// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonTypeReflector
#include "Newtonsoft/Json/Serialization/JsonTypeReflector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JsonTypeReflector::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c <>9
    static ::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c* _get_$$9();
    // Set static field: static public readonly Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c <>9
    static void _set_$$9(::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c* value);
    // Get static field: static public System.Func`2<System.Object,System.Type> <>9__18_1
    static ::System::Func_2<::Il2CppObject*, ::System::Type*>* _get_$$9__18_1();
    // Set static field: static public System.Func`2<System.Object,System.Type> <>9__18_1
    static void _set_$$9__18_1(::System::Func_2<::Il2CppObject*, ::System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0x210EC40
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x210ECA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonTypeReflector::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonTypeReflector::$$c*, creationType>()));
    }
    // System.Type <GetJsonConverterCreator>b__18_1(System.Object param)
    // Offset: 0x210ECAC
    ::System::Type* $GetJsonConverterCreator$b__18_1(::Il2CppObject* param);
  }; // Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::$GetJsonConverterCreator$b__18_1
// Il2CppName: <GetJsonConverterCreator>b__18_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::$$c::$GetJsonConverterCreator$b__18_1)> {
  static const MethodInfo* get() {
    static auto* param = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector::$$c*), "<GetJsonConverterCreator>b__18_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param});
  }
};
