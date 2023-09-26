#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::IO {
class TextReader;
}
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json::Utilities {
struct StringBuffer;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextReader;
}
// Type: Newtonsoft.Json::JsonTextReader
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11785))
// CS Name: Newtonsoft.Json.JsonTextReader
class CORDL_TYPE JsonTextReader : public Newtonsoft::Json::JsonReader {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::IJsonLineInfo
constexpr operator  Newtonsoft::Json::IJsonLineInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~JsonTextReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: " const&", def_value: None }]
constexpr JsonTextReader(JsonTextReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None }]
constexpr JsonTextReader(JsonTextReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonTextReader(void* ptr) noexcept : Newtonsoft::Json::JsonReader(ptr) {
}


  constexpr JsonTextReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonTextReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonTextReader& operator=(JsonTextReader&& o) noexcept = default;
  constexpr JsonTextReader& operator=(JsonTextReader const& o) noexcept = default;
                


// Fields

/// @brief Field UnicodeReplacementChar offset 0
static constexpr char16_t  UnicodeReplacementChar{�};

/// @brief Field MaximumJavascriptIntegerCharacterLength offset 0
static constexpr int32_t  MaximumJavascriptIntegerCharacterLength{380};

 System::IO::TextReader __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(System::IO::TextReader value) ;

constexpr System::IO::TextReader __get__reader() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__chars, put=__set__chars))  _chars;

constexpr void __set__chars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__chars() const;

 int32_t __declspec(property(get=__get__charsUsed, put=__set__charsUsed))  _charsUsed;

constexpr void __set__charsUsed(int32_t value) ;

constexpr int32_t __get__charsUsed() const;

 int32_t __declspec(property(get=__get__charPos, put=__set__charPos))  _charPos;

constexpr void __set__charPos(int32_t value) ;

constexpr int32_t __get__charPos() const;

 int32_t __declspec(property(get=__get__lineStartPos, put=__set__lineStartPos))  _lineStartPos;

constexpr void __set__lineStartPos(int32_t value) ;

constexpr int32_t __get__lineStartPos() const;

 int32_t __declspec(property(get=__get__lineNumber, put=__set__lineNumber))  _lineNumber;

constexpr void __set__lineNumber(int32_t value) ;

constexpr int32_t __get__lineNumber() const;

 bool __declspec(property(get=__get__isEndOfFile, put=__set__isEndOfFile))  _isEndOfFile;

constexpr void __set__isEndOfFile(bool value) ;

constexpr bool __get__isEndOfFile() const;

 Newtonsoft::Json::Utilities::StringBuffer __declspec(property(get=__get__stringBuffer, put=__set__stringBuffer))  _stringBuffer;

constexpr void __set__stringBuffer(Newtonsoft::Json::Utilities::StringBuffer value) ;

constexpr Newtonsoft::Json::Utilities::StringBuffer __get__stringBuffer() const;

 Newtonsoft::Json::Utilities::StringReference __declspec(property(get=__get__stringReference, put=__set__stringReference))  _stringReference;

constexpr void __set__stringReference(Newtonsoft::Json::Utilities::StringReference value) ;

constexpr Newtonsoft::Json::Utilities::StringReference __get__stringReference() const;

 Newtonsoft::Json::IArrayPool_1<char16_t> __declspec(property(get=__get__arrayPool, put=__set__arrayPool))  _arrayPool;

constexpr void __set__arrayPool(Newtonsoft::Json::IArrayPool_1<char16_t> value) ;

constexpr Newtonsoft::Json::IArrayPool_1<char16_t> __get__arrayPool() const;

 Newtonsoft::Json::Utilities::PropertyNameTable __declspec(property(get=__get_NameTable, put=__set_NameTable))  NameTable;

constexpr void __set_NameTable(Newtonsoft::Json::Utilities::PropertyNameTable value) ;

constexpr Newtonsoft::Json::Utilities::PropertyNameTable __get_NameTable() const;


// Properties

 Newtonsoft::Json::IArrayPool_1<char16_t> __declspec(property(get=get_ArrayPool, put=set_ArrayPool))  ArrayPool;

 int32_t __declspec(property(get=get_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition))  LinePosition;


// Methods

// Ctor Parameters [CppParam { name: "reader", ty: "System::IO::TextReader", modifiers: "", def_value: None }]
explicit JsonTextReader(System::IO::TextReader reader) ;

