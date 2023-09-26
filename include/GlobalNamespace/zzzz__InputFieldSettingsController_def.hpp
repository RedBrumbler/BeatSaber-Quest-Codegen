#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class StringSO;
}
namespace HMUI {
class InputFieldView;
}
// Forward declare root types
namespace GlobalNamespace {
class InputFieldSettingsController;
}
// Type: ::InputFieldSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5691))
// CS Name: InputFieldSettingsController
class CORDL_TYPE InputFieldSettingsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InputFieldSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: " const&", def_value: None }]
constexpr InputFieldSettingsController(InputFieldSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: "&&", def_value: None }]
constexpr InputFieldSettingsController(InputFieldSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFieldSettingsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InputFieldSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFieldSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFieldSettingsController& operator=(InputFieldSettingsController&& o) noexcept = default;
  constexpr InputFieldSettingsController& operator=(InputFieldSettingsController const& o) noexcept = default;
                


// Fields

 HMUI::InputFieldView __declspec(property(get=__get__inputFieldView, put=__set__inputFieldView))  _inputFieldView;

constexpr void __set__inputFieldView(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__inputFieldView() const;

 GlobalNamespace::StringSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(GlobalNamespace::StringSO value) ;

constexpr GlobalNamespace::StringSO __get__settingsValue() const;


// Methods

/// @brief Method Awake addr 0x2189e40 size 0x98 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2189ed8 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2189f70 size 0x54 virtual false final false
 void OnEnable() ;

/// @brief Method HandleInputFieldDidChange addr 0x2189fc4 size 0x5c virtual true final false
 void HandleInputFieldDidChange(HMUI::InputFieldView inputFieldView) ;

// Ctor Parameters []
explicit InputFieldSettingsController() ;

/// @brief Method .ctor addr 0x218a020 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::InputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InputFieldSettingsController, "", "InputFieldSettingsController");
