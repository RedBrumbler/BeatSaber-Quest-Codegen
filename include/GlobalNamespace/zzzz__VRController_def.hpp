#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class VRController;
}
// Type: ::VRController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13958))
// CS Name: VRController
class CORDL_TYPE VRController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~VRController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: " const&", def_value: None }]
constexpr VRController(VRController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "&&", def_value: None }]
constexpr VRController(VRController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRController& operator=(VRController&& o) noexcept = default;
  constexpr VRController& operator=(VRController const& o) noexcept = default;
                


// Fields

 UnityEngine::XR::XRNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get__node() const;

 int32_t __declspec(property(get=__get__nodeIdx, put=__set__nodeIdx))  _nodeIdx;

constexpr void __set__nodeIdx(int32_t value) ;

constexpr int32_t __get__nodeIdx() const;

 UnityEngine::Transform __declspec(property(get=__get__viewAnchorTransform, put=__set__viewAnchorTransform))  _viewAnchorTransform;

constexpr void __set__viewAnchorTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__viewAnchorTransform() const;

 GlobalNamespace::VRControllerTransformOffset __declspec(property(get=__get__transformOffset, put=__set__transformOffset))  _transformOffset;

constexpr void __set__transformOffset(GlobalNamespace::VRControllerTransformOffset value) ;

constexpr GlobalNamespace::VRControllerTransformOffset __get__transformOffset() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 System::Action_2<GlobalNamespace::VRController,UnityEngine::Pose> __declspec(property(get=__get_anchorUpdateEvent, put=__set_anchorUpdateEvent))  anchorUpdateEvent;

constexpr void __set_anchorUpdateEvent(System::Action_2<GlobalNamespace::VRController,UnityEngine::Pose> value) ;

constexpr System::Action_2<GlobalNamespace::VRController,UnityEngine::Pose> __get_anchorUpdateEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__lastTrackedPosition, put=__set__lastTrackedPosition))  _lastTrackedPosition;

constexpr void __set__lastTrackedPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__lastTrackedPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get__lastTrackedRotation, put=__set__lastTrackedRotation))  _lastTrackedRotation;

constexpr void __set__lastTrackedRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__lastTrackedRotation() const;

 bool __declspec(property(get=__get__mouseMode, put=__set__mouseMode))  _mouseMode;

constexpr void __set__mouseMode(bool value) ;

constexpr bool __get__mouseMode() const;

static UnityEngine::Vector3 __declspec(property(get=__get_kLeftControllerDefaultPosition, put=__set_kLeftControllerDefaultPosition))  kLeftControllerDefaultPosition;

static void __set_kLeftControllerDefaultPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_kLeftControllerDefaultPosition() ;

static UnityEngine::Vector3 __declspec(property(get=__get_kRightControllerDefaultPosition, put=__set_kRightControllerDefaultPosition))  kRightControllerDefaultPosition;

static void __set_kRightControllerDefaultPosition(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_kRightControllerDefaultPosition() ;


// Properties

 UnityEngine::XR::XRNode __declspec(property(get=get_node, put=set_node))  node;

 int32_t __declspec(property(get=get_nodeIdx, put=set_nodeIdx))  nodeIdx;

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;

 UnityEngine::Vector3 __declspec(property(get=get_forward))  forward;

 float_t __declspec(property(get=get_triggerValue))  triggerValue;

 UnityEngine::Vector2 __declspec(property(get=get_thumbstick))  thumbstick;

 bool __declspec(property(get=get_active))  active;

 UnityEngine::Transform __declspec(property(get=get_viewAnchorTransform))  viewAnchorTransform;

 bool __declspec(property(get=get_mouseMode, put=set_mouseMode))  mouseMode;


// Methods

/// @brief Method get_node addr 0x1fc8c54 size 0x8 virtual false final false
 UnityEngine::XR::XRNode get_node() ;

/// @brief Method set_node addr 0x1fc8c5c size 0x8 virtual false final false
 void set_node(UnityEngine::XR::XRNode value) ;

/// @brief Method get_nodeIdx addr 0x1fc8c64 size 0x8 virtual false final false
 int32_t get_nodeIdx() ;

/// @brief Method set_nodeIdx addr 0x1fc8c6c size 0x8 virtual false final false
 void set_nodeIdx(int32_t value) ;

/// @brief Method get_position addr 0x1fc8c74 size 0x20 virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation addr 0x1fc8c94 size 0x20 virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_forward addr 0x1fc8cb4 size 0x20 virtual false final false
 UnityEngine::Vector3 get_forward() ;

/// @brief Method get_triggerValue addr 0x1fc8cd4 size 0xdc virtual false final false
 float_t get_triggerValue() ;

/// @brief Method get_thumbstick addr 0x1fc8db0 size 0xac virtual false final false
 UnityEngine::Vector2 get_thumbstick() ;

/// @brief Method get_active addr 0x1fc8e5c size 0x20 virtual false final false
 bool get_active() ;

/// @brief Method get_viewAnchorTransform addr 0x1fc8e7c size 0x8 virtual false final false
 UnityEngine::Transform get_viewAnchorTransform() ;

/// @brief Method add_anchorUpdateEvent addr 0x1fc8e84 size 0xb0 virtual false final false
 void add_anchorUpdateEvent(System::Action_2<GlobalNamespace::VRController,UnityEngine::Pose> value) ;

/// @brief Method remove_anchorUpdateEvent addr 0x1fc8f34 size 0xb0 virtual false final false
 void remove_anchorUpdateEvent(System::Action_2<GlobalNamespace::VRController,UnityEngine::Pose> value) ;

/// @brief Method get_mouseMode addr 0x1fc8fe4 size 0x8 virtual false final false
 bool get_mouseMode() ;

/// @brief Method set_mouseMode addr 0x1fc8fec size 0xf4 virtual false final false
 void set_mouseMode(bool value) ;

/// @brief Method Init addr 0x1fc912c size 0xc virtual false final false
 void Init(GlobalNamespace::IVRPlatformHelper vrPlatformHelper) ;

/// @brief Method OnEnable addr 0x1fc92f4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fc92f8 size 0x108 virtual false final false
 void OnDisable() ;

/// @brief Method SetupVRPlatformHelper addr 0x1fc9138 size 0x1bc virtual false final false
 void SetupVRPlatformHelper() ;

/// @brief Method TryGetControllerOffset addr 0x1fc9400 size 0x22c virtual false final false
 bool TryGetControllerOffset(ByRef<UnityEngine::Pose> poseOffset) ;

/// @brief Method UpdateAnchorOffsetPose addr 0x1fc977c size 0x114 virtual false final false
 void UpdateAnchorOffsetPose(UnityEngine::Pose poseOffset) ;

/// @brief Method AdjustPose addr 0x1fc96dc size 0x50 virtual false final false
static UnityEngine::Pose AdjustPose(UnityEngine::Pose originalPose, UnityEngine::Pose adjustment) ;

/// @brief Method InvertControllerPose addr 0x1fc972c size 0x50 virtual false final false
static UnityEngine::Pose InvertControllerPose(UnityEngine::Pose finalPose) ;

/// @brief Method UpdateAnchorOffsetPose addr 0x1fc90e0 size 0x4c virtual false final false
 void UpdateAnchorOffsetPose() ;

/// @brief Method Update addr 0x1fc9890 size 0x2b4 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit VRController() ;

/// @brief Method .ctor addr 0x1fc9b44 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRController, "", "VRController");
