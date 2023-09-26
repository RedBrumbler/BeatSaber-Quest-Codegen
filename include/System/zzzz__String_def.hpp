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
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
struct StringComparison;
}
namespace System {
struct StringSplitOptions;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System {
class IFormatProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System {
struct TypeCode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct Decimal;
}
namespace System {
struct DateTime;
}
namespace System {
class ICloneable;
}
namespace System::Text {
class Encoding;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct ParamsArray;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
struct System__String__TrimType;
}
namespace System {
class String;
}
namespace System {
struct System__String__ProbabilisticMap;
}
// Type: ::TrimType
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2310))
// CS Name: System.String::TrimType
struct CORDL_TYPE System__String__TrimType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__String__TrimType(int32_t value__) noexcept;


                    constexpr System__String__TrimType(System__String__TrimType const&) = default;
                    constexpr System__String__TrimType(System__String__TrimType&&) = default;
                    constexpr System__String__TrimType& operator=(System__String__TrimType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__String__TrimType& operator=(System__String__TrimType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__String__TrimType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__String__TrimType_Unwrapped : int32_t {
__Head = 0,
__Tail = 1,
__Both = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__String__TrimType_Unwrapped () const noexcept {
return std::bit_cast<__System__String__TrimType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Head offset 0
static System::System__String__TrimType const Head;

/// @brief Field Tail offset 0
static System::System__String__TrimType const Tail;

/// @brief Field Both offset 0
static System::System__String__TrimType const Both;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::ProbabilisticMap
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2311))
// CS Name: System.String::ProbabilisticMap
struct CORDL_TYPE System__String__ProbabilisticMap : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr System__String__ProbabilisticMap(System__String__ProbabilisticMap const&) = default;
                    constexpr System__String__ProbabilisticMap(System__String__ProbabilisticMap&&) = default;
                    constexpr System__String__ProbabilisticMap& operator=(System__String__ProbabilisticMap const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__String__ProbabilisticMap& operator=(System__String__ProbabilisticMap&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__String__ProbabilisticMap(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::String
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2312))
// CS Name: System.String
class CORDL_TYPE String : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ProbabilisticMap = System::System__String__ProbabilisticMap;

using TrimType = System::System__String__TrimType;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<char16_t>() const noexcept;

/// @brief Convert operator to System::IComparable_1<::StringW>
constexpr operator  System::IComparable_1<::StringW>() const noexcept;

/// @brief Convert operator to System::IEquatable_1<::StringW>
constexpr operator  System::IEquatable_1<::StringW>() const noexcept;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~String() = default;

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: " const&", def_value: None }]
constexpr String(String const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "&&", def_value: None }]
constexpr String(String&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit String(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr String& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr String& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr String& operator=(String&& o) noexcept = default;
  constexpr String& operator=(String const& o) noexcept = default;
                


// Fields

/// @brief Field StackallocIntBufferSizeLimit offset 0
static constexpr int32_t  StackallocIntBufferSizeLimit{128};

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_MASK offset 0
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_MASK{7};

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_SHIFT offset 0
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_SHIFT{3};

/// @brief Field PROBABILISTICMAP_SIZE offset 0
static constexpr int32_t  PROBABILISTICMAP_SIZE{8};

 int32_t __declspec(property(get=__get__stringLength, put=__set__stringLength))  _stringLength;

constexpr void __set__stringLength(int32_t value) ;

constexpr int32_t __get__stringLength() const;

 char16_t __declspec(property(get=__get__firstChar, put=__set__firstChar))  _firstChar;

constexpr void __set__firstChar(char16_t value) ;

constexpr char16_t __get__firstChar() const;

static ::StringW __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::StringW value) ;

static ::StringW __get_Empty() ;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 char16_t __declspec(property(get=get_Chars))  Chars;


// Methods

/// @brief Method EqualsHelper addr 0x22f9210 size 0x2c virtual false final false
static bool EqualsHelper(::StringW strA, ::StringW strB) ;

/// @brief Method CompareOrdinalHelper addr 0x22f9244 size 0x38 virtual false final false
static int32_t CompareOrdinalHelper(::StringW strA, int32_t indexA, int32_t countA, ::StringW strB, int32_t indexB, int32_t countB) ;

/// @brief Method CompareOrdinalHelper addr 0x22f927c size 0x1a4 virtual false final false
static int32_t CompareOrdinalHelper(::StringW strA, ::StringW strB) ;

/// @brief Method Compare addr 0x22f9420 size 0x8 virtual false final false
static int32_t Compare(::StringW strA, ::StringW strB) ;

/// @brief Method Compare addr 0x22f96c0 size 0x8 virtual false final false
static int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase) ;