/// @brief Method .ctor addr 0x24fb640 size 0x9c virtual false final false
 void _ctor(System::IO::TextReader reader) ;

/// @brief Method get_ArrayPool addr 0x24fb714 size 0x8 virtual false final false
 Newtonsoft::Json::IArrayPool_1<char16_t> get_ArrayPool() ;

/// @brief Method set_ArrayPool addr 0x24fb71c size 0x60 virtual false final false
 void set_ArrayPool(Newtonsoft::Json::IArrayPool_1<char16_t> value) ;

/// @brief Method EnsureBufferNotEmpty addr 0x24fb77c size 0x54 virtual false final false
 void EnsureBufferNotEmpty() ;

/// @brief Method OnNewLine addr 0x24fb7d0 size 0x10 virtual false final false
 void OnNewLine(int32_t pos) ;

/// @brief Method ParseString addr 0x24fb7e0 size 0x3b8 virtual false final false
 void ParseString(char16_t quote, Newtonsoft::Json::ReadType readType) ;

/// @brief Method BlockCopyChars addr 0x24fc2d8 size 0x14 virtual false final false
static void BlockCopyChars(::ArrayW<char16_t> src, int32_t srcOffset, ::ArrayW<char16_t> dst, int32_t dstOffset, int32_t count) ;

/// @brief Method ShiftBufferIfNeeded addr 0x24fbb98 size 0xa8 virtual false final false
 void ShiftBufferIfNeeded() ;

/// @brief Method ReadData addr 0x24fc2ec size 0xc virtual false final false
 int32_t ReadData(bool append) ;

/// @brief Method ReadData addr 0x24fc2f8 size 0x20c virtual false final false
 int32_t ReadData(bool append, int32_t charsRequired) ;

/// @brief Method EnsureChars addr 0x24fc504 size 0x20 virtual false final false
 bool EnsureChars(int32_t relativePosition, bool append) ;

/// @brief Method ReadChars addr 0x24fc524 size 0x70 virtual false final false
 bool ReadChars(int32_t relativePosition, bool append) ;

/// @brief Method Read addr 0x24fc594 size 0x218 virtual true final false
 bool Read() ;

/// @brief Method ReadAsInt32 addr 0x24fd3dc size 0x90 virtual true final false
 System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadAsDateTime addr 0x24fd924 size 0x90 virtual true final false
 System::Nullable_1<System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsString addr 0x24fe0c4 size 0x64 virtual true final false
 ::StringW ReadAsString() ;

/// @brief Method ReadAsBytes addr 0x24fe128 size 0x480 virtual true final false
 ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadStringValue addr 0x24fd9b4 size 0x710 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadStringValue(Newtonsoft::Json::ReadType readType) ;

/// @brief Method CreateUnexpectedCharacterException addr 0x24febb8 size 0xd0 virtual false final false
 Newtonsoft::Json::JsonReaderException CreateUnexpectedCharacterException(char16_t c) ;

/// @brief Method ReadAsBoolean addr 0x2500610 size 0x4e0 virtual true final false
 System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ProcessValueComma addr 0x24feb60 size 0x58 virtual false final false
 void ProcessValueComma() ;

/// @brief Method ReadNumberValue addr 0x24fd46c size 0x4b8 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadNumberValue(Newtonsoft::Json::ReadType readType) ;

/// @brief Method ReadAsDateTimeOffset addr 0x25013b8 size 0xcc virtual true final false
 System::Nullable_1<System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal addr 0x2501484 size 0xcc virtual true final false
 System::Nullable_1<System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble addr 0x2501550 size 0xb4 virtual true final false
 System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method HandleNull addr 0x24fea90 size 0xd0 virtual false final false
 void HandleNull() ;

/// @brief Method ReadFinished addr 0x24fed24 size 0x150 virtual false final false
 void ReadFinished() ;

/// @brief Method ReadNullChar addr 0x24fe5a8 size 0x50 virtual false final false
 bool ReadNullChar() ;

/// @brief Method EnsureBuffer addr 0x24fc7ac size 0x44 virtual false final false
 void EnsureBuffer() ;

/// @brief Method ReadStringIntoBuffer addr 0x24fbc40 size 0x498 virtual false final false
 void ReadStringIntoBuffer(char16_t quote) ;

/// @brief Method WriteCharToBuffer addr 0x250180c size 0x50 virtual false final false
 void WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition) ;

