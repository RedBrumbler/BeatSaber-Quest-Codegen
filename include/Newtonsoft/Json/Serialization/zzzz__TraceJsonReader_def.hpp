#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System::IO {
class StringWriter;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonReader;
}
// Type: Newtonsoft.Json.Serialization::TraceJsonReader
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11871))
// CS Name: Newtonsoft.Json.Serialization.TraceJsonReader
class CORDL_TYPE TraceJsonReader : public Newtonsoft::Json::JsonReader {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::IJsonLineInfo
constexpr operator  Newtonsoft::Json::IJsonLineInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TraceJsonReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: " const&", def_value: None }]
constexpr TraceJsonReader(TraceJsonReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: "&&", def_value: None }]
constexpr TraceJsonReader(TraceJsonReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceJsonReader(void* ptr) noexcept : Newtonsoft::Json::JsonReader(ptr) {
}


  constexpr TraceJsonReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceJsonReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceJsonReader& operator=(TraceJsonReader&& o) noexcept = default;
  constexpr TraceJsonReader& operator=(TraceJsonReader const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::JsonReader __declspec(property(get=__get__innerReader, put=__set__innerReader))  _innerReader;

constexpr void __set__innerReader(Newtonsoft::Json::JsonReader value) ;

constexpr Newtonsoft::Json::JsonReader __get__innerReader() const;

 Newtonsoft::Json::JsonTextWriter __declspec(property(get=__get__textWriter, put=__set__textWriter))  _textWriter;

constexpr void __set__textWriter(Newtonsoft::Json::JsonTextWriter value) ;

constexpr Newtonsoft::Json::JsonTextWriter __get__textWriter() const;

 System::IO::StringWriter __declspec(property(get=__get__sw, put=__set__sw))  _sw;

constexpr void __set__sw(System::IO::StringWriter value) ;

constexpr System::IO::StringWriter __get__sw() const;


// Properties

 int32_t __declspec(property(get=get_Depth))  Depth;

 ::StringW __declspec(property(get=get_Path))  Path;

 char16_t __declspec(property(get=get_QuoteChar, put=set_QuoteChar))  QuoteChar;

 Newtonsoft::Json::JsonToken __declspec(property(get=get_TokenType))  TokenType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber))  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition))  Newtonsoft_Json_IJsonLineInfo_LinePosition;


// Methods

// Ctor Parameters [CppParam { name: "innerReader", ty: "Newtonsoft::Json::JsonReader", modifiers: "", def_value: None }]
explicit TraceJsonReader(Newtonsoft::Json::JsonReader innerReader) ;

/// @brief Method .ctor addr 0x2524d54 size 0x13c virtual false final false
 void _ctor(Newtonsoft::Json::JsonReader innerReader) ;

/// @brief Method GetDeserializedJsonMessage addr 0x2524e90 size 0x20 virtual false final false
 ::StringW GetDeserializedJsonMessage() ;

/// @brief Method Read addr 0x2524eb0 size 0x64 virtual true final false
 bool Read() ;

/// @brief Method ReadAsInt32 addr 0x2524f14 size 0x68 virtual true final false
 System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadAsString addr 0x2524f7c size 0x68 virtual true final false
 ::StringW ReadAsString() ;

/// @brief Method ReadAsBytes addr 0x2524fe4 size 0x68 virtual true final false
 ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadAsDecimal addr 0x252504c size 0x9c virtual true final false
 System::Nullable_1<System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble addr 0x25250e8 size 0x6c virtual true final false
 System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsBoolean addr 0x2525154 size 0x60 virtual true final false
 System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ReadAsDateTime addr 0x25251b4 size 0x6c virtual true final false
 System::Nullable_1<System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset addr 0x2525220 size 0x7c virtual true final false
 System::Nullable_1<System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method get_Depth addr 0x252529c size 0x20 virtual true final false
 int32_t get_Depth() ;

/// @brief Method get_Path addr 0x25252bc size 0x20 virtual true final false
 ::StringW get_Path() ;

/// @brief Method get_QuoteChar addr 0x25252dc size 0x20 virtual true final false
 char16_t get_QuoteChar() ;

/// @brief Method set_QuoteChar addr 0x25252fc size 0x20 virtual true final false
 void set_QuoteChar(char16_t value) ;

/// @brief Method get_TokenType addr 0x252531c size 0x20 virtual true final false
 Newtonsoft::Json::JsonToken get_TokenType() ;

/// @brief Method get_Value addr 0x252533c size 0x20 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_ValueType addr 0x252535c size 0x20 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method Close addr 0x252537c size 0x24 virtual true final false
 void Close() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo addr 0x25253a0 size 0xb4 virtual true final true
 bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber addr 0x2525454 size 0xb8 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition addr 0x252550c size 0xb8 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::TraceJsonReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::TraceJsonReader, "Newtonsoft.Json.Serialization", "TraceJsonReader");
