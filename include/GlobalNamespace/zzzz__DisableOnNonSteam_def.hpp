#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonSteam;
}
// Type: ::DisableOnNonSteam
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5459))
// CS Name: DisableOnNonSteam
class CORDL_TYPE DisableOnNonSteam : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisableOnNonSteam() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonSteam", modifiers: " const&", def_value: None }]
constexpr DisableOnNonSteam(DisableOnNonSteam const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonSteam", modifiers: "&&", def_value: None }]
constexpr DisableOnNonSteam(DisableOnNonSteam&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableOnNonSteam(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableOnNonSteam& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableOnNonSteam& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableOnNonSteam& operator=(DisableOnNonSteam&& o) noexcept = default;
  constexpr DisableOnNonSteam& operator=(DisableOnNonSteam const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x214d504 size 0x24 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit DisableOnNonSteam() ;

/// @brief Method .ctor addr 0x214d528 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableOnNonSteam);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableOnNonSteam, "", "DisableOnNonSteam");
