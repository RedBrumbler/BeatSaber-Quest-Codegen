#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IConvertible;
}
namespace System {
struct DateTime;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
struct TypeCode;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Char;
}
// Type: System::Char
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2362))
// CS Name: System.Char
struct CORDL_TYPE Char : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<char16_t>
constexpr operator  System::IComparable_1<char16_t>() const;

/// @brief Convert operator to System::IEquatable_1<char16_t>
constexpr operator  System::IEquatable_1<char16_t>() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "char16_t", modifiers: "", def_value: None }]
constexpr Char(char16_t m_value) noexcept;


                    constexpr Char(Char const&) = default;
                    constexpr Char(Char&&) = default;
                    constexpr Char& operator=(Char const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Char& operator=(Char&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Char(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(char16_t value) ;

constexpr char16_t __get_m_value() const;

/// @brief Field MaxValue offset 0
static constexpr char16_t  MaxValue{￿};

/// @brief Field MinValue offset 0
static constexpr char16_t  MinValue{ };

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_categoryForLatin1, put=__set_s_categoryForLatin1))  s_categoryForLatin1;

static void __set_s_categoryForLatin1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_categoryForLatin1() ;

/// @brief Field UNICODE_PLANE00_END offset 0
static constexpr int32_t  UNICODE_PLANE00_END{65535};

/// @brief Field UNICODE_PLANE01_START offset 0
static constexpr int32_t  UNICODE_PLANE01_START{65536};

/// @brief Field UNICODE_PLANE16_END offset 0
static constexpr int32_t  UNICODE_PLANE16_END{1114111};

/// @brief Field HIGH_SURROGATE_START offset 0
static constexpr int32_t  HIGH_SURROGATE_START{55296};

/// @brief Field LOW_SURROGATE_END offset 0
static constexpr int32_t  LOW_SURROGATE_END{57343};


// Methods

/// @brief Method IsLatin1 addr 0x23ef620 size 0x10 virtual false final false
static bool IsLatin1(char16_t ch) ;

/// @brief Method IsAscii addr 0x23ef630 size 0x10 virtual false final false
static bool IsAscii(char16_t ch) ;

/// @brief Method GetLatin1UnicodeCategory addr 0x23ef640 size 0x7c virtual false final false
static System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(char16_t ch) ;

/// @brief Method GetHashCode addr 0x23ef6bc size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x23ef6c8 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x23ef740 size 0x10 virtual true final true
 bool Equals(char16_t obj) ;

/// @brief Method CompareTo addr 0x23ef750 size 0xbc virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x23ef80c size 0xc virtual true final true
 int32_t CompareTo(char16_t value) ;

/// @brief Method ToString addr 0x23dff38 size 0x5c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x23ef820 size 0x5c virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23ef818 size 0x8 virtual false final false
static ::StringW ToString(char16_t c) ;

/// @brief Method Parse addr 0x23ef87c size 0xa4 virtual false final false
static char16_t Parse(::StringW s) ;

/// @brief Method TryParse addr 0x23ef920 size 0x40 virtual false final false
static bool TryParse(::StringW s, ByRef<char16_t> result) ;

/// @brief Method IsDigit addr 0x23e9210 size 0x84 virtual false final false
static bool IsDigit(char16_t c) ;

/// @brief Method CheckLetter addr 0x23ef960 size 0xc virtual false final false
static bool CheckLetter(System::Globalization::UnicodeCategory uc) ;

/// @brief Method IsLetter addr 0x23ef96c size 0xd8 virtual false final false
static bool IsLetter(char16_t c) ;

/// @brief Method IsWhiteSpaceLatin1 addr 0x23efa44 size 0x3c virtual false final false
static bool IsWhiteSpaceLatin1(char16_t c) ;

/// @brief Method IsWhiteSpace addr 0x23ed1b8 size 0xb8 virtual false final false
static bool IsWhiteSpace(char16_t c) ;

/// @brief Method IsUpper addr 0x23efa80 size 0xbc virtual false final false
static bool IsUpper(char16_t c) ;

/// @brief Method IsLower addr 0x23efb3c size 0xbc virtual false final false
static bool IsLower(char16_t c) ;

/// @brief Method CheckPunctuation addr 0x23efbf8 size 0x10 virtual false final false
static bool CheckPunctuation(System::Globalization::UnicodeCategory uc) ;

/// @brief Method IsPunctuation addr 0x23efc08 size 0xac virtual false final false
static bool IsPunctuation(char16_t c) ;

/// @brief Method CheckLetterOrDigit addr 0x23efcb4 size 0x1c virtual false final false
static bool CheckLetterOrDigit(System::Globalization::UnicodeCategory uc) ;

/// @brief Method IsLetterOrDigit addr 0x23efcd0 size 0xbc virtual false final false
static bool IsLetterOrDigit(char16_t c) ;

/// @brief Method ToUpper addr 0x23efd8c size 0x7c virtual false final false
static char16_t ToUpper(char16_t c) ;

/// @brief Method ToUpperInvariant addr 0x23efe08 size 0x7c virtual false final false
static char16_t ToUpperInvariant(char16_t c) ;

/// @brief Method ToLower addr 0x23efe84 size 0x84 virtual false final false
static char16_t ToLower(char16_t c, System::Globalization::CultureInfo culture) ;

/// @brief Method ToLower addr 0x23eff08 size 0x7c virtual false final false
static char16_t ToLower(char16_t c) ;

/// @brief Method ToLowerInvariant addr 0x23eff84 size 0x7c virtual false final false
static char16_t ToLowerInvariant(char16_t c) ;

/// @brief Method GetTypeCode addr 0x23f0000 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x23f0008 size 0x8c virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x23f0094 size 0x8 virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x23f009c size 0x58 virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x23f0150 size 0x58 virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x23f0204 size 0x58 virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x23f02b4 size 0x58 virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x23f0310 size 0x58 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x23f0370 size 0x58 virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x23f03d0 size 0x58 virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x23f0430 size 0x58 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x23f0490 size 0x8c virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x23f051c size 0x8c virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x23f05a8 size 0x8c virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x23f0634 size 0x8c virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x23f06c0 size 0xa8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

/// @brief Method IsControl addr 0x23f0768 size 0x8c virtual false final false
static bool IsControl(char16_t c) ;

/// @brief Method IsLetterOrDigit addr 0x23f07f4 size 0x170 virtual false final false
static bool IsLetterOrDigit(::StringW s, int32_t index) ;

/// @brief Method CheckNumber addr 0x23f0964 size 0x10 virtual false final false
static bool CheckNumber(System::Globalization::UnicodeCategory uc) ;

/// @brief Method IsNumber addr 0x23f0974 size 0xd8 virtual false final false
static bool IsNumber(char16_t c) ;

/// @brief Method IsNumber addr 0x23f0a4c size 0x18c virtual false final false
static bool IsNumber(::StringW s, int32_t index) ;

/// @brief Method CheckSeparator addr 0x23f0bd8 size 0x10 virtual false final false
static bool CheckSeparator(System::Globalization::UnicodeCategory uc) ;

/// @brief Method IsSeparatorLatin1 addr 0x23f0be8 size 0x14 virtual false final false
static bool IsSeparatorLatin1(char16_t c) ;

/// @brief Method IsSeparator addr 0x23f0bfc size 0xb0 virtual false final false
static bool IsSeparator(char16_t c) ;

/// @brief Method IsSurrogate addr 0x23f0cac size 0x10 virtual false final false
static bool IsSurrogate(char16_t c) ;

/// @brief Method IsSurrogate addr 0x23f0cbc size 0x104 virtual false final false
static bool IsSurrogate(::StringW s, int32_t index) ;

/// @brief Method IsWhiteSpace addr 0x23f0dc0 size 0x180 virtual false final false
static bool IsWhiteSpace(::StringW s, int32_t index) ;

/// @brief Method GetUnicodeCategory addr 0x23f0f40 size 0x80 virtual false final false
static System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t c) ;

