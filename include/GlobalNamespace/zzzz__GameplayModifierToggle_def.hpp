#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class HoverTextSetter;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierToggle;
}
// Type: ::GameplayModifierToggle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5625))
// CS Name: GameplayModifierToggle
class CORDL_TYPE GameplayModifierToggle : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GameplayModifierToggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: " const&", def_value: None }]
constexpr GameplayModifierToggle(GameplayModifierToggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: "&&", def_value: None }]
constexpr GameplayModifierToggle(GameplayModifierToggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierToggle(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameplayModifierToggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifierToggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifierToggle& operator=(GameplayModifierToggle&& o) noexcept = default;
  constexpr GameplayModifierToggle& operator=(GameplayModifierToggle const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__gameplayModifier, put=__set__gameplayModifier))  _gameplayModifier;

constexpr void __set__gameplayModifier(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__gameplayModifier() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__multiplierText, put=__set__multiplierText))  _multiplierText;

constexpr void __set__multiplierText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__multiplierText() const;

 HMUI::HoverTextSetter __declspec(property(get=__get__hoverTextSetter, put=__set__hoverTextSetter))  _hoverTextSetter;

constexpr void __set__hoverTextSetter(HMUI::HoverTextSetter value) ;

constexpr HMUI::HoverTextSetter __get__hoverTextSetter() const;

 UnityEngine::UI::Image __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__icon() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__toggle() const;

 UnityEngine::Color __declspec(property(get=__get__positiveColor, put=__set__positiveColor))  _positiveColor;

constexpr void __set__positiveColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__positiveColor() const;


// Properties

 UnityEngine::UI::Toggle __declspec(property(get=get_toggle))  toggle;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=get_gameplayModifier))  gameplayModifier;


// Methods

/// @brief Method get_toggle addr 0x217d5e8 size 0x8 virtual false final false
 UnityEngine::UI::Toggle get_toggle() ;

/// @brief Method get_gameplayModifier addr 0x217d5f0 size 0x8 virtual false final false
 GlobalNamespace::GameplayModifierParamsSO get_gameplayModifier() ;

/// @brief Method Start addr 0x217d5f8 size 0x37c virtual false final false
 void Start() ;

// Ctor Parameters []
explicit GameplayModifierToggle() ;

/// @brief Method .ctor addr 0x217d974 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifierToggle);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierToggle, "", "GameplayModifierToggle");
