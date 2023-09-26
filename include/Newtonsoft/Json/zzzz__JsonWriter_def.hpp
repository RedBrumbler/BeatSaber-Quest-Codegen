#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct WriteState;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json {
class JsonWriterException;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Uri;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct Newtonsoft__Json__JsonWriter__State;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Type: ::State
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11803))
// CS Name: Newtonsoft.Json.JsonWriter::State
struct CORDL_TYPE Newtonsoft__Json__JsonWriter__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__JsonWriter__State(int32_t value__) noexcept;


                    constexpr Newtonsoft__Json__JsonWriter__State(Newtonsoft__Json__JsonWriter__State const&) = default;
                    constexpr Newtonsoft__Json__JsonWriter__State(Newtonsoft__Json__JsonWriter__State&&) = default;
                    constexpr Newtonsoft__Json__JsonWriter__State& operator=(Newtonsoft__Json__JsonWriter__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__JsonWriter__State& operator=(Newtonsoft__Json__JsonWriter__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__JsonWriter__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Newtonsoft__Json__JsonWriter__State_Unwrapped : int32_t {
__Start = 0,
__Property = 1,
__ObjectStart = 2,
__Object = 3,
__ArrayStart = 4,
__Array = 5,
__ConstructorStart = 6,
__Constructor = 7,
__Closed = 8,
__Error = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Newtonsoft__Json__JsonWriter__State_Unwrapped () const noexcept {
return std::bit_cast<__Newtonsoft__Json__JsonWriter__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Start offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Start;

/// @brief Field Property offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Property;

/// @brief Field ObjectStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const ObjectStart;

/// @brief Field Object offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Object;

/// @brief Field ArrayStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const ArrayStart;

/// @brief Field Array offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Array;

/// @brief Field ConstructorStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const ConstructorStart;

/// @brief Field Constructor offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Constructor;

/// @brief Field Closed offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Closed;

/// @brief Field Error offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
// Type: Newtonsoft.Json::JsonWriter
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11804))
// CS Name: Newtonsoft.Json.JsonWriter
class CORDL_TYPE JsonWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using State = Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~JsonWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: " const&", def_value: None }]
constexpr JsonWriter(JsonWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
constexpr JsonWriter(JsonWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonWriter& operator=(JsonWriter&& o) noexcept = default;
  constexpr JsonWriter& operator=(JsonWriter const& o) noexcept = default;
                


// Fields

static ::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> __declspec(property(get=__get_StateArray, put=__set_StateArray))  StateArray;

static void __set_StateArray(::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> value) ;

static ::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> __get_StateArray() ;

static ::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> __declspec(property(get=__get_StateArrayTempate, put=__set_StateArrayTempate))  StateArrayTempate;

static void __set_StateArrayTempate(::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> value) ;

static ::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> __get_StateArrayTempate() ;

 System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> __get__stack() const;

 Newtonsoft::Json::JsonPosition __declspec(property(get=__get__currentPosition, put=__set__currentPosition))  _currentPosition;

constexpr void __set__currentPosition(Newtonsoft::Json::JsonPosition value) ;

constexpr Newtonsoft::Json::JsonPosition __get__currentPosition() const;

 Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State __declspec(property(get=__get__currentState, put=__set__currentState))  _currentState;

constexpr void __set__currentState(Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State value) ;

constexpr Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State __get__currentState() const;

 Newtonsoft::Json::Formatting __declspec(property(get=__get__formatting, put=__set__formatting))  _formatting;

constexpr void __set__formatting(Newtonsoft::Json::Formatting value) ;

constexpr Newtonsoft::Json::Formatting __get__formatting() const;

 bool __declspec(property(get=__get__CloseOutput_k__BackingField, put=__set__CloseOutput_k__BackingField))  _CloseOutput_k__BackingField;

constexpr void __set__CloseOutput_k__BackingField(bool value) ;

constexpr bool __get__CloseOutput_k__BackingField() const;

 Newtonsoft::Json::DateFormatHandling __declspec(property(get=__get__dateFormatHandling, put=__set__dateFormatHandling))  _dateFormatHandling;

constexpr void __set__dateFormatHandling(Newtonsoft::Json::DateFormatHandling value) ;

constexpr Newtonsoft::Json::DateFormatHandling __get__dateFormatHandling() const;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=__get__dateTimeZoneHandling, put=__set__dateTimeZoneHandling))  _dateTimeZoneHandling;

constexpr void __set__dateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

constexpr Newtonsoft::Json::DateTimeZoneHandling __get__dateTimeZoneHandling() const;

 Newtonsoft::Json::StringEscapeHandling __declspec(property(get=__get__stringEscapeHandling, put=__set__stringEscapeHandling))  _stringEscapeHandling;