/// @brief Method ParseUnicode addr 0x25016fc size 0x110 virtual false final false
 char16_t ParseUnicode() ;

/// @brief Method ReadNumberIntoBuffer addr 0x250185c size 0x1d0 virtual false final false
 void ReadNumberIntoBuffer() ;

/// @brief Method ClearRecentString addr 0x2501a2c size 0xc virtual false final false
 void ClearRecentString() ;

/// @brief Method ParsePostValue addr 0x24fcd9c size 0x270 virtual false final false
 bool ParsePostValue() ;

/// @brief Method ParseObject addr 0x24fcc0c size 0x190 virtual false final false
 bool ParseObject() ;

/// @brief Method ParseProperty addr 0x2501a38 size 0x224 virtual false final false
 bool ParseProperty() ;

/// @brief Method ValidIdentifierChar addr 0x2501c5c size 0x80 virtual false final false
 bool ValidIdentifierChar(char16_t value) ;

/// @brief Method ParseUnquotedProperty addr 0x2501cdc size 0x1b4 virtual false final false
 void ParseUnquotedProperty() ;

/// @brief Method ParseValue addr 0x24fc7f0 size 0x41c virtual false final false
 bool ParseValue() ;

/// @brief Method ProcessLineFeed addr 0x24fed08 size 0x1c virtual false final false
 void ProcessLineFeed() ;

/// @brief Method ProcessCarriageReturn addr 0x24fec88 size 0x80 virtual false final false
 void ProcessCarriageReturn(bool append) ;

/// @brief Method EatWhitespace addr 0x24fd00c size 0x130 virtual false final false
 bool EatWhitespace(bool oneOrMore) ;

/// @brief Method ParseConstructor addr 0x250204c size 0x328 virtual false final false
 void ParseConstructor() ;

/// @brief Method ParseNumber addr 0x24ff4c4 size 0xde0 virtual false final false
 void ParseNumber(Newtonsoft::Json::ReadType readType) ;

/// @brief Method ParseComment addr 0x24fd148 size 0x28c virtual false final false
 void ParseComment(bool setToken) ;

/// @brief Method EndComment addr 0x25024a4 size 0x60 virtual false final false
 void EndComment(bool setToken, int32_t initialPosition, int32_t endPosition) ;

/// @brief Method MatchValue addr 0x2502504 size 0x104 virtual false final false
 bool MatchValue(::StringW value) ;

/// @brief Method MatchValueWithTrailingSeparator addr 0x25002a4 size 0xa4 virtual false final false
 bool MatchValueWithTrailingSeparator(::StringW value) ;

/// @brief Method IsSeparator addr 0x2502608 size 0x158 virtual false final false
 bool IsSeparator(char16_t c) ;

/// @brief Method ParseTrue addr 0x2501e90 size 0xe0 virtual false final false
 void ParseTrue() ;

/// @brief Method ParseNull addr 0x2501604 size 0xac virtual false final false
 void ParseNull() ;

/// @brief Method ParseUndefined addr 0x2502374 size 0xac virtual false final false
 void ParseUndefined() ;

/// @brief Method ParseFalse addr 0x2501f70 size 0xdc virtual false final false
 void ParseFalse() ;

/// @brief Method ParseNumberNegativeInfinity addr 0x24ff364 size 0x160 virtual false final false
 ::bs_hook::Il2CppWrapperType ParseNumberNegativeInfinity(Newtonsoft::Json::ReadType readType) ;

/// @brief Method ParseNumberPositiveInfinity addr 0x2500350 size 0x160 virtual false final false
 ::bs_hook::Il2CppWrapperType ParseNumberPositiveInfinity(Newtonsoft::Json::ReadType readType) ;

/// @brief Method ParseNumberNaN addr 0x25004b0 size 0x160 virtual false final false
 ::bs_hook::Il2CppWrapperType ParseNumberNaN(Newtonsoft::Json::ReadType readType) ;

/// @brief Method Close addr 0x2502760 size 0x60 virtual true final false
 void Close() ;

/// @brief Method HasLineInfo addr 0x25027d4 size 0x8 virtual true final true
 bool HasLineInfo() ;

/// @brief Method get_LineNumber addr 0x25027dc size 0x48 virtual true final true
 int32_t get_LineNumber() ;

/// @brief Method get_LinePosition addr 0x2502824 size 0xc virtual true final true
 int32_t get_LinePosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonTextReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonTextReader, "Newtonsoft.Json", "JsonTextReader");
