#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Mouse;
}
// Type: UnityEngine.InputSystem::Mouse
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6349))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6346))
// CS Name: UnityEngine.InputSystem.Mouse
class CORDL_TYPE Mouse : public UnityEngine::InputSystem::Pointer {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b8};

virtual ~Mouse() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: " const&", def_value: None }]
constexpr Mouse(Mouse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "&&", def_value: None }]
constexpr Mouse(Mouse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mouse(void* ptr) noexcept : UnityEngine::InputSystem::Pointer(ptr) {
}


  constexpr Mouse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mouse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mouse& operator=(Mouse&& o) noexcept = default;
  constexpr Mouse& operator=(Mouse const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=__get__scroll_k__BackingField, put=__set__scroll_k__BackingField))  _scroll_k__BackingField;

constexpr void __set__scroll_k__BackingField(UnityEngine::InputSystem::Controls::DeltaControl value) ;

constexpr UnityEngine::InputSystem::Controls::DeltaControl __get__scroll_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__leftButton_k__BackingField, put=__set__leftButton_k__BackingField))  _leftButton_k__BackingField;

constexpr void __set__leftButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__leftButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__middleButton_k__BackingField, put=__set__middleButton_k__BackingField))  _middleButton_k__BackingField;

constexpr void __set__middleButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__middleButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__rightButton_k__BackingField, put=__set__rightButton_k__BackingField))  _rightButton_k__BackingField;

constexpr void __set__rightButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__rightButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__backButton_k__BackingField, put=__set__backButton_k__BackingField))  _backButton_k__BackingField;

constexpr void __set__backButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__backButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__forwardButton_k__BackingField, put=__set__forwardButton_k__BackingField))  _forwardButton_k__BackingField;

constexpr void __set__forwardButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__forwardButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField))  _clickCount_k__BackingField;

constexpr void __set__clickCount_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__clickCount_k__BackingField() const;

static UnityEngine::InputSystem::Mouse __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Mouse value) ;

static UnityEngine::InputSystem::Mouse __get__current_k__BackingField() ;

static UnityEngine::InputSystem::Mouse __declspec(property(get=__get_s_PlatformMouseDevice, put=__set_s_PlatformMouseDevice))  s_PlatformMouseDevice;

static void __set_s_PlatformMouseDevice(UnityEngine::InputSystem::Mouse value) ;

static UnityEngine::InputSystem::Mouse __get_s_PlatformMouseDevice() ;


// Properties

 UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=get_scroll, put=set_scroll))  scroll;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_leftButton, put=set_leftButton))  leftButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_middleButton, put=set_middleButton))  middleButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_rightButton, put=set_rightButton))  rightButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_backButton, put=set_backButton))  backButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_forwardButton, put=set_forwardButton))  forwardButton;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_clickCount, put=set_clickCount))  clickCount;

static UnityEngine::InputSystem::Mouse __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_scroll addr 0x290e408 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl get_scroll() ;

/// @brief Method set_scroll addr 0x290e410 size 0x8 virtual false final false
 void set_scroll(UnityEngine::InputSystem::Controls::DeltaControl value) ;

/// @brief Method get_leftButton addr 0x290e418 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_leftButton() ;

/// @brief Method set_leftButton addr 0x290e420 size 0x8 virtual false final false
 void set_leftButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_middleButton addr 0x290e428 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_middleButton() ;

/// @brief Method set_middleButton addr 0x290e430 size 0x8 virtual false final false
 void set_middleButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_rightButton addr 0x290e438 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_rightButton() ;

/// @brief Method set_rightButton addr 0x290e440 size 0x8 virtual false final false
 void set_rightButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_backButton addr 0x290e448 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_backButton() ;

/// @brief Method set_backButton addr 0x290e450 size 0x8 virtual false final false
 void set_backButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_forwardButton addr 0x290e458 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_forwardButton() ;

/// @brief Method set_forwardButton addr 0x290e460 size 0x8 virtual false final false
 void set_forwardButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_clickCount addr 0x290e468 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_clickCount() ;

/// @brief Method set_clickCount addr 0x290e470 size 0x8 virtual false final false
 void set_clickCount(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_current addr 0x290e478 size 0x48 virtual false final false
static UnityEngine::InputSystem::Mouse get_current() ;

/// @brief Method set_current addr 0x290e4c0 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Mouse value) ;

/// @brief Method MakeCurrent addr 0x290e50c size 0x80 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnAdded addr 0x290e5d8 size 0x5c virtual true final false
 void OnAdded() ;

/// @brief Method OnRemoved addr 0x290e634 size 0x80 virtual true final false
 void OnRemoved() ;

/// @brief Method WarpCursorPosition addr 0x290e730 size 0xa4 virtual false final false
 void WarpCursorPosition(UnityEngine::Vector2 position) ;

/// @brief Method FinishSetup addr 0x290e7d4 size 0x1a4 virtual true final false
 void FinishSetup() ;

/// @brief Method OnNextUpdate addr 0x290eadc size 0x90 virtual false final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x290ebf4 size 0x44 virtual false final false
 void OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x290ec84 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x290ec88 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

// Ctor Parameters []
explicit Mouse() ;

/// @brief Method .ctor addr 0x290ec8c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Mouse);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Mouse, "UnityEngine.InputSystem", "Mouse");
