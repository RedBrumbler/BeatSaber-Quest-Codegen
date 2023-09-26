#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
struct Navigation;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__Transition;
}
namespace UnityEngine::UI {
class Selectable;
}
// Type: ::Transition
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13075))
// CS Name: UnityEngine.UI.Selectable::Transition
struct CORDL_TYPE UnityEngine__UI__Selectable__Transition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Selectable__Transition(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Selectable__Transition(UnityEngine__UI__Selectable__Transition const&) = default;
                    constexpr UnityEngine__UI__Selectable__Transition(UnityEngine__UI__Selectable__Transition&&) = default;
                    constexpr UnityEngine__UI__Selectable__Transition& operator=(UnityEngine__UI__Selectable__Transition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Selectable__Transition& operator=(UnityEngine__UI__Selectable__Transition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Selectable__Transition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Selectable__Transition_Unwrapped : int32_t {
__None = 0,
__ColorTint = 1,
__SpriteSwap = 2,
__Animation = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Selectable__Transition_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Selectable__Transition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__Transition const None;

/// @brief Field ColorTint offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__Transition const ColorTint;

/// @brief Field SpriteSwap offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__Transition const SpriteSwap;

/// @brief Field Animation offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__Transition const Animation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::SelectionState
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13076))
// CS Name: UnityEngine.UI.Selectable::SelectionState
struct CORDL_TYPE UnityEngine__UI__Selectable__SelectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Selectable__SelectionState(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Selectable__SelectionState(UnityEngine__UI__Selectable__SelectionState const&) = default;
                    constexpr UnityEngine__UI__Selectable__SelectionState(UnityEngine__UI__Selectable__SelectionState&&) = default;
                    constexpr UnityEngine__UI__Selectable__SelectionState& operator=(UnityEngine__UI__Selectable__SelectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Selectable__SelectionState& operator=(UnityEngine__UI__Selectable__SelectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Selectable__SelectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Selectable__SelectionState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Selected = 3,
__Disabled = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Selectable__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Selectable__SelectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState const Normal;

/// @brief Field Highlighted offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState const Highlighted;

/// @brief Field Pressed offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState const Pressed;

/// @brief Field Selected offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState const Selected;

/// @brief Field Disabled offset 0
static UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Selectable
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13172))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13077))
// CS Name: UnityEngine.UI.Selectable
class CORDL_TYPE Selectable : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using SelectionState = UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState;

using Transition = UnityEngine::UI::UnityEngine__UI__Selectable__Transition;

/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr operator  UnityEngine::EventSystems::IMoveHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr operator  UnityEngine::EventSystems::ISelectHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr operator  UnityEngine::EventSystems::IDeselectHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~Selectable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: " const&", def_value: None }]
constexpr Selectable(Selectable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "&&", def_value: None }]
constexpr Selectable(Selectable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Selectable(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr Selectable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Selectable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Selectable& operator=(Selectable&& o) noexcept = default;
  constexpr Selectable& operator=(Selectable const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::UI::Selectable> __declspec(property(get=__get_s_Selectables, put=__set_s_Selectables))  s_Selectables;

static void __set_s_Selectables(::ArrayW<UnityEngine::UI::Selectable> value) ;

static ::ArrayW<UnityEngine::UI::Selectable> __get_s_Selectables() ;

static int32_t __declspec(property(get=__get_s_SelectableCount, put=__set_s_SelectableCount))  s_SelectableCount;

static void __set_s_SelectableCount(int32_t value) ;

static int32_t __get_s_SelectableCount() ;

 bool __declspec(property(get=__get_m_EnableCalled, put=__set_m_EnableCalled))  m_EnableCalled;

constexpr void __set_m_EnableCalled(bool value) ;

constexpr bool __get_m_EnableCalled() const;

 UnityEngine::UI::Navigation __declspec(property(get=__get_m_Navigation, put=__set_m_Navigation))  m_Navigation;

constexpr void __set_m_Navigation(UnityEngine::UI::Navigation value) ;

constexpr UnityEngine::UI::Navigation __get_m_Navigation() const;

 UnityEngine::UI::UnityEngine__UI__Selectable__Transition __declspec(property(get=__get_m_Transition, put=__set_m_Transition))  m_Transition;

constexpr void __set_m_Transition(UnityEngine::UI::UnityEngine__UI__Selectable__Transition value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition __get_m_Transition() const;

 UnityEngine::UI::ColorBlock __declspec(property(get=__get_m_Colors, put=__set_m_Colors))  m_Colors;

constexpr void __set_m_Colors(UnityEngine::UI::ColorBlock value) ;

constexpr UnityEngine::UI::ColorBlock __get_m_Colors() const;

 UnityEngine::UI::SpriteState __declspec(property(get=__get_m_SpriteState, put=__set_m_SpriteState))  m_SpriteState;

constexpr void __set_m_SpriteState(UnityEngine::UI::SpriteState value) ;

constexpr UnityEngine::UI::SpriteState __get_m_SpriteState() const;

 UnityEngine::UI::AnimationTriggers __declspec(property(get=__get_m_AnimationTriggers, put=__set_m_AnimationTriggers))  m_AnimationTriggers;

constexpr void __set_m_AnimationTriggers(UnityEngine::UI::AnimationTriggers value) ;

constexpr UnityEngine::UI::AnimationTriggers __get_m_AnimationTriggers() const;

 bool __declspec(property(get=__get_m_Interactable, put=__set_m_Interactable))  m_Interactable;

constexpr void __set_m_Interactable(bool value) ;

constexpr bool __get_m_Interactable() const;

 UnityEngine::UI::Graphic __declspec(property(get=__get_m_TargetGraphic, put=__set_m_TargetGraphic))  m_TargetGraphic;

constexpr void __set_m_TargetGraphic(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_m_TargetGraphic() const;

 bool __declspec(property(get=__get_m_GroupsAllowInteraction, put=__set_m_GroupsAllowInteraction))  m_GroupsAllowInteraction;

constexpr void __set_m_GroupsAllowInteraction(bool value) ;

constexpr bool __get_m_GroupsAllowInteraction() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;

 bool __declspec(property(get=__get__isPointerInside_k__BackingField, put=__set__isPointerInside_k__BackingField))  _isPointerInside_k__BackingField;

constexpr void __set__isPointerInside_k__BackingField(bool value) ;

constexpr bool __get__isPointerInside_k__BackingField() const;

 bool __declspec(property(get=__get__isPointerDown_k__BackingField, put=__set__isPointerDown_k__BackingField))  _isPointerDown_k__BackingField;

constexpr void __set__isPointerDown_k__BackingField(bool value) ;

constexpr bool __get__isPointerDown_k__BackingField() const;

 bool __declspec(property(get=__get__hasSelection_k__BackingField, put=__set__hasSelection_k__BackingField))  _hasSelection_k__BackingField;

constexpr void __set__hasSelection_k__BackingField(bool value) ;

constexpr bool __get__hasSelection_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::CanvasGroup> __declspec(property(get=__get_m_CanvasGroupCache, put=__set_m_CanvasGroupCache))  m_CanvasGroupCache;

constexpr void __set_m_CanvasGroupCache(System::Collections::Generic::List_1<UnityEngine::CanvasGroup> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::CanvasGroup> __get_m_CanvasGroupCache() const;


// Properties

static ::ArrayW<UnityEngine::UI::Selectable> __declspec(property(get=get_allSelectablesArray))  allSelectablesArray;

static int32_t __declspec(property(get=get_allSelectableCount))  allSelectableCount;

static System::Collections::Generic::List_1<UnityEngine::UI::Selectable> __declspec(property(get=get_allSelectables))  allSelectables;

 UnityEngine::UI::Navigation __declspec(property(get=get_navigation, put=set_navigation))  navigation;

 UnityEngine::UI::UnityEngine__UI__Selectable__Transition __declspec(property(get=get_transition, put=set_transition))  transition;

 UnityEngine::UI::ColorBlock __declspec(property(get=get_colors, put=set_colors))  colors;

 UnityEngine::UI::SpriteState __declspec(property(get=get_spriteState, put=set_spriteState))  spriteState;

 UnityEngine::UI::AnimationTriggers __declspec(property(get=get_animationTriggers, put=set_animationTriggers))  animationTriggers;

 UnityEngine::UI::Graphic __declspec(property(get=get_targetGraphic, put=set_targetGraphic))  targetGraphic;

 bool __declspec(property(get=get_interactable, put=set_interactable))  interactable;

 bool __declspec(property(get=get_isPointerInside, put=set_isPointerInside))  isPointerInside;

 bool __declspec(property(get=get_isPointerDown, put=set_isPointerDown))  isPointerDown;

 bool __declspec(property(get=get_hasSelection, put=set_hasSelection))  hasSelection;

 UnityEngine::UI::Image __declspec(property(get=get_image, put=set_image))  image;

 UnityEngine::Animator __declspec(property(get=get_animator))  animator;

 UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState __declspec(property(get=get_currentSelectionState))  currentSelectionState;


// Methods

/// @brief Method get_allSelectablesArray addr 0x2c3e7a4 size 0x9c virtual false final false
static ::ArrayW<UnityEngine::UI::Selectable> get_allSelectablesArray() ;

/// @brief Method get_allSelectableCount addr 0x2c3e840 size 0x58 virtual false final false
static int32_t get_allSelectableCount() ;

/// @brief Method get_allSelectables addr 0x2c3e898 size 0xa4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UI::Selectable> get_allSelectables() ;

/// @brief Method AllSelectablesNoAlloc addr 0x2c3e93c size 0xbc virtual false final false
static int32_t AllSelectablesNoAlloc(::ArrayW<UnityEngine::UI::Selectable> selectables) ;

/// @brief Method get_navigation addr 0x2c3e9f8 size 0x14 virtual false final false
 UnityEngine::UI::Navigation get_navigation() ;

/// @brief Method set_navigation addr 0x2c3ea0c size 0x88 virtual false final false
 void set_navigation(UnityEngine::UI::Navigation value) ;

/// @brief Method get_transition addr 0x2c3eaf8 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Selectable__Transition get_transition() ;

/// @brief Method set_transition addr 0x2c3eb00 size 0x74 virtual false final false
 void set_transition(UnityEngine::UI::UnityEngine__UI__Selectable__Transition value) ;

/// @brief Method get_colors addr 0x2c3eb74 size 0x10 virtual false final false
 UnityEngine::UI::ColorBlock get_colors() ;

/// @brief Method set_colors addr 0x2c3eb84 size 0x98 virtual false final false
 void set_colors(UnityEngine::UI::ColorBlock value) ;

/// @brief Method get_spriteState addr 0x2c3ec1c size 0x10 virtual false final false
 UnityEngine::UI::SpriteState get_spriteState() ;

/// @brief Method set_spriteState addr 0x2c3ec2c size 0x7c virtual false final false
 void set_spriteState(UnityEngine::UI::SpriteState value) ;

/// @brief Method get_animationTriggers addr 0x2c3eca8 size 0x8 virtual false final false
 UnityEngine::UI::AnimationTriggers get_animationTriggers() ;

/// @brief Method set_animationTriggers addr 0x2c3ecb0 size 0x74 virtual false final false
 void set_animationTriggers(UnityEngine::UI::AnimationTriggers value) ;

/// @brief Method get_targetGraphic addr 0x2c3ed24 size 0x8 virtual false final false
 UnityEngine::UI::Graphic get_targetGraphic() ;

/// @brief Method set_targetGraphic addr 0x2c3ed2c size 0x74 virtual false final false
 void set_targetGraphic(UnityEngine::UI::Graphic value) ;

/// @brief Method get_interactable addr 0x2c3eda0 size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x2c3eda8 size 0x170 virtual false final false
 void set_interactable(bool value) ;

/// @brief Method get_isPointerInside addr 0x2c3ef18 size 0x8 virtual false final false
 bool get_isPointerInside() ;

/// @brief Method set_isPointerInside addr 0x2c3ef20 size 0xc virtual false final false
 void set_isPointerInside(bool value) ;

/// @brief Method get_isPointerDown addr 0x2c3ef2c size 0x8 virtual false final false
 bool get_isPointerDown() ;

/// @brief Method set_isPointerDown addr 0x2c3ef34 size 0xc virtual false final false
 void set_isPointerDown(bool value) ;

/// @brief Method get_hasSelection addr 0x2c3ef40 size 0x8 virtual false final false
 bool get_hasSelection() ;

/// @brief Method set_hasSelection addr 0x2c3ef48 size 0xc virtual false final false
 void set_hasSelection(bool value) ;

// Ctor Parameters []
explicit Selectable() ;

/// @brief Method .ctor addr 0x2c390d4 size 0x118 virtual false final false
 void _ctor() ;

/// @brief Method get_image addr 0x2c3ef54 size 0x7c virtual false final false
 UnityEngine::UI::Image get_image() ;

/// @brief Method set_image addr 0x2c3efd0 size 0x8 virtual false final false
 void set_image(UnityEngine::UI::Image value) ;

/// @brief Method get_animator addr 0x2c3efd8 size 0x48 virtual false final false
 UnityEngine::Animator get_animator() ;

/// @brief Method Awake addr 0x2c3f020 size 0x8c virtual true final false
 void Awake() ;

/// @brief Method OnCanvasGroupChanged addr 0x2c3f0ac size 0x1c0 virtual true final false
 void OnCanvasGroupChanged() ;

/// @brief Method IsInteractable addr 0x2c3f26c size 0x20 virtual true final false
 bool IsInteractable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c3f28c size 0x4 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method OnEnable addr 0x2c39508 size 0x2a8 virtual true final false
 void OnEnable() ;

/// @brief Method OnTransformParentChanged addr 0x2c3f2e0 size 0x28 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnSetProperty addr 0x2c3ea94 size 0x64 virtual false final false
 void OnSetProperty() ;

/// @brief Method OnDisable addr 0x2c397d0 size 0x128 virtual true final false
 void OnDisable() ;

/// @brief Method OnApplicationFocus addr 0x2c3f308 size 0x5c virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method get_currentSelectionState addr 0x2c3f290 size 0x50 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState get_currentSelectionState() ;

/// @brief Method InstantClearState addr 0x2c3f3b0 size 0x70 virtual true final false
 void InstantClearState() ;

/// @brief Method DoStateTransition addr 0x2c3f738 size 0x194 virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

/// @brief Method FindSelectable addr 0x2c3f8cc size 0x4ac virtual false final false
 UnityEngine::UI::Selectable FindSelectable(UnityEngine::Vector3 dir) ;

/// @brief Method GetPointOnRectEdge addr 0x2c3fd78 size 0x1a4 virtual false final false
static UnityEngine::Vector3 GetPointOnRectEdge(UnityEngine::RectTransform rect, UnityEngine::Vector2 dir) ;

/// @brief Method Navigate addr 0x2c3ff1c size 0xb8 virtual false final false
 void Navigate(UnityEngine::EventSystems::AxisEventData eventData, UnityEngine::UI::Selectable sel) ;

/// @brief Method FindSelectableOnLeft addr 0x2c3a538 size 0xd8 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight addr 0x2c3a634 size 0xd8 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp addr 0x2c3a730 size 0xd8 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnUp() ;

/// @brief Method FindSelectableOnDown addr 0x2c3a82c size 0xd8 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnDown() ;

/// @brief Method OnMove addr 0x2c3a488 size 0x8c virtual true final false
 void OnMove(UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method StartColorTween addr 0x2c3f420 size 0xe8 virtual false final false
 void StartColorTween(UnityEngine::Color targetColor, bool instant) ;

/// @brief Method DoSpriteSwap addr 0x2c3f508 size 0xa8 virtual false final false
 void DoSpriteSwap(UnityEngine::Sprite newSprite) ;

/// @brief Method TriggerAnimation addr 0x2c3f5b0 size 0x188 virtual false final false
 void TriggerAnimation(::StringW triggername) ;

/// @brief Method IsHighlighted addr 0x2c3ffd4 size 0x5c virtual false final false
 bool IsHighlighted() ;

/// @brief Method IsPressed addr 0x2c3f364 size 0x4c virtual false final false
 bool IsPressed() ;

/// @brief Method EvaluateAndTransitionToSelectionState addr 0x2c40030 size 0x98 virtual false final false
 void EvaluateAndTransitionToSelectionState() ;

/// @brief Method OnPointerDown addr 0x2c39f60 size 0x130 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerUp addr 0x2c3a19c size 0x28 virtual true final false
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x2c400c8 size 0xc virtual true final false
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x2c400d4 size 0x8 virtual true final false
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSelect addr 0x2c400dc size 0xc virtual true final false
 void OnSelect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnDeselect addr 0x2c400e8 size 0x8 virtual true final false
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Select addr 0x2c400f0 size 0x104 virtual true final false
 void Select() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, "UnityEngine.UI", "Selectable/SelectionState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Selectable__Transition, "UnityEngine.UI", "Selectable/Transition");
NEED_NO_BOX(UnityEngine::UI::Selectable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Selectable, "UnityEngine.UI", "Selectable");