constexpr void __set__stringEscapeHandling(Newtonsoft::Json::StringEscapeHandling value) ;

constexpr Newtonsoft::Json::StringEscapeHandling __get__stringEscapeHandling() const;

 Newtonsoft::Json::FloatFormatHandling __declspec(property(get=__get__floatFormatHandling, put=__set__floatFormatHandling))  _floatFormatHandling;

constexpr void __set__floatFormatHandling(Newtonsoft::Json::FloatFormatHandling value) ;

constexpr Newtonsoft::Json::FloatFormatHandling __get__floatFormatHandling() const;

 ::StringW __declspec(property(get=__get__dateFormatString, put=__set__dateFormatString))  _dateFormatString;

constexpr void __set__dateFormatString(::StringW value) ;

constexpr ::StringW __get__dateFormatString() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__culture() const;


// Properties

 bool __declspec(property(get=get_CloseOutput, put=set_CloseOutput))  CloseOutput;

 int32_t __declspec(property(get=get_Top))  Top;

 Newtonsoft::Json::WriteState __declspec(property(get=get_WriteState))  WriteState;

 ::StringW __declspec(property(get=get_ContainerPath))  ContainerPath;

 ::StringW __declspec(property(get=get_Path))  Path;

 Newtonsoft::Json::Formatting __declspec(property(get=get_Formatting, put=set_Formatting))  Formatting;

 Newtonsoft::Json::DateFormatHandling __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling))  DateFormatHandling;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling))  DateTimeZoneHandling;

 Newtonsoft::Json::StringEscapeHandling __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling))  StringEscapeHandling;

 Newtonsoft::Json::FloatFormatHandling __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling))  FloatFormatHandling;

 ::StringW __declspec(property(get=get_DateFormatString, put=set_DateFormatString))  DateFormatString;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;


// Methods

/// @brief Method BuildStateArray addr 0x250da30 size 0x570 virtual false final false
static ::ArrayW<::ArrayW<Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State>> BuildStateArray() ;

/// @brief Method get_CloseOutput addr 0x250eb94 size 0x8 virtual false final false
 bool get_CloseOutput() ;

/// @brief Method set_CloseOutput addr 0x250eb9c size 0xc virtual false final false
 void set_CloseOutput(bool value) ;

/// @brief Method get_Top addr 0x250eba8 size 0x50 virtual false final false
 int32_t get_Top() ;

/// @brief Method get_WriteState addr 0x250ec00 size 0x9c virtual false final false
 Newtonsoft::Json::WriteState get_WriteState() ;

/// @brief Method get_ContainerPath addr 0x250ec9c size 0xac virtual false final false
 ::StringW get_ContainerPath() ;

/// @brief Method get_Path addr 0x250ed48 size 0x124 virtual false final false
 ::StringW get_Path() ;

/// @brief Method get_Formatting addr 0x250ee6c size 0x8 virtual false final false
 Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method set_Formatting addr 0x250ee74 size 0x64 virtual false final false
 void set_Formatting(Newtonsoft::Json::Formatting value) ;

/// @brief Method get_DateFormatHandling addr 0x250eed8 size 0x8 virtual false final false
 Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// @brief Method set_DateFormatHandling addr 0x250eee0 size 0x64 virtual false final false
 void set_DateFormatHandling(Newtonsoft::Json::DateFormatHandling value) ;

/// @brief Method get_DateTimeZoneHandling addr 0x250ef44 size 0x8 virtual false final false
 Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method set_DateTimeZoneHandling addr 0x250ef4c size 0x64 virtual false final false
 void set_DateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

/// @brief Method get_StringEscapeHandling addr 0x250efb0 size 0x8 virtual false final false
 Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method set_StringEscapeHandling addr 0x250efb8 size 0x6c virtual false final false
 void set_StringEscapeHandling(Newtonsoft::Json::StringEscapeHandling value) ;

/// @brief Method OnStringEscapeHandlingChanged addr 0x250f024 size 0x4 virtual true final false
 void OnStringEscapeHandlingChanged() ;

/// @brief Method get_FloatFormatHandling addr 0x250f028 size 0x8 virtual false final false
 Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method set_FloatFormatHandling addr 0x250f030 size 0x64 virtual false final false
 void set_FloatFormatHandling(Newtonsoft::Json::FloatFormatHandling value) ;

/// @brief Method get_DateFormatString addr 0x250f094 size 0x8 virtual false final false
 ::StringW get_DateFormatString() ;

/// @brief Method set_DateFormatString addr 0x250f09c size 0x8 virtual false final false
 void set_DateFormatString(::StringW value) ;

/// @brief Method get_Culture addr 0x250f0a4 size 0x68 virtual false final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x250f10c size 0x8 virtual false final false
 void set_Culture(System::Globalization::CultureInfo value) ;

