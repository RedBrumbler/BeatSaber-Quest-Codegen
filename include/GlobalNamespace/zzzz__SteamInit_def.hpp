#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SteamInit;
}
// Type: ::SteamInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4028))
// CS Name: SteamInit
class CORDL_TYPE SteamInit : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SteamInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: " const&", def_value: None }]
constexpr SteamInit(SteamInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: "&&", def_value: None }]
constexpr SteamInit(SteamInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SteamInit(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SteamInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SteamInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SteamInit& operator=(SteamInit&& o) noexcept = default;
  constexpr SteamInit& operator=(SteamInit const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x20efdc0 size 0x4 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit SteamInit() ;

/// @brief Method .ctor addr 0x20efdc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SteamInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamInit, "", "SteamInit");
