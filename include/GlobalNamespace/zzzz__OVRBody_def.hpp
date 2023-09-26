#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Step;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Quatf;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__SkeletonPoseData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__BodyState;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBody;
}
// Type: ::OVRBody
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8464))
// CS Name: OVRBody
class CORDL_TYPE OVRBody : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OVRBody() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: " const&", def_value: None }]
constexpr OVRBody(OVRBody const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: "&&", def_value: None }]
constexpr OVRBody(OVRBody&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRBody(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRBody& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRBody& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRBody& operator=(OVRBody&& o) noexcept = default;
  constexpr OVRBody& operator=(OVRBody const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRPlugin__BodyState __declspec(property(get=__get__bodyState, put=__set__bodyState))  _bodyState;

constexpr void __set__bodyState(GlobalNamespace::GlobalNamespace__OVRPlugin__BodyState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__BodyState __get__bodyState() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf> __declspec(property(get=__get__boneRotations, put=__set__boneRotations))  _boneRotations;

constexpr void __set__boneRotations(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Quatf> __get__boneRotations() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get__boneTranslations, put=__set__boneTranslations))  _boneTranslations;

constexpr void __set__boneTranslations(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> __get__boneTranslations() const;

 bool __declspec(property(get=__get__dataChangedSinceLastQuery, put=__set__dataChangedSinceLastQuery))  _dataChangedSinceLastQuery;

constexpr void __set__dataChangedSinceLastQuery(bool value) ;

constexpr bool __get__dataChangedSinceLastQuery() const;

 bool __declspec(property(get=__get__hasData, put=__set__hasData))  _hasData;

constexpr void __set__hasData(bool value) ;

constexpr bool __get__hasData() const;

/// @brief Field BodyTrackingPermission offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const BodyTrackingPermission;

 System::Action_1<::StringW> __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted))  _onPermissionGranted;

constexpr void __set__onPermissionGranted(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get__onPermissionGranted() const;

static int32_t __declspec(property(get=__get__trackingInstanceCount, put=__set__trackingInstanceCount))  _trackingInstanceCount;

static void __set__trackingInstanceCount(int32_t value) ;

static int32_t __get__trackingInstanceCount() ;


// Properties

 System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__BodyState> __declspec(property(get=get_BodyState))  BodyState;


// Methods

/// @brief Method get_BodyState addr 0x25d8db4 size 0x88 virtual false final false
 System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__BodyState> get_BodyState() ;

/// @brief Method Awake addr 0x25d8e3c size 0x7c virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x25d8eb8 size 0x114 virtual false final false
 void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x25d9128 size 0x60 virtual false final false
 void OnPermissionGranted(::StringW permissionId) ;

/// @brief Method StartBodyTracking addr 0x25d8fcc size 0xd8 virtual false final false
 bool StartBodyTracking() ;

/// @brief Method OnDisable addr 0x25d9188 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x25d9210 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x25d921c size 0x8 virtual false final false
 void Update() ;

/// @brief Method GetBodyState addr 0x25d90a4 size 0x84 virtual false final false
 void GetBodyState(GlobalNamespace::GlobalNamespace__OVRPlugin__Step step) ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType addr 0x25d9224 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData addr 0x25d922c size 0x250 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData addr 0x25d947c size 0x18 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() ;

// Ctor Parameters []
explicit OVRBody() ;

/// @brief Method .ctor addr 0x25d9494 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled addr 0x25d949c size 0x8 virtual true final true
 bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRBody);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBody, "", "OVRBody");
