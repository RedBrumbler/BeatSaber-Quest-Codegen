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
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
  // Forward declaring type: JsonWriter
  class JsonWriter;
}
// Completed forward declares
// Type namespace: Facebook.SocialVR.ThirdParty.Newtonsoftjson
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
  // Forward declaring type: UnityEntitySerializer
  class UnityEntitySerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer*, "Facebook.SocialVR.ThirdParty.Newtonsoftjson", "UnityEntitySerializer");
// Type namespace: Facebook.SocialVR.ThirdParty.Newtonsoftjson
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.SocialVR.ThirdParty.Newtonsoftjson.UnityEntitySerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityEntitySerializer : public ::Newtonsoft::Json::JsonConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0x13C71D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityEntitySerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityEntitySerializer*, creationType>()));
    }
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0x13C6F64
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType);
    // public override System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x13C700C
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x13C70A0
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer);
  }; // Facebook.SocialVR.ThirdParty.Newtonsoftjson.UnityEntitySerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::*)(::System::Type*)>(&Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::ReadJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, objectType, existingValue, serializer});
  }
};
// Writing MetadataGetter for method: Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, value, serializer});
  }
};