/// @brief Method GetUnicodeCategory addr 0x23f0fc0 size 0x14c virtual false final false
static System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW s, int32_t index) ;

/// @brief Method GetNumericValue addr 0x23f110c size 0x8 virtual false final false
static double_t GetNumericValue(char16_t c) ;

/// @brief Method IsHighSurrogate addr 0x23f1114 size 0x10 virtual false final false
static bool IsHighSurrogate(char16_t c) ;

/// @brief Method IsHighSurrogate addr 0x23f1124 size 0x108 virtual false final false
static bool IsHighSurrogate(::StringW s, int32_t index) ;

/// @brief Method IsLowSurrogate addr 0x23f122c size 0x10 virtual false final false
static bool IsLowSurrogate(char16_t c) ;

/// @brief Method IsSurrogatePair addr 0x23f123c size 0x24 virtual false final false
static bool IsSurrogatePair(char16_t highSurrogate, char16_t lowSurrogate) ;

/// @brief Method ConvertFromUtf32 addr 0x23f1260 size 0x130 virtual false final false
static ::StringW ConvertFromUtf32(int32_t utf32) ;

/// @brief Method ConvertToUtf32 addr 0x23f1390 size 0x12c virtual false final false
static int32_t ConvertToUtf32(char16_t highSurrogate, char16_t lowSurrogate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::Char, "System", "Char");
