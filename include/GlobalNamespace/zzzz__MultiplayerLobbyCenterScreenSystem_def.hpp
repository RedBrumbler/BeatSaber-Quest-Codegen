#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenSystem;
}
// Type: ::MultiplayerLobbyCenterScreenSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5656))
// CS Name: MultiplayerLobbyCenterScreenSystem
class CORDL_TYPE MultiplayerLobbyCenterScreenSystem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultiplayerLobbyCenterScreenSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyCenterScreenSystem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyCenterScreenSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyCenterScreenSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyCenterScreenSystem& operator=(MultiplayerLobbyCenterScreenSystem&& o) noexcept = default;
  constexpr MultiplayerLobbyCenterScreenSystem& operator=(MultiplayerLobbyCenterScreenSystem const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MultiplayerLobbyCenterScreenSystem() ;

/// @brief Method .ctor addr 0x2182adc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyCenterScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterScreenSystem, "", "MultiplayerLobbyCenterScreenSystem");
