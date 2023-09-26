#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct ParameterAttributes;
}
// Type: System.Reflection::ParameterAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3474))
// CS Name: System.Reflection.ParameterAttributes
struct CORDL_TYPE ParameterAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParameterAttributes(int32_t value__) noexcept;


                    constexpr ParameterAttributes(ParameterAttributes const&) = default;
                    constexpr ParameterAttributes(ParameterAttributes&&) = default;
                    constexpr ParameterAttributes& operator=(ParameterAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParameterAttributes& operator=(ParameterAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParameterAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParameterAttributes_Unwrapped : int32_t {
__None = 0,
__In = 1,
__Out = 2,
__Lcid = 4,
__Retval = 8,
__Optional = 16,
__HasDefault = 4096,
__HasFieldMarshal = 8192,
__Reserved3 = 16384,
__Reserved4 = 32768,
__ReservedMask = 61440,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParameterAttributes_Unwrapped () const noexcept {
return std::bit_cast<__ParameterAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Reflection::ParameterAttributes const None;

/// @brief Field In offset 0
static System::Reflection::ParameterAttributes const In;

/// @brief Field Out offset 0
static System::Reflection::ParameterAttributes const Out;

/// @brief Field Lcid offset 0
static System::Reflection::ParameterAttributes const Lcid;

/// @brief Field Retval offset 0
static System::Reflection::ParameterAttributes const Retval;

/// @brief Field Optional offset 0
static System::Reflection::ParameterAttributes const Optional;

/// @brief Field HasDefault offset 0
static System::Reflection::ParameterAttributes const HasDefault;

/// @brief Field HasFieldMarshal offset 0
static System::Reflection::ParameterAttributes const HasFieldMarshal;

/// @brief Field Reserved3 offset 0
static System::Reflection::ParameterAttributes const Reserved3;

/// @brief Field Reserved4 offset 0
static System::Reflection::ParameterAttributes const Reserved4;

/// @brief Field ReservedMask offset 0
static System::Reflection::ParameterAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ParameterAttributes, "System.Reflection", "ParameterAttributes");
