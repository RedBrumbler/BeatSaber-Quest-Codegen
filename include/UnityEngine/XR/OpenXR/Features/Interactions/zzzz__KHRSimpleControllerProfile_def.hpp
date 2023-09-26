#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class KHRSimpleControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController;
}
// Type: ::KHRSimpleController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6428))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14234))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.KHRSimpleControllerProfile::KHRSimpleController
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d0};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController(UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController(UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__select_k__BackingField, put=__set__select_k__BackingField))  _select_k__BackingField;

constexpr void __set__select_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__select_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__devicePose_k__BackingField, put=__set__devicePose_k__BackingField))  _devicePose_k__BackingField;

constexpr void __set__devicePose_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__devicePose_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__pointer_k__BackingField, put=__set__pointer_k__BackingField))  _pointer_k__BackingField;

constexpr void __set__pointer_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__pointer_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__pointerPosition_k__BackingField, put=__set__pointerPosition_k__BackingField))  _pointerPosition_k__BackingField;

constexpr void __set__pointerPosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__pointerPosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__pointerRotation_k__BackingField, put=__set__pointerRotation_k__BackingField))  _pointerRotation_k__BackingField;

constexpr void __set__pointerRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__pointerRotation_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__haptic_k__BackingField, put=__set__haptic_k__BackingField))  _haptic_k__BackingField;

constexpr void __set__haptic_k__BackingField(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::HapticControl __get__haptic_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_select, put=set_select))  select;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_haptic, put=set_haptic))  haptic;


// Methods

/// @brief Method get_select addr 0x2b267fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_select() ;

/// @brief Method set_select addr 0x2b26804 size 0x8 virtual false final false
 void set_select(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2b2680c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2b26814 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2b2681c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2b26824 size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2b2682c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2b26834 size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2b2683c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2b26844 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2b2684c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2b26854 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2b2685c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2b26864 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2b2686c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2b26874 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2b2687c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2b26884 size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2b2688c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2b26894 size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2b2689c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2b268a4 size 0x8 virtual false final false
 void set_haptic(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2b268ac size 0x288 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController() ;

/// @brief Method .ctor addr 0x2b26b34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::KHRSimpleControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14228))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14235))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.KHRSimpleControllerProfile
class CORDL_TYPE KHRSimpleControllerProfile : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using KHRSimpleController = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~KHRSimpleControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: " const&", def_value: None }]
constexpr KHRSimpleControllerProfile(KHRSimpleControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: "&&", def_value: None }]
constexpr KHRSimpleControllerProfile(KHRSimpleControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KHRSimpleControllerProfile(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr KHRSimpleControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KHRSimpleControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KHRSimpleControllerProfile& operator=(KHRSimpleControllerProfile&& o) noexcept = default;
  constexpr KHRSimpleControllerProfile& operator=(KHRSimpleControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.khrsimpleprofile"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/khr/simple_controller"};

/// @brief Field select offset 0
static constexpr ::ConstString  select{u"/input/select/click"};

/// @brief Field menu offset 0
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field haptic offset 0
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"KHR Simple Controller OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2b25838 size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2b25978 size 0xb8 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2b25a30 size 0xdc4 virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit KHRSimpleControllerProfile() ;

/// @brief Method .ctor addr 0x2b267f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "KHRSimpleControllerProfile");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__KHRSimpleControllerProfile__KHRSimpleController, "UnityEngine.XR.OpenXR.Features.Interactions", "KHRSimpleControllerProfile/KHRSimpleController");
