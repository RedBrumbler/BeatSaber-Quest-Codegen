#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System {
struct Guid;
}
namespace System {
struct DateTime;
}
namespace System::Xml {
struct ExceptionType;
}
namespace System {
class Uri;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct TimeSpan;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
class ArgumentException;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlConvert;
}
// Type: System.Xml::XmlConvert
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11509))
// CS Name: System.Xml.XmlConvert
class CORDL_TYPE XmlConvert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlConvert() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: " const&", def_value: None }]
constexpr XmlConvert(XmlConvert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None }]
constexpr XmlConvert(XmlConvert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlConvert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlConvert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlConvert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlConvert& operator=(XmlConvert&& o) noexcept = default;
  constexpr XmlConvert& operator=(XmlConvert const& o) noexcept = default;
                


// Fields

static System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

static void __set_xmlCharType(System::Xml::XmlCharType value) ;

static System::Xml::XmlCharType __get_xmlCharType() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_crt, put=__set_crt))  crt;

static void __set_crt(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_crt() ;

static int32_t __declspec(property(get=__get_c_EncodedCharLength, put=__set_c_EncodedCharLength))  c_EncodedCharLength;

static void __set_c_EncodedCharLength(int32_t value) ;

static int32_t __get_c_EncodedCharLength() ;

static System::Text::RegularExpressions::Regex __declspec(property(get=__get_c_EncodeCharPattern, put=__set_c_EncodeCharPattern))  c_EncodeCharPattern;

static void __set_c_EncodeCharPattern(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get_c_EncodeCharPattern() ;

static System::Text::RegularExpressions::Regex __declspec(property(get=__get_c_DecodeCharPattern, put=__set_c_DecodeCharPattern))  c_DecodeCharPattern;

static void __set_c_DecodeCharPattern(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get_c_DecodeCharPattern() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_WhitespaceChars, put=__set_WhitespaceChars))  WhitespaceChars;

static void __set_WhitespaceChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_WhitespaceChars() ;


// Methods

/// @brief Method EncodeName addr 0x273dbf8 size 0x5c virtual false final false
static ::StringW EncodeName(::StringW name) ;

/// @brief Method DecodeName addr 0x273e620 size 0x928 virtual false final false
static ::StringW DecodeName(::StringW name) ;

/// @brief Method EncodeName addr 0x273dc54 size 0x9cc virtual false final false
static ::StringW EncodeName(::StringW name, bool first, bool local) ;

/// @brief Method FromHex addr 0x273ef48 size 0x30 virtual false final false
static int32_t FromHex(char16_t digit) ;

/// @brief Method FromBinHexString addr 0x273ef78 size 0x70 virtual false final false
static ::ArrayW<uint8_t> FromBinHexString(::StringW s, bool allowOddCount) ;

/// @brief Method ToBinHexString addr 0x273efe8 size 0x68 virtual false final false
static ::StringW ToBinHexString(::ArrayW<uint8_t> inArray) ;

/// @brief Method VerifyName addr 0x273f050 size 0x154 virtual false final false
static ::StringW VerifyName(::StringW name) ;

/// @brief Method TryVerifyName addr 0x273f26c size 0x15c virtual false final false
static System::Exception TryVerifyName(::StringW name) ;

/// @brief Method VerifyQName addr 0x273f3c8 size 0x130 virtual false final false
static ::StringW VerifyQName(::StringW name, System::Xml::ExceptionType exceptionType) ;

/// @brief Method VerifyNCName addr 0x273f5d4 size 0x58 virtual false final false
static ::StringW VerifyNCName(::StringW name) ;

/// @brief Method VerifyNCName addr 0x273f62c size 0x158 virtual false final false
static ::StringW VerifyNCName(::StringW name, System::Xml::ExceptionType exceptionType) ;

/// @brief Method TryVerifyNCName addr 0x273f784 size 0xa0 virtual false final false
static System::Exception TryVerifyNCName(::StringW name) ;

/// @brief Method TryVerifyTOKEN addr 0x273f824 size 0x13c virtual false final false
static System::Exception TryVerifyTOKEN(::StringW token) ;

/// @brief Method TryVerifyNMTOKEN addr 0x273f960 size 0x130 virtual false final false
static System::Exception TryVerifyNMTOKEN(::StringW name) ;

/// @brief Method TryVerifyNormalizedString addr 0x273fa90 size 0xcc virtual false final false
static System::Exception TryVerifyNormalizedString(::StringW str) ;

/// @brief Method ToString addr 0x273fb5c size 0x68 virtual false final false
static ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x273fbc4 size 0x54 virtual false final false
static ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x273fc18 size 0x2c virtual false final false
static ::StringW ToString(int8_t value) ;

/// @brief Method ToString addr 0x273fc44 size 0x2c virtual false final false
static ::StringW ToString(int16_t value) ;

/// @brief Method ToString addr 0x273fc70 size 0x2c virtual false final false
static ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x273fc9c size 0x2c virtual false final false
static ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x273fcc8 size 0x2c virtual false final false
static ::StringW ToString(uint8_t value) ;

/// @brief Method ToString addr 0x273fcf4 size 0x2c virtual false final false
static ::StringW ToString(uint16_t value) ;

/// @brief Method ToString addr 0x273fd20 size 0x2c virtual false final false
static ::StringW ToString(uint32_t value) ;

/// @brief Method ToString addr 0x273fd4c size 0x2c virtual false final false
static ::StringW ToString(uint64_t value) ;

/// @brief Method ToString addr 0x273fd78 size 0xfc virtual false final false
static ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x273fee8 size 0xfc virtual false final false
static ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x273ffe4 size 0x58 virtual false final false
static ::StringW ToString(System::TimeSpan value) ;

/// @brief Method ToString addr 0x274003c size 0x1e8 virtual false final false
static ::StringW ToString(System::DateTime value, System::Xml::XmlDateTimeSerializationMode dateTimeOption) ;

/// @brief Method ToString addr 0x274031c size 0x38 virtual false final false
static ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToBoolean addr 0x2740354 size 0x1d0 virtual false final false
static bool ToBoolean(::StringW s) ;

/// @brief Method TryToBoolean addr 0x2740590 size 0x224 virtual false final false
static System::Exception TryToBoolean(::StringW s, ByRef<bool> result) ;

/// @brief Method ToChar addr 0x27407b4 size 0xc8 virtual false final false
static char16_t ToChar(::StringW s) ;

/// @brief Method TryToChar addr 0x274087c size 0x174 virtual false final false
static System::Exception TryToChar(::StringW s, ByRef<char16_t> result) ;

/// @brief Method ToDecimal addr 0x27409f0 size 0x70 virtual false final false
static System::Decimal ToDecimal(::StringW s) ;

/// @brief Method TryToDecimal addr 0x2740a60 size 0x18c virtual false final false
static System::Exception TryToDecimal(::StringW s, ByRef<System::Decimal> result) ;

/// @brief Method ToInteger addr 0x2740bec size 0x70 virtual false final false
static System::Decimal ToInteger(::StringW s) ;

/// @brief Method TryToInteger addr 0x2740c5c size 0x18c virtual false final false
static System::Exception TryToInteger(::StringW s, ByRef<System::Decimal> result) ;

/// @brief Method TryToSByte addr 0x2740de8 size 0x158 virtual false final false
static System::Exception TryToSByte(::StringW s, ByRef<int8_t> result) ;

/// @brief Method TryToInt16 addr 0x2740f40 size 0x158 virtual false final false
static System::Exception TryToInt16(::StringW s, ByRef<int16_t> result) ;

/// @brief Method ToInt32 addr 0x2741098 size 0x28 virtual false final false
static int32_t ToInt32(::StringW s) ;

/// @brief Method TryToInt32 addr 0x27410c0 size 0x158 virtual false final false
static System::Exception TryToInt32(::StringW s, ByRef<int32_t> result) ;

/// @brief Method ToInt64 addr 0x2741218 size 0x28 virtual false final false
static int64_t ToInt64(::StringW s) ;

/// @brief Method TryToInt64 addr 0x2741240 size 0x158 virtual false final false
static System::Exception TryToInt64(::StringW s, ByRef<int64_t> result) ;

/// @brief Method TryToByte addr 0x2741398 size 0x158 virtual false final false
static System::Exception TryToByte(::StringW s, ByRef<uint8_t> result) ;

/// @brief Method TryToUInt16 addr 0x27414f0 size 0x158 virtual false final false
static System::Exception TryToUInt16(::StringW s, ByRef<uint16_t> result) ;

/// @brief Method TryToUInt32 addr 0x2741648 size 0x158 virtual false final false
static System::Exception TryToUInt32(::StringW s, ByRef<uint32_t> result) ;

/// @brief Method TryToUInt64 addr 0x27417a0 size 0x158 virtual false final false
static System::Exception TryToUInt64(::StringW s, ByRef<uint64_t> result) ;

/// @brief Method ToSingle addr 0x27418f8 size 0x118 virtual false final false
static float_t ToSingle(::StringW s) ;

/// @brief Method TryToSingle addr 0x2741a10 size 0x238 virtual false final false
static System::Exception TryToSingle(::StringW s, ByRef<float_t> result) ;

/// @brief Method ToDouble addr 0x2741c48 size 0x118 virtual false final false
static double_t ToDouble(::StringW s) ;

/// @brief Method TryToDouble addr 0x2741d60 size 0x238 virtual false final false
static System::Exception TryToDouble(::StringW s, ByRef<double_t> result) ;

/// @brief Method TryToTimeSpan addr 0x2741f98 size 0xac virtual false final false
static System::Exception TryToTimeSpan(::StringW s, ByRef<System::TimeSpan> result) ;

/// @brief Method ToGuid addr 0x2742044 size 0x2c virtual false final false
static System::Guid ToGuid(::StringW s) ;

/// @brief Method TryToGuid addr 0x2742070 size 0x1e4 virtual false final false
static System::Exception TryToGuid(::StringW s, ByRef<System::Guid> result) ;

/// @brief Method SwitchToLocalTime addr 0x2740224 size 0x74 virtual false final false
static System::DateTime SwitchToLocalTime(System::DateTime value) ;

/// @brief Method SwitchToUtcTime addr 0x2740298 size 0x74 virtual false final false
static System::DateTime SwitchToUtcTime(System::DateTime value) ;

/// @brief Method ToUri addr 0x2742254 size 0x1bc virtual false final false
static System::Uri ToUri(::StringW s) ;

/// @brief Method TryToUri addr 0x2742410 size 0x218 virtual false final false
static System::Exception TryToUri(::StringW s, ByRef<System::Uri> result) ;

/// @brief Method StrEqual addr 0x2742628 size 0xc8 virtual false final false
static bool StrEqual(::ArrayW<char16_t> chars, int32_t strPos1, int32_t strLen1, ::StringW str2) ;

/// @brief Method TrimString addr 0x2740524 size 0x6c virtual false final false
static ::StringW TrimString(::StringW value) ;

/// @brief Method TrimStringStart addr 0x27426f0 size 0x6c virtual false final false
static ::StringW TrimStringStart(::StringW value) ;

/// @brief Method TrimStringEnd addr 0x274275c size 0x6c virtual false final false
static ::StringW TrimStringEnd(::StringW value) ;

/// @brief Method SplitString addr 0x27427c8 size 0x70 virtual false final false
static ::ArrayW<::StringW> SplitString(::StringW value) ;

/// @brief Method IsNegativeZero addr 0x273fe74 size 0x74 virtual false final false
static bool IsNegativeZero(double_t value) ;

/// @brief Method DoubleToInt64Bits addr 0x2742838 size 0x8 virtual false final false
static int64_t DoubleToInt64Bits(double_t value) ;

/// @brief Method CreateException addr 0x2742840 size 0x138 virtual false final false
static System::Exception CreateException(::StringW res, ::StringW arg, System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) ;

/// @brief Method CreateException addr 0x2742a64 size 0x74 virtual false final false
static System::Exception CreateException(::StringW res, ::ArrayW<::StringW> args, System::Xml::ExceptionType exceptionType) ;

/// @brief Method CreateException addr 0x273f4f8 size 0xdc virtual false final false
static System::Exception CreateException(::StringW res, ::ArrayW<::StringW> args, System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) ;

/// @brief Method CreateInvalidSurrogatePairException addr 0x2742b48 size 0x68 virtual false final false
static System::Exception CreateInvalidSurrogatePairException(char16_t low, char16_t hi) ;

/// @brief Method CreateInvalidSurrogatePairException addr 0x2742bb0 size 0x74 virtual false final false
static System::Exception CreateInvalidSurrogatePairException(char16_t low, char16_t hi, System::Xml::ExceptionType exceptionType) ;

/// @brief Method CreateInvalidSurrogatePairException addr 0x2742c24 size 0x1b8 virtual false final false
static System::Exception CreateInvalidSurrogatePairException(char16_t low, char16_t hi, System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) ;

/// @brief Method CreateInvalidHighSurrogateCharException addr 0x2742ddc size 0x58 virtual false final false
static System::Exception CreateInvalidHighSurrogateCharException(char16_t hi) ;

/// @brief Method CreateInvalidHighSurrogateCharException addr 0x2742e34 size 0x6c virtual false final false
static System::Exception CreateInvalidHighSurrogateCharException(char16_t hi, System::Xml::ExceptionType exceptionType) ;

/// @brief Method CreateInvalidHighSurrogateCharException addr 0x2742ea0 size 0xfc virtual false final false
static System::Exception CreateInvalidHighSurrogateCharException(char16_t hi, System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) ;

/// @brief Method CreateInvalidCharException addr 0x2742f9c size 0x68 virtual false final false
static System::Exception CreateInvalidCharException(char16_t invChar, char16_t nextChar) ;

/// @brief Method CreateInvalidCharException addr 0x2743004 size 0x94 virtual false final false
static System::Exception CreateInvalidCharException(char16_t invChar, char16_t nextChar, System::Xml::ExceptionType exceptionType) ;

/// @brief Method CreateInvalidNameCharException addr 0x273f1a8 size 0xc4 virtual false final false
static System::Exception CreateInvalidNameCharException(::StringW name, int32_t index, System::Xml::ExceptionType exceptionType) ;

/// @brief Method CreateInvalidNameArgumentException addr 0x2743340 size 0xbc virtual false final false
static System::ArgumentException CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlConvert);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlConvert, "System.Xml", "XmlConvert");
