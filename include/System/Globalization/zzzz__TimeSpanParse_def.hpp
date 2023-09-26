#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Globalization {
struct TimeSpanStyles;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanFormat__FormatLiterals;
}
// Forward declare root types
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__ParseFailureKind;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TTT;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TimeSpanStandardStyles;
}
namespace System::Globalization {
class TimeSpanParse;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__StringParser;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TimeSpanRawInfo;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TimeSpanResult;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TimeSpanToken;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanParse__TimeSpanTokenizer;
}
// Type: ::ParseFailureKind
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3669))
// CS Name: System.Globalization.TimeSpanParse::ParseFailureKind
struct CORDL_TYPE System__Globalization__TimeSpanParse__ParseFailureKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__ParseFailureKind(uint8_t value__) noexcept;


                    constexpr System__Globalization__TimeSpanParse__ParseFailureKind(System__Globalization__TimeSpanParse__ParseFailureKind const&) = default;
                    constexpr System__Globalization__TimeSpanParse__ParseFailureKind(System__Globalization__TimeSpanParse__ParseFailureKind&&) = default;
                    constexpr System__Globalization__TimeSpanParse__ParseFailureKind& operator=(System__Globalization__TimeSpanParse__ParseFailureKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__ParseFailureKind& operator=(System__Globalization__TimeSpanParse__ParseFailureKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__ParseFailureKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__TimeSpanParse__ParseFailureKind_Unwrapped : uint8_t {
__None = 0u,
__ArgumentNull = 1u,
__Format = 2u,
__FormatWithParameter = 3u,
__Overflow = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__TimeSpanParse__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__TimeSpanParse__ParseFailureKind_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind const None;

/// @brief Field ArgumentNull offset 0
static System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind const ArgumentNull;

/// @brief Field Format offset 0
static System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind const Format;

/// @brief Field FormatWithParameter offset 0
static System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind const FormatWithParameter;

/// @brief Field Overflow offset 0
static System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind const Overflow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TimeSpanStandardStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3670))
// CS Name: System.Globalization.TimeSpanParse::TimeSpanStandardStyles
struct CORDL_TYPE System__Globalization__TimeSpanParse__TimeSpanStandardStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TimeSpanStandardStyles(uint8_t value__) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TimeSpanStandardStyles(System__Globalization__TimeSpanParse__TimeSpanStandardStyles const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanStandardStyles(System__Globalization__TimeSpanParse__TimeSpanStandardStyles&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanStandardStyles& operator=(System__Globalization__TimeSpanParse__TimeSpanStandardStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TimeSpanStandardStyles& operator=(System__Globalization__TimeSpanParse__TimeSpanStandardStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TimeSpanStandardStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__TimeSpanParse__TimeSpanStandardStyles_Unwrapped : uint8_t {
__None = 0u,
__Invariant = 1u,
__Localized = 2u,
__RequireFull = 4u,
__Any = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__TimeSpanParse__TimeSpanStandardStyles_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__TimeSpanParse__TimeSpanStandardStyles_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles const None;

/// @brief Field Invariant offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles const Invariant;

/// @brief Field Localized offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles const Localized;

/// @brief Field RequireFull offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles const RequireFull;

/// @brief Field Any offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TTT
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3671))
// CS Name: System.Globalization.TimeSpanParse::TTT
struct CORDL_TYPE System__Globalization__TimeSpanParse__TTT : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TTT(uint8_t value__) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TTT(System__Globalization__TimeSpanParse__TTT const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TTT(System__Globalization__TimeSpanParse__TTT&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TTT& operator=(System__Globalization__TimeSpanParse__TTT const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TTT& operator=(System__Globalization__TimeSpanParse__TTT&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TTT(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__TimeSpanParse__TTT_Unwrapped : uint8_t {
__None = 0u,
__End = 1u,
__Num = 2u,
__Sep = 3u,
__NumOverflow = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__TimeSpanParse__TTT_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__TimeSpanParse__TTT_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TTT const None;

/// @brief Field End offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TTT const End;

/// @brief Field Num offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TTT const Num;

/// @brief Field Sep offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TTT const Sep;

/// @brief Field NumOverflow offset 0
static System::Globalization::System__Globalization__TimeSpanParse__TTT const NumOverflow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TimeSpanToken
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3672))
// CS Name: System.Globalization.TimeSpanParse::TimeSpanToken
struct CORDL_TYPE System__Globalization__TimeSpanParse__TimeSpanToken : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_ttt", ty: "System::Globalization::System__Globalization__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sep", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TimeSpanToken(System::Globalization::System__Globalization__TimeSpanParse__TTT _ttt, int32_t _num, int32_t _zeroes, System::ReadOnlySpan_1<char16_t> _sep) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TimeSpanToken(System__Globalization__TimeSpanParse__TimeSpanToken const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanToken(System__Globalization__TimeSpanParse__TimeSpanToken&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanToken& operator=(System__Globalization__TimeSpanParse__TimeSpanToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TimeSpanToken& operator=(System__Globalization__TimeSpanParse__TimeSpanToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TimeSpanToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Globalization::System__Globalization__TimeSpanParse__TTT __declspec(property(get=__get__ttt, put=__set__ttt))  _ttt;

constexpr void __set__ttt(System::Globalization::System__Globalization__TimeSpanParse__TTT value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TTT __get__ttt() const;

 int32_t __declspec(property(get=__get__num, put=__set__num))  _num;

constexpr void __set__num(int32_t value) ;

constexpr int32_t __get__num() const;

 int32_t __declspec(property(get=__get__zeroes, put=__set__zeroes))  _zeroes;

constexpr void __set__zeroes(int32_t value) ;

constexpr int32_t __get__zeroes() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__sep, put=__set__sep))  _sep;

constexpr void __set__sep(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__sep() const;


// Methods

/// @brief Method .ctor addr 0x2423c20 size 0x10 virtual false final false
 void _ctor(System::Globalization::System__Globalization__TimeSpanParse__TTT type) ;

/// @brief Method .ctor addr 0x2420644 size 0x14 virtual false final false
 void _ctor(int32_t number) ;

/// @brief Method .ctor addr 0x2423a0c size 0x14 virtual false final false
 void _ctor(int32_t number, int32_t leadingZeroes) ;

/// @brief Method .ctor addr 0x2423c30 size 0x10 virtual false final false
 void _ctor(System::Globalization::System__Globalization__TimeSpanParse__TTT type, int32_t number, int32_t leadingZeroes, System::ReadOnlySpan_1<char16_t> separator) ;

/// @brief Method IsInvalidFraction addr 0x241cf94 size 0x5c virtual false final false
 bool IsInvalidFraction() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TimeSpanTokenizer
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3673))
// CS Name: System.Globalization.TimeSpanParse::TimeSpanTokenizer
struct CORDL_TYPE System__Globalization__TimeSpanParse__TimeSpanTokenizer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TimeSpanTokenizer(System::ReadOnlySpan_1<char16_t> _value, int32_t _pos) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TimeSpanTokenizer(System__Globalization__TimeSpanParse__TimeSpanTokenizer const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanTokenizer(System__Globalization__TimeSpanParse__TimeSpanTokenizer&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanTokenizer& operator=(System__Globalization__TimeSpanParse__TimeSpanTokenizer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TimeSpanTokenizer& operator=(System__Globalization__TimeSpanParse__TimeSpanTokenizer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TimeSpanTokenizer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__value() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;


// Properties

 bool __declspec(property(get=get_EOL))  EOL;

 char16_t __declspec(property(get=get_NextChar))  NextChar;


// Methods

/// @brief Method .ctor addr 0x241d4c4 size 0xc virtual false final false
 void _ctor(System::ReadOnlySpan_1<char16_t> input) ;

/// @brief Method .ctor addr 0x24237d4 size 0xc virtual false final false
 void _ctor(System::ReadOnlySpan_1<char16_t> input, int32_t startPosition) ;

/// @brief Method GetNextToken addr 0x241d51c size 0x240 virtual false final false
 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken GetNextToken() ;

/// @brief Method get_EOL addr 0x24239c0 size 0x4c virtual false final false
 bool get_EOL() ;

/// @brief Method BackOne addr 0x2423a20 size 0x14 virtual false final false
 void BackOne() ;

/// @brief Method get_NextChar addr 0x2423960 size 0x60 virtual false final false
 char16_t get_NextChar() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TimeSpanRawInfo
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3674))
// CS Name: System.Globalization.TimeSpanParse::TimeSpanRawInfo
struct CORDL_TYPE System__Globalization__TimeSpanParse__TimeSpanRawInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "System::Globalization::System__Globalization__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_posLoc", ty: "System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_negLoc", ty: "System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_negLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_numbers0", ty: "System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers1", ty: "System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers2", ty: "System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers3", ty: "System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers4", ty: "System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_literals0", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals1", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals2", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals3", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals4", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals5", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TimeSpanRawInfo(System::Globalization::System__Globalization__TimeSpanParse__TTT _lastSeenTTT, int32_t _tokenCount, int32_t _sepCount, int32_t _numCount, System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals _posLoc, System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals _negLoc, bool _posLocInit, bool _negLocInit, ::StringW _fullPosPattern, ::StringW _fullNegPattern, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken _numbers0, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken _numbers1, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken _numbers2, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken _numbers3, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken _numbers4, System::ReadOnlySpan_1<char16_t> _literals0, System::ReadOnlySpan_1<char16_t> _literals1, System::ReadOnlySpan_1<char16_t> _literals2, System::ReadOnlySpan_1<char16_t> _literals3, System::ReadOnlySpan_1<char16_t> _literals4, System::ReadOnlySpan_1<char16_t> _literals5) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TimeSpanRawInfo(System__Globalization__TimeSpanParse__TimeSpanRawInfo const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanRawInfo(System__Globalization__TimeSpanParse__TimeSpanRawInfo&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanRawInfo& operator=(System__Globalization__TimeSpanParse__TimeSpanRawInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TimeSpanRawInfo& operator=(System__Globalization__TimeSpanParse__TimeSpanRawInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x178};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TimeSpanRawInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Globalization::System__Globalization__TimeSpanParse__TTT __declspec(property(get=__get__lastSeenTTT, put=__set__lastSeenTTT))  _lastSeenTTT;

constexpr void __set__lastSeenTTT(System::Globalization::System__Globalization__TimeSpanParse__TTT value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TTT __get__lastSeenTTT() const;

 int32_t __declspec(property(get=__get__tokenCount, put=__set__tokenCount))  _tokenCount;

constexpr void __set__tokenCount(int32_t value) ;

constexpr int32_t __get__tokenCount() const;

 int32_t __declspec(property(get=__get__sepCount, put=__set__sepCount))  _sepCount;

constexpr void __set__sepCount(int32_t value) ;

constexpr int32_t __get__sepCount() const;

 int32_t __declspec(property(get=__get__numCount, put=__set__numCount))  _numCount;

constexpr void __set__numCount(int32_t value) ;

constexpr int32_t __get__numCount() const;

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=__get__posLoc, put=__set__posLoc))  _posLoc;

constexpr void __set__posLoc(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value) ;

constexpr System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __get__posLoc() const;

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=__get__negLoc, put=__set__negLoc))  _negLoc;

constexpr void __set__negLoc(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value) ;

constexpr System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __get__negLoc() const;

 bool __declspec(property(get=__get__posLocInit, put=__set__posLocInit))  _posLocInit;

constexpr void __set__posLocInit(bool value) ;

constexpr bool __get__posLocInit() const;

 bool __declspec(property(get=__get__negLocInit, put=__set__negLocInit))  _negLocInit;

constexpr void __set__negLocInit(bool value) ;

constexpr bool __get__negLocInit() const;

 ::StringW __declspec(property(get=__get__fullPosPattern, put=__set__fullPosPattern))  _fullPosPattern;

constexpr void __set__fullPosPattern(::StringW value) ;

constexpr ::StringW __get__fullPosPattern() const;

 ::StringW __declspec(property(get=__get__fullNegPattern, put=__set__fullNegPattern))  _fullNegPattern;

constexpr void __set__fullNegPattern(::StringW value) ;

constexpr ::StringW __get__fullNegPattern() const;

 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __declspec(property(get=__get__numbers0, put=__set__numbers0))  _numbers0;

constexpr void __set__numbers0(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __get__numbers0() const;

 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __declspec(property(get=__get__numbers1, put=__set__numbers1))  _numbers1;

constexpr void __set__numbers1(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __get__numbers1() const;

 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __declspec(property(get=__get__numbers2, put=__set__numbers2))  _numbers2;

constexpr void __set__numbers2(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __get__numbers2() const;

 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __declspec(property(get=__get__numbers3, put=__set__numbers3))  _numbers3;

constexpr void __set__numbers3(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __get__numbers3() const;

 System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __declspec(property(get=__get__numbers4, put=__set__numbers4))  _numbers4;

constexpr void __set__numbers4(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken value) ;

constexpr System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken __get__numbers4() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals0, put=__set__literals0))  _literals0;

constexpr void __set__literals0(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals0() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals1, put=__set__literals1))  _literals1;

constexpr void __set__literals1(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals1() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals2, put=__set__literals2))  _literals2;

constexpr void __set__literals2(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals2() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals3, put=__set__literals3))  _literals3;

constexpr void __set__literals3(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals3() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals4, put=__set__literals4))  _literals4;

constexpr void __set__literals4(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals4() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__literals5, put=__set__literals5))  _literals5;

constexpr void __set__literals5(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__literals5() const;


// Properties

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=get_PositiveInvariant))  PositiveInvariant;

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=get_NegativeInvariant))  NegativeInvariant;

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=get_PositiveLocalized))  PositiveLocalized;

 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=get_NegativeLocalized))  NegativeLocalized;


