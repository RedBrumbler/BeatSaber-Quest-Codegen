#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class GlobalNamespace__UnityXRController__Configuration;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__UnityXRHelper__VRControllerManufacturerName;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
// Type: ::VRControllerManufacturerName
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13956))
// CS Name: UnityXRHelper::VRControllerManufacturerName
struct CORDL_TYPE GlobalNamespace__UnityXRHelper__VRControllerManufacturerName : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept;


                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const&) = default;
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName&&) = default;
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName& operator=(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__UnityXRHelper__VRControllerManufacturerName& operator=(GlobalNamespace__UnityXRHelper__VRControllerManufacturerName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped : int32_t {
__Undefined = 0,
__HTC = 1,
__Oculus = 2,
__Valve = 3,
__Microsoft = 4,
__Unknown = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__UnityXRHelper__VRControllerManufacturerName_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Undefined;

/// @brief Field HTC offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const HTC;

/// @brief Field Oculus offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Oculus;

/// @brief Field Valve offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Valve;

/// @brief Field Microsoft offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Microsoft;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnityXRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: UnityXRHelper
class CORDL_TYPE UnityXRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
using VRControllerManufacturerName = GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName;

/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~UnityXRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: " const&", def_value: None }]
constexpr UnityXRHelper(UnityXRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "&&", def_value: None }]
constexpr UnityXRHelper(UnityXRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityXRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UnityXRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityXRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityXRHelper& operator=(UnityXRHelper&& o) noexcept = default;
  constexpr UnityXRHelper& operator=(UnityXRHelper const& o) noexcept = default;
                


// Fields

/// @brief Field kSecondaryButtonLeftHand offset 0
static constexpr ::ConstString  kSecondaryButtonLeftHand{u"OpenXRSecondaryButtonLeftHand"};

/// @brief Field kSecondaryButtonRightHand offset 0
static constexpr ::ConstString  kSecondaryButtonRightHand{u"OpenXRSecondaryButtonRightHand"};

 System::Action __declspec(property(get=__get_inputFocusWasCapturedEvent, put=__set_inputFocusWasCapturedEvent))  inputFocusWasCapturedEvent;

constexpr void __set_inputFocusWasCapturedEvent(System::Action value) ;

constexpr System::Action __get_inputFocusWasCapturedEvent() const;

 System::Action __declspec(property(get=__get_inputFocusWasReleasedEvent, put=__set_inputFocusWasReleasedEvent))  inputFocusWasReleasedEvent;

constexpr void __set_inputFocusWasReleasedEvent(System::Action value) ;

constexpr System::Action __get_inputFocusWasReleasedEvent() const;

 System::Action __declspec(property(get=__get_vrFocusWasCapturedEvent, put=__set_vrFocusWasCapturedEvent))  vrFocusWasCapturedEvent;

constexpr void __set_vrFocusWasCapturedEvent(System::Action value) ;

constexpr System::Action __get_vrFocusWasCapturedEvent() const;

 System::Action __declspec(property(get=__get_vrFocusWasReleasedEvent, put=__set_vrFocusWasReleasedEvent))  vrFocusWasReleasedEvent;

constexpr void __set_vrFocusWasReleasedEvent(System::Action value) ;

constexpr System::Action __get_vrFocusWasReleasedEvent() const;

 System::Action __declspec(property(get=__get_hmdUnmountedEvent, put=__set_hmdUnmountedEvent))  hmdUnmountedEvent;

constexpr void __set_hmdUnmountedEvent(System::Action value) ;

constexpr System::Action __get_hmdUnmountedEvent() const;

 System::Action __declspec(property(get=__get_hmdMountedEvent, put=__set_hmdMountedEvent))  hmdMountedEvent;

constexpr void __set_hmdMountedEvent(System::Action value) ;

constexpr System::Action __get_hmdMountedEvent() const;

 System::Action __declspec(property(get=__get_controllersDidChangeReferenceEvent, put=__set_controllersDidChangeReferenceEvent))  controllersDidChangeReferenceEvent;

constexpr void __set_controllersDidChangeReferenceEvent(System::Action value) ;

constexpr System::Action __get_controllersDidChangeReferenceEvent() const;

 System::Action __declspec(property(get=__get_controllersDidDisconnectEvent, put=__set_controllersDidDisconnectEvent))  controllersDidDisconnectEvent;

constexpr void __set_controllersDidDisconnectEvent(System::Action value) ;

constexpr System::Action __get_controllersDidDisconnectEvent() const;

 bool __declspec(property(get=__get__hasVrFocus_k__BackingField, put=__set__hasVrFocus_k__BackingField))  _hasVrFocus_k__BackingField;

constexpr void __set__hasVrFocus_k__BackingField(bool value) ;

constexpr bool __get__hasVrFocus_k__BackingField() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__oculusPoseOffset, put=__set__oculusPoseOffset))  _oculusPoseOffset;

