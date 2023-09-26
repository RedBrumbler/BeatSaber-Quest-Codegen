#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector2Mask;
}
// Type: UnityEngine.ProBuilder::Vector2Mask
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12177))
// CS Name: UnityEngine.ProBuilder.Vector2Mask
struct CORDL_TYPE Vector2Mask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Vector2Mask(uint8_t m_Mask) noexcept;


                    constexpr Vector2Mask(Vector2Mask const&) = default;
                    constexpr Vector2Mask(Vector2Mask&&) = default;
                    constexpr Vector2Mask& operator=(Vector2Mask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector2Mask& operator=(Vector2Mask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector2Mask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field X offset 0
static constexpr uint8_t  X{1u};

/// @brief Field Y offset 0
static constexpr uint8_t  Y{2u};

static UnityEngine::ProBuilder::Vector2Mask __declspec(property(get=__get_XY, put=__set_XY))  XY;

static void __set_XY(UnityEngine::ProBuilder::Vector2Mask value) ;

static UnityEngine::ProBuilder::Vector2Mask __get_XY() ;

 uint8_t __declspec(property(get=__get_m_Mask, put=__set_m_Mask))  m_Mask;

constexpr void __set_m_Mask(uint8_t value) ;

constexpr uint8_t __get_m_Mask() const;


// Properties

 float_t __declspec(property(get=get_x))  x;

 float_t __declspec(property(get=get_y))  y;


// Methods

/// @brief Method get_x addr 0x2a1be38 size 0x18 virtual false final false
 float_t get_x() ;

/// @brief Method get_y addr 0x2a1be50 size 0x18 virtual false final false
 float_t get_y() ;

/// @brief Method .ctor addr 0x2a1be68 size 0x24 virtual false final false
 void _ctor(UnityEngine::Vector3 v, float_t epsilon) ;

/// @brief Method .ctor addr 0x2a1be8c size 0x8 virtual false final false
 void _ctor(uint8_t mask) ;

/// @brief Method op_Implicit addr 0x2a1be94 size 0x1c virtual false final false
static UnityEngine::Vector2 op_Implicit_UnityEngine__Vector2(UnityEngine::ProBuilder::Vector2Mask mask) ;

/// @brief Method op_Implicit addr 0x2a1beb0 size 0x28 virtual false final false
static UnityEngine::ProBuilder::Vector2Mask op_Implicit_UnityEngine__ProBuilder__Vector2Mask(UnityEngine::Vector2 v) ;

/// @brief Method op_BitwiseOr addr 0x2a1bed8 size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(UnityEngine::ProBuilder::Vector2Mask left, UnityEngine::ProBuilder::Vector2Mask right) ;

/// @brief Method op_BitwiseAnd addr 0x2a1bee4 size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(UnityEngine::ProBuilder::Vector2Mask left, UnityEngine::ProBuilder::Vector2Mask right) ;

/// @brief Method op_ExclusiveOr addr 0x2a1bef0 size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(UnityEngine::ProBuilder::Vector2Mask left, UnityEngine::ProBuilder::Vector2Mask right) ;

/// @brief Method op_Multiply addr 0x2a1befc size 0x28 virtual false final false
static UnityEngine::Vector2 op_Multiply(UnityEngine::ProBuilder::Vector2Mask mask, float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vector2Mask, "UnityEngine.ProBuilder", "Vector2Mask");
