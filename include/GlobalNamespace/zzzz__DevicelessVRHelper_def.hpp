#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector3;
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
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class DevicelessVRHelper;
}
// Type: ::DevicelessVRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13929))
// CS Name: DevicelessVRHelper
class CORDL_TYPE DevicelessVRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~DevicelessVRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: " const&", def_value: None }]
constexpr DevicelessVRHelper(DevicelessVRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: "&&", def_value: None }]
constexpr DevicelessVRHelper(DevicelessVRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DevicelessVRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DevicelessVRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DevicelessVRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DevicelessVRHelper& operator=(DevicelessVRHelper&& o) noexcept = default;
  constexpr DevicelessVRHelper& operator=(DevicelessVRHelper const& o) noexcept = default;
                


// Fields

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

 bool __declspec(property(get=__get__scrollingLastFrame, put=__set__scrollingLastFrame))  _scrollingLastFrame;

constexpr void __set__scrollingLastFrame(bool value) ;

constexpr bool __get__scrollingLastFrame() const;


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1fbf5d8 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fbf674 size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1fbf710 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fbf7ac size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1fbf848 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fbf8e4 size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1fbf980 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fbfa1c size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1fbfab8 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1fbfb54 size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1fbfbf0 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1fbfc8c size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fbfd28 size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fbfdc4 size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method add_controllersDidDisconnectEvent addr 0x1fbfe60 size 0x9c virtual true final true
 void add_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method remove_controllersDidDisconnectEvent addr 0x1fbfefc size 0x9c virtual true final true
 void remove_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1fbff98 size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1fbffa0 size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1fbffa8 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1fbffb0 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method get_loggerPrefix addr 0x1fbffb8 size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method Update addr 0x1fbfff8 size 0x15c virtual false final false
 void Update() ;

/// @brief Method TriggerHapticPulse addr 0x1fc0154 size 0x4 virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1fc0158 size 0x4 virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method TryGetPoseOffsetForNode addr 0x1fc015c size 0x88 virtual true final true
 bool TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method GetNodePose addr 0x1fc01e4 size 0x98 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1fc027c size 0x68 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1fc02e4 size 0x28 virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1fc030c size 0x68 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1fc0374 size 0x4 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1fc03f0 size 0x4 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1fc046c size 0x1c virtual true final true
 void RefreshControllersReference() ;

// Ctor Parameters []
explicit DevicelessVRHelper() ;

/// @brief Method .ctor addr 0x1fc0488 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DevicelessVRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DevicelessVRHelper, "", "DevicelessVRHelper");
