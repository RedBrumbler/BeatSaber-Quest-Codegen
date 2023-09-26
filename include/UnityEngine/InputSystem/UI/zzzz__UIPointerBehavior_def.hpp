#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct UIPointerBehavior;
}
// Type: UnityEngine.InputSystem.UI::UIPointerBehavior
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6475))
// CS Name: UnityEngine.InputSystem.UI.UIPointerBehavior
struct CORDL_TYPE UIPointerBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UIPointerBehavior(int32_t value__) noexcept;


                    constexpr UIPointerBehavior(UIPointerBehavior const&) = default;
                    constexpr UIPointerBehavior(UIPointerBehavior&&) = default;
                    constexpr UIPointerBehavior& operator=(UIPointerBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UIPointerBehavior& operator=(UIPointerBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UIPointerBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UIPointerBehavior_Unwrapped : int32_t {
__SingleMouseOrPenButMultiTouchAndTrack = 0,
__SingleUnifiedPointer = 1,
__AllPointersAsIs = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UIPointerBehavior_Unwrapped () const noexcept {
return std::bit_cast<__UIPointerBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SingleMouseOrPenButMultiTouchAndTrack offset 0
static UnityEngine::InputSystem::UI::UIPointerBehavior const SingleMouseOrPenButMultiTouchAndTrack;

/// @brief Field SingleUnifiedPointer offset 0
static UnityEngine::InputSystem::UI::UIPointerBehavior const SingleUnifiedPointer;

/// @brief Field AllPointersAsIs offset 0
static UnityEngine::InputSystem::UI::UIPointerBehavior const AllPointersAsIs;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::UIPointerBehavior, "UnityEngine.InputSystem.UI", "UIPointerBehavior");
