#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__Length__Unit;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Type: ::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7430))
// CS Name: UnityEngine.UIElements.Length::Unit
struct CORDL_TYPE UnityEngine__UIElements__Length__Unit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__Length__Unit(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__Length__Unit(UnityEngine__UIElements__Length__Unit const&) = default;
                    constexpr UnityEngine__UIElements__Length__Unit(UnityEngine__UIElements__Length__Unit&&) = default;
                    constexpr UnityEngine__UIElements__Length__Unit& operator=(UnityEngine__UIElements__Length__Unit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__Length__Unit& operator=(UnityEngine__UIElements__Length__Unit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Length__Unit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__Length__Unit_Unwrapped : int32_t {
__Pixel = 0,
__Percent = 1,
__Auto = 2,
__None = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__Length__Unit_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__Length__Unit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pixel offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit const Pixel;

/// @brief Field Percent offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit const Percent;

/// @brief Field Auto offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit const Auto;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Length
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7431))
// CS Name: UnityEngine.UIElements.Length
struct CORDL_TYPE Length : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Unit = UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Length>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Length>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit", modifiers: "", def_value: None }]
constexpr Length(float_t m_Value, UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit m_Unit) noexcept;


                    constexpr Length(Length const&) = default;
                    constexpr Length(Length&&) = default;
                    constexpr Length& operator=(Length const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Length& operator=(Length&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Length(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field k_MaxValue offset 0
static constexpr float_t  k_MaxValue{8388608};

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit __declspec(property(get=__get_m_Unit, put=__set_m_Unit))  m_Unit;

constexpr void __set_m_Unit(UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit __get_m_Unit() const;


// Properties

 float_t __declspec(property(get=get_value, put=set_value))  value;

 UnityEngine::UIElements::LengthUnit __declspec(property(get=get_unit, put=set_unit))  unit;


// Methods

/// @brief Method Percent addr 0x2d2f130 size 0x28 virtual false final false
static UnityEngine::UIElements::Length Percent(float_t value) ;

/// @brief Method Auto addr 0x2d2ad78 size 0x8 virtual false final false
static UnityEngine::UIElements::Length Auto() ;

/// @brief Method None addr 0x2d2ad80 size 0x8 virtual false final false
static UnityEngine::UIElements::Length None() ;

/// @brief Method get_value addr 0x2d2f180 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2d2f188 size 0x24 virtual false final false
 void set_value(float_t value) ;

/// @brief Method get_unit addr 0x2d2f1ac size 0x8 virtual false final false
 UnityEngine::UIElements::LengthUnit get_unit() ;

/// @brief Method set_unit addr 0x2d2f1b4 size 0x8 virtual false final false
 void set_unit(UnityEngine::UIElements::LengthUnit value) ;

/// @brief Method IsAuto addr 0x2d2a8ac size 0x10 virtual false final false
 bool IsAuto() ;

/// @brief Method IsNone addr 0x2d2a8bc size 0x10 virtual false final false
 bool IsNone() ;

/// @brief Method .ctor addr 0x2d2f1bc size 0x28 virtual false final false
 void _ctor(float_t value) ;

/// @brief Method .ctor addr 0x2d2a858 size 0x28 virtual false final false
 void _ctor(float_t value, UnityEngine::UIElements::LengthUnit unit) ;

/// @brief Method .ctor addr 0x2d2f158 size 0x28 virtual false final false
 void _ctor(float_t value, UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit unit) ;

/// @brief Method op_Implicit addr 0x2d2f1e4 size 0x24 virtual false final false
static UnityEngine::UIElements::Length op_Implicit_UnityEngine__UIElements__Length(float_t value) ;

/// @brief Method op_Equality addr 0x2d2a904 size 0x28 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Length lhs, UnityEngine::UIElements::Length rhs) ;

/// @brief Method op_Inequality addr 0x2d2f208 size 0x28 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::Length lhs, UnityEngine::UIElements::Length rhs) ;

/// @brief Method Equals addr 0x2d2f230 size 0x28 virtual true final true
 bool Equals(UnityEngine::UIElements::Length other) ;

/// @brief Method Equals addr 0x2d2f258 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d2aa74 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2d2b524 size 0x1c0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Length__Unit, "UnityEngine.UIElements", "Length/Unit");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
