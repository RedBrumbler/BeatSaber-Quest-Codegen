#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRTracker__Frustum;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Colorf;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpace__StorageLocation;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Gradient;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Frustumf;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceStorageLocation;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExtensions;
}
// Type: ::OVRExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8470))
// CS Name: OVRExtensions
class CORDL_TYPE OVRExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: " const&", def_value: None }]
constexpr OVRExtensions(OVRExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None }]
constexpr OVRExtensions(OVRExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRExtensions& operator=(OVRExtensions&& o) noexcept = default;
  constexpr OVRExtensions& operator=(OVRExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTrackingSpacePose addr 0x25dc6f8 size 0x12c virtual false final false
static GlobalNamespace::OVRPose ToTrackingSpacePose(UnityEngine::Transform transform, UnityEngine::Camera camera) ;

/// @brief Method ToWorldSpacePose addr 0x25dc8b0 size 0x50 virtual false final false
static GlobalNamespace::OVRPose ToWorldSpacePose(GlobalNamespace::OVRPose trackingSpacePose) ;

/// @brief Method ToWorldSpacePose addr 0x25d505c size 0x1b8 virtual false final false
static GlobalNamespace::OVRPose ToWorldSpacePose(GlobalNamespace::OVRPose trackingSpacePose, UnityEngine::Camera mainCamera) ;

/// @brief Method ToHeadSpacePose addr 0x25dc900 size 0x120 virtual false final false
static GlobalNamespace::OVRPose ToHeadSpacePose(GlobalNamespace::OVRPose trackingSpacePose) ;

/// @brief Method ToHeadSpacePose addr 0x25dc824 size 0x8c virtual false final false
static GlobalNamespace::OVRPose ToHeadSpacePose(UnityEngine::Transform transform, UnityEngine::Camera camera) ;

/// @brief Method ToOVRPose addr 0x25dca20 size 0x88 virtual false final false
static GlobalNamespace::OVRPose ToOVRPose(UnityEngine::Transform t, bool isLocal) ;

/// @brief Method FromOVRPose addr 0x25d8a94 size 0x68 virtual false final false
static void FromOVRPose(UnityEngine::Transform t, GlobalNamespace::OVRPose pose, bool isLocal) ;

/// @brief Method ToOVRPose addr 0x25d5214 size 0x28 virtual false final false
static GlobalNamespace::OVRPose ToOVRPose(GlobalNamespace::GlobalNamespace__OVRPlugin__Posef p) ;

/// @brief Method ToFrustum addr 0x25dcaa8 size 0x14 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRTracker__Frustum ToFrustum(GlobalNamespace::GlobalNamespace__OVRPlugin__Frustumf f) ;

/// @brief Method FromColorf addr 0x25dcabc size 0x4 virtual false final false
static UnityEngine::Color FromColorf(GlobalNamespace::GlobalNamespace__OVRPlugin__Colorf c) ;

/// @brief Method ToColorf addr 0x25dcac0 size 0x4 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Colorf ToColorf(UnityEngine::Color c) ;

/// @brief Method FromVector3f addr 0x25d97d0 size 0x4 virtual false final false
static UnityEngine::Vector3 FromVector3f(GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method FromFlippedXVector3f addr 0x25dcac4 size 0x8 virtual false final false
static UnityEngine::Vector3 FromFlippedXVector3f(GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method FromFlippedZVector3f addr 0x25d9568 size 0x8 virtual false final false
static UnityEngine::Vector3 FromFlippedZVector3f(GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f v) ;

/// @brief Method ToVector3f addr 0x25dcacc size 0x4 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f ToVector3f(UnityEngine::Vector3 v) ;

/// @brief Method ToFlippedXVector3f addr 0x25dcad0 size 0x8 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f ToFlippedXVector3f(UnityEngine::Vector3 v) ;

/// @brief Method ToFlippedZVector3f addr 0x25d9658 size 0x8 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f ToFlippedZVector3f(UnityEngine::Vector3 v) ;

/// @brief Method FromVector4f addr 0x25dcad8 size 0x4 virtual false final false
static UnityEngine::Vector4 FromVector4f(GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f v) ;

/// @brief Method ToVector4f addr 0x25dcadc size 0x4 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f ToVector4f(UnityEngine::Vector4 v) ;

/// @brief Method FromQuatf addr 0x25dcae0 size 0x4 virtual false final false
static UnityEngine::Quaternion FromQuatf(GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method FromFlippedXQuatf addr 0x25dcae4 size 0xc virtual false final false
static UnityEngine::Quaternion FromFlippedXQuatf(GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method FromFlippedZQuatf addr 0x25dcaf0 size 0xc virtual false final false
static UnityEngine::Quaternion FromFlippedZQuatf(GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf q) ;

/// @brief Method ToQuatf addr 0x25dcafc size 0x4 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf ToQuatf(UnityEngine::Quaternion q) ;

/// @brief Method ToFlippedXQuatf addr 0x25dcb00 size 0xc virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf ToFlippedXQuatf(UnityEngine::Quaternion q) ;

/// @brief Method ToFlippedZQuatf addr 0x25dcb0c size 0xc virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf ToFlippedZQuatf(UnityEngine::Quaternion q) ;

/// @brief Method ConvertToHMDMatrix34 addr 0x25dcb18 size 0x15c virtual false final false
static OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine::Matrix4x4 m) ;

/// @brief Method FindChildRecursive addr 0x25dcc74 size 0xf8 virtual false final false
static UnityEngine::Transform FindChildRecursive(UnityEngine::Transform parent, ::StringW name) ;

/// @brief Method Equals addr 0x25dcd6c size 0x210 virtual false final false
static bool Equals(UnityEngine::Gradient gradient, UnityEngine::Gradient otherGradient) ;

/// @brief Method CopyFrom addr 0x25dcf7c size 0x200 virtual false final false
static void CopyFrom(UnityEngine::Gradient gradient, UnityEngine::Gradient otherGradient) ;

/// @brief Method ToSpaceStorageLocation addr 0x25dd17c size 0xb4 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation ToSpaceStorageLocation(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation storageLocation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExtensions, "", "OVRExtensions");
