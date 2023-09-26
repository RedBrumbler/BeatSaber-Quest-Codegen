#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Type: UnityEngine.SceneManagement::LoadSceneMode
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10330))
// CS Name: UnityEngine.SceneManagement.LoadSceneMode
struct CORDL_TYPE LoadSceneMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoadSceneMode(int32_t value__) noexcept;


                    constexpr LoadSceneMode(LoadSceneMode const&) = default;
                    constexpr LoadSceneMode(LoadSceneMode&&) = default;
                    constexpr LoadSceneMode& operator=(LoadSceneMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LoadSceneMode& operator=(LoadSceneMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LoadSceneMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LoadSceneMode_Unwrapped : int32_t {
__Single = 0,
__Additive = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoadSceneMode_Unwrapped () const noexcept {
return std::bit_cast<__LoadSceneMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Single offset 0
static UnityEngine::SceneManagement::LoadSceneMode const Single;

/// @brief Field Additive offset 0
static UnityEngine::SceneManagement::LoadSceneMode const Additive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::LoadSceneMode, "UnityEngine.SceneManagement", "LoadSceneMode");
