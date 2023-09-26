#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatingSpotPickerViewController;
}
// Type: ::MultiplayerSpectatingSpotPickerViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5164))
// CS Name: MultiplayerSpectatingSpotPickerViewController
class CORDL_TYPE MultiplayerSpectatingSpotPickerViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerSpectatingSpotPickerViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: " const&", def_value: None }]
constexpr MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotPickerViewController", modifiers: "&&", def_value: None }]
constexpr MultiplayerSpectatingSpotPickerViewController(MultiplayerSpectatingSpotPickerViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSpectatingSpotPickerViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerSpectatingSpotPickerViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSpectatingSpotPickerViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSpectatingSpotPickerViewController& operator=(MultiplayerSpectatingSpotPickerViewController&& o) noexcept = default;
  constexpr MultiplayerSpectatingSpotPickerViewController& operator=(MultiplayerSpectatingSpotPickerViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker))  _stepValuePicker;

constexpr void __set__stepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__stepValuePicker() const;

 GlobalNamespace::MultiplayerSpectatorController __declspec(property(get=__get__spectatorController, put=__set__spectatorController))  _spectatorController;

constexpr void __set__spectatorController(GlobalNamespace::MultiplayerSpectatorController value) ;

constexpr GlobalNamespace::MultiplayerSpectatorController __get__spectatorController() const;


// Methods

/// @brief Method Start addr 0x2108744 size 0x148 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2108988 size 0x1b4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSpectatingSpotDidChangeEvent addr 0x2108b3c size 0x4 virtual false final false
 void HandleSpectatingSpotDidChangeEvent(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot) ;

/// @brief Method RefreshSpectatingSpotName addr 0x210888c size 0xfc virtual false final false
 void RefreshSpectatingSpotName() ;

/// @brief Method HandleIncButtonWasPressed addr 0x2108b40 size 0x1c virtual false final false
 void HandleIncButtonWasPressed() ;

/// @brief Method HandleDecButtonWasPressed addr 0x2108b5c size 0x1c virtual false final false
 void HandleDecButtonWasPressed() ;

// Ctor Parameters []
explicit MultiplayerSpectatingSpotPickerViewController() ;

/// @brief Method .ctor addr 0x2108b78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController, "", "MultiplayerSpectatingSpotPickerViewController");
