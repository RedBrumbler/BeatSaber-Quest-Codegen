#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
struct TypeCode;
}
namespace System {
struct Decimal;
}
namespace System {
class IComparable;
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
class IConvertible;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
struct Boolean;
}
// Type: System::Boolean
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2359))
// CS Name: System.Boolean
struct CORDL_TYPE Boolean : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

/// @brief Convert operator to System::IComparable_1<bool>
constexpr operator  System::IComparable_1<bool>() const;

/// @brief Convert operator to System::IEquatable_1<bool>
constexpr operator  System::IEquatable_1<bool>() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "bool", modifiers: "", def_value: None }]
constexpr Boolean(bool m_value) noexcept;


                    constexpr Boolean(Boolean const&) = default;
                    constexpr Boolean(Boolean&&) = default;
                    constexpr Boolean& operator=(Boolean const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Boolean& operator=(Boolean&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Boolean(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(bool value) ;

constexpr bool __get_m_value() const;

/// @brief Field True offset 0
static constexpr int32_t  True{1};

/// @brief Field False offset 0
static constexpr int32_t  False{0};

/// @brief Field TrueLiteral offset 0
static constexpr ::ConstString  TrueLiteral{u"True"};

/// @brief Field FalseLiteral offset 0
static constexpr ::ConstString  FalseLiteral{u"False"};

static ::StringW __declspec(property(get=__get_TrueString, put=__set_TrueString))  TrueString;

static void __set_TrueString(::StringW value) ;

static ::StringW __get_TrueString() ;

static ::StringW __declspec(property(get=__get_FalseString, put=__set_FalseString))  FalseString;

static void __set_FalseString(::StringW value) ;

static ::StringW __get_FalseString() ;


// Methods

/// @brief Method GetHashCode addr 0x23ec908 size 0x10 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x23ec918 size 0x6c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x23ec984 size 0x4 virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method Equals addr 0x23ec988 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x23eca00 size 0x14 virtual true final true
 bool Equals(bool obj) ;

/// @brief Method CompareTo addr 0x23eca14 size 0xd8 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CompareTo addr 0x23ecaec size 0x28 virtual true final true
 int32_t CompareTo(bool value) ;

/// @brief Method Parse addr 0x23ecb14 size 0xdc virtual false final false
static bool Parse(::StringW value) ;

/// @brief Method Parse addr 0x23ecbf0 size 0xc4 virtual false final false
static bool Parse(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method TryParse addr 0x23ecfa8 size 0xbc virtual false final false
static bool TryParse(::StringW value, ByRef<bool> result) ;

/// @brief Method TryParse addr 0x23eccb4 size 0x2f4 virtual false final false
static bool TryParse(System::ReadOnlySpan_1<char16_t> value, ByRef<bool> result) ;

/// @brief Method TrimWhiteSpaceAndNull addr 0x23ed064 size 0x154 virtual false final false
static System::ReadOnlySpan_1<char16_t> TrimWhiteSpaceAndNull(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method GetTypeCode addr 0x23ed270 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x23ed278 size 0x10 virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x23ed288 size 0x8c virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x23ed314 size 0x5c virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x23ed378 size 0x5c virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x23ed3dc size 0x5c virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x23ed440 size 0x5c virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x23ed4a4 size 0x5c virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x23ed508 size 0x5c virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x23ed56c size 0x5c virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x23ed5d0 size 0x5c virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x23ed634 size 0x64 virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x23ed6ac size 0x64 virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x23ed724 size 0x5c virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x23ed7dc size 0x8c virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x23ed868 size 0xb0 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::Boolean, "System", "Boolean");
