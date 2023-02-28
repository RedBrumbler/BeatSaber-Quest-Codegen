// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonException
#include "Newtonsoft/Json/JsonException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: IJsonLineInfo
  class IJsonLineInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonSerializationException
  class JsonSerializationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializationException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializationException*, "Newtonsoft.Json", "JsonSerializationException");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonSerializationException
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10FD884
  class JsonSerializationException : public ::Newtonsoft::Json::JsonException {
    public:
    // static Newtonsoft.Json.JsonSerializationException Create(Newtonsoft.Json.JsonReader reader, System.String message)
    // Offset: 0x18153C8
    static ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message);
    // static Newtonsoft.Json.JsonSerializationException Create(Newtonsoft.Json.JsonReader reader, System.String message, System.Exception ex)
    // Offset: 0x18185B4
    static ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex);
    // static Newtonsoft.Json.JsonSerializationException Create(Newtonsoft.Json.IJsonLineInfo lineInfo, System.String path, System.String message, System.Exception ex)
    // Offset: 0x1829A9C
    static ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message, ::System::Exception* ex);
    // public System.Void .ctor()
    // Offset: 0x1829A90
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializationException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonSerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializationException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1815078
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializationException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonSerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializationException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1829A94
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializationException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonSerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializationException*, creationType>(message, innerException)));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1829A98
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonSerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializationException*, creationType>(info, context)));
    }
  }; // Newtonsoft.Json.JsonSerializationException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW)>(&Newtonsoft::Json::JsonSerializationException::Create)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonSerializationException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, message});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonSerializationException::Create)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonSerializationException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonSerializationException::Create)> {
  static const MethodInfo* get() {
    static auto* lineInfo = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IJsonLineInfo")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonSerializationException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineInfo, path, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonSerializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
