#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedPlayerHelpers;
}
// Type: ::ConnectedPlayerHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12667))
// CS Name: ConnectedPlayerHelpers
class CORDL_TYPE ConnectedPlayerHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectedPlayerHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: " const&", def_value: None }]
constexpr ConnectedPlayerHelpers(ConnectedPlayerHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: "&&", def_value: None }]
constexpr ConnectedPlayerHelpers(ConnectedPlayerHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectedPlayerHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectedPlayerHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectedPlayerHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectedPlayerHelpers& operator=(ConnectedPlayerHelpers&& o) noexcept = default;
  constexpr ConnectedPlayerHelpers& operator=(ConnectedPlayerHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method WantsToPlayNextLevel addr 0xdb3cf8 size 0xbc virtual false final false
static bool WantsToPlayNextLevel(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method WasActiveAtLevelStart addr 0xdb3db4 size 0xbc virtual false final false
static bool WasActiveAtLevelStart(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method IsActive addr 0xdb3e70 size 0xbc virtual false final false
static bool IsActive(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HasFinishedLevel addr 0xdb3f2c size 0xbc virtual false final false
static bool HasFinishedLevel(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method IsActiveOrFinished addr 0xdb3fe8 size 0x28 virtual false final false
static bool IsActiveOrFinished(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method IsFailed addr 0xdb4010 size 0xd8 virtual false final false
static bool IsFailed(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConnectedPlayerHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerHelpers, "", "ConnectedPlayerHelpers");
