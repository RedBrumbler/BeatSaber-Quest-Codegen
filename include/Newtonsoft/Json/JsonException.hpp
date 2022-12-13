// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonException
  class JsonException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonException*, "Newtonsoft.Json", "JsonException");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonException
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10F88B4
  class JsonException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x1815134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x181519C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1815214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonException*, creationType>(message, innerException)));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1815294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonException*, creationType>(info, context)));
    }
  }; // Newtonsoft.Json.JsonException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
