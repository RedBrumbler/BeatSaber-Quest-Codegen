#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class GlobalNamespace__UnityXRController__Configuration;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
class PSVR2Helper;
}
namespace GlobalNamespace {
struct GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit;
}
// Type: ::HeadsetHapticFrequencyLimit
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13949))
// CS Name: PSVR2Helper::HeadsetHapticFrequencyLimit
struct CORDL_TYPE GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept;


                    constexpr GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit(GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit const&) = default;
                    constexpr GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit(GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit&&) = default;
                    constexpr GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit& operator=(GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit& operator=(GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_maxTimePlayed, put=__set_maxTimePlayed))  maxTimePlayed;

constexpr void __set_maxTimePlayed(float_t value) ;

constexpr float_t __get_maxTimePlayed() const;

 int32_t __declspec(property(get=__get_maximumFrequency, put=__set_maximumFrequency))  maximumFrequency;

constexpr void __set_maximumFrequency(int32_t value) ;

constexpr int32_t __get_maximumFrequency() const;


// Methods

/// @brief Method .ctor addr 0x1fc5274 size 0xc virtual false final false
 void _ctor(float_t maxTimePlayed, int32_t maximumFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PSVR2Helper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13950))
// CS Name: PSVR2Helper
class CORDL_TYPE PSVR2Helper : public UnityEngine::MonoBehaviour {
public:
// Declarations
using HeadsetHapticFrequencyLimit = GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit;

/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr operator  GlobalNamespace::IVRPlatformHelper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~PSVR2Helper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: " const&", def_value: None }]
constexpr PSVR2Helper(PSVR2Helper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "&&", def_value: None }]
constexpr PSVR2Helper(PSVR2Helper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSVR2Helper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PSVR2Helper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSVR2Helper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSVR2Helper& operator=(PSVR2Helper&& o) noexcept = default;
  constexpr PSVR2Helper& operator=(PSVR2Helper const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__leftController() const;

 GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration __get__rightController() const;

 GlobalNamespace::EulerPose __declspec(property(get=__get__defaultEulerPose, put=__set__defaultEulerPose))  _defaultEulerPose;

constexpr void __set__defaultEulerPose(GlobalNamespace::EulerPose value) ;

constexpr GlobalNamespace::EulerPose __get__defaultEulerPose() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController> __declspec(property(get=__get__controllers, put=__set__controllers))  _controllers;

constexpr void __set__controllers(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,GlobalNamespace::UnityXRController> __get__controllers() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble> __declspec(property(get=__get__controllersWithRumble, put=__set__controllersWithRumble))  _controllersWithRumble;

constexpr void __set__controllersWithRumble(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,UnityEngine::InputSystem::XR::XRControllerWithRumble> __get__controllersWithRumble() const;

/// @brief Field kRightControllerName offset 0
static constexpr ::ConstString  kRightControllerName{u"PSVR2ControllerRight"};

/// @brief Field kLeftControllerName offset 0
static constexpr ::ConstString  kLeftControllerName{u"PSVR2ControllerLeft"};

/// @brief Field kMaxHMDFrequency offset 0
static constexpr int32_t  kMaxHMDFrequency{25};

 float_t __declspec(property(get=__get__timeWhenStartedPlayingHaptic, put=__set__timeWhenStartedPlayingHaptic))  _timeWhenStartedPlayingHaptic;

constexpr void __set__timeWhenStartedPlayingHaptic(float_t value) ;

constexpr float_t __get__timeWhenStartedPlayingHaptic() const;

 float_t __declspec(property(get=__get__lastTimeWhenTriggeredHaptic, put=__set__lastTimeWhenTriggeredHaptic))  _lastTimeWhenTriggeredHaptic;

constexpr void __set__lastTimeWhenTriggeredHaptic(float_t value) ;

constexpr float_t __get__lastTimeWhenTriggeredHaptic() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit> __declspec(property(get=__get__maximumHapticFrequencyLimits, put=__set__maximumHapticFrequencyLimits))  _maximumHapticFrequencyLimits;

constexpr void __set__maximumHapticFrequencyLimits(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit> __get__maximumHapticFrequencyLimits() const;

 System::Action __declspec(property(get=__get_controllersDidChangeReferenceEvent, put=__set_controllersDidChangeReferenceEvent))  controllersDidChangeReferenceEvent;

constexpr void __set_controllersDidChangeReferenceEvent(System::Action value) ;

constexpr System::Action __get_controllersDidChangeReferenceEvent() const;

 bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

constexpr void __set__hasVrFocus(bool value) ;

constexpr bool __get__hasVrFocus() const;

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

 System::Action __declspec(property(get=__get_controllersDidDisconnectEvent, put=__set_controllersDidDisconnectEvent))  controllersDidDisconnectEvent;

constexpr void __set_controllersDidDisconnectEvent(System::Action value) ;

constexpr System::Action __get_controllersDidDisconnectEvent() const;

/// @brief Field kRumbleMinimalDuration offset 0
static constexpr float_t  kRumbleMinimalDuration{0.05};


// Properties

 bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_hasVrFocus))  hasVrFocus;

 bool __declspec(property(get=get_isAlwaysWireless))  isAlwaysWireless;

 GlobalNamespace::VRPlatformSDK __declspec(property(get=get_vrPlatformSDK))  vrPlatformSDK;


// Methods

/// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fc37b0 size 0x9c virtual true final true
 void add_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fc384c size 0x9c virtual true final true
 void remove_controllersDidChangeReferenceEvent(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x1fc38e8 size 0x8 virtual true final true
 bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus addr 0x1fc38f0 size 0x8 virtual true final true
 bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless addr 0x1fc38f8 size 0x8 virtual true final true
 bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK addr 0x1fc3900 size 0x8 virtual true final true
 GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Method add_inputFocusWasCapturedEvent addr 0x1fc3908 size 0x9c virtual true final true
 void add_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fc39a4 size 0x9c virtual true final true
 void remove_inputFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_inputFocusWasReleasedEvent addr 0x1fc3a40 size 0x9c virtual true final true
 void add_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fc3adc size 0x9c virtual true final true
 void remove_inputFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasCapturedEvent addr 0x1fc3b78 size 0x9c virtual true final true
 void add_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fc3c14 size 0x9c virtual true final true
 void remove_vrFocusWasCapturedEvent(System::Action value) ;

/// @brief Method add_vrFocusWasReleasedEvent addr 0x1fc3cb0 size 0x9c virtual true final true
 void add_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fc3d4c size 0x9c virtual true final true
 void remove_vrFocusWasReleasedEvent(System::Action value) ;

/// @brief Method add_hmdUnmountedEvent addr 0x1fc3de8 size 0x9c virtual true final true
 void add_hmdUnmountedEvent(System::Action value) ;

/// @brief Method remove_hmdUnmountedEvent addr 0x1fc3e84 size 0x9c virtual true final true
 void remove_hmdUnmountedEvent(System::Action value) ;

/// @brief Method add_hmdMountedEvent addr 0x1fc3f20 size 0x9c virtual true final true
 void add_hmdMountedEvent(System::Action value) ;

/// @brief Method remove_hmdMountedEvent addr 0x1fc3fbc size 0x9c virtual true final true
 void remove_hmdMountedEvent(System::Action value) ;

/// @brief Method add_controllersDidDisconnectEvent addr 0x1fc4058 size 0x9c virtual true final true
 void add_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method remove_controllersDidDisconnectEvent addr 0x1fc40f4 size 0x9c virtual true final true
 void remove_controllersDidDisconnectEvent(System::Action value) ;

/// @brief Method Awake addr 0x1fc4190 size 0x258 virtual false final false
 void Awake() ;

/// @brief Method TryGetPoseOffsetForNode addr 0x1fc44a8 size 0x4c virtual true final true
 bool TryGetPoseOffsetForNode(UnityEngine::XR::XRNode node, ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method GetNodePose addr 0x1fc44f4 size 0x16c virtual true final true
 bool GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method GetTriggerValue addr 0x1fc4660 size 0xc virtual true final true
 float_t GetTriggerValue(UnityEngine::XR::XRNode node) ;

/// @brief Method GetAnyJoystickMaxAxis addr 0x1fc466c size 0x8 virtual true final true
 UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetThumbstickValue addr 0x1fc4674 size 0xd4 virtual true final true
 UnityEngine::Vector2 GetThumbstickValue(UnityEngine::XR::XRNode nodeType) ;

/// @brief Method GetMenuButton addr 0x1fc4748 size 0x8 virtual true final true
 bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown addr 0x1fc4750 size 0x8 virtual true final true
 bool GetMenuButtonDown() ;

/// @brief Method RefreshControllersReference addr 0x1fc4758 size 0x1c virtual true final true
 void RefreshControllersReference() ;

/// @brief Method StopHaptics addr 0x1fc4774 size 0x4 virtual true final true
 void StopHaptics(UnityEngine::XR::XRNode node) ;

/// @brief Method TriggerHapticPulse addr 0x1fc4778 size 0xa0 virtual true final true
 void TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) ;

/// @brief Method GetTRCCompliantHeadsetHapticFrequency addr 0x1fc4818 size 0x200 virtual false final false
 int32_t GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency) ;

/// @brief Method HandleApplicationFocusLost addr 0x1fc4a18 size 0x1c virtual false final false
 void HandleApplicationFocusLost() ;

/// @brief Method HandleApplicationFocusResumed addr 0x1fc4a34 size 0x1c virtual false final false
 void HandleApplicationFocusResumed() ;

/// @brief Method InputDeviceChangeTriggered addr 0x1fc4a50 size 0x34c virtual false final false
 void InputDeviceChangeTriggered(UnityEngine::InputSystem::InputDevice inputDevice, UnityEngine::InputSystem::InputDeviceChange inputDeviceChange) ;

/// @brief Method AddControllerToMap addr 0x1fc4d9c size 0x278 virtual false final false
 void AddControllerToMap(UnityEngine::XR::XRNode forNode, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnDestroy addr 0x1fc5014 size 0xa4 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit PSVR2Helper() ;

/// @brief Method .ctor addr 0x1fc50b8 size 0x1bc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PSVR2Helper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PSVR2Helper, "", "PSVR2Helper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PSVR2Helper__HeadsetHapticFrequencyLimit, "", "PSVR2Helper/HeadsetHapticFrequencyLimit");
