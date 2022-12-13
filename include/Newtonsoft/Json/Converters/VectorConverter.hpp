// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonConverter
#include "Newtonsoft/Json/JsonConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: VectorConverter
  class VectorConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::VectorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::VectorConverter*, "Newtonsoft.Json.Converters", "VectorConverter");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x13
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.VectorConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class VectorConverter : public ::Newtonsoft::Json::JsonConverter {
    public:
    public:
    // private System.Boolean <EnableVector2>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool EnableVector2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <EnableVector3>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    bool EnableVector3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <EnableVector4>k__BackingField
    // Size: 0x1
    // Offset: 0x12
    bool EnableVector4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.Type V2
    static ::System::Type* _get_V2();
    // Set static field: static private readonly System.Type V2
    static void _set_V2(::System::Type* value);
    // Get static field: static private readonly System.Type V3
    static ::System::Type* _get_V3();
    // Set static field: static private readonly System.Type V3
    static void _set_V3(::System::Type* value);
    // Get static field: static private readonly System.Type V4
    static ::System::Type* _get_V4();
    // Set static field: static private readonly System.Type V4
    static void _set_V4(::System::Type* value);
    // Get instance field reference: private System.Boolean <EnableVector2>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$EnableVector2$k__BackingField();
    // Get instance field reference: private System.Boolean <EnableVector3>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$EnableVector3$k__BackingField();
    // Get instance field reference: private System.Boolean <EnableVector4>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$EnableVector4$k__BackingField();
    // public System.Boolean get_EnableVector2()
    // Offset: 0x18086A8
    bool get_EnableVector2();
    // public System.Void set_EnableVector2(System.Boolean value)
    // Offset: 0x18086B0
    void set_EnableVector2(bool value);
    // public System.Boolean get_EnableVector3()
    // Offset: 0x18086BC
    bool get_EnableVector3();
    // public System.Void set_EnableVector3(System.Boolean value)
    // Offset: 0x18086C4
    void set_EnableVector3(bool value);
    // public System.Boolean get_EnableVector4()
    // Offset: 0x18086D0
    bool get_EnableVector4();
    // public System.Void set_EnableVector4(System.Boolean value)
    // Offset: 0x18086D8
    void set_EnableVector4(bool value);
    // static private System.Void .cctor()
    // Offset: 0x18090DC
    static void _cctor();
    // static private System.Void WriteVector(Newtonsoft.Json.JsonWriter writer, System.Single x, System.Single y, System.Nullable`1<System.Single> z, System.Nullable`1<System.Single> w)
    // Offset: 0x18089D8
    static void WriteVector(::Newtonsoft::Json::JsonWriter* writer, float x, float y, ::System::Nullable_1<float> z, ::System::Nullable_1<float> w);
    // static private UnityEngine.Vector2 PopulateVector2(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x1808CC4
    static ::UnityEngine::Vector2 PopulateVector2(::Newtonsoft::Json::JsonReader* reader);
    // static private UnityEngine.Vector3 PopulateVector3(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x1808D98
    static ::UnityEngine::Vector3 PopulateVector3(::Newtonsoft::Json::JsonReader* reader);
    // static private UnityEngine.Vector4 PopulateVector4(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x1808E98
    static ::UnityEngine::Vector4 PopulateVector4(::Newtonsoft::Json::JsonReader* reader);
    // public System.Void .ctor()
    // Offset: 0x18086E4
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VectorConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::VectorConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VectorConverter*, creationType>()));
    }
    // public override System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x1808718
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x1808B74
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0x1808FCC
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType);
  }; // Newtonsoft.Json.Converters.VectorConverter
  #pragma pack(pop)
  static check_size<sizeof(VectorConverter), 18 + sizeof(bool)> __Newtonsoft_Json_Converters_VectorConverterSizeCheck;
  static_assert(sizeof(VectorConverter) == 0x13);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::get_EnableVector2
// Il2CppName: get_EnableVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::VectorConverter::*)()>(&Newtonsoft::Json::Converters::VectorConverter::get_EnableVector2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "get_EnableVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::set_EnableVector2
// Il2CppName: set_EnableVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VectorConverter::*)(bool)>(&Newtonsoft::Json::Converters::VectorConverter::set_EnableVector2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "set_EnableVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::get_EnableVector3
// Il2CppName: get_EnableVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::VectorConverter::*)()>(&Newtonsoft::Json::Converters::VectorConverter::get_EnableVector3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "get_EnableVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::set_EnableVector3
// Il2CppName: set_EnableVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VectorConverter::*)(bool)>(&Newtonsoft::Json::Converters::VectorConverter::set_EnableVector3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "set_EnableVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::get_EnableVector4
// Il2CppName: get_EnableVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::VectorConverter::*)()>(&Newtonsoft::Json::Converters::VectorConverter::get_EnableVector4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "get_EnableVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::set_EnableVector4
// Il2CppName: set_EnableVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VectorConverter::*)(bool)>(&Newtonsoft::Json::Converters::VectorConverter::set_EnableVector4)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "set_EnableVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Converters::VectorConverter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::WriteVector
// Il2CppName: WriteVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::JsonWriter*, float, float, ::System::Nullable_1<float>, ::System::Nullable_1<float>)>(&Newtonsoft::Json::Converters::VectorConverter::WriteVector)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* w = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "WriteVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, x, y, z, w});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::PopulateVector2
// Il2CppName: PopulateVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Converters::VectorConverter::PopulateVector2)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "PopulateVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::PopulateVector3
// Il2CppName: PopulateVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Converters::VectorConverter::PopulateVector3)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "PopulateVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::PopulateVector4
// Il2CppName: PopulateVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Converters::VectorConverter::PopulateVector4)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "PopulateVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VectorConverter::*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::VectorConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, value, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::VectorConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::VectorConverter::ReadJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, objectType, existingValue, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::VectorConverter::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::VectorConverter::*)(::System::Type*)>(&Newtonsoft::Json::Converters::VectorConverter::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::VectorConverter*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
