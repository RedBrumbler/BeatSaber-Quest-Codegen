#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct Base64FormattingOptions;
}
// Forward declare root types
namespace System {
class Convert;
}
// Type: System::Convert
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2364))
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Convert() = default;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: " const&", def_value: None }]
constexpr Convert(Convert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
constexpr Convert(Convert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Convert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Convert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Convert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Convert& operator=(Convert&& o) noexcept = default;
  constexpr Convert& operator=(Convert const& o) noexcept = default;
                


// Fields

static ::ArrayW<int8_t> __declspec(property(get=__get_s_decodingMap, put=__set_s_decodingMap))  s_decodingMap;

static void __set_s_decodingMap(::ArrayW<int8_t> value) ;

static ::ArrayW<int8_t> __get_s_decodingMap() ;

static ::ArrayW<System::Type> __declspec(property(get=__get_ConvertTypes, put=__set_ConvertTypes))  ConvertTypes;

static void __set_ConvertTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_ConvertTypes() ;

static System::Type __declspec(property(get=__get_EnumType, put=__set_EnumType))  EnumType;

static void __set_EnumType(System::Type value) ;

static System::Type __get_EnumType() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_base64Table, put=__set_base64Table))  base64Table;

static void __set_base64Table(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_base64Table() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DBNull, put=__set_DBNull))  DBNull;

static void __set_DBNull(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_DBNull() ;


// Methods

/// @brief Method TryDecodeFromUtf16 addr 0x23f1744 size 0x374 virtual false final false
static bool TryDecodeFromUtf16(System::ReadOnlySpan_1<char16_t> utf16, System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written) ;

/// @brief Method Decode addr 0x23f1ab8 size 0x50 virtual false final false
static int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap) ;

/// @brief Method WriteThreeLowOrderBytes addr 0x23f1b08 size 0x18 virtual false final false
static void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value) ;

/// @brief Method GetTypeCode addr 0x23f1b20 size 0xc4 virtual false final false
static System::TypeCode GetTypeCode(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ChangeType addr 0x23f1be4 size 0x848 virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::TypeCode typeCode, System::IFormatProvider provider) ;

/// @brief Method DefaultToType addr 0x23ed918 size 0xd14 virtual false final false
static ::bs_hook::Il2CppWrapperType DefaultToType(System::IConvertible value, System::Type targetType, System::IFormatProvider provider) ;

/// @brief Method ChangeType addr 0x23f242c size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType) ;

/// @brief Method ChangeType addr 0x23f24c8 size 0xbfc virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType, System::IFormatProvider provider) ;

/// @brief Method ThrowCharOverflowException addr 0x23f30c4 size 0x50 virtual false final false
static void ThrowCharOverflowException() ;

/// @brief Method ThrowByteOverflowException addr 0x23f3114 size 0x50 virtual false final false
static void ThrowByteOverflowException() ;

/// @brief Method ThrowSByteOverflowException addr 0x23f3164 size 0x50 virtual false final false
static void ThrowSByteOverflowException() ;

/// @brief Method ThrowInt16OverflowException addr 0x23f31b4 size 0x50 virtual false final false
static void ThrowInt16OverflowException() ;

/// @brief Method ThrowUInt16OverflowException addr 0x23f3204 size 0x50 virtual false final false
static void ThrowUInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException addr 0x23f3254 size 0x50 virtual false final false
static void ThrowInt32OverflowException() ;

/// @brief Method ThrowUInt32OverflowException addr 0x23f32a4 size 0x50 virtual false final false
static void ThrowUInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException addr 0x23f32f4 size 0x50 virtual false final false
static void ThrowInt64OverflowException() ;

/// @brief Method ThrowUInt64OverflowException addr 0x23f3344 size 0x50 virtual false final false
static void ThrowUInt64OverflowException() ;

