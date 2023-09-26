#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System {
struct TypeCode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IConvertible;
}
namespace System {
class Type;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Type: UnityEngine.InputSystem.Utilities::PrimitiveValue
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6801))
// CS Name: UnityEngine.InputSystem.Utilities.PrimitiveValue
struct CORDL_TYPE PrimitiveValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::PrimitiveValue>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Utilities::PrimitiveValue>() const;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const;

// Ctor Parameters [CppParam { name: "m_Type", ty: "System::TypeCode", modifiers: "", def_value: None }, CppParam { name: "m_BoolValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CharValue", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_ByteValue", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_SByteValue", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "m_ShortValue", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_UShortValue", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_IntValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UIntValue", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LongValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_ULongValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FloatValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DoubleValue", ty: "double_t", modifiers: "", def_value: None }]
constexpr PrimitiveValue(System::TypeCode m_Type, bool m_BoolValue, char16_t m_CharValue, uint8_t m_ByteValue, int8_t m_SByteValue, int16_t m_ShortValue, uint16_t m_UShortValue, int32_t m_IntValue, uint32_t m_UIntValue, int64_t m_LongValue, uint64_t m_ULongValue, float_t m_FloatValue, double_t m_DoubleValue) noexcept;


                    constexpr PrimitiveValue(PrimitiveValue const&) = default;
                    constexpr PrimitiveValue(PrimitiveValue&&) = default;
                    constexpr PrimitiveValue& operator=(PrimitiveValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PrimitiveValue& operator=(PrimitiveValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PrimitiveValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::TypeCode __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(System::TypeCode value) ;

constexpr System::TypeCode __get_m_Type() const;

 bool __declspec(property(get=__get_m_BoolValue, put=__set_m_BoolValue))  m_BoolValue;

constexpr void __set_m_BoolValue(bool value) ;

constexpr bool __get_m_BoolValue() const;

 char16_t __declspec(property(get=__get_m_CharValue, put=__set_m_CharValue))  m_CharValue;

constexpr void __set_m_CharValue(char16_t value) ;

constexpr char16_t __get_m_CharValue() const;

 uint8_t __declspec(property(get=__get_m_ByteValue, put=__set_m_ByteValue))  m_ByteValue;

constexpr void __set_m_ByteValue(uint8_t value) ;

constexpr uint8_t __get_m_ByteValue() const;

 int8_t __declspec(property(get=__get_m_SByteValue, put=__set_m_SByteValue))  m_SByteValue;

constexpr void __set_m_SByteValue(int8_t value) ;

constexpr int8_t __get_m_SByteValue() const;

 int16_t __declspec(property(get=__get_m_ShortValue, put=__set_m_ShortValue))  m_ShortValue;

constexpr void __set_m_ShortValue(int16_t value) ;

constexpr int16_t __get_m_ShortValue() const;

 uint16_t __declspec(property(get=__get_m_UShortValue, put=__set_m_UShortValue))  m_UShortValue;

constexpr void __set_m_UShortValue(uint16_t value) ;

constexpr uint16_t __get_m_UShortValue() const;

 int32_t __declspec(property(get=__get_m_IntValue, put=__set_m_IntValue))  m_IntValue;

constexpr void __set_m_IntValue(int32_t value) ;

constexpr int32_t __get_m_IntValue() const;

 uint32_t __declspec(property(get=__get_m_UIntValue, put=__set_m_UIntValue))  m_UIntValue;

constexpr void __set_m_UIntValue(uint32_t value) ;

constexpr uint32_t __get_m_UIntValue() const;

 int64_t __declspec(property(get=__get_m_LongValue, put=__set_m_LongValue))  m_LongValue;

constexpr void __set_m_LongValue(int64_t value) ;

constexpr int64_t __get_m_LongValue() const;

 uint64_t __declspec(property(get=__get_m_ULongValue, put=__set_m_ULongValue))  m_ULongValue;

constexpr void __set_m_ULongValue(uint64_t value) ;

constexpr uint64_t __get_m_ULongValue() const;

 float_t __declspec(property(get=__get_m_FloatValue, put=__set_m_FloatValue))  m_FloatValue;

constexpr void __set_m_FloatValue(float_t value) ;

constexpr float_t __get_m_FloatValue() const;

 double_t __declspec(property(get=__get_m_DoubleValue, put=__set_m_DoubleValue))  m_DoubleValue;

constexpr void __set_m_DoubleValue(double_t value) ;

constexpr double_t __get_m_DoubleValue() const;


// Properties

 void* __declspec(property(get=get_valuePtr))  valuePtr;

 System::TypeCode __declspec(property(get=get_type))  type;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_valuePtr addr 0x29b1ecc size 0x8 virtual false final false
 void* get_valuePtr() ;

/// @brief Method get_type addr 0x29b1ed4 size 0x8 virtual false final false
 System::TypeCode get_type() ;

/// @brief Method get_isEmpty addr 0x29a5768 size 0x10 virtual false final false
 bool get_isEmpty() ;

/// @brief Method .ctor addr 0x29b1edc size 0x1c virtual false final false
 void _ctor(bool value) ;

/// @brief Method .ctor addr 0x29b1ef8 size 0x18 virtual false final false
 void _ctor(char16_t value) ;

/// @brief Method .ctor addr 0x29b1f10 size 0x18 virtual false final false
 void _ctor(uint8_t value) ;

/// @brief Method .ctor addr 0x29b1f28 size 0x18 virtual false final false
 void _ctor(int8_t value) ;

/// @brief Method .ctor addr 0x29b1f40 size 0x18 virtual false final false
 void _ctor(int16_t value) ;

/// @brief Method .ctor addr 0x29b1f58 size 0x18 virtual false final false
 void _ctor(uint16_t value) ;

/// @brief Method .ctor addr 0x29b1f70 size 0x10 virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x29b1f80 size 0x10 virtual false final false
 void _ctor(uint32_t value) ;

/// @brief Method .ctor addr 0x29b1f90 size 0x14 virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method .ctor addr 0x29b1fa4 size 0x14 virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method .ctor addr 0x29b1fb8 size 0x14 virtual false final false
 void _ctor(float_t value) ;

/// @brief Method .ctor addr 0x29b1fcc size 0x14 virtual false final false
 void _ctor(double_t value) ;

/// @brief Method ConvertTo addr 0x29b0238 size 0x1f8 virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue ConvertTo(System::TypeCode type) ;

/// @brief Method Equals addr 0x29b2438 size 0x4c virtual true final true
 bool Equals(UnityEngine::InputSystem::Utilities::PrimitiveValue other) ;

/// @brief Method Equals addr 0x29b2484 size 0x218 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x29b048c size 0x2c virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::PrimitiveValue left, UnityEngine::InputSystem::Utilities::PrimitiveValue right) ;

/// @brief Method op_Inequality addr 0x29b2c84 size 0x30 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::PrimitiveValue left, UnityEngine::InputSystem::Utilities::PrimitiveValue right) ;

/// @brief Method GetHashCode addr 0x29b05a4 size 0x88 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x29b2cb4 size 0x3d0 virtual true final false
 ::StringW ToString() ;

/// @brief Method FromString addr 0x29b0aa0 size 0x2f4 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromString(::StringW value) ;

/// @brief Method GetTypeCode addr 0x29b3084 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method ToBoolean addr 0x29b1fe0 size 0x158 virtual true final true
 bool ToBoolean(System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x29b2184 size 0x10 virtual true final true
 uint8_t ToByte(System::IFormatProvider provider) ;

/// @brief Method ToChar addr 0x29b2138 size 0x38 virtual true final true
 char16_t ToChar(System::IFormatProvider provider) ;

/// @brief Method ToDateTime addr 0x29b308c size 0x50 virtual true final true
 System::DateTime ToDateTime(System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x29b30dc size 0x4c virtual true final true
 System::Decimal ToDecimal(System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x29b2378 size 0xa8 virtual true final true
 double_t ToDouble(System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x29b21cc size 0x10 virtual true final true
 int16_t ToInt16(System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x29b21f0 size 0x10 virtual true final true
 int32_t ToInt32(System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x29b2214 size 0xa0 virtual true final true
 int64_t ToInt64(System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x29b21a8 size 0x10 virtual true final true
 int8_t ToSByte(System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x29a5778 size 0x14 virtual true final true
 float_t ToSingle(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x29b3128 size 0x4 virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToType addr 0x29b312c size 0x40 virtual true final true
 ::bs_hook::Il2CppWrapperType ToType(System::Type conversionType, System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x29b316c size 0x10 virtual true final true
 uint16_t ToUInt16(System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x29b317c size 0x10 virtual true final true
 uint32_t ToUInt32(System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x29b22cc size 0x94 virtual true final true
 uint64_t ToUInt64(System::IFormatProvider provider) ;

/// @brief Method ToObject addr 0x29b107c size 0x1b0 virtual false final false
 ::bs_hook::Il2CppWrapperType ToObject() ;

/// @brief Method From addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static UnityEngine::InputSystem::Utilities::PrimitiveValue From(TValue value) ;

/// @brief Method FromObject addr 0x29b269c size 0x5e8 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method op_Implicit addr 0x29b0a8c size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(bool value) ;

/// @brief Method op_Implicit addr 0x29b2170 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(char16_t value) ;

/// @brief Method op_Implicit addr 0x29b2194 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(uint8_t value) ;

/// @brief Method op_Implicit addr 0x29b21b8 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(int8_t value) ;

/// @brief Method op_Implicit addr 0x29b21dc size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(int16_t value) ;

/// @brief Method op_Implicit addr 0x29b318c size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(uint16_t value) ;

/// @brief Method op_Implicit addr 0x29b2200 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(int32_t value) ;

/// @brief Method op_Implicit addr 0x29b31a0 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(uint32_t value) ;

/// @brief Method op_Implicit addr 0x29b22b4 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(int64_t value) ;

/// @brief Method op_Implicit addr 0x29b2360 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(uint64_t value) ;

/// @brief Method op_Implicit addr 0x29a57e4 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(float_t value) ;

/// @brief Method op_Implicit addr 0x29b2420 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_UnityEngine__InputSystem__Utilities__PrimitiveValue(double_t value) ;

/// @brief Method FromBoolean addr 0x29b31b4 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromBoolean(bool value) ;

/// @brief Method FromChar addr 0x29b31c8 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromChar(char16_t value) ;

/// @brief Method FromByte addr 0x29b31dc size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromByte(uint8_t value) ;

/// @brief Method FromSByte addr 0x29b31f0 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromSByte(int8_t value) ;

/// @brief Method FromInt16 addr 0x29b3204 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt16(int16_t value) ;

/// @brief Method FromUInt16 addr 0x29b3218 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt16(uint16_t value) ;

/// @brief Method FromInt32 addr 0x29b322c size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt32(int32_t value) ;

/// @brief Method FromUInt32 addr 0x29b3240 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt32(uint32_t value) ;

/// @brief Method FromInt64 addr 0x29b3254 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt64(int64_t value) ;

/// @brief Method FromUInt64 addr 0x29b326c size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt64(uint64_t value) ;

/// @brief Method FromSingle addr 0x29b3284 size 0x14 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromSingle(float_t value) ;

/// @brief Method FromDouble addr 0x29b3298 size 0x18 virtual false final false
static UnityEngine::InputSystem::Utilities::PrimitiveValue FromDouble(double_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::PrimitiveValue, "UnityEngine.InputSystem.Utilities", "PrimitiveValue");