/// @brief Method Compare addr 0x22f9428 size 0x298 virtual false final false
static int32_t Compare(::StringW strA, ::StringW strB, System::StringComparison comparisonType) ;

/// @brief Method Compare addr 0x22f96e4 size 0x9c virtual false final false
static int32_t Compare(::StringW strA, ::StringW strB, System::Globalization::CultureInfo culture, System::Globalization::CompareOptions options) ;

/// @brief Method Compare addr 0x22f9780 size 0x10 virtual false final false
static int32_t Compare(::StringW strA, ::StringW strB, bool ignoreCase, System::Globalization::CultureInfo culture) ;

/// @brief Method Compare addr 0x22f9790 size 0x8 virtual false final false
static int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length) ;

/// @brief Method Compare addr 0x22f9798 size 0x140 virtual false final false
static int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, bool ignoreCase) ;

/// @brief Method Compare addr 0x22f98d8 size 0x428 virtual false final false
static int32_t Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, System::StringComparison comparisonType) ;

/// @brief Method CompareOrdinal addr 0x22f9d00 size 0x44 virtual false final false
static int32_t CompareOrdinal(::StringW strA, ::StringW strB) ;

/// @brief Method CompareOrdinal addr 0x22f9d44 size 0xa0 virtual false final false
static int32_t CompareOrdinal(System::ReadOnlySpan_1<char16_t> strA, System::ReadOnlySpan_1<char16_t> strB) ;

/// @brief Method CompareOrdinal addr 0x22f9de4 size 0x208 virtual false final false
static int32_t CompareOrdinal(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length) ;

/// @brief Method CompareTo addr 0x22f9fec size 0xc0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x22fa0ac size 0x8 virtual true final true
 int32_t CompareTo(::StringW strB) ;

/// @brief Method EndsWith addr 0x22fa0b4 size 0x8 virtual false final false
 bool EndsWith(::StringW value) ;