// Ctor Parameters []
explicit JsonWriter() ;

/// @brief Method .ctor addr 0x250f114 size 0x2c virtual false final false
 void _ctor() ;

/// @brief Method UpdateScopeWithFinishedValue addr 0x250f140 size 0x18 virtual false final false
 void UpdateScopeWithFinishedValue() ;

/// @brief Method Push addr 0x250f158 size 0x178 virtual false final false
 void Push(Newtonsoft::Json::JsonContainerType value) ;

/// @brief Method Pop addr 0x250f2d0 size 0xd0 virtual false final false
 Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Peek addr 0x250ebf8 size 0x8 virtual false final false
 Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Flush addr 0x0 size 0xffffffffffffffff virtual true final false
 void Flush() ;

/// @brief Method Close addr 0x250f3a0 size 0x4 virtual true final false
 void Close() ;

/// @brief Method WriteStartObject addr 0x250f3e4 size 0xc virtual true final false
 void WriteStartObject() ;

/// @brief Method WriteEndObject addr 0x250f430 size 0x8 virtual true final false
 void WriteEndObject() ;

/// @brief Method WriteStartArray addr 0x250f43c size 0xc virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteEndArray addr 0x250f448 size 0x8 virtual true final false
 void WriteEndArray() ;

/// @brief Method WriteStartConstructor addr 0x250f450 size 0xc virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteEndConstructor addr 0x250f45c size 0x8 virtual true final false
 void WriteEndConstructor() ;

/// @brief Method WritePropertyName addr 0x250f464 size 0x10 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method WritePropertyName addr 0x250f484 size 0x10 virtual true final false
 void WritePropertyName(::StringW name, bool escape) ;

/// @brief Method WriteEnd addr 0x250f494 size 0x8 virtual true final false
 void WriteEnd() ;

