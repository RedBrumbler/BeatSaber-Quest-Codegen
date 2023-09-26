#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Guid;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class Uri;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace System::IO {
class StringWriter;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Type: Newtonsoft.Json.Serialization::TraceJsonWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11872))
// CS Name: Newtonsoft.Json.Serialization.TraceJsonWriter
class CORDL_TYPE TraceJsonWriter : public Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~TraceJsonWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: " const&", def_value: None }]
constexpr TraceJsonWriter(TraceJsonWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None }]
constexpr TraceJsonWriter(TraceJsonWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceJsonWriter(void* ptr) noexcept : Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr TraceJsonWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceJsonWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceJsonWriter& operator=(TraceJsonWriter&& o) noexcept = default;
  constexpr TraceJsonWriter& operator=(TraceJsonWriter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::JsonWriter __declspec(property(get=__get__innerWriter, put=__set__innerWriter))  _innerWriter;

constexpr void __set__innerWriter(Newtonsoft::Json::JsonWriter value) ;

constexpr Newtonsoft::Json::JsonWriter __get__innerWriter() const;

 Newtonsoft::Json::JsonTextWriter __declspec(property(get=__get__textWriter, put=__set__textWriter))  _textWriter;

constexpr void __set__textWriter(Newtonsoft::Json::JsonTextWriter value) ;

constexpr Newtonsoft::Json::JsonTextWriter __get__textWriter() const;

 System::IO::StringWriter __declspec(property(get=__get__sw, put=__set__sw))  _sw;

constexpr void __set__sw(System::IO::StringWriter value) ;

constexpr System::IO::StringWriter __get__sw() const;


// Methods

// Ctor Parameters [CppParam { name: "innerWriter", ty: "Newtonsoft::Json::JsonWriter", modifiers: "", def_value: None }]
explicit TraceJsonWriter(Newtonsoft::Json::JsonWriter innerWriter) ;

/// @brief Method .ctor addr 0x25255c4 size 0x1c0 virtual false final false
 void _ctor(Newtonsoft::Json::JsonWriter innerWriter) ;

/// @brief Method GetSerializedJsonMessage addr 0x2525784 size 0x20 virtual false final false
 ::StringW GetSerializedJsonMessage() ;

/// @brief Method WriteValue addr 0x25257a4 size 0x78 virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x252581c size 0x74 virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x2525890 size 0x70 virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x2525900 size 0x60 virtual true final false
 void WriteValue(System::Nullable_1<uint8_t> value) ;

/// @brief Method WriteValue addr 0x2525960 size 0x70 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x25259d0 size 0x5c virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x2525a2c size 0x70 virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x2525a9c size 0x78 virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x2525b14 size 0x70 virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteUndefined addr 0x2525b84 size 0x60 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteNull addr 0x2525be4 size 0x60 virtual true final false
 void WriteNull() ;

/// @brief Method WriteValue addr 0x2525c44 size 0x70 virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x2525cb4 size 0x78 virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x2525d2c size 0x70 virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x2525d9c size 0x70 virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x2525e0c size 0x5c virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteValue addr 0x2525e68 size 0x70 virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x2525ed8 size 0x70 virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x2525f48 size 0x70 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x2525fb8 size 0x70 virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x2526028 size 0x70 virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x2526098 size 0x70 virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x2526108 size 0x5c virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteValue addr 0x2526164 size 0x70 virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteWhitespace addr 0x25261d4 size 0x5c virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteComment addr 0x2526230 size 0x5c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteStartArray addr 0x252628c size 0x48 virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteEndArray addr 0x25262d4 size 0x44 virtual true final false
 void WriteEndArray() ;

/// @brief Method WriteStartConstructor addr 0x2526318 size 0x58 virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteEndConstructor addr 0x2526370 size 0x4c virtual true final false
 void WriteEndConstructor() ;

/// @brief Method WritePropertyName addr 0x25263bc size 0x60 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method WritePropertyName addr 0x252641c size 0x6c virtual true final false
 void WritePropertyName(::StringW name, bool escape) ;

/// @brief Method WriteStartObject addr 0x2526488 size 0x48 virtual true final false
 void WriteStartObject() ;

/// @brief Method WriteEndObject addr 0x25264d0 size 0x44 virtual true final false
 void WriteEndObject() ;

/// @brief Method WriteRawValue addr 0x2526514 size 0x70 virtual true final false
 void WriteRawValue(::StringW json) ;

/// @brief Method WriteRaw addr 0x2526584 size 0x50 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method Close addr 0x25265d4 size 0x40 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x2526614 size 0x38 virtual true final false
 void Flush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::TraceJsonWriter, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
