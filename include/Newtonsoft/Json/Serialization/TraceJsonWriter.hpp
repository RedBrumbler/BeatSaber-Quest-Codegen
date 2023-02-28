// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonWriter
#include "Newtonsoft/Json/JsonWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonTextWriter
  class JsonTextWriter;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StringWriter
  class StringWriter;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Decimal because it is already included!
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
  // Skipping declaration: DateTime because it is already included!
  // Skipping declaration: DateTimeOffset because it is already included!
  // Skipping declaration: Guid because it is already included!
  // Skipping declaration: TimeSpan because it is already included!
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: TraceJsonWriter
  class TraceJsonWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.TraceJsonWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
    public:
    public:
    // private readonly Newtonsoft.Json.JsonWriter _innerWriter
    // Size: 0x8
    // Offset: 0x60
    ::Newtonsoft::Json::JsonWriter* innerWriter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonWriter*) == 0x8);
    // private readonly Newtonsoft.Json.JsonTextWriter _textWriter
    // Size: 0x8
    // Offset: 0x68
    ::Newtonsoft::Json::JsonTextWriter* textWriter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonTextWriter*) == 0x8);
    // private readonly System.IO.StringWriter _sw
    // Size: 0x8
    // Offset: 0x70
    ::System::IO::StringWriter* sw;
    // Field size check
    static_assert(sizeof(::System::IO::StringWriter*) == 0x8);
    public:
    // Get instance field reference: private readonly Newtonsoft.Json.JsonWriter _innerWriter
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonWriter*& dyn__innerWriter();
    // Get instance field reference: private readonly Newtonsoft.Json.JsonTextWriter _textWriter
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonTextWriter*& dyn__textWriter();
    // Get instance field reference: private readonly System.IO.StringWriter _sw
    [[deprecated("Use field access instead!")]] ::System::IO::StringWriter*& dyn__sw();
    // public System.Void .ctor(Newtonsoft.Json.JsonWriter innerWriter)
    // Offset: 0x2124AB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter* innerWriter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::TraceJsonWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceJsonWriter*, creationType>(innerWriter)));
    }
    // public System.String GetSerializedJsonMessage()
    // Offset: 0x2124C64
    ::StringW GetSerializedJsonMessage();
    // public override System.Void WriteValue(System.Decimal value)
    // Offset: 0x2124C84
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Decimal value)
    void WriteValue(::System::Decimal value);
    // public override System.Void WriteValue(System.Boolean value)
    // Offset: 0x2124CFC
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Boolean value)
    void WriteValue(bool value);
    // public override System.Void WriteValue(System.Byte value)
    // Offset: 0x2124D64
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Byte value)
    void WriteValue(uint8_t value);
    // public override System.Void WriteValue(System.Nullable`1<System.Byte> value)
    // Offset: 0x2124DC8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Nullable`1<System.Byte> value)
    void WriteValue(::System::Nullable_1<uint8_t> value);
    // public override System.Void WriteValue(System.Char value)
    // Offset: 0x2124E30
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Char value)
    void WriteValue(::Il2CppChar value);
    // public override System.Void WriteValue(System.Byte[] value)
    // Offset: 0x2124E94
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Byte[] value)
    void WriteValue(::ArrayW<uint8_t> value);
    // public override System.Void WriteValue(System.DateTime value)
    // Offset: 0x2124EF8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.DateTime value)
    void WriteValue(::System::DateTime value);
    // public override System.Void WriteValue(System.DateTimeOffset value)
    // Offset: 0x2124F5C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.DateTimeOffset value)
    void WriteValue(::System::DateTimeOffset value);
    // public override System.Void WriteValue(System.Double value)
    // Offset: 0x2124FD4
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Double value)
    void WriteValue(double value);
    // public override System.Void WriteUndefined()
    // Offset: 0x2125040
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteUndefined()
    void WriteUndefined();
    // public override System.Void WriteNull()
    // Offset: 0x2125098
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteNull()
    void WriteNull();
    // public override System.Void WriteValue(System.Single value)
    // Offset: 0x21250F0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Single value)
    void WriteValue(float value);
    // public override System.Void WriteValue(System.Guid value)
    // Offset: 0x212515C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Guid value)
    void WriteValue(::System::Guid value);
    // public override System.Void WriteValue(System.Int32 value)
    // Offset: 0x21251D4
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int32 value)
    void WriteValue(int value);
    // public override System.Void WriteValue(System.Int64 value)
    // Offset: 0x2125238
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int64 value)
    void WriteValue(int64_t value);
    // public override System.Void WriteValue(System.Object value)
    // Offset: 0x212529C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Object value)
    void WriteValue(::Il2CppObject* value);
    // public override System.Void WriteValue(System.SByte value)
    // Offset: 0x2125300
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.SByte value)
    void WriteValue(int8_t value);
    // public override System.Void WriteValue(System.Int16 value)
    // Offset: 0x2125364
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Int16 value)
    void WriteValue(int16_t value);
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x21253C8
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.String value)
    void WriteValue(::StringW value);
    // public override System.Void WriteValue(System.TimeSpan value)
    // Offset: 0x212542C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.TimeSpan value)
    void WriteValue(::System::TimeSpan value);
    // public override System.Void WriteValue(System.UInt32 value)
    // Offset: 0x2125490
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt32 value)
    void WriteValue(uint value);
    // public override System.Void WriteValue(System.UInt64 value)
    // Offset: 0x21254F4
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt64 value)
    void WriteValue(uint64_t value);
    // public override System.Void WriteValue(System.Uri value)
    // Offset: 0x2125558
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.Uri value)
    void WriteValue(::System::Uri* value);
    // public override System.Void WriteValue(System.UInt16 value)
    // Offset: 0x21255BC
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteValue(System.UInt16 value)
    void WriteValue(uint16_t value);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x2125620
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteComment(System.String text)
    void WriteComment(::StringW text);
    // public override System.Void WriteStartArray()
    // Offset: 0x2125684
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartArray()
    void WriteStartArray();
    // public override System.Void WriteEndArray()
    // Offset: 0x21256D4
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteEndArray()
    void WriteEndArray();
    // public override System.Void WriteStartConstructor(System.String name)
    // Offset: 0x2125724
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartConstructor(System.String name)
    void WriteStartConstructor(::StringW name);
    // public override System.Void WriteEndConstructor()
    // Offset: 0x2125780
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteEndConstructor()
    void WriteEndConstructor();
    // public override System.Void WritePropertyName(System.String name)
    // Offset: 0x21257D0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WritePropertyName(System.String name)
    void WritePropertyName(::StringW name);
    // public override System.Void WritePropertyName(System.String name, System.Boolean escape)
    // Offset: 0x2125834
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WritePropertyName(System.String name, System.Boolean escape)
    void WritePropertyName(::StringW name, bool escape);
    // public override System.Void WriteStartObject()
    // Offset: 0x21258AC
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteStartObject()
    void WriteStartObject();
    // public override System.Void WriteEndObject()
    // Offset: 0x21258FC
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteEndObject()
    void WriteEndObject();
    // public override System.Void WriteRawValue(System.String json)
    // Offset: 0x212594C
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteRawValue(System.String json)
    void WriteRawValue(::StringW json);
    // public override System.Void WriteRaw(System.String json)
    // Offset: 0x21259B0
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::WriteRaw(System.String json)
    void WriteRaw(::StringW json);
    // public override System.Void Close()
    // Offset: 0x2125A14
    // Implemented from: Newtonsoft.Json.JsonWriter
    // Base method: System.Void JsonWriter::Close()
    void Close();
  }; // Newtonsoft.Json.Serialization.TraceJsonWriter
  #pragma pack(pop)
  static check_size<sizeof(TraceJsonWriter), 112 + sizeof(::System::IO::StringWriter*)> __Newtonsoft_Json_Serialization_TraceJsonWriterSizeCheck;
  static_assert(sizeof(TraceJsonWriter) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage
// Il2CppName: GetSerializedJsonMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "GetSerializedJsonMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Decimal)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(bool)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint8_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint8_t>)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::Il2CppChar)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTime)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTimeOffset)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(double)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined
// Il2CppName: WriteUndefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteUndefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull
// Il2CppName: WriteNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(float)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Guid)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int64_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int8_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int16_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::TimeSpan)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint64_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Uri*)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint16_t)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray
// Il2CppName: WriteStartArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteStartArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray
// Il2CppName: WriteEndArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteEndArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor
// Il2CppName: WriteStartConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteStartConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor
// Il2CppName: WriteEndConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteEndConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName
// Il2CppName: WritePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WritePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName
// Il2CppName: WritePropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW, bool)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* escape = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WritePropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, escape});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject
// Il2CppName: WriteStartObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteStartObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject
// Il2CppName: WriteEndObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteEndObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue
// Il2CppName: WriteRawValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteRawValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&Newtonsoft::Json::Serialization::TraceJsonWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
