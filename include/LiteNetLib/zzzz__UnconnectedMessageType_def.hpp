#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib {
struct UnconnectedMessageType;
}
// Type: LiteNetLib::UnconnectedMessageType
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14431))
// CS Name: LiteNetLib.UnconnectedMessageType
struct CORDL_TYPE UnconnectedMessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnconnectedMessageType(int32_t value__) noexcept;


                    constexpr UnconnectedMessageType(UnconnectedMessageType const&) = default;
                    constexpr UnconnectedMessageType(UnconnectedMessageType&&) = default;
                    constexpr UnconnectedMessageType& operator=(UnconnectedMessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnconnectedMessageType& operator=(UnconnectedMessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnconnectedMessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnconnectedMessageType_Unwrapped : int32_t {
__BasicMessage = 0,
__Broadcast = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnconnectedMessageType_Unwrapped () const noexcept {
return std::bit_cast<__UnconnectedMessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BasicMessage offset 0
static LiteNetLib::UnconnectedMessageType const BasicMessage;

/// @brief Field Broadcast offset 0
static LiteNetLib::UnconnectedMessageType const Broadcast;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::UnconnectedMessageType, "LiteNetLib", "UnconnectedMessageType");