// Methods

/// @brief Method get_PositiveInvariant addr 0x2423c40 size 0x68 virtual false final false
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals get_PositiveInvariant() ;

/// @brief Method get_NegativeInvariant addr 0x2423ca8 size 0x6c virtual false final false
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals get_NegativeInvariant() ;

/// @brief Method get_PositiveLocalized addr 0x24204e0 size 0xb0 virtual false final false
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals get_PositiveLocalized() ;

/// @brief Method get_NegativeLocalized addr 0x2420590 size 0xb4 virtual false final false
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals get_NegativeLocalized() ;

/// @brief Method FullAppCompatMatch addr 0x2421358 size 0x678 virtual false final false
 bool FullAppCompatMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method PartialAppCompatMatch addr 0x2422468 size 0x544 virtual false final false
 bool PartialAppCompatMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullMatch addr 0x241fd2c size 0x7b4 virtual false final false
 bool FullMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullDMatch addr 0x2422dc4 size 0x2e4 virtual false final false
 bool FullDMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullHMMatch addr 0x24229ac size 0x418 virtual false final false
 bool FullHMMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullDHMMatch addr 0x2421f1c size 0x54c virtual false final false
 bool FullDHMMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullHMSMatch addr 0x24219d0 size 0x54c virtual false final false
 bool FullHMSMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullDHMSMatch addr 0x2420cd8 size 0x680 virtual false final false
 bool FullDHMSMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method FullHMSFMatch addr 0x2420658 size 0x680 virtual false final false
 bool FullHMSFMatch(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals pattern) ;

