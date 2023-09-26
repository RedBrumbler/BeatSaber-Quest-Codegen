#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Node;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusVRHelper;
}
// Type: ::OculusVRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13940))
// CS Name: OculusVRHelper
class CORDL_TYPE OculusVRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OculusVRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: " const&", def_value: None }]
constexpr OculusVRHelper(OculusVRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "&&", def_value: None }]
constexpr OculusVRHelper(OculusVRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusVRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OculusVRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusVRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusVRHelper& operator=(OculusVRHelper&& o) noexcept = default;
  constexpr OculusVRHelper& operator=(OculusVRHelper const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EulerPose __declspec(property(get=__get__oculusTouchControllerOffset, put=__set__oculusTouchControllerOffset))  _oculusTouchControllerOffset;

constexpr void __set__oculusTouchControllerOffset(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__oculusTouchControllerOffset() const;

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

 bool __declspec(property(get=__get__hasInputFocus, put=__set__hasInputFocus))  _hasInputFocus;

constexpr void __set__hasInputFocus(bool value) ;

constexpr bool __get__hasInputFocus() const;

 bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

constexpr void __set__hasVrFocus(bool value) ;

constexpr bool __get__hasVrFocus() const;

 bool __declspec(property(get=__get__userPresent, put=__set__userPresent))  _userPresent;

constexpr void __set__userPresent(bool value) ;

constexpr bool __get__userPresent() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get__disabledEventSystem, put=__set__disabledEventSystem))  _disabledEventSystem;

constexpr void __set__disabledEventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get__disabledEventSystem() const;

/// @brief Field kVerticalLeftHand offset 0
static constexpr ::ConstString  kVerticalLeftHand{u"VerticalLeftHand"};

/// @brief Field kVerticalRightHand offset 0
static constexpr ::ConstString  kVerticalRightHand{u"VerticalRightHand"};

/// @brief Field kHorizontalLeftHand offset 0
static constexpr ::ConstString  kHorizontalLeftHand{u"HorizontalLeftHand"};

/// @brief Field kHorizontalRightHand offset 0
static constexpr ::ConstString  kHorizontalRightHand{u"HorizontalRightHand"};


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;

 bool __declspec(property(get=get__isOVRManagerPresent))  _isOVRManagerPresent;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1fc122c size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fc12c8 size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1fc1364 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fc1400 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1fc149c size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fc1538 size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1fc15d4 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fc1670 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1fc170c size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1fc17a8 size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1fc1844 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1fc18e0 size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fc197c size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fc1a18 size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method add_controllersDidDisconnectEvent addr 0x1fc1ab4 size 0x9c virtual true final true
 void add_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method remove_controllersDidDisconnectEvent addr 0x1fc1b50 size 0x9c virtual true final true
 void remove_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1fc1bec size 0x50 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1fc1c3c size 0x50 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1fc1c8c size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1fc1c94 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method get_loggerPrefix addr 0x1fc1c9c size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method get__isOVRManagerPresent addr 0x1fc1cdc size 0xbc virtual false final false
 bool get__isOVRManagerPresent() ;

/// @brief Method Update addr 0x1fc1d98 size 0x218 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x1fc212c size 0x58 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x1fc2184 size 0x58 virtual false final false
 void LateUpdate() ;

/// @brief Method TriggerHapticPulse addr 0x1fc21dc size 0x7c virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1fc2258 size 0x6c virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method TryGetPoseOffsetForNode addr 0x1fc22c4 size 0xcc virtual true final true
 bool TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method GetNodePose addr 0x1fc2390 size 0x164 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method XRNodeToOVRNode addr 0x1fc24f4 size 0xd8 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Node XRNodeToOVRNode(UnityEngine::XR::XRNode node) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1fc25cc size 0x4 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1fc25d0 size 0x98 virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1fc2668 size 0xf8 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1fc2760 size 0x44 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1fc27a4 size 0x44 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1fc27e8 size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method EnableEventSystem addr 0x1fc20a8 size 0x84 virtual false final false
 void EnableEventSystem() ;

/// @brief Method DisableEventSystem addr 0x1fc1fb0 size 0xf8 virtual false final false
 void DisableEventSystem() ;

// Ctor Parameters []
explicit OculusVRHelper() ;

/// @brief Method .ctor addr 0x1fc2804 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OculusVRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusVRHelper, "", "OculusVRHelper");