/// @brief Method WriteToken addr 0x250f558 size 0x8 virtual false final false
 void WriteToken(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method WriteToken addr 0x250f560 size 0x7c virtual false final false
 void WriteToken(Newtonsoft::Json::JsonReader reader, bool writeChildren) ;

/// @brief Method WriteToken addr 0x250f630 size 0x5cc virtual false final false
 void WriteToken(Newtonsoft::Json::JsonToken token, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteToken addr 0x250fcfc size 0x8 virtual false final false
 void WriteToken(Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteToken addr 0x250fd04 size 0x1c0 virtual true final false
 void WriteToken(Newtonsoft::Json::JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) ;

/// @brief Method WriteConstructorDate addr 0x250fed4 size 0x1f0 virtual false final false
 void WriteConstructorDate(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method WriteEnd addr 0x250f49c size 0xbc virtual false final false
 void WriteEnd(Newtonsoft::Json::JsonContainerType type) ;

/// @brief Method AutoCompleteAll addr 0x250f3a4 size 0x40 virtual false final false
 void AutoCompleteAll() ;

/// @brief Method GetCloseTokenForType addr 0x251015c size 0x88 virtual false final false
 Newtonsoft::Json::JsonToken GetCloseTokenForType(Newtonsoft::Json::JsonContainerType type) ;

/// @brief Method AutoCompleteClose addr 0x25101e4 size 0x1e0 virtual false final false
 void AutoCompleteClose(Newtonsoft::Json::JsonContainerType type) ;

/// @brief Method WriteEnd addr 0x25103c4 size 0x4 virtual true final false
 void WriteEnd(Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteIndent addr 0x25103c8 size 0x4 virtual true final false
 void WriteIndent() ;

/// @brief Method WriteValueDelimiter addr 0x25103cc size 0x4 virtual true final false
 void WriteValueDelimiter() ;

/// @brief Method WriteIndentSpace addr 0x25103d0 size 0x4 virtual true final false
 void WriteIndentSpace() ;

/// @brief Method AutoComplete addr 0x25103d4 size 0x204 virtual false final false
 void AutoComplete(Newtonsoft::Json::JsonToken tokenBeingWritten) ;

/// @brief Method WriteNull addr 0x25106b4 size 0x1c virtual true final false
 void WriteNull() ;

/// @brief Method WriteUndefined addr 0x25106e8 size 0x1c virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteRaw addr 0x2510704 size 0x4 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method WriteRawValue addr 0x251070c size 0x50 virtual true final false
 void WriteRawValue(::StringW json) ;

/// @brief Method WriteValue addr 0x251075c size 0x1c virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x2510778 size 0x1c virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x2510794 size 0x1c virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x25107b0 size 0x1c virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x25107cc size 0x1c virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x25107e8 size 0x1c virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x2510804 size 0x1c virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteValue addr 0x2510820 size 0x1c virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x251083c size 0x1c virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x2510858 size 0x1c virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteValue addr 0x2510874 size 0x1c virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x2510890 size 0x1c virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x25108ac size 0x1c virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x25108c8 size 0x1c virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x25108e4 size 0x1c virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x2510900 size 0x1c virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x251091c size 0x1c virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x2510938 size 0x1c virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x2510954 size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<int32_t> value) ;

/// @brief Method WriteValue addr 0x25109d0 size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<uint32_t> value) ;

/// @brief Method WriteValue addr 0x2510a4c size 0x8c virtual true final false
 void WriteValue(System::Nullable_1<int64_t> value) ;

/// @brief Method WriteValue addr 0x2510ad8 size 0x8c virtual true final false
 void WriteValue(System::Nullable_1<uint64_t> value) ;

/// @brief Method WriteValue addr 0x2510b64 size 0x80 virtual true final false
 void WriteValue(System::Nullable_1<float_t> value) ;

/// @brief Method WriteValue addr 0x2510be4 size 0x90 virtual true final false
 void WriteValue(System::Nullable_1<double_t> value) ;

/// @brief Method WriteValue addr 0x2510c74 size 0x88 virtual true final false
 void WriteValue(System::Nullable_1<bool> value) ;

/// @brief Method WriteValue addr 0x2510cfc size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<int16_t> value) ;

/// @brief Method WriteValue addr 0x2510d78 size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<uint16_t> value) ;

/// @brief Method WriteValue addr 0x2510df4 size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<char16_t> value) ;

/// @brief Method WriteValue addr 0x2510e70 size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<uint8_t> value) ;

/// @brief Method WriteValue addr 0x2510eec size 0x7c virtual true final false
 void WriteValue(System::Nullable_1<int8_t> value) ;

/// @brief Method WriteValue addr 0x2510f68 size 0x80 virtual true final false
 void WriteValue(System::Nullable_1<System::Decimal> value) ;

/// @brief Method WriteValue addr 0x2510fe8 size 0x8c virtual true final false
 void WriteValue(System::Nullable_1<System::DateTime> value) ;

/// @brief Method WriteValue addr 0x2511074 size 0x80 virtual true final false
 void WriteValue(System::Nullable_1<System::DateTimeOffset> value) ;

/// @brief Method WriteValue addr 0x25110f4 size 0x84 virtual true final false
 void WriteValue(System::Nullable_1<System::Guid> value) ;

/// @brief Method WriteValue addr 0x2511178 size 0x8c virtual true final false
 void WriteValue(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method WriteValue addr 0x2511204 size 0x30 virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x2511234 size 0xac virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteValue addr 0x25112e0 size 0xd4 virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteComment addr 0x2512534 size 0x8 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteWhitespace addr 0x2512544 size 0x4 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method System.IDisposable.Dispose addr 0x25125a4 size 0x70 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x2512614 size 0x20 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method WriteValue addr 0x251141c size 0x1118 virtual false final false
static void WriteValue(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CreateUnsupportedTypeException addr 0x2512720 size 0xb4 virtual false final false
static Newtonsoft::Json::JsonWriterException CreateUnsupportedTypeException(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SetWriteState addr 0x251287c size 0x1c0 virtual false final false
 void SetWriteState(Newtonsoft::Json::JsonToken token, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method InternalWriteEnd addr 0x250f438 size 0x4 virtual false final false
 void InternalWriteEnd(Newtonsoft::Json::JsonContainerType container) ;

/// @brief Method InternalWritePropertyName addr 0x250f474 size 0x10 virtual false final false
 void InternalWritePropertyName(::StringW name) ;

/// @brief Method InternalWriteRaw addr 0x2510708 size 0x4 virtual false final false
 void InternalWriteRaw() ;

/// @brief Method InternalWriteStart addr 0x250f3f0 size 0x40 virtual false final false
 void InternalWriteStart(Newtonsoft::Json::JsonToken token, Newtonsoft::Json::JsonContainerType container) ;

/// @brief Method InternalWriteValue addr 0x25106d0 size 0x18 virtual false final false
 void InternalWriteValue(Newtonsoft::Json::JsonToken token) ;

/// @brief Method InternalWriteWhitespace addr 0x2512548 size 0x5c virtual false final false
 void InternalWriteWhitespace(::StringW ws) ;

/// @brief Method InternalWriteComment addr 0x251253c size 0x8 virtual false final false
 void InternalWriteComment() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Newtonsoft__Json__JsonWriter__State, "Newtonsoft.Json", "JsonWriter/State");
NEED_NO_BOX(Newtonsoft::Json::JsonWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonWriter, "Newtonsoft.Json", "JsonWriter");
