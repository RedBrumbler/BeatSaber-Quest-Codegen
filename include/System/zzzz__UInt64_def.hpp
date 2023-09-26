#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IComparable;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class ISpanFormattable;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System {
struct UInt64;
}
// Type: System::UInt64
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2499))
// CS Name: System.UInt64
struct CORDL_TYPE UInt64 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable_1<uint64_t>
constexpr operator  System::IComparable_1<uint64_t>() const;

/// @brief Convert operator to System::IEquatable_1<uint64_t>
constexpr operator  System::IEquatable_1<uint64_t>() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr UInt64(uint64_t m_value) noexcept;


                    constexpr UInt64(UInt64 const&) = default;
                    constexpr UInt64(UInt64&&) = default;
                    constexpr UInt64& operator=(UInt64 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UInt64& operator=(UInt64&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UInt64(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(uint64_t value) ;

constexpr uint64_t __get_m_value() const;

/// @brief Field MaxValue offset 0
static constexpr uint64_t  MaxValue{18446744073709551615u};

/// @brief Field MinValue offset 0
static constexpr uint64_t  MinValue{0u};


// Methods

/// @brief Method CompareTo addr 0x2491a24 size 0xd0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x2491af4 size 0x1c virtual true final true
 int32_t CompareTo(uint64_t value) ;

/// @brief Method Equals addr 0x2491b10 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2491b88 size 0x10 virtual true final true
 bool Equals(uint64_t obj) ;

/// @brief Method GetHashCode addr 0x2491b98 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2491ba4 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2491c3c size 0x9c virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x2491cd8 size 0xb4 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2491d8c size 0xb8 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x2491e44 size 0xa4 virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x2491ee8 size 0xb4 virtual false final false
static uint64_t Parse(::StringW s) ;

/// @brief Method Parse addr 0x2491f9c size 0xcc virtual false final false
static uint64_t Parse(::StringW s, System::Globalization::NumberStyles style) ;

/// @brief Method Parse addr 0x2492068 size 0xc4 virtual false final false
static uint64_t Parse(::StringW s, System::IFormatProvider provider) ;

/// @brief Method Parse addr 0x249212c size 0xd4 virtual false final false
static uint64_t Parse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider) ;

/// @brief Method TryParse addr 0x2492200 size 0xf8 virtual false final false
static bool TryParse(::StringW s, System::Globalization::NumberStyles style, System::IFormatProvider provider, ByRef<uint64_t> result) ;

/// @brief Method GetTypeCode addr 0x24922f8 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2492300 size 0x5c virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x249235c size 0x5c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x24923b8 size 0x5c virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2492414 size 0x5c virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2492470 size 0x5c virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x24924cc size 0x5c virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2492528 size 0x5c virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2492584 size 0x5c virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x24925e0 size 0x5c virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x249263c size 0x8 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2492644 size 0x5c virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x24926a0 size 0x5c virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x24926fc size 0x5c virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2492758 size 0x8c virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x24927e4 size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UInt64, "System", "UInt64");