constexpr void __set__oculusPoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__oculusPoseOffset() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__valveIndexPoseOffset, put=__set__valveIndexPoseOffset))  _valveIndexPoseOffset;

constexpr void __set__valveIndexPoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__valveIndexPoseOffset() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__htcVivePoseOffset, put=__set__htcVivePoseOffset))  _htcVivePoseOffset;

constexpr void __set__htcVivePoseOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__htcVivePoseOffset() const;

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__leftControllerConfiguration, put=__set__leftControllerConfiguration))  _leftControllerConfiguration;

constexpr void __set__leftControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__leftControllerConfiguration() const;

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__rightControllerConfiguration, put=__set__rightControllerConfiguration))  _rightControllerConfiguration;

constexpr void __set__rightControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__rightControllerConfiguration() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__userPresenceActionReference, put=__set__userPresenceActionReference))  _userPresenceActionReference;

constexpr void __set__userPresenceActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__userPresenceActionReference() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__headPositionActionReference, put=__set__headPositionActionReference))  _headPositionActionReference;

constexpr void __set__headPositionActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__headPositionActionReference() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__headOrientationActionReference, put=__set__headOrientationActionReference))  _headOrientationActionReference;

constexpr void __set__headOrientationActionReference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__headOrientationActionReference() const;

 GlobalNamespace::UnityXRController __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(GlobalNamespace::UnityXRController value) ;

constexpr GlobalNamespace::UnityXRController __get__leftController() const;

 GlobalNamespace::UnityXRController __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(GlobalNamespace::UnityXRController value) ;

constexpr GlobalNamespace::UnityXRController __get__rightController() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__headPositionAction, put=__set__headPositionAction))  _headPositionAction;

constexpr void __set__headPositionAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__headPositionAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__headOrientationAction, put=__set__headOrientationAction))  _headOrientationAction;

constexpr void __set__headOrientationAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__headOrientationAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get__userPresenceAction, put=__set__userPresenceAction))  _userPresenceAction;

constexpr void __set__userPresenceAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get__userPresenceAction() const;

 bool __declspec(property(get=__get__scrollingLastFrame, put=__set__scrollingLastFrame))  _scrollingLastFrame;

constexpr void __set__scrollingLastFrame(bool value) ;

constexpr bool __get__scrollingLastFrame() const;

 bool __declspec(property(get=__get__userPresence, put=__set__userPresence))  _userPresence;

constexpr void __set__userPresence(bool value) ;

constexpr bool __get__userPresence() const;


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus, put=set_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;

 bool __declspec(property(put=set_userPresence))  userPresence;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1fc6f0c size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fc6fa8 size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1fc7044 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fc70e0 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1fc717c size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fc7218 size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1fc72b4 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fc7350 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1fc73ec size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1fc7488 size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1fc7524 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1fc75c0 size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fc765c size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fc76f8 size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method add_controllersDidDisconnectEvent addr 0x1fc7794 size 0x9c virtual true final true
 void add_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method remove_controllersDidDisconnectEvent addr 0x1fc7830 size 0x9c virtual true final true
 void remove_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1fc78cc size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1fc78d4 size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method set_hasVrFocus addr 0x1fc78dc size 0xc virtual false final false
 void set_hasVrFocus(bool value) ;