/// @brief Method Init addr 0x241d4d0 size 0x4c virtual false final false
 void Init(System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ProcessToken addr 0x241d75c size 0x110 virtual false final false
 bool ProcessToken(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken> tok, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method AddSep addr 0x2423d14 size 0x10c virtual false final false
 bool AddSep(System::ReadOnlySpan_1<char16_t> sep, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method AddNum addr 0x2423e20 size 0x110 virtual false final false
 bool AddNum(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken num, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::TimeSpanResult
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3675))
// CS Name: System.Globalization.TimeSpanParse::TimeSpanResult
struct CORDL_TYPE System__Globalization__TimeSpanParse__TimeSpanResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__TimeSpanResult(System::TimeSpan parsedTimeSpan, bool _throwOnFailure) noexcept;


                    constexpr System__Globalization__TimeSpanParse__TimeSpanResult(System__Globalization__TimeSpanParse__TimeSpanResult const&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanResult(System__Globalization__TimeSpanParse__TimeSpanResult&&) = default;
                    constexpr System__Globalization__TimeSpanParse__TimeSpanResult& operator=(System__Globalization__TimeSpanParse__TimeSpanResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__TimeSpanResult& operator=(System__Globalization__TimeSpanParse__TimeSpanResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__TimeSpanResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::TimeSpan __declspec(property(get=__get_parsedTimeSpan, put=__set_parsedTimeSpan))  parsedTimeSpan;

constexpr void __set_parsedTimeSpan(System::TimeSpan value) ;

constexpr System::TimeSpan __get_parsedTimeSpan() const;

 bool __declspec(property(get=__get__throwOnFailure, put=__set__throwOnFailure))  _throwOnFailure;

constexpr void __set__throwOnFailure(bool value) ;

constexpr bool __get__throwOnFailure() const;


// Methods

/// @brief Method .ctor addr 0x241d020 size 0x10 virtual false final false
 void _ctor(bool throwOnFailure) ;

/// @brief Method SetFailure addr 0x241d37c size 0x148 virtual false final false
 bool SetFailure(System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind kind, ::StringW resourceKey, ::bs_hook::Il2CppWrapperType messageArgument, ::StringW argumentName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::StringParser
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3676))
// CS Name: System.Globalization.TimeSpanParse::StringParser
struct CORDL_TYPE System__Globalization__TimeSpanParse__StringParser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_str", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanParse__StringParser(System::ReadOnlySpan_1<char16_t> _str, char16_t _ch, int32_t _pos, int32_t _len) noexcept;


                    constexpr System__Globalization__TimeSpanParse__StringParser(System__Globalization__TimeSpanParse__StringParser const&) = default;
                    constexpr System__Globalization__TimeSpanParse__StringParser(System__Globalization__TimeSpanParse__StringParser&&) = default;
                    constexpr System__Globalization__TimeSpanParse__StringParser& operator=(System__Globalization__TimeSpanParse__StringParser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanParse__StringParser& operator=(System__Globalization__TimeSpanParse__StringParser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanParse__StringParser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__str, put=__set__str))  _str;

constexpr void __set__str(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get__str() const;

 char16_t __declspec(property(get=__get__ch, put=__set__ch))  _ch;

constexpr void __set__ch(char16_t value) ;

constexpr char16_t __get__ch() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;

 int32_t __declspec(property(get=__get__len, put=__set__len))  _len;

constexpr void __set__len(int32_t value) ;

constexpr int32_t __get__len() const;


// Methods

/// @brief Method NextChar addr 0x2423f30 size 0x4c virtual false final false
 void NextChar() ;

/// @brief Method NextNonDigit addr 0x2423f7c size 0x5c virtual false final false
 char16_t NextNonDigit() ;

/// @brief Method TryParse addr 0x2423a34 size 0x1ec virtual false final false
 bool TryParse(System::ReadOnlySpan_1<char16_t> input, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ParseInt addr 0x24241c8 size 0x118 virtual false final false
 bool ParseInt(int32_t max, ByRef<int32_t> i, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ParseTime addr 0x2424008 size 0x1c0 virtual false final false
 bool ParseTime(ByRef<int64_t> time, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method SkipBlanks addr 0x2423fd8 size 0x30 virtual false final false
 void SkipBlanks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::TimeSpanParse
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3677))
// CS Name: System.Globalization.TimeSpanParse
class CORDL_TYPE TimeSpanParse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StringParser = System::Globalization::System__Globalization__TimeSpanParse__StringParser;

using TimeSpanResult = System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult;

using TimeSpanRawInfo = System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo;

using TimeSpanTokenizer = System::Globalization::System__Globalization__TimeSpanParse__TimeSpanTokenizer;

using TimeSpanToken = System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken;

using TTT = System::Globalization::System__Globalization__TimeSpanParse__TTT;

using TimeSpanStandardStyles = System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles;

using ParseFailureKind = System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeSpanParse() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: " const&", def_value: None }]
constexpr TimeSpanParse(TimeSpanParse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "&&", def_value: None }]
constexpr TimeSpanParse(TimeSpanParse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeSpanParse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeSpanParse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeSpanParse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeSpanParse& operator=(TimeSpanParse&& o) noexcept = default;
  constexpr TimeSpanParse& operator=(TimeSpanParse const& o) noexcept = default;
                


// Methods

/// @brief Method Pow10 addr 0x241c9fc size 0x90 virtual false final false
static int64_t Pow10(int32_t pow) ;

/// @brief Method TryTimeToTicks addr 0x241ce34 size 0x160 virtual false final false
static bool TryTimeToTicks(bool positive, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken days, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken hours, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken minutes, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken seconds, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken fraction, ByRef<int64_t> result) ;

/// @brief Method Parse addr 0x241cff0 size 0x30 virtual false final false
static System::TimeSpan Parse(System::ReadOnlySpan_1<char16_t> input, System::IFormatProvider formatProvider) ;

/// @brief Method TryParseExact addr 0x241d1c8 size 0x40 virtual false final false
static bool TryParseExact(System::ReadOnlySpan_1<char16_t> input, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider, System::Globalization::TimeSpanStyles styles, ByRef<System::TimeSpan> result) ;

/// @brief Method TryParseTimeSpan addr 0x241d030 size 0x198 virtual false final false
static bool TryParseTimeSpan(System::ReadOnlySpan_1<char16_t> input, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, System::IFormatProvider formatProvider, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminalState addr 0x241d86c size 0x138 virtual false final false
static bool ProcessTerminalState(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminal_DHMSF addr 0x241fac0 size 0x26c virtual false final false
static bool ProcessTerminal_DHMSF(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminal_HMS_F_D addr 0x241eee8 size 0xbd8 virtual false final false
static bool ProcessTerminal_HMS_F_D(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminal_HM_S_D addr 0x241e084 size 0xe64 virtual false final false
static bool ProcessTerminal_HM_S_D(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminal_HM addr 0x241dd30 size 0x354 virtual false final false
static bool ProcessTerminal_HM(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ProcessTerminal_D addr 0x241d9a4 size 0x38c virtual false final false
static bool ProcessTerminal_D(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo> raw, System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles style, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method TryParseExactTimeSpan addr 0x241d208 size 0x174 virtual false final false
static bool TryParseExactTimeSpan(System::ReadOnlySpan_1<char16_t> input, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider, System::Globalization::TimeSpanStyles styles, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method TryParseByFormat addr 0x24230dc size 0x6f8 virtual false final false
static bool TryParseByFormat(System::ReadOnlySpan_1<char16_t> input, System::ReadOnlySpan_1<char16_t> format, System::Globalization::TimeSpanStyles styles, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

/// @brief Method ParseExactDigits addr 0x24237e0 size 0x30 virtual false final false
static bool ParseExactDigits(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanTokenizer> tokenizer, int32_t minDigitLength, ByRef<int32_t> result) ;

/// @brief Method ParseExactDigits addr 0x2423810 size 0xc4 virtual false final false
static bool ParseExactDigits(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanTokenizer> tokenizer, int32_t minDigitLength, int32_t maxDigitLength, ByRef<int32_t> zeroes, ByRef<int32_t> result) ;

/// @brief Method ParseExactLiteral addr 0x24238d4 size 0x8c virtual false final false
static bool ParseExactLiteral(ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanTokenizer> tokenizer, System::Text::StringBuilder enquotedString) ;

/// @brief Method TryParseTimeSpanConstant addr 0x24230a8 size 0x34 virtual false final false
static bool TryParseTimeSpanConstant(System::ReadOnlySpan_1<char16_t> input, ByRef<System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TTT, "System.Globalization", "TimeSpanParse/TTT");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanStandardStyles, "System.Globalization", "TimeSpanParse/TimeSpanStandardStyles");
NEED_NO_BOX(System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanParse, "System.Globalization", "TimeSpanParse");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__StringParser, "System.Globalization", "TimeSpanParse/StringParser");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanParse__TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
