#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace HMUI {
class Interactable;
}
namespace HMUI {
class SelectableCell;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectableCellSelectableStateController;
}
// Type: ::SelectableCellSelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5565)), TypeDefinitionIndex(TypeDefinitionIndex(13723)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5565), inst: 4816 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5568))
// CS Name: SelectableCellSelectableStateController
class CORDL_TYPE SelectableCellSelectableStateController : public GlobalNamespace::SelectableStateController_1<HMUI::SelectableCell> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SelectableCellSelectableStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: " const&", def_value: None }]
constexpr SelectableCellSelectableStateController(SelectableCellSelectableStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "&&", def_value: None }]
constexpr SelectableCellSelectableStateController(SelectableCellSelectableStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableCellSelectableStateController(void* ptr) noexcept : GlobalNamespace::SelectableStateController_1<HMUI::SelectableCell>(ptr) {
}


  constexpr SelectableCellSelectableStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableCellSelectableStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableCellSelectableStateController& operator=(SelectableCellSelectableStateController&& o) noexcept = default;
  constexpr SelectableCellSelectableStateController& operator=(SelectableCellSelectableStateController const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x2163748 size 0x164 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2163918 size 0x154 virtual false final false
 void OnDisable() ;

/// @brief Method HandleSelectableCellInteractableDidChange addr 0x2163a6c size 0x88 virtual false final false
 void HandleSelectableCellInteractableDidChange(HMUI::Interactable interactableCell, bool interactable) ;

/// @brief Method HandleSelectableCellHighlightDidChange addr 0x2163af4 size 0x4 virtual false final false
 void HandleSelectableCellHighlightDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HandleSelectableCellSelectionStateDidChange addr 0x2163af8 size 0x4 virtual false final false
 void HandleSelectableCellSelectionStateDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method ResolveState addr 0x21638ac size 0x6c virtual false final false
 void ResolveState(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

// Ctor Parameters []
explicit SelectableCellSelectableStateController() ;

/// @brief Method .ctor addr 0x2163afc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SelectableCellSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectableCellSelectableStateController, "", "SelectableCellSelectableStateController");