/// @brief Method ToBoolean addr 0x23f3394 size 0xf4 virtual false final false
static bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToBoolean addr 0x23f3488 size 0x104 virtual false final false
static bool ToBoolean(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToBoolean addr 0x23f358c size 0xc virtual false final false
static bool ToBoolean(int8_t value) ;

/// @brief Method ToBoolean addr 0x23eefe8 size 0xc virtual false final false
static bool ToBoolean(uint8_t value) ;

/// @brief Method ToBoolean addr 0x23f3598 size 0xc virtual false final false
static bool ToBoolean(int16_t value) ;

/// @brief Method ToBoolean addr 0x23f35a4 size 0xc virtual false final false
static bool ToBoolean(uint16_t value) ;

/// @brief Method ToBoolean addr 0x23f35b0 size 0xc virtual false final false
static bool ToBoolean(int32_t value) ;

/// @brief Method ToBoolean addr 0x23f35bc size 0xc virtual false final false
static bool ToBoolean(uint32_t value) ;

/// @brief Method ToBoolean addr 0x23f35c8 size 0xc virtual false final false
static bool ToBoolean(int64_t value) ;

/// @brief Method ToBoolean addr 0x23f35d4 size 0xc virtual false final false
static bool ToBoolean(uint64_t value) ;

/// @brief Method ToBoolean addr 0x23f35e0 size 0x68 virtual false final false
static bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x23f3648 size 0x68 virtual false final false
static bool ToBoolean(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToBoolean addr 0x23f36b0 size 0xc virtual false final false
static bool ToBoolean(float_t value) ;

/// @brief Method ToBoolean addr 0x23f36bc size 0xc virtual false final false
static bool ToBoolean(double_t value) ;

/// @brief Method ToBoolean addr 0x23f36c8 size 0x74 virtual false final false
static bool ToBoolean(System::Decimal value) ;

/// @brief Method ToChar addr 0x23f373c size 0xf4 virtual false final false
static char16_t ToChar(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToChar addr 0x23f3830 size 0x104 virtual false final false
static char16_t ToChar(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToChar addr 0x23f3934 size 0x54 virtual false final false
static char16_t ToChar(int8_t value) ;

/// @brief Method ToChar addr 0x23ef04c size 0x8 virtual false final false
static char16_t ToChar(uint8_t value) ;

/// @brief Method ToChar addr 0x23f3988 size 0x58 virtual false final false
static char16_t ToChar(int16_t value) ;

/// @brief Method ToChar addr 0x23f39e0 size 0x4 virtual false final false
static char16_t ToChar(uint16_t value) ;

/// @brief Method ToChar addr 0x23f39e4 size 0x58 virtual false final false
static char16_t ToChar(int32_t value) ;

/// @brief Method ToChar addr 0x23f3a3c size 0x58 virtual false final false
static char16_t ToChar(uint32_t value) ;

/// @brief Method ToChar addr 0x23f3a94 size 0x58 virtual false final false
static char16_t ToChar(int64_t value) ;

/// @brief Method ToChar addr 0x23f3aec size 0x58 virtual false final false
static char16_t ToChar(uint64_t value) ;

/// @brief Method ToChar addr 0x23f3b44 size 0x54 virtual false final false
static char16_t ToChar(::StringW value) ;

/// @brief Method ToChar addr 0x23f3b98 size 0xa4 virtual false final false
static char16_t ToChar(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x23f3c3c size 0xf4 virtual false final false
static int8_t ToSByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSByte addr 0x23f3d30 size 0x104 virtual false final false
static int8_t ToSByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x23ed370 size 0x8 virtual false final false
static int8_t ToSByte(bool value) ;

/// @brief Method ToSByte addr 0x23f00f4 size 0x5c virtual false final false
static int8_t ToSByte(char16_t value) ;

/// @brief Method ToSByte addr 0x23ef0ac size 0x58 virtual false final false
static int8_t ToSByte(uint8_t value) ;

/// @brief Method ToSByte addr 0x23f3e34 size 0x60 virtual false final false
static int8_t ToSByte(int16_t value) ;

/// @brief Method ToSByte addr 0x23f3e94 size 0x5c virtual false final false
static int8_t ToSByte(uint16_t value) ;

/// @brief Method ToSByte addr 0x23f3ef0 size 0x58 virtual false final false
static int8_t ToSByte(int32_t value) ;

/// @brief Method ToSByte addr 0x23f3f48 size 0x58 virtual false final false
static int8_t ToSByte(uint32_t value) ;

/// @brief Method ToSByte addr 0x23f3fa0 size 0x58 virtual false final false
static int8_t ToSByte(int64_t value) ;

/// @brief Method ToSByte addr 0x23f3ff8 size 0x58 virtual false final false
static int8_t ToSByte(uint64_t value) ;

/// @brief Method ToSByte addr 0x23f4050 size 0x5c virtual false final false
static int8_t ToSByte(float_t value) ;

/// @brief Method ToSByte addr 0x23f40ac size 0x60 virtual false final false
static int8_t ToSByte(double_t value) ;

/// @brief Method ToSByte addr 0x23f4208 size 0x74 virtual false final false
static int8_t ToSByte(System::Decimal value) ;

/// @brief Method ToSByte addr 0x23f427c size 0x10 virtual false final false
static int8_t ToSByte(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x23f428c size 0xf4 virtual false final false
static uint8_t ToByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToByte addr 0x23f4380 size 0x104 virtual false final false
static uint8_t ToByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x23ed3d4 size 0x8 virtual false final false
static uint8_t ToByte(bool value) ;

/// @brief Method ToByte addr 0x23f01a8 size 0x5c virtual false final false
static uint8_t ToByte(char16_t value) ;

/// @brief Method ToByte addr 0x23f4484 size 0x58 virtual false final false
static uint8_t ToByte(int8_t value) ;

/// @brief Method ToByte addr 0x23f44dc size 0x5c virtual false final false
static uint8_t ToByte(int16_t value) ;

/// @brief Method ToByte addr 0x23f4538 size 0x5c virtual false final false
static uint8_t ToByte(uint16_t value) ;

/// @brief Method ToByte addr 0x23f4594 size 0x58 virtual false final false
static uint8_t ToByte(int32_t value) ;

/// @brief Method ToByte addr 0x23f45ec size 0x58 virtual false final false
static uint8_t ToByte(uint32_t value) ;

/// @brief Method ToByte addr 0x23f4644 size 0x58 virtual false final false
static uint8_t ToByte(int64_t value) ;

/// @brief Method ToByte addr 0x23f469c size 0x58 virtual false final false
static uint8_t ToByte(uint64_t value) ;

/// @brief Method ToByte addr 0x23f46f4 size 0x5c virtual false final false
static uint8_t ToByte(float_t value) ;

/// @brief Method ToByte addr 0x23f4750 size 0x60 virtual false final false
static uint8_t ToByte(double_t value) ;

/// @brief Method ToByte addr 0x23f47b0 size 0x74 virtual false final false
static uint8_t ToByte(System::Decimal value) ;

/// @brief Method ToByte addr 0x23f4824 size 0x74 virtual false final false
static uint8_t ToByte(::StringW value) ;

/// @brief Method ToByte addr 0x23f4898 size 0x14 virtual false final false
static uint8_t ToByte(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x23f48ac size 0xf4 virtual false final false
static int16_t ToInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt16 addr 0x23f49a0 size 0x104 virtual false final false
static int16_t ToInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x23ed438 size 0x8 virtual false final false
static int16_t ToInt16(bool value) ;

/// @brief Method ToInt16 addr 0x23f025c size 0x58 virtual false final false
static int16_t ToInt16(char16_t value) ;

/// @brief Method ToInt16 addr 0x23f4aa4 size 0x8 virtual false final false
static int16_t ToInt16(int8_t value) ;

/// @brief Method ToInt16 addr 0x23ef164 size 0x8 virtual false final false
static int16_t ToInt16(uint8_t value) ;

/// @brief Method ToInt16 addr 0x23f4aac size 0x58 virtual false final false
static int16_t ToInt16(uint16_t value) ;

/// @brief Method ToInt16 addr 0x23f4b04 size 0x58 virtual false final false
static int16_t ToInt16(int32_t value) ;

/// @brief Method ToInt16 addr 0x23f4b5c size 0x58 virtual false final false
static int16_t ToInt16(uint32_t value) ;

/// @brief Method ToInt16 addr 0x23f4bb4 size 0x58 virtual false final false
static int16_t ToInt16(int64_t value) ;

/// @brief Method ToInt16 addr 0x23f4c0c size 0x58 virtual false final false
static int16_t ToInt16(uint64_t value) ;

/// @brief Method ToInt16 addr 0x23f4c64 size 0x5c virtual false final false
static int16_t ToInt16(float_t value) ;

/// @brief Method ToInt16 addr 0x23f4cc0 size 0x60 virtual false final false
static int16_t ToInt16(double_t value) ;

/// @brief Method ToInt16 addr 0x23f4d20 size 0x74 virtual false final false
static int16_t ToInt16(System::Decimal value) ;

/// @brief Method ToInt16 addr 0x23f4d94 size 0x18 virtual false final false
static int16_t ToInt16(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x23f4dac size 0xf4 virtual false final false
static uint16_t ToUInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt16 addr 0x23f4ea0 size 0x104 virtual false final false
static uint16_t ToUInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x23ed49c size 0x8 virtual false final false
static uint16_t ToUInt16(bool value) ;

/// @brief Method ToUInt16 addr 0x23f030c size 0x4 virtual false final false
static uint16_t ToUInt16(char16_t value) ;

/// @brief Method ToUInt16 addr 0x23f4fa4 size 0x54 virtual false final false
static uint16_t ToUInt16(int8_t value) ;

/// @brief Method ToUInt16 addr 0x23ef1c4 size 0x8 virtual false final false
static uint16_t ToUInt16(uint8_t value) ;

/// @brief Method ToUInt16 addr 0x23f4ff8 size 0x58 virtual false final false
static uint16_t ToUInt16(int16_t value) ;

/// @brief Method ToUInt16 addr 0x23f5050 size 0x58 virtual false final false
static uint16_t ToUInt16(int32_t value) ;

/// @brief Method ToUInt16 addr 0x23f50a8 size 0x58 virtual false final false
static uint16_t ToUInt16(uint32_t value) ;

/// @brief Method ToUInt16 addr 0x23f5100 size 0x58 virtual false final false
static uint16_t ToUInt16(int64_t value) ;

/// @brief Method ToUInt16 addr 0x23f5158 size 0x58 virtual false final false
static uint16_t ToUInt16(uint64_t value) ;

/// @brief Method ToUInt16 addr 0x23f51b0 size 0x5c virtual false final false
static uint16_t ToUInt16(float_t value) ;

/// @brief Method ToUInt16 addr 0x23f520c size 0x60 virtual false final false
static uint16_t ToUInt16(double_t value) ;

/// @brief Method ToUInt16 addr 0x23f526c size 0x74 virtual false final false
static uint16_t ToUInt16(System::Decimal value) ;

/// @brief Method ToUInt16 addr 0x23f52e0 size 0x18 virtual false final false
static uint16_t ToUInt16(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x23f52f8 size 0xf4 virtual false final false
static int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x23f53ec size 0x104 virtual false final false
static int32_t ToInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x23ed500 size 0x8 virtual false final false
static int32_t ToInt32(bool value) ;

/// @brief Method ToInt32 addr 0x23f0368 size 0x8 virtual false final false
static int32_t ToInt32(char16_t value) ;

/// @brief Method ToInt32 addr 0x23ef224 size 0x8 virtual false final false
static int32_t ToInt32(uint8_t value) ;

/// @brief Method ToInt32 addr 0x23f54f0 size 0x8 virtual false final false
static int32_t ToInt32(int16_t value) ;

/// @brief Method ToInt32 addr 0x23f54f8 size 0x8 virtual false final false
static int32_t ToInt32(uint16_t value) ;

/// @brief Method ToInt32 addr 0x23f5500 size 0x54 virtual false final false
static int32_t ToInt32(uint32_t value) ;

/// @brief Method ToInt32 addr 0x23f5554 size 0x58 virtual false final false
static int32_t ToInt32(int64_t value) ;

/// @brief Method ToInt32 addr 0x23f55ac size 0x58 virtual false final false
static int32_t ToInt32(uint64_t value) ;

/// @brief Method ToInt32 addr 0x23f5604 size 0x5c virtual false final false
static int32_t ToInt32(float_t value) ;

/// @brief Method ToInt32 addr 0x23f410c size 0xfc virtual false final false
static int32_t ToInt32(double_t value) ;

/// @brief Method ToInt32 addr 0x23f5660 size 0x74 virtual false final false
static int32_t ToInt32(System::Decimal value) ;

/// @brief Method ToInt32 addr 0x23f56d4 size 0x78 virtual false final false
static int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x23f574c size 0x18 virtual false final false
static int32_t ToInt32(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x23f5764 size 0xf4 virtual false final false
static uint32_t ToUInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt32 addr 0x23f5858 size 0x104 virtual false final false
static uint32_t ToUInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x23ed564 size 0x8 virtual false final false
static uint32_t ToUInt32(bool value) ;

/// @brief Method ToUInt32 addr 0x23f03c8 size 0x8 virtual false final false
static uint32_t ToUInt32(char16_t value) ;

/// @brief Method ToUInt32 addr 0x23f595c size 0x54 virtual false final false
static uint32_t ToUInt32(int8_t value) ;

/// @brief Method ToUInt32 addr 0x23ef284 size 0x8 virtual false final false
static uint32_t ToUInt32(uint8_t value) ;

/// @brief Method ToUInt32 addr 0x23f59b0 size 0x54 virtual false final false
static uint32_t ToUInt32(int16_t value) ;

/// @brief Method ToUInt32 addr 0x23f5a04 size 0x8 virtual false final false
static uint32_t ToUInt32(uint16_t value) ;

/// @brief Method ToUInt32 addr 0x23f5a0c size 0x54 virtual false final false
static uint32_t ToUInt32(int32_t value) ;

/// @brief Method ToUInt32 addr 0x23f5a60 size 0x58 virtual false final false
static uint32_t ToUInt32(int64_t value) ;

/// @brief Method ToUInt32 addr 0x23f5ab8 size 0x58 virtual false final false
static uint32_t ToUInt32(uint64_t value) ;

/// @brief Method ToUInt32 addr 0x23f5b10 size 0x5c virtual false final false
static uint32_t ToUInt32(float_t value) ;

/// @brief Method ToUInt32 addr 0x23f5b6c size 0xa8 virtual false final false
static uint32_t ToUInt32(double_t value) ;

/// @brief Method ToUInt32 addr 0x23f5c14 size 0x74 virtual false final false
static uint32_t ToUInt32(System::Decimal value) ;

/// @brief Method ToUInt32 addr 0x23f5c88 size 0x18 virtual false final false
static uint32_t ToUInt32(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x23f5ca0 size 0xf4 virtual false final false
static int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x23f5d94 size 0x104 virtual false final false
static int64_t ToInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x23ed5c8 size 0x8 virtual false final false
static int64_t ToInt64(bool value) ;

/// @brief Method ToInt64 addr 0x23f0428 size 0x8 virtual false final false
static int64_t ToInt64(char16_t value) ;

/// @brief Method ToInt64 addr 0x23f5e98 size 0x8 virtual false final false
static int64_t ToInt64(int8_t value) ;

/// @brief Method ToInt64 addr 0x23ef2e4 size 0x8 virtual false final false
static int64_t ToInt64(uint8_t value) ;

/// @brief Method ToInt64 addr 0x23f5ea0 size 0x8 virtual false final false
static int64_t ToInt64(int16_t value) ;

/// @brief Method ToInt64 addr 0x23f5ea8 size 0x8 virtual false final false
static int64_t ToInt64(uint16_t value) ;

/// @brief Method ToInt64 addr 0x23f5eb0 size 0x8 virtual false final false
static int64_t ToInt64(int32_t value) ;

/// @brief Method ToInt64 addr 0x23f5eb8 size 0x8 virtual false final false
static int64_t ToInt64(uint32_t value) ;

/// @brief Method ToInt64 addr 0x23f5ec0 size 0x54 virtual false final false
static int64_t ToInt64(uint64_t value) ;

/// @brief Method ToInt64 addr 0x23f5f14 size 0x5c virtual false final false
static int64_t ToInt64(float_t value) ;

/// @brief Method ToInt64 addr 0x23f5f70 size 0x110 virtual false final false
static int64_t ToInt64(double_t value) ;

/// @brief Method ToInt64 addr 0x23f6080 size 0x74 virtual false final false
static int64_t ToInt64(System::Decimal value) ;

/// @brief Method ToInt64 addr 0x23f60f4 size 0x78 virtual false final false
static int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x23f616c size 0x18 virtual false final false
static int64_t ToInt64(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x23f6184 size 0xf4 virtual false final false
static uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt64 addr 0x23f6278 size 0x104 virtual false final false
static uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x23ed62c size 0x8 virtual false final false
static uint64_t ToUInt64(bool value) ;

/// @brief Method ToUInt64 addr 0x23f0488 size 0x8 virtual false final false
static uint64_t ToUInt64(char16_t value) ;

/// @brief Method ToUInt64 addr 0x23f637c size 0x58 virtual false final false
static uint64_t ToUInt64(int8_t value) ;

/// @brief Method ToUInt64 addr 0x23ef344 size 0x8 virtual false final false
static uint64_t ToUInt64(uint8_t value) ;

/// @brief Method ToUInt64 addr 0x23f63d4 size 0x58 virtual false final false
static uint64_t ToUInt64(int16_t value) ;

/// @brief Method ToUInt64 addr 0x23f642c size 0x8 virtual false final false
static uint64_t ToUInt64(uint16_t value) ;

/// @brief Method ToUInt64 addr 0x23f6434 size 0x54 virtual false final false
static uint64_t ToUInt64(int32_t value) ;

/// @brief Method ToUInt64 addr 0x23f6488 size 0x8 virtual false final false
static uint64_t ToUInt64(uint32_t value) ;

/// @brief Method ToUInt64 addr 0x23f6490 size 0x54 virtual false final false
static uint64_t ToUInt64(int64_t value) ;

/// @brief Method ToUInt64 addr 0x23f64e4 size 0x5c virtual false final false
static uint64_t ToUInt64(float_t value) ;

/// @brief Method ToUInt64 addr 0x23f6540 size 0xfc virtual false final false
static uint64_t ToUInt64(double_t value) ;

/// @brief Method ToUInt64 addr 0x23f663c size 0x74 virtual false final false
static uint64_t ToUInt64(System::Decimal value) ;

/// @brief Method ToUInt64 addr 0x23f66b0 size 0x18 virtual false final false
static uint64_t ToUInt64(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23f66c8 size 0xf4 virtual false final false
static float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x23f67bc size 0x104 virtual false final false
static float_t ToSingle(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23f68c0 size 0xc virtual false final false
static float_t ToSingle(int8_t value) ;

/// @brief Method ToSingle addr 0x23ef3a4 size 0xc virtual false final false
static float_t ToSingle(uint8_t value) ;

/// @brief Method ToSingle addr 0x23f68cc size 0xc virtual false final false
static float_t ToSingle(int16_t value) ;

/// @brief Method ToSingle addr 0x23f68d8 size 0xc virtual false final false
static float_t ToSingle(uint16_t value) ;

/// @brief Method ToSingle addr 0x23f68e4 size 0x8 virtual false final false
static float_t ToSingle(int32_t value) ;

/// @brief Method ToSingle addr 0x23f68ec size 0xc virtual false final false
static float_t ToSingle(uint32_t value) ;

/// @brief Method ToSingle addr 0x23f68f8 size 0x8 virtual false final false
static float_t ToSingle(int64_t value) ;

/// @brief Method ToSingle addr 0x23f6900 size 0xc virtual false final false
static float_t ToSingle(uint64_t value) ;

/// @brief Method ToSingle addr 0x23f690c size 0x8 virtual false final false
static float_t ToSingle(double_t value) ;

/// @brief Method ToSingle addr 0x23f6914 size 0x68 virtual false final false
static float_t ToSingle(System::Decimal value) ;

/// @brief Method ToSingle addr 0x23f697c size 0x78 virtual false final false
static float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x23f69f4 size 0x1c virtual false final false
static float_t ToSingle(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23ed698 size 0x14 virtual false final false
static float_t ToSingle(bool value) ;

/// @brief Method ToDouble addr 0x23f6a10 size 0xf4 virtual false final false
static double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x23f6b04 size 0x104 virtual false final false
static double_t ToDouble(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x23f6c08 size 0xc virtual false final false
static double_t ToDouble(int8_t value) ;

/// @brief Method ToDouble addr 0x23ef408 size 0xc virtual false final false
static double_t ToDouble(uint8_t value) ;

/// @brief Method ToDouble addr 0x23f6c14 size 0xc virtual false final false
static double_t ToDouble(int16_t value) ;

/// @brief Method ToDouble addr 0x23f6c20 size 0xc virtual false final false
static double_t ToDouble(uint16_t value) ;

/// @brief Method ToDouble addr 0x23f6c2c size 0x8 virtual false final false
static double_t ToDouble(int32_t value) ;

/// @brief Method ToDouble addr 0x23f6c34 size 0x8 virtual false final false
static double_t ToDouble(uint32_t value) ;

/// @brief Method ToDouble addr 0x23f6c3c size 0x8 virtual false final false
static double_t ToDouble(int64_t value) ;

/// @brief Method ToDouble addr 0x23f6c44 size 0x8 virtual false final false
static double_t ToDouble(uint64_t value) ;

/// @brief Method ToDouble addr 0x23f6c4c size 0x8 virtual false final false
static double_t ToDouble(float_t value) ;

/// @brief Method ToDouble addr 0x23f6c54 size 0x68 virtual false final false
static double_t ToDouble(System::Decimal value) ;

/// @brief Method ToDouble addr 0x23f6cbc size 0x1c virtual false final false
static double_t ToDouble(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x23ed710 size 0x14 virtual false final false
static double_t ToDouble(bool value) ;

/// @brief Method ToDecimal addr 0x23f6cd8 size 0x128 virtual false final false
static System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x23f6e00 size 0x58 virtual false final false
static System::Decimal ToDecimal(int8_t value) ;

/// @brief Method ToDecimal addr 0x23ef46c size 0x58 virtual false final false
static System::Decimal ToDecimal(uint8_t value) ;

/// @brief Method ToDecimal addr 0x23f6e58 size 0x58 virtual false final false
static System::Decimal ToDecimal(int16_t value) ;

/// @brief Method ToDecimal addr 0x23f6eb0 size 0x58 virtual false final false
static System::Decimal ToDecimal(uint16_t value) ;

/// @brief Method ToDecimal addr 0x23f6f08 size 0x58 virtual false final false
static System::Decimal ToDecimal(int32_t value) ;

/// @brief Method ToDecimal addr 0x23f6f60 size 0x58 virtual false final false
static System::Decimal ToDecimal(uint32_t value) ;

/// @brief Method ToDecimal addr 0x23f6fb8 size 0x58 virtual false final false
static System::Decimal ToDecimal(int64_t value) ;

/// @brief Method ToDecimal addr 0x23f7010 size 0x58 virtual false final false
static System::Decimal ToDecimal(uint64_t value) ;

/// @brief Method ToDecimal addr 0x23f7068 size 0x60 virtual false final false
static System::Decimal ToDecimal(float_t value) ;

/// @brief Method ToDecimal addr 0x23f70c8 size 0x60 virtual false final false
static System::Decimal ToDecimal(double_t value) ;

/// @brief Method ToDecimal addr 0x23f7128 size 0x88 virtual false final false
static System::Decimal ToDecimal(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x23ed780 size 0x5c virtual false final false
static System::Decimal ToDecimal(bool value) ;

/// @brief Method ToDateTime addr 0x23f71b0 size 0x130 virtual false final false
static System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDateTime addr 0x23f72e0 size 0x90 virtual false final false
static System::DateTime ToDateTime(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23f7370 size 0x1a0 virtual false final false
static ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23f7510 size 0x1c virtual false final false
static ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x23f752c size 0x18 virtual false final false
static ::StringW ToString(char16_t value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23f7544 size 0x68 virtual false final false
static ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x23f75ac size 0x1c virtual false final false
static ::StringW ToString(int32_t value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23f75c8 size 0x68 virtual false final false
static ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x23f7630 size 0x68 virtual false final false
static ::StringW ToString(float_t value) ;

/// @brief Method ToByte addr 0x23f7698 size 0x10c virtual false final false
static uint8_t ToByte(::StringW value, int32_t fromBase) ;

/// @brief Method ToSByte addr 0x23f77a4 size 0x11c virtual false final false
static int8_t ToSByte(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt16 addr 0x23f78c0 size 0x11c virtual false final false
static int16_t ToInt16(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt16 addr 0x23f79dc size 0x10c virtual false final false
static uint16_t ToUInt16(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt32 addr 0x23f7ae8 size 0xd8 virtual false final false
static int32_t ToInt32(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt32 addr 0x23f7bc0 size 0xd8 virtual false final false
static uint32_t ToUInt32(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt64 addr 0x23f7c98 size 0xd8 virtual false final false
static int64_t ToInt64(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt64 addr 0x23f7d70 size 0xd8 virtual false final false
static uint64_t ToUInt64(::StringW value, int32_t fromBase) ;

/// @brief Method ToString addr 0x23f7e48 size 0x84 virtual false final false
static ::StringW ToString(int32_t value, int32_t toBase) ;

/// @brief Method ToString addr 0x23f7ecc size 0x84 virtual false final false
static ::StringW ToString(int64_t value, int32_t toBase) ;

/// @brief Method ToBase64String addr 0x23f7f50 size 0xbc virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray) ;

/// @brief Method ToBase64String addr 0x23f81c0 size 0x70 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length) ;

/// @brief Method ToBase64String addr 0x23f8230 size 0x1b4 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, System::Base64FormattingOptions options) ;

/// @brief Method ToBase64String addr 0x23f800c size 0x1b4 virtual false final false
static ::StringW ToBase64String(System::ReadOnlySpan_1<uint8_t> bytes, System::Base64FormattingOptions options) ;

/// @brief Method ToBase64CharArray addr 0x23f86e0 size 0x88 virtual false final false
static int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut) ;

/// @brief Method ToBase64CharArray addr 0x23f8768 size 0x32c virtual false final false
static int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, System::Base64FormattingOptions options) ;

/// @brief Method ConvertToBase64Array addr 0x23f849c size 0x244 virtual false final false
static int32_t ConvertToBase64Array(void* outChars, void* inData, int32_t offset, int32_t length, bool insertLineBreaks) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength addr 0x23f83e4 size 0xb8 virtual false final false
static int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks) ;

/// @brief Method FromBase64String addr 0x23f8a94 size 0xb8 virtual false final false
static ::ArrayW<uint8_t> FromBase64String(::StringW s) ;

/// @brief Method TryFromBase64Chars addr 0x23f8cf4 size 0x4f8 virtual false final false
static bool TryFromBase64Chars(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace addr 0x23f91ec size 0x120 virtual false final false
static void CopyToTempBufferWithoutWhiteSpace(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten) ;

/// @brief Method IsSpace addr 0x23f930c size 0x38 virtual false final false
static bool IsSpace(char16_t c) ;

/// @brief Method FromBase64CharArray addr 0x23f9344 size 0x1f0 virtual false final false
static ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length) ;

/// @brief Method FromBase64CharPtr addr 0x23f8b4c size 0x1a8 virtual false final false
static ::ArrayW<uint8_t> FromBase64CharPtr(void* inputPtr, int32_t inputLength) ;

/// @brief Method FromBase64_ComputeResultLength addr 0x23f9534 size 0xc0 virtual false final false
static int32_t FromBase64_ComputeResultLength(void* inputPtr, int32_t inputLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Convert);
DEFINE_IL2CPP_ARG_TYPE(System::Convert, "System", "Convert");
