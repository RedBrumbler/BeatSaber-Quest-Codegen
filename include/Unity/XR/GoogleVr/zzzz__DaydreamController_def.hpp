#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace Unity::XR::GoogleVr {
class DaydreamController;
}
// Type: Unity.XR.GoogleVr::DaydreamController
namespace Unity::XR::GoogleVr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6225))
// CS Name: Unity.XR.GoogleVr.DaydreamController
class CORDL_TYPE DaydreamController : public UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d0};

virtual ~DaydreamController() = default;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: " const&", def_value: None }]
constexpr DaydreamController(DaydreamController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: "&&", def_value: None }]
constexpr DaydreamController(DaydreamController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DaydreamController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr DaydreamController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DaydreamController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DaydreamController& operator=(DaydreamController&& o) noexcept = default;
  constexpr DaydreamController& operator=(DaydreamController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__volumeUp_k__BackingField, put=__set__volumeUp_k__BackingField))  _volumeUp_k__BackingField;

constexpr void __set__volumeUp_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__volumeUp_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__recentered_k__BackingField, put=__set__recentered_k__BackingField))  _recentered_k__BackingField;

constexpr void __set__recentered_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__recentered_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__volumeDown_k__BackingField, put=__set__volumeDown_k__BackingField))  _volumeDown_k__BackingField;

constexpr void __set__volumeDown_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__volumeDown_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__recentering_k__BackingField, put=__set__recentering_k__BackingField))  _recentering_k__BackingField;

constexpr void __set__recentering_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__recentering_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__app_k__BackingField, put=__set__app_k__BackingField))  _app_k__BackingField;

constexpr void __set__app_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__app_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__home_k__BackingField, put=__set__home_k__BackingField))  _home_k__BackingField;

constexpr void __set__home_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__home_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadClicked_k__BackingField, put=__set__touchpadClicked_k__BackingField))  _touchpadClicked_k__BackingField;

constexpr void __set__touchpadClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadTouched_k__BackingField, put=__set__touchpadTouched_k__BackingField))  _touchpadTouched_k__BackingField;

constexpr void __set__touchpadTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAcceleration_k__BackingField, put=__set__deviceAcceleration_k__BackingField))  _deviceAcceleration_k__BackingField;

constexpr void __set__deviceAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAcceleration_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_volumeUp, put=set_volumeUp))  volumeUp;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_recentered, put=set_recentered))  recentered;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_volumeDown, put=set_volumeDown))  volumeDown;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_recentering, put=set_recentering))  recentering;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_app, put=set_app))  app;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_home, put=set_home))  home;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadClicked, put=set_touchpadClicked))  touchpadClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadTouched, put=set_touchpadTouched))  touchpadTouched;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAcceleration, put=set_deviceAcceleration))  deviceAcceleration;


// Methods

/// @brief Method get_touchpad addr 0x28d536c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x28d5374 size 0x8 virtual false final false
 void set_touchpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_volumeUp addr 0x28d537c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_volumeUp() ;

/// @brief Method set_volumeUp addr 0x28d5384 size 0x8 virtual false final false
 void set_volumeUp(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_recentered addr 0x28d538c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_recentered() ;

/// @brief Method set_recentered addr 0x28d5394 size 0x8 virtual false final false
 void set_recentered(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_volumeDown addr 0x28d539c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_volumeDown() ;

/// @brief Method set_volumeDown addr 0x28d53a4 size 0x8 virtual false final false
 void set_volumeDown(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_recentering addr 0x28d53ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_recentering() ;

/// @brief Method set_recentering addr 0x28d53b4 size 0x8 virtual false final false
 void set_recentering(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_app addr 0x28d53bc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_app() ;

/// @brief Method set_app addr 0x28d53c4 size 0x8 virtual false final false
 void set_app(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_home addr 0x28d53cc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_home() ;

/// @brief Method set_home addr 0x28d53d4 size 0x8 virtual false final false
 void set_home(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadClicked addr 0x28d53dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadClicked() ;

/// @brief Method set_touchpadClicked addr 0x28d53e4 size 0x8 virtual false final false
 void set_touchpadClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadTouched addr 0x28d53ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadTouched() ;

/// @brief Method set_touchpadTouched addr 0x28d53f4 size 0x8 virtual false final false
 void set_touchpadTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_deviceVelocity addr 0x28d53fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28d5404 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAcceleration addr 0x28d540c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAcceleration() ;

/// @brief Method set_deviceAcceleration addr 0x28d5414 size 0x8 virtual false final false
 void set_deviceAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28d541c size 0x24c virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit DaydreamController() ;

/// @brief Method .ctor addr 0x28d5668 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::GoogleVr
NEED_NO_BOX(Unity::XR::GoogleVr::DaydreamController);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::GoogleVr::DaydreamController, "Unity.XR.GoogleVr", "DaydreamController");
