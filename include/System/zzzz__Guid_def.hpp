#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
struct System__Guid__GuidParseThrowStyle;
}
namespace System {
struct System__Guid__GuidStyles;
}
namespace System {
struct System__Guid__ParseFailureKind;
}
namespace System {
struct Guid;
}
namespace System {
struct System__Guid__GuidResult;
}
// Type: ::GuidStyles
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2402))
// CS Name: System.Guid::GuidStyles
struct CORDL_TYPE System__Guid__GuidStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Guid__GuidStyles(int32_t value__) noexcept;


                    constexpr System__Guid__GuidStyles(System__Guid__GuidStyles const&) = default;
                    constexpr System__Guid__GuidStyles(System__Guid__GuidStyles&&) = default;
                    constexpr System__Guid__GuidStyles& operator=(System__Guid__GuidStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Guid__GuidStyles& operator=(System__Guid__GuidStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Guid__GuidStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Guid__GuidStyles_Unwrapped : int32_t {
__None = 0,
__AllowParenthesis = 1,
__AllowBraces = 2,
__AllowDashes = 4,
__AllowHexPrefix = 8,
__RequireParenthesis = 16,
__RequireBraces = 32,
__RequireDashes = 64,
__RequireHexPrefix = 128,
__HexFormat = 160,
__NumberFormat = 0,
__DigitFormat = 64,
__BraceFormat = 96,
__ParenthesisFormat = 80,
__Any = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Guid__GuidStyles_Unwrapped () const noexcept {
return std::bit_cast<__System__Guid__GuidStyles_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Guid__GuidStyles const None;

/// @brief Field AllowParenthesis offset 0
static System::System__Guid__GuidStyles const AllowParenthesis;

/// @brief Field AllowBraces offset 0
static System::System__Guid__GuidStyles const AllowBraces;

/// @brief Field AllowDashes offset 0
static System::System__Guid__GuidStyles const AllowDashes;

/// @brief Field AllowHexPrefix offset 0
static System::System__Guid__GuidStyles const AllowHexPrefix;

/// @brief Field RequireParenthesis offset 0
static System::System__Guid__GuidStyles const RequireParenthesis;

/// @brief Field RequireBraces offset 0
static System::System__Guid__GuidStyles const RequireBraces;

/// @brief Field RequireDashes offset 0
static System::System__Guid__GuidStyles const RequireDashes;

/// @brief Field RequireHexPrefix offset 0
static System::System__Guid__GuidStyles const RequireHexPrefix;

/// @brief Field HexFormat offset 0
static System::System__Guid__GuidStyles const HexFormat;

/// @brief Field NumberFormat offset 0
static System::System__Guid__GuidStyles const NumberFormat;

/// @brief Field DigitFormat offset 0
static System::System__Guid__GuidStyles const DigitFormat;

/// @brief Field BraceFormat offset 0
static System::System__Guid__GuidStyles const BraceFormat;

/// @brief Field ParenthesisFormat offset 0
static System::System__Guid__GuidStyles const ParenthesisFormat;

/// @brief Field Any offset 0
static System::System__Guid__GuidStyles const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::GuidParseThrowStyle
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2403))
// CS Name: System.Guid::GuidParseThrowStyle
struct CORDL_TYPE System__Guid__GuidParseThrowStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Guid__GuidParseThrowStyle(int32_t value__) noexcept;


                    constexpr System__Guid__GuidParseThrowStyle(System__Guid__GuidParseThrowStyle const&) = default;
                    constexpr System__Guid__GuidParseThrowStyle(System__Guid__GuidParseThrowStyle&&) = default;
                    constexpr System__Guid__GuidParseThrowStyle& operator=(System__Guid__GuidParseThrowStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Guid__GuidParseThrowStyle& operator=(System__Guid__GuidParseThrowStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Guid__GuidParseThrowStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Guid__GuidParseThrowStyle_Unwrapped : int32_t {
__None = 0,
__All = 1,
__AllButOverflow = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Guid__GuidParseThrowStyle_Unwrapped () const noexcept {
return std::bit_cast<__System__Guid__GuidParseThrowStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Guid__GuidParseThrowStyle const None;

/// @brief Field All offset 0
static System::System__Guid__GuidParseThrowStyle const All;

/// @brief Field AllButOverflow offset 0
static System::System__Guid__GuidParseThrowStyle const AllButOverflow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::ParseFailureKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2404))
// CS Name: System.Guid::ParseFailureKind
struct CORDL_TYPE System__Guid__ParseFailureKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Guid__ParseFailureKind(int32_t value__) noexcept;


                    constexpr System__Guid__ParseFailureKind(System__Guid__ParseFailureKind const&) = default;
                    constexpr System__Guid__ParseFailureKind(System__Guid__ParseFailureKind&&) = default;
                    constexpr System__Guid__ParseFailureKind& operator=(System__Guid__ParseFailureKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Guid__ParseFailureKind& operator=(System__Guid__ParseFailureKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Guid__ParseFailureKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Guid__ParseFailureKind_Unwrapped : int32_t {
__None = 0,
__ArgumentNull = 1,
__Format = 2,
__FormatWithParameter = 3,
__NativeException = 4,
__FormatWithInnerException = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Guid__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Guid__ParseFailureKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Guid__ParseFailureKind const None;

/// @brief Field ArgumentNull offset 0
static System::System__Guid__ParseFailureKind const ArgumentNull;

/// @brief Field Format offset 0
static System::System__Guid__ParseFailureKind const Format;

/// @brief Field FormatWithParameter offset 0
static System::System__Guid__ParseFailureKind const FormatWithParameter;

/// @brief Field NativeException offset 0
static System::System__Guid__ParseFailureKind const NativeException;

/// @brief Field FormatWithInnerException offset 0
static System::System__Guid__ParseFailureKind const FormatWithInnerException;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::GuidResult
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2405))
// CS Name: System.Guid::GuidResult
struct CORDL_TYPE System__Guid__GuidResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_parsedGuid", ty: "System::Guid", modifiers: "", def_value: None }, CppParam { name: "_throwStyle", ty: "System::System__Guid__GuidParseThrowStyle", modifiers: "", def_value: None }, CppParam { name: "_failure", ty: "System::System__Guid__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_failureArgumentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_innerException", ty: "System::Exception", modifiers: "", def_value: None }]
constexpr System__Guid__GuidResult(System::Guid _parsedGuid, System::System__Guid__GuidParseThrowStyle _throwStyle, System::System__Guid__ParseFailureKind _failure, ::StringW _failureMessageID, ::bs_hook::Il2CppWrapperType _failureMessageFormatArgument, ::StringW _failureArgumentName, System::Exception _innerException) noexcept;


                    constexpr System__Guid__GuidResult(System__Guid__GuidResult const&) = default;
                    constexpr System__Guid__GuidResult(System__Guid__GuidResult&&) = default;
                    constexpr System__Guid__GuidResult& operator=(System__Guid__GuidResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Guid__GuidResult& operator=(System__Guid__GuidResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Guid__GuidResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Guid __declspec(property(get=__get__parsedGuid, put=__set__parsedGuid))  _parsedGuid;

constexpr void __set__parsedGuid(System::Guid value) ;

constexpr System::Guid __get__parsedGuid() const;

 System::System__Guid__GuidParseThrowStyle __declspec(property(get=__get__throwStyle, put=__set__throwStyle))  _throwStyle;

constexpr void __set__throwStyle(System::System__Guid__GuidParseThrowStyle value) ;

constexpr System::System__Guid__GuidParseThrowStyle __get__throwStyle() const;

 System::System__Guid__ParseFailureKind __declspec(property(get=__get__failure, put=__set__failure))  _failure;

constexpr void __set__failure(System::System__Guid__ParseFailureKind value) ;

constexpr System::System__Guid__ParseFailureKind __get__failure() const;

 ::StringW __declspec(property(get=__get__failureMessageID, put=__set__failureMessageID))  _failureMessageID;

constexpr void __set__failureMessageID(::StringW value) ;

constexpr ::StringW __get__failureMessageID() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__failureMessageFormatArgument, put=__set__failureMessageFormatArgument))  _failureMessageFormatArgument;

constexpr void __set__failureMessageFormatArgument(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__failureMessageFormatArgument() const;

 ::StringW __declspec(property(get=__get__failureArgumentName, put=__set__failureArgumentName))  _failureArgumentName;

constexpr void __set__failureArgumentName(::StringW value) ;

constexpr ::StringW __get__failureArgumentName() const;

 System::Exception __declspec(property(get=__get__innerException, put=__set__innerException))  _innerException;

constexpr void __set__innerException(System::Exception value) ;

constexpr System::Exception __get__innerException() const;


// Methods

/// @brief Method Init addr 0x246e5b8 size 0x8 virtual false final false
 void Init(System::System__Guid__GuidParseThrowStyle canThrow) ;

/// @brief Method SetFailure addr 0x246d75c size 0x10 virtual false final false
 void SetFailure(System::Exception nativeException) ;

/// @brief Method SetFailure addr 0x246c3e8 size 0x10 virtual false final false
 void SetFailure(System::System__Guid__ParseFailureKind failure, ::StringW failureMessageID) ;

/// @brief Method SetFailure addr 0x246d364 size 0xc virtual false final false
 void SetFailure(System::System__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument) ;

/// @brief Method SetFailure addr 0x246d01c size 0x40 virtual false final false
 void SetFailure(System::System__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument, ::StringW failureArgumentName, System::Exception innerException) ;

/// @brief Method GetGuidParseException addr 0x246c080 size 0x17c virtual false final false
 System::Exception GetGuidParseException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Guid
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2406))
// CS Name: System.Guid
struct CORDL_TYPE Guid : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using GuidResult = System::System__Guid__GuidResult;

using ParseFailureKind = System::System__Guid__ParseFailureKind;

using GuidParseThrowStyle = System::System__Guid__GuidParseThrowStyle;

using GuidStyles = System::System__Guid__GuidStyles;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::Guid>
constexpr operator  System::IComparable_1<System::Guid>() const;

/// @brief Convert operator to System::IEquatable_1<System::Guid>
constexpr operator  System::IEquatable_1<System::Guid>() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_c", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_h", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Guid(int32_t _a, int16_t _b, int16_t _c, uint8_t _d, uint8_t _e, uint8_t _f, uint8_t _g, uint8_t _h, uint8_t _i, uint8_t _j, uint8_t _k) noexcept;


                    constexpr Guid(Guid const&) = default;
                    constexpr Guid(Guid&&) = default;
                    constexpr Guid& operator=(Guid const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Guid& operator=(Guid&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Guid(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Guid __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Guid value) ;

static System::Guid __get_Empty() ;

 int32_t __declspec(property(get=__get__a, put=__set__a))  _a;

constexpr void __set__a(int32_t value) ;

constexpr int32_t __get__a() const;

 int16_t __declspec(property(get=__get__b, put=__set__b))  _b;

constexpr void __set__b(int16_t value) ;

constexpr int16_t __get__b() const;

 int16_t __declspec(property(get=__get__c, put=__set__c))  _c;

constexpr void __set__c(int16_t value) ;

constexpr int16_t __get__c() const;

 uint8_t __declspec(property(get=__get__d, put=__set__d))  _d;

constexpr void __set__d(uint8_t value) ;

constexpr uint8_t __get__d() const;

 uint8_t __declspec(property(get=__get__e, put=__set__e))  _e;

constexpr void __set__e(uint8_t value) ;

constexpr uint8_t __get__e() const;

 uint8_t __declspec(property(get=__get__f, put=__set__f))  _f;

constexpr void __set__f(uint8_t value) ;

constexpr uint8_t __get__f() const;

 uint8_t __declspec(property(get=__get__g, put=__set__g))  _g;

constexpr void __set__g(uint8_t value) ;

constexpr uint8_t __get__g() const;

 uint8_t __declspec(property(get=__get__h, put=__set__h))  _h;

constexpr void __set__h(uint8_t value) ;

constexpr uint8_t __get__h() const;

 uint8_t __declspec(property(get=__get__i, put=__set__i))  _i;

constexpr void __set__i(uint8_t value) ;

constexpr uint8_t __get__i() const;

 uint8_t __declspec(property(get=__get__j, put=__set__j))  _j;

constexpr void __set__j(uint8_t value) ;

constexpr uint8_t __get__j() const;

 uint8_t __declspec(property(get=__get__k, put=__set__k))  _k;

constexpr void __set__k(uint8_t value) ;

constexpr uint8_t __get__k() const;


// Methods

/// @brief Method NewGuid addr 0x246b9bc size 0x4c virtual false final false
static System::Guid NewGuid() ;

/// @brief Method .ctor addr 0x246ba08 size 0x98 virtual false final false
 void _ctor(::ArrayW<uint8_t> b) ;

/// @brief Method .ctor addr 0x246baa0 size 0x128 virtual false final false
 void _ctor(System::ReadOnlySpan_1<uint8_t> b) ;

/// @brief Method .ctor addr 0x246bbc8 size 0x13c virtual false final false
 void _ctor(int32_t a, int16_t b, int16_t c, ::ArrayW<uint8_t> d) ;

/// @brief Method .ctor addr 0x246bd04 size 0x40 virtual false final false
 void _ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) ;

/// @brief Method .ctor addr 0x246bd44 size 0xf4 virtual false final false
 void _ctor(::StringW g) ;

/// @brief Method Parse addr 0x246c1fc size 0x98 virtual false final false
static System::Guid Parse(::StringW input) ;

/// @brief Method Parse addr 0x246c294 size 0x64 virtual false final false
static System::Guid Parse(System::ReadOnlySpan_1<char16_t> input) ;

/// @brief Method TryParse addr 0x246c2f8 size 0x90 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Guid> result) ;

/// @brief Method TryParse addr 0x246c388 size 0x50 virtual false final false
static bool TryParse(System::ReadOnlySpan_1<char16_t> input, ByRef<System::Guid> result) ;

/// @brief Method TryParseGuid addr 0x246be38 size 0x248 virtual false final false
static bool TryParseGuid(System::ReadOnlySpan_1<char16_t> guidString, System::System__Guid__GuidStyles flags, ByRef<System::System__Guid__GuidResult> result) ;

/// @brief Method TryParseGuidWithHexPrefix addr 0x246c6bc size 0x674 virtual false final false
static bool TryParseGuidWithHexPrefix(System::ReadOnlySpan_1<char16_t> guidString, ByRef<System::System__Guid__GuidResult> result) ;

/// @brief Method TryParseGuidWithNoStyle addr 0x246cd30 size 0x2ec virtual false final false
static bool TryParseGuidWithNoStyle(System::ReadOnlySpan_1<char16_t> guidString, ByRef<System::System__Guid__GuidResult> result) ;

/// @brief Method TryParseGuidWithDashes addr 0x246c3f8 size 0x2c4 virtual false final false
static bool TryParseGuidWithDashes(System::ReadOnlySpan_1<char16_t> guidString, ByRef<System::System__Guid__GuidResult> result) ;

/// @brief Method StringToShort addr 0x246d39c size 0x44 virtual false final false
static bool StringToShort(System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int16_t> result, ByRef<System::System__Guid__GuidResult> parseResult) ;

/// @brief Method StringToShort addr 0x246d728 size 0x34 virtual false final false
static bool StringToShort(System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int16_t> result, ByRef<System::System__Guid__GuidResult> parseResult) ;

/// @brief Method StringToInt addr 0x246d370 size 0x2c virtual false final false
static bool StringToInt(System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int32_t> result, ByRef<System::System__Guid__GuidResult> parseResult) ;

/// @brief Method StringToInt addr 0x246d534 size 0x1f4 virtual false final false
static bool StringToInt(System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int32_t> result, ByRef<System::System__Guid__GuidResult> parseResult) ;

/// @brief Method StringToLong addr 0x246d3e0 size 0x154 virtual false final false
static bool StringToLong(System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t flags, ByRef<int64_t> result, ByRef<System::System__Guid__GuidResult> parseResult) ;

/// @brief Method EatAllWhitespace addr 0x246d05c size 0x23c virtual false final false
static System::ReadOnlySpan_1<char16_t> EatAllWhitespace(System::ReadOnlySpan_1<char16_t> str) ;

/// @brief Method IsHexPrefix addr 0x246d298 size 0xcc virtual false final false
static bool IsHexPrefix(System::ReadOnlySpan_1<char16_t> str, int32_t i) ;

/// @brief Method WriteByteHelper addr 0x246d76c size 0x110 virtual false final false
 void WriteByteHelper(System::Span_1<uint8_t> destination) ;

/// @brief Method ToByteArray addr 0x246d87c size 0x17c virtual false final false
 ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToString addr 0x246d9f8 size 0x48 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x246dc5c size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x246dc74 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x246dd1c size 0x44 virtual true final true
 bool Equals(System::Guid g) ;

/// @brief Method GetResult addr 0x246dd60 size 0x10 virtual false final false
 int32_t GetResult(uint32_t me, uint32_t them) ;

/// @brief Method CompareTo addr 0x246dd70 size 0x18c virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x246defc size 0xdc virtual true final true
 int32_t CompareTo(System::Guid value) ;

/// @brief Method op_Equality addr 0x246dfd8 size 0x40 virtual false final false
static bool op_Equality(System::Guid a, System::Guid b) ;

/// @brief Method op_Inequality addr 0x246e018 size 0x40 virtual false final false
static bool op_Inequality(System::Guid a, System::Guid b) ;

/// @brief Method ToString addr 0x246e058 size 0x4 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method HexToChar addr 0x246e05c size 0x1c virtual false final false
static char16_t HexToChar(int32_t a) ;

/// @brief Method HexsToChars addr 0x246e078 size 0x7c virtual false final false
static int32_t HexsToChars(void* guidChars, int32_t a, int32_t b) ;

/// @brief Method HexsToCharsHexOutput addr 0x246e0f4 size 0x9c virtual false final false
static int32_t HexsToCharsHexOutput(void* guidChars, int32_t a, int32_t b) ;

/// @brief Method ToString addr 0x246da40 size 0x21c virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x246e190 size 0x424 virtual false final false
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format) ;

/// @brief Method System.ISpanFormattable.TryFormat addr 0x246e5b4 size 0x4 virtual true final true
 bool System_ISpanFormattable_TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__Guid__GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
DEFINE_IL2CPP_ARG_TYPE(System::System__Guid__GuidStyles, "System", "Guid/GuidStyles");
DEFINE_IL2CPP_ARG_TYPE(System::System__Guid__ParseFailureKind, "System", "Guid/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(System::Guid, "System", "Guid");
DEFINE_IL2CPP_ARG_TYPE(System::System__Guid__GuidResult, "System", "Guid/GuidResult");
