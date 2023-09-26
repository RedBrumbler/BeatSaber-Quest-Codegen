#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class ColorHueSlider;
}
namespace GlobalNamespace {
class ColorSaturationValueSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class HSVPanelController;
}
// Type: ::HSVPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5510))
// CS Name: HSVPanelController
class CORDL_TYPE HSVPanelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HSVPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: " const&", def_value: None }]
constexpr HSVPanelController(HSVPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HSVPanelController", modifiers: "&&", def_value: None }]
constexpr HSVPanelController(HSVPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HSVPanelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HSVPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HSVPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HSVPanelController& operator=(HSVPanelController&& o) noexcept = default;
  constexpr HSVPanelController& operator=(HSVPanelController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSaturationValueSlider __declspec(property(get=__get__colorSaturationValueSlider, put=__set__colorSaturationValueSlider))  _colorSaturationValueSlider;

constexpr void __set__colorSaturationValueSlider(GlobalNamespace::ColorSaturationValueSlider value) ;

constexpr GlobalNamespace::ColorSaturationValueSlider __get__colorSaturationValueSlider() const;

 GlobalNamespace::ColorHueSlider __declspec(property(get=__get__colorHueSlider, put=__set__colorHueSlider))  _colorHueSlider;

constexpr void __set__colorHueSlider(GlobalNamespace::ColorHueSlider value) ;

constexpr GlobalNamespace::ColorHueSlider __get__colorHueSlider() const;

 System::Action_2<UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> __declspec(property(get=__get_colorDidChangeEvent, put=__set_colorDidChangeEvent))  colorDidChangeEvent;

constexpr void __set_colorDidChangeEvent(System::Action_2<UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

constexpr System::Action_2<UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> __get_colorDidChangeEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__hsvColor, put=__set__hsvColor))  _hsvColor;

constexpr void __set__hsvColor(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__hsvColor() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method add_colorDidChangeEvent addr 0x2157678 size 0xb0 virtual false final false
 void add_colorDidChangeEvent(System::Action_2<UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method remove_colorDidChangeEvent addr 0x21578c4 size 0xb0 virtual false final false
 void remove_colorDidChangeEvent(System::Action_2<UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method get_color addr 0x21584c4 size 0x14 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2157474 size 0x4c virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method Awake addr 0x2158540 size 0xec virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x215862c size 0x160 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleColorSaturationOrValueDidChange addr 0x215878c size 0x74 virtual false final false
 void HandleColorSaturationOrValueDidChange(GlobalNamespace::ColorSaturationValueSlider slider, UnityEngine::Vector2 colorSaturationAndValue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method HandleColorHueDidChange addr 0x2158800 size 0x6c virtual false final false
 void HandleColorHueDidChange(GlobalNamespace::ColorHueSlider slider, float_t hue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method RefreshSlidersValues addr 0x2158508 size 0x38 virtual false final false
 void RefreshSlidersValues() ;

/// @brief Method RefreshSlidersColors addr 0x21584d8 size 0x30 virtual false final false
 void RefreshSlidersColors() ;

// Ctor Parameters []
explicit HSVPanelController() ;

/// @brief Method .ctor addr 0x215886c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HSVPanelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HSVPanelController, "", "HSVPanelController");