/// @brief Method EndsWith addr 0x22fa0bc size 0x2a4 virtual false final false
 bool EndsWith(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method EndsWith addr 0x22fa360 size 0x50 virtual false final false
 bool EndsWith(char16_t value) ;

/// @brief Method Equals addr 0x22fa3b0 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x22fa454 size 0x40 virtual true final true
 bool Equals(::StringW value) ;

/// @brief Method Equals addr 0x22fa494 size 0x284 virtual false final false
 bool Equals(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method Equals addr 0x22fa718 size 0x4c virtual false final false
static bool Equals(::StringW a, ::StringW b) ;

/// @brief Method Equals addr 0x22fa764 size 0x284 virtual false final false
static bool Equals(::StringW a, ::StringW b, System::StringComparison comparisonType) ;

/// @brief Method op_Equality addr 0x22fa9e8 size 0x4 virtual false final false
static bool op_Equality(::StringW a, ::StringW b) ;

/// @brief Method op_Inequality addr 0x22fa9ec size 0x18 virtual false final false
static bool op_Inequality(::StringW a, ::StringW b) ;

/// @brief Method GetHashCode addr 0x22faa04 size 0x4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetLegacyNonRandomizedHashCode addr 0x22faa08 size 0x50 virtual false final false
 int32_t GetLegacyNonRandomizedHashCode() ;

/// @brief Method StartsWith addr 0x22faa58 size 0x5c virtual false final false
 bool StartsWith(::StringW value) ;

/// @brief Method StartsWith addr 0x22faab4 size 0x2bc virtual false final false
 bool StartsWith(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method CheckStringComparison addr 0x22f96c8 size 0x1c virtual false final false
static void CheckStringComparison(System::StringComparison comparisonType) ;

/// @brief Method FillStringChecked addr 0x22fad70 size 0x7c virtual false final false
static void FillStringChecked(::StringW dest, int32_t destPos, ::StringW src) ;

/// @brief Method Concat addr 0x22fadf8 size 0xa8 virtual false final false
static ::StringW Concat(::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method Concat addr 0x22faea0 size 0xe4 virtual false final false
static ::StringW Concat(::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method Concat addr 0x22fb044 size 0x258 virtual false final false
static ::StringW Concat(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Concat addr 0x22f1d50 size 0xe8 virtual false final false
static ::StringW Concat(::StringW str0, ::StringW str1) ;

/// @brief Method Concat addr 0x22faf84 size 0xc0 virtual false final false
static ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2) ;

/// @brief Method Concat addr 0x22fb2bc size 0x108 virtual false final false
static ::StringW Concat(::StringW str0, ::StringW str1, ::StringW str2, ::StringW str3) ;

/// @brief Method Concat addr 0x22fb3c4 size 0x210 virtual false final false
static ::StringW Concat(::ArrayW<::StringW> values) ;

/// @brief Method Format addr 0x22f29a8 size 0x44 virtual false final false
static ::StringW Format(::StringW format, ::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method Format addr 0x22fb6a4 size 0x44 virtual false final false
static ::StringW Format(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method Format addr 0x22fb6e8 size 0x44 virtual false final false
static ::StringW Format(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method Format addr 0x22fb72c size 0xb0 virtual false final false
static ::StringW Format(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Format addr 0x22fb7dc size 0x54 virtual false final false
static ::StringW Format(System::IFormatProvider provider, ::StringW format, ::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method Format addr 0x22fb830 size 0x58 virtual false final false
static ::StringW Format(System::IFormatProvider provider, ::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method Format addr 0x22fb888 size 0x5c virtual false final false
static ::StringW Format(System::IFormatProvider provider, ::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method Format addr 0x22fb8e4 size 0xb8 virtual false final false
static ::StringW Format(System::IFormatProvider provider, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method FormatHelper addr 0x22fb5d4 size 0xd0 virtual false final false
static ::StringW FormatHelper(System::IFormatProvider provider, ::StringW format, System::ParamsArray args) ;

/// @brief Method Insert addr 0x22fb99c size 0x144 virtual false final false
 ::StringW Insert(int32_t startIndex, ::StringW value) ;

/// @brief Method Join addr 0x22fbae0 size 0x64 virtual false final false
static ::StringW Join(::StringW separator, ::ArrayW<::StringW> value) ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW Join(::StringW separator, System::Collections::Generic::IEnumerable_1<T> values) ;

/// @brief Method Join addr 0x22fbbc4 size 0x4d4 virtual false final false
static ::StringW Join(::StringW separator, System::Collections::Generic::IEnumerable_1<::StringW> values) ;

/// @brief Method Join addr 0x22fbb44 size 0x80 virtual false final false
static ::StringW Join(::StringW separator, ::ArrayW<::StringW> value, int32_t startIndex, int32_t count) ;

/// @brief Method JoinCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW JoinCore(void* separator, int32_t separatorLength, System::Collections::Generic::IEnumerable_1<T> values) ;

/// @brief Method JoinCore addr 0x22fc098 size 0x3c0 virtual false final false
static ::StringW JoinCore(void* separator, int32_t separatorLength, ::ArrayW<::StringW> value, int32_t startIndex, int32_t count) ;

/// @brief Method PadLeft addr 0x22fc458 size 0xe0 virtual false final false
 ::StringW PadLeft(int32_t totalWidth, char16_t paddingChar) ;

/// @brief Method PadRight addr 0x22fc538 size 0xe8 virtual false final false
 ::StringW PadRight(int32_t totalWidth, char16_t paddingChar) ;

/// @brief Method Remove addr 0x22fc620 size 0x1a8 virtual false final false
 ::StringW Remove(int32_t startIndex, int32_t count) ;

/// @brief Method Remove addr 0x22fc7c8 size 0xc0 virtual false final false
 ::StringW Remove(int32_t startIndex) ;

/// @brief Method Replace addr 0x22fca30 size 0xd8 virtual false final false
 ::StringW Replace(char16_t oldChar, char16_t newChar) ;

/// @brief Method Replace addr 0x22fcb08 size 0x338 virtual false final false
 ::StringW Replace(::StringW oldValue, ::StringW newValue) ;

/// @brief Method ReplaceHelper addr 0x22fce40 size 0x358 virtual false final false
 ::StringW ReplaceHelper(int32_t oldValueLength, ::StringW newValue, System::ReadOnlySpan_1<int32_t> indices) ;

/// @brief Method Split addr 0x22fd198 size 0x60 virtual false final false
 ::ArrayW<::StringW> Split(char16_t separator, System::StringSplitOptions options) ;

/// @brief Method Split addr 0x22fd554 size 0x74 virtual false final false
 ::ArrayW<::StringW> Split(::ArrayW<char16_t> separator) ;

/// @brief Method Split addr 0x22fd5c8 size 0x78 virtual false final false
 ::ArrayW<::StringW> Split(::ArrayW<char16_t> separator, int32_t count) ;

/// @brief Method Split addr 0x22fd640 size 0x78 virtual false final false
 ::ArrayW<::StringW> Split(::ArrayW<char16_t> separator, System::StringSplitOptions options) ;

/// @brief Method Split addr 0x22fd6b8 size 0x84 virtual false final false
 ::ArrayW<::StringW> Split(::ArrayW<char16_t> separator, int32_t count, System::StringSplitOptions options) ;

/// @brief Method SplitInternal addr 0x22fd1f8 size 0x35c virtual false final false
 ::ArrayW<::StringW> SplitInternal(System::ReadOnlySpan_1<char16_t> separators, int32_t count, System::StringSplitOptions options) ;

/// @brief Method Split addr 0x22fe120 size 0x14 virtual false final false
 ::ArrayW<::StringW> Split(::ArrayW<::StringW> separator, System::StringSplitOptions options) ;

/// @brief Method SplitInternal addr 0x22fe134 size 0x440 virtual false final false
 ::ArrayW<::StringW> SplitInternal(::StringW separator, ::ArrayW<::StringW> separators, int32_t count, System::StringSplitOptions options) ;

/// @brief Method SplitInternal addr 0x22fe574 size 0x1fc virtual false final false
 ::ArrayW<::StringW> SplitInternal(::StringW separator, int32_t count, System::StringSplitOptions options) ;

/// @brief Method SplitKeepEmptyEntries addr 0x22fdc04 size 0x230 virtual false final false
 ::ArrayW<::StringW> SplitKeepEmptyEntries(System::ReadOnlySpan_1<int32_t> sepList, System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count) ;

/// @brief Method SplitOmitEmptyEntries addr 0x22fde34 size 0x2ec virtual false final false
 ::ArrayW<::StringW> SplitOmitEmptyEntries(System::ReadOnlySpan_1<int32_t> sepList, System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count) ;

/// @brief Method MakeSeparatorList addr 0x22fd73c size 0x4c8 virtual false final false
 void MakeSeparatorList(System::ReadOnlySpan_1<char16_t> separators, ByRef<System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder) ;

/// @brief Method MakeSeparatorList addr 0x22feb04 size 0x2e0 virtual false final false
 void MakeSeparatorList(::StringW separator, ByRef<System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder) ;

/// @brief Method MakeSeparatorList addr 0x22fe770 size 0x394 virtual false final false
 void MakeSeparatorList(::ArrayW<::StringW> separators, ByRef<System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder, ByRef<System::Collections::Generic::ValueListBuilder_1<int32_t>> lengthListBuilder) ;

/// @brief Method Substring addr 0x22fede4 size 0xc virtual false final false
 ::StringW Substring(int32_t startIndex) ;

/// @brief Method Substring addr 0x22fc888 size 0x1a8 virtual false final false
 ::StringW Substring(int32_t startIndex, int32_t length) ;

/// @brief Method InternalSubString addr 0x22feedc size 0x58 virtual false final false
 ::StringW InternalSubString(int32_t startIndex, int32_t length) ;

/// @brief Method ToLower addr 0x22fef34 size 0x7c virtual false final false
 ::StringW ToLower() ;

/// @brief Method ToLower addr 0x22fefb0 size 0x88 virtual false final false
 ::StringW ToLower(System::Globalization::CultureInfo culture) ;

/// @brief Method ToLowerInvariant addr 0x22ff038 size 0x7c virtual false final false
 ::StringW ToLowerInvariant() ;

/// @brief Method ToUpper addr 0x22ff0b4 size 0x7c virtual false final false
 ::StringW ToUpper() ;

/// @brief Method ToUpper addr 0x22ff130 size 0x88 virtual false final false
 ::StringW ToUpper(System::Globalization::CultureInfo culture) ;

/// @brief Method ToUpperInvariant addr 0x22ff1b8 size 0x7c virtual false final false
 ::StringW ToUpperInvariant() ;

/// @brief Method Trim addr 0x22ff234 size 0x8 virtual false final false
 ::StringW Trim() ;

/// @brief Method Trim addr 0x22ff374 size 0x20 virtual false final false
 ::StringW Trim(char16_t trimChar) ;

/// @brief Method Trim addr 0x22ff4cc size 0x34 virtual false final false
 ::StringW Trim(::ArrayW<char16_t> trimChars) ;

/// @brief Method TrimStart addr 0x22ff500 size 0x8 virtual false final false
 ::StringW TrimStart() ;

/// @brief Method TrimStart addr 0x22ff508 size 0x20 virtual false final false
 ::StringW TrimStart(char16_t trimChar) ;

/// @brief Method TrimStart addr 0x22ff528 size 0x34 virtual false final false
 ::StringW TrimStart(::ArrayW<char16_t> trimChars) ;

/// @brief Method TrimEnd addr 0x22ff55c size 0x8 virtual false final false
 ::StringW TrimEnd() ;

/// @brief Method TrimEnd addr 0x22ff564 size 0x20 virtual false final false
 ::StringW TrimEnd(char16_t trimChar) ;

/// @brief Method TrimEnd addr 0x22ff584 size 0x34 virtual false final false
 ::StringW TrimEnd(::ArrayW<char16_t> trimChars) ;

/// @brief Method TrimWhiteSpaceHelper addr 0x22ff23c size 0x138 virtual false final false
 ::StringW TrimWhiteSpaceHelper(System::System__String__TrimType trimType) ;

/// @brief Method TrimHelper addr 0x22ff394 size 0x138 virtual false final false
 ::StringW TrimHelper(void* trimChars, int32_t trimCharsLength, System::System__String__TrimType trimType) ;

/// @brief Method CreateTrimmedString addr 0x22ff5b8 size 0x90 virtual false final false
 ::StringW CreateTrimmedString(int32_t start, int32_t end) ;

/// @brief Method Contains addr 0x22ff648 size 0x24 virtual false final false
 bool Contains(::StringW value) ;

/// @brief Method Contains addr 0x22ff67c size 0x24 virtual false final false
 bool Contains(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method Contains addr 0x22ff6a0 size 0x24 virtual false final false
 bool Contains(char16_t value) ;

/// @brief Method IndexOf addr 0x22ff6c4 size 0x10 virtual false final false
 int32_t IndexOf(char16_t value) ;

/// @brief Method IndexOf addr 0x22ff6d4 size 0xc virtual false final false
 int32_t IndexOf(char16_t value, int32_t startIndex) ;

/// @brief Method IndexOf addr 0x22ff6e0 size 0xe0 virtual false final false
 int32_t IndexOf(char16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfAny addr 0x22ff7c0 size 0xc virtual false final false
 int32_t IndexOfAny(::ArrayW<char16_t> anyOf) ;

/// @brief Method IndexOfAny addr 0x22ff990 size 0xc virtual false final false
 int32_t IndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex) ;

/// @brief Method IndexOfAny addr 0x22ff7cc size 0x1c4 virtual false final false
 int32_t IndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfAny addr 0x22ff99c size 0x84 virtual false final false
 int32_t IndexOfAny(char16_t value1, char16_t value2, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfAny addr 0x22ffa20 size 0x54 virtual false final false
 int32_t IndexOfAny(char16_t value1, char16_t value2, char16_t value3, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfCharArray addr 0x22ffa74 size 0x168 virtual false final false
 int32_t IndexOfCharArray(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) ;

/// @brief Method InitializeProbabilisticMap addr 0x22fedf0 size 0xc8 virtual false final false
static void InitializeProbabilisticMap(void* charMap, System::ReadOnlySpan_1<char16_t> anyOf) ;

/// @brief Method ArrayContains addr 0x22ffbdc size 0x4c virtual false final false
static bool ArrayContains(char16_t searchChar, ::ArrayW<char16_t> anyOf) ;

/// @brief Method IsCharBitSet addr 0x22feeb8 size 0x24 virtual false final false
static bool IsCharBitSet(void* charMap, uint8_t value) ;

/// @brief Method SetCharBit addr 0x22ffc28 size 0x24 virtual false final false
static void SetCharBit(void* charMap, uint8_t value) ;

/// @brief Method IndexOf addr 0x22ffc4c size 0x10 virtual false final false
 int32_t IndexOf(::StringW value) ;

/// @brief Method IndexOf addr 0x22ffc5c size 0x10 virtual false final false
 int32_t IndexOf(::StringW value, int32_t startIndex) ;

/// @brief Method IndexOf addr 0x22ff66c size 0x10 virtual false final false
 int32_t IndexOf(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method IndexOf addr 0x22ffc6c size 0x10 virtual false final false
 int32_t IndexOf(::StringW value, int32_t startIndex, System::StringComparison comparisonType) ;

/// @brief Method IndexOf addr 0x22ffc7c size 0x338 virtual false final false
 int32_t IndexOf(::StringW value, int32_t startIndex, int32_t count, System::StringComparison comparisonType) ;

/// @brief Method LastIndexOf addr 0x22fffb4 size 0x10 virtual false final false
 int32_t LastIndexOf(char16_t value) ;

/// @brief Method LastIndexOf addr 0x22fffc4 size 0x8 virtual false final false
 int32_t LastIndexOf(char16_t value, int32_t startIndex) ;

/// @brief Method LastIndexOf addr 0x22fffcc size 0xec virtual false final false
 int32_t LastIndexOf(char16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOfAny addr 0x23000b8 size 0xc virtual false final false
 int32_t LastIndexOfAny(::ArrayW<char16_t> anyOf) ;

/// @brief Method LastIndexOfAny addr 0x23001fc size 0x8 virtual false final false
 int32_t LastIndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex) ;

/// @brief Method LastIndexOfAny addr 0x23000c4 size 0x138 virtual false final false
 int32_t LastIndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOfCharArray addr 0x2300204 size 0x168 virtual false final false
 int32_t LastIndexOfCharArray(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x230036c size 0x10 virtual false final false
 int32_t LastIndexOf(::StringW value) ;

/// @brief Method LastIndexOf addr 0x2300710 size 0x10 virtual false final false
 int32_t LastIndexOf(::StringW value, System::StringComparison comparisonType) ;

/// @brief Method LastIndexOf addr 0x230037c size 0x394 virtual false final false
 int32_t LastIndexOf(::StringW value, int32_t startIndex, int32_t count, System::StringComparison comparisonType) ;

// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
explicit String(::ArrayW<char16_t> value) ;

/// @brief Method .ctor addr 0x2300720 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> value) ;

/// @brief Method Ctor addr 0x2300724 size 0x90 virtual false final false
static ::StringW Ctor(::ArrayW<char16_t> value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit String(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) ;

/// @brief Method .ctor addr 0x23007b4 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) ;

/// @brief Method Ctor addr 0x23007b8 size 0x1bc virtual false final false
static ::StringW Ctor(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) ;

// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit String(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method .ctor addr 0x2300974 size 0x4 virtual false final false
 void _ctor(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method Ctor addr 0x2300978 size 0x190 virtual false final false
static ::StringW Ctor(void* ptr, int32_t startIndex, int32_t length) ;

// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit String(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method .ctor addr 0x2300b08 size 0x4 virtual false final false
 void _ctor(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method Ctor addr 0x2300b0c size 0x188 virtual false final false
static ::StringW Ctor(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method CreateStringForSByteConstructor addr 0x2300c94 size 0x7c virtual false final false
static ::StringW CreateStringForSByteConstructor(void* pb, int32_t numBytes) ;

// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enc", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit String(void* value, int32_t startIndex, int32_t length, System::Text::Encoding enc) ;

/// @brief Method .ctor addr 0x2300d10 size 0x4 virtual false final false
 void _ctor(void* value, int32_t startIndex, int32_t length, System::Text::Encoding enc) ;

/// @brief Method Ctor addr 0x2300d14 size 0x1e4 virtual false final false
static ::StringW Ctor(void* value, int32_t startIndex, int32_t length, System::Text::Encoding enc) ;

// Ctor Parameters [CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
explicit String(char16_t c, int32_t count) ;

/// @brief Method .ctor addr 0x2300f08 size 0x4 virtual false final false
 void _ctor(char16_t c, int32_t count) ;

/// @brief Method Ctor addr 0x2300f0c size 0x120 virtual false final false
static ::StringW Ctor(char16_t c, int32_t count) ;

// Ctor Parameters [CppParam { name: "value", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
explicit String(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method .ctor addr 0x230102c size 0x4 virtual false final false
 void _ctor(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method Ctor addr 0x2301030 size 0xc0 virtual false final false
static ::StringW Ctor(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static ::StringW Create(int32_t length, TState state, System::Buffers::SpanAction_2<char16_t,TState> action) ;

/// @brief Method op_Implicit addr 0x23010f0 size 0x50 virtual false final false
static System::ReadOnlySpan_1<char16_t> op_Implicit_System__ReadOnlySpan_1_char16_t_(::StringW value) ;

/// @brief Method Clone addr 0x2301140 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Copy addr 0x2301144 size 0x98 virtual false final false
static ::StringW Copy(::StringW str) ;

/// @brief Method CopyTo addr 0x23011dc size 0x188 virtual false final false
 void CopyTo(int32_t sourceIndex, ::ArrayW<char16_t> destination, int32_t destinationIndex, int32_t count) ;

/// @brief Method ToCharArray addr 0x2301364 size 0xdc virtual false final false
 ::ArrayW<char16_t> ToCharArray() ;

/// @brief Method IsNullOrEmpty addr 0x22fb2a0 size 0x1c virtual false final false
static bool IsNullOrEmpty(::StringW value) ;

/// @brief Method IsNullOrWhiteSpace addr 0x2301440 size 0xb0 virtual false final false
static bool IsNullOrWhiteSpace(::StringW value) ;

/// @brief Method GetRawStringData addr 0x22f923c size 0x8 virtual false final false
 ByRef<char16_t> GetRawStringData() ;

/// @brief Method CreateStringFromEncoding addr 0x23014f0 size 0xc8 virtual false final false
static ::StringW CreateStringFromEncoding(void* bytes, int32_t byteLength, System::Text::Encoding encoding) ;

/// @brief Method CreateFromChar addr 0x23015b8 size 0x24 virtual false final false
static ::StringW CreateFromChar(char16_t c) ;

/// @brief Method wstrcpy addr 0x22fadec size 0xc virtual false final false
static void wstrcpy(void* dmem, void* smem, int32_t charCount) ;

/// @brief Method ToString addr 0x23015dc size 0x4 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x23015e0 size 0x4 virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator addr 0x23015e4 size 0x64 virtual true final true
 System::Collections::Generic::IEnumerator_1<char16_t> System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2301648 size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method wcslen addr 0x23016ac size 0x10c virtual false final false
static int32_t wcslen(void* ptr) ;

/// @brief Method GetTypeCode addr 0x23017b8 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x23017c0 size 0x68 virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2301828 size 0x68 virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2301890 size 0x68 virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x23018f8 size 0x68 virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2301960 size 0x68 virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x23019c8 size 0x68 virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2301a30 size 0x68 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2301a98 size 0x68 virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x2301b00 size 0x68 virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2301b68 size 0x68 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2301bd0 size 0x68 virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x2301c38 size 0x68 virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x2301ca0 size 0x68 virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2301d08 size 0x68 virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x2301d70 size 0x70 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

/// @brief Method Normalize addr 0x2301de0 size 0x68 virtual false final false
 ::StringW Normalize(System::Text::NormalizationForm normalizationForm) ;

/// @brief Method get_Length addr 0x2301e48 size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method IndexOfUnchecked addr 0x2301e50 size 0xd4 virtual false final false
 int32_t IndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfUncheckedIgnoreCase addr 0x2301f24 size 0x1a0 virtual false final false
 int32_t IndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOfUnchecked addr 0x23020c4 size 0xd0 virtual false final false
 int32_t LastIndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOfUncheckedIgnoreCase addr 0x2302194 size 0x18c virtual false final false
 int32_t LastIndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count) ;

/// @brief Method StartsWithOrdinalUnchecked addr 0x2302320 size 0x58 virtual false final false
 bool StartsWithOrdinalUnchecked(::StringW value) ;

/// @brief Method FastAllocateString addr 0x22fb29c size 0x4 virtual false final false
static ::StringW FastAllocateString(int32_t length) ;

/// @brief Method InternalIsInterned addr 0x2302378 size 0x4 virtual false final false
static ::StringW InternalIsInterned(::StringW str) ;

/// @brief Method InternalIntern addr 0x230237c size 0x4 virtual false final false
static ::StringW InternalIntern(::StringW str) ;

/// @brief Method memset addr 0x2302380 size 0xbc virtual false final false
static void memset(void* dest, int32_t val, int32_t len) ;

/// @brief Method memcpy addr 0x230243c size 0xc virtual false final false
static void memcpy(void* dest, void* src, int32_t size) ;

/// @brief Method bzero addr 0x2302448 size 0xc virtual false final false
static void bzero(void* dest, int32_t len) ;

/// @brief Method bzero_aligned_1 addr 0x2302454 size 0x8 virtual false final false
static void bzero_aligned_1(void* dest, int32_t len) ;

/// @brief Method bzero_aligned_2 addr 0x230245c size 0x8 virtual false final false
static void bzero_aligned_2(void* dest, int32_t len) ;

/// @brief Method bzero_aligned_4 addr 0x2302464 size 0x8 virtual false final false
static void bzero_aligned_4(void* dest, int32_t len) ;

/// @brief Method bzero_aligned_8 addr 0x230246c size 0x8 virtual false final false
static void bzero_aligned_8(void* dest, int32_t len) ;

/// @brief Method memcpy_aligned_1 addr 0x2302474 size 0xc virtual false final false
static void memcpy_aligned_1(void* dest, void* src, int32_t size) ;

/// @brief Method memcpy_aligned_2 addr 0x2302480 size 0xc virtual false final false
static void memcpy_aligned_2(void* dest, void* src, int32_t size) ;

/// @brief Method memcpy_aligned_4 addr 0x230248c size 0xc virtual false final false
static void memcpy_aligned_4(void* dest, void* src, int32_t size) ;

/// @brief Method memcpy_aligned_8 addr 0x2302498 size 0xc virtual false final false
static void memcpy_aligned_8(void* dest, void* src, int32_t size) ;

/// @brief Method CreateString addr 0x2300ef8 size 0x10 virtual false final false
 ::StringW CreateString(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method CreateString addr 0x23024a4 size 0x10 virtual false final false
 ::StringW CreateString(void* value, int32_t startIndex, int32_t length) ;

/// @brief Method CreateString addr 0x23024b4 size 0x10 virtual false final false
 ::StringW CreateString(::ArrayW<char16_t> val, int32_t startIndex, int32_t length) ;

/// @brief Method CreateString addr 0x22f9208 size 0x8 virtual false final false
 ::StringW CreateString(::ArrayW<char16_t> val) ;

/// @brief Method CreateString addr 0x23024c4 size 0xc virtual false final false
 ::StringW CreateString(char16_t c, int32_t count) ;

/// @brief Method CreateString addr 0x23024d0 size 0x14 virtual false final false
 ::StringW CreateString(void* value, int32_t startIndex, int32_t length, System::Text::Encoding enc) ;

/// @brief Method CreateString addr 0x23024e4 size 0xc virtual false final false
 ::StringW CreateString(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method get_Chars addr 0x22f64a0 size 0x3c virtual false final false
 char16_t get_Chars(int32_t index) ;

/// @brief Method Intern addr 0x23024f0 size 0x58 virtual false final false
static ::StringW Intern(::StringW str) ;

/// @brief Method IsInterned addr 0x2302548 size 0x58 virtual false final false
static ::StringW IsInterned(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__String__TrimType, "System", "String/TrimType");
NEED_NO_BOX(System::String);
DEFINE_IL2CPP_ARG_TYPE(System::String, "System", "String");
DEFINE_IL2CPP_ARG_TYPE(System::System__String__ProbabilisticMap, "System", "String/ProbabilisticMap");
