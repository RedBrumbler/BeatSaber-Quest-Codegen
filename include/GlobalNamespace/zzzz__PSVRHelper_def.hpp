#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PSVRHelper;
}
// Type: ::PSVRHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13951))
// CS Name: PSVRHelper
class CORDL_TYPE PSVRHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PSVRHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: " const&", def_value: None }]
constexpr PSVRHelper(PSVRHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: "&&", def_value: None }]
constexpr PSVRHelper(PSVRHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSVRHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PSVRHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSVRHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSVRHelper& operator=(PSVRHelper&& o) noexcept = default;
  constexpr PSVRHelper& operator=(PSVRHelper const& o) noexcept = default;
                


// Fields

/// @brief Field kContinuesRumbleImpulseStrength offset 0
static constexpr float_t  kContinuesRumbleImpulseStrength{0.8};

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

 bool __declspec(property(get=__get__didGetNodeStatesThisFrame, put=__set__didGetNodeStatesThisFrame))  _didGetNodeStatesThisFrame;

constexpr void __set__didGetNodeStatesThisFrame(bool value) ;

constexpr bool __get__didGetNodeStatesThisFrame() const;

 System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get__nodeStates, put=__set__nodeStates))  _nodeStates;

constexpr void __set__nodeStates(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> __get__nodeStates() const;

 bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

constexpr void __set__hasVrFocus(bool value) ;

constexpr bool __get__hasVrFocus() const;


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;


// Methods

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1fc5280 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fc531c size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1fc53b8 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fc5454 size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1fc54f0 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fc558c size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1fc5628 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fc56c4 size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1fc5760 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1fc57fc size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1fc5898 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1fc5934 size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fc59d0 size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fc5a6c size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method add_controllersDidDisconnectEvent addr 0x1fc5b08 size 0x9c virtual true final true
 void add_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method remove_controllersDidDisconnectEvent addr 0x1fc5ba4 size 0x9c virtual true final true
 void remove_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1fc5c40 size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1fc5c48 size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1fc5c50 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1fc5c58 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method Start addr 0x1fc5c60 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1fc5c64 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMoveDeviceDidDisconnectEvent addr 0x1fc5c68 size 0x1c virtual false final false
 void HandleMoveDeviceDidDisconnectEvent() ;

/// @brief Method Update addr 0x1fc5c84 size 0x4 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x1fc5c88 size 0x8 virtual false final false
 void LateUpdate() ;

/// @brief Method TriggerHapticPulse addr 0x1fc5c90 size 0x4 virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method StopHaptics addr 0x1fc5c94 size 0x4 virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method TryGetPoseOffsetForNode addr 0x1fc5c98 size 0x88 virtual true final true
 bool TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method XRNodeToPSDeviceIndex addr 0x1fc5d20 size 0xdc virtual false final false
static int32_t XRNodeToPSDeviceIndex(UnityEngine::XR::XRNode node) ;

/// @brief Method GetNodePose addr 0x1fc5dfc size 0x384 virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1fc6180 size 0x40 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetTriggerValue addr 0x1fc61c0 size 0x8 virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetThumbstickValue addr 0x1fc61c8 size 0x40 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButton addr 0x1fc6208 size 0x8 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1fc6210 size 0x8 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1fc6218 size 0x1c virtual true final true
 void RefreshControllersReference() ;

// Ctor Parameters []
explicit PSVRHelper() ;

/// @brief Method .ctor addr 0x1fc6234 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PSVRHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PSVRHelper, "", "PSVRHelper");
