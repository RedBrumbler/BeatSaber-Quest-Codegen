#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace GlobalNamespace {
struct FPSTimestamp;
}
// Type: ::FPSTimestamp
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5940))
// CS Name: FPSTimestamp
struct CORDL_TYPE FPSTimestamp : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "fpsValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeRecorded", ty: "float_t", modifiers: "", def_value: None }]
constexpr FPSTimestamp(float_t fpsValue, float_t timeRecorded) noexcept;


                    constexpr FPSTimestamp(FPSTimestamp const&) = default;
                    constexpr FPSTimestamp(FPSTimestamp&&) = default;
                    constexpr FPSTimestamp& operator=(FPSTimestamp const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FPSTimestamp& operator=(FPSTimestamp&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FPSTimestamp(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_fpsValue, put=__set_fpsValue))  fpsValue;

constexpr void __set_fpsValue(float_t value) ;

constexpr float_t __get_fpsValue() const;

 float_t __declspec(property(get=__get_timeRecorded, put=__set_timeRecorded))  timeRecorded;

constexpr void __set_timeRecorded(float_t value) ;

constexpr float_t __get_timeRecorded() const;


// Methods

/// @brief Method .ctor addr 0x21cb5a8 size 0x8 virtual false final false
 void _ctor(float_t fpsValue, float_t timeRecorded) ;

/// @brief Method GetTimeFormatted addr 0x21cbe38 size 0x94 virtual false final false
 ::StringW GetTimeFormatted(::StringW format) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSTimestamp, "", "FPSTimestamp");