/// @brief Method get_isAlwaysWireless addr 0x1fc78e8 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1fc78f0 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method get_loggerPrefix addr 0x1fc78f8 size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method set_userPresence addr 0x1fc7938 size 0x80 virtual false final false
 void set_userPresence(bool value) ;

/// @brief Method Start addr 0x1fc79b8 size 0x380 virtual false final false
 void Start() ;

/// @brief Method OnTrackingOriginUpdated addr 0x1fc7dd0 size 0x1c virtual false final false
 void OnTrackingOriginUpdated(UnityEngine::XR::XRInputSubsystem inputSystem) ;

/// @brief Method OnboundaryChanged addr 0x1fc7e08 size 0x1c virtual false final false
 void OnboundaryChanged(UnityEngine::XR::XRInputSubsystem inputSystem) ;

/// @brief Method OnDestroy addr 0x1fc7e24 size 0x184 virtual false final false
 void OnDestroy() ;

/// @brief Method OnUserPresenceCanceled addr 0x1fc7fa8 size 0x8 virtual false final false
 void OnUserPresenceCanceled(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnUserPresenceStarted addr 0x1fc7fb0 size 0x8 virtual false final false
 void OnUserPresenceStarted(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method OnApplicationPause addr 0x1fc7fb8 size 0x34 virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method HandleNewXRNode addr 0x1fc7fec size 0x24 virtual false final false
 void HandleNewXRNode(UnityEngine::XR::XRNodeState state) ;

/// @brief Method UpdateManufacturerOnNode addr 0x1fc7d38 size 0x98 virtual false final false
 void UpdateManufacturerOnNode(UnityEngine::XR::XRNode node) ;

/// @brief Method HandleRemovedXRNode addr 0x1fc8010 size 0x60 virtual false final false
 void HandleRemovedXRNode(UnityEngine::XR::XRNodeState state) ;

/// @brief Method ControllerFromNode addr 0x1fc8070 size 0x2c virtual false final false
 GlobalNamespace::UnityXRController ControllerFromNode(UnityEngine::XR::XRNode node) ;

/// @brief Method TriggerHapticPulse addr 0x1fc809c size 0x18c virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1fc8228 size 0x174 virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method TryGetPoseOffsetForNode addr 0x1fc839c size 0xe8 virtual true final true
 bool TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method GetPoseOffsetForManufacturer addr 0x1fc8484 size 0x158 virtual false final false
 UnityEngine::Pose GetPoseOffsetForManufacturer(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName manufacturerName) ;

/// @brief Method GetNodePose addr 0x1fc85dc size 0x1f4 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1fc8868 size 0x8 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1fc8870 size 0xc virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1fc887c size 0x78 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1fc88f4 size 0x74 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1fc8ac0 size 0x74 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method GetMenuButtonNameForLeftController addr 0x1fc8968 size 0x8c virtual false final false
 ::StringW GetMenuButtonNameForLeftController() ;

/// @brief Method GetMenuButtonNameForRightController addr 0x1fc8a24 size 0x9c virtual false final false
 ::StringW GetMenuButtonNameForRightController() ;

/// @brief Method GetButton addr 0x1fc89f4 size 0x30 virtual false final false
static bool GetButton(::StringW buttonLegacyName) ;

/// @brief Method GetButtonDown addr 0x1fc8b34 size 0x30 virtual false final false
static bool GetButtonDown(::StringW buttonLegacyName) ;

/// @brief Method RefreshControllersReference addr 0x1fc7dec size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method ReadHeadPose addr 0x1fc87d0 size 0x98 virtual false final false
 void ReadHeadPose(ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

// Ctor Parameters []
explicit UnityXRHelper() ;

/// @brief Method .ctor addr 0x1fc8b64 size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName, "", "UnityXRHelper/VRControllerManufacturerName");
NEED_NO_BOX(GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityXRHelper, "", "UnityXRHelper");
