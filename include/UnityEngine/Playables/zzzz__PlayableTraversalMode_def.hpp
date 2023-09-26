#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
// Type: UnityEngine.Playables::PlayableTraversalMode
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10388))
// CS Name: UnityEngine.Playables.PlayableTraversalMode
struct CORDL_TYPE PlayableTraversalMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayableTraversalMode(int32_t value__) noexcept;


                    constexpr PlayableTraversalMode(PlayableTraversalMode const&) = default;
                    constexpr PlayableTraversalMode(PlayableTraversalMode&&) = default;
                    constexpr PlayableTraversalMode& operator=(PlayableTraversalMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableTraversalMode& operator=(PlayableTraversalMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableTraversalMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlayableTraversalMode_Unwrapped : int32_t {
__Mix = 0,
__Passthrough = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayableTraversalMode_Unwrapped () const noexcept {
return std::bit_cast<__PlayableTraversalMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mix offset 0
static UnityEngine::Playables::PlayableTraversalMode const Mix;

/// @brief Field Passthrough offset 0
static UnityEngine::Playables::PlayableTraversalMode const Passthrough;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableTraversalMode, "UnityEngine.Playables", "PlayableTraversalMode");
