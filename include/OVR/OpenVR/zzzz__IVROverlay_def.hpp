#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ClearOverlayTexture;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___CloseMessageOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ComputeOverlayIntersection;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___CreateDashboardOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___CreateOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___DestroyOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___FindOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetHighQualityOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetKeyboardText;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayAlpha;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayColor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayFlag;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayFlags;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayImageData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayInputMethod;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayKey;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayMouseScale;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayRenderModel;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlaySortOrder;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTexture;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTextureSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayTransformType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___HideKeyboard;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___HideOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___IsDashboardVisible;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___IsHoverTargetOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___IsOverlayVisible;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___PollNextOverlayEvent;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetHighQualityOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayAlpha;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayColor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayFlag;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayFromFile;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayInputMethod;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayMouseScale;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayNeighbor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayRaw;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayRenderModel;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlaySortOrder;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTexture;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ShowDashboard;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ShowKeyboard;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ShowMessageOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___ShowOverlay;
}
namespace OVR::OpenVR {
struct IVROverlay;
}
// Type: ::_FindOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9190))
// CS Name: OVR.OpenVR.IVROverlay::_FindOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___FindOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___FindOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___FindOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___FindOverlay(OVR__OpenVR__IVROverlay___FindOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___FindOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___FindOverlay(OVR__OpenVR__IVROverlay___FindOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___FindOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___FindOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___FindOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___FindOverlay& operator=(OVR__OpenVR__IVROverlay___FindOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___FindOverlay& operator=(OVR__OpenVR__IVROverlay___FindOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___FindOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26822d4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26823ac size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x26823c0 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682454 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pOverlayHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CreateOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9191))
// CS Name: OVR.OpenVR.IVROverlay::_CreateOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___CreateOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___CreateOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CreateOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CreateOverlay(OVR__OpenVR__IVROverlay___CreateOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CreateOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CreateOverlay(OVR__OpenVR__IVROverlay___CreateOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___CreateOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___CreateOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CreateOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CreateOverlay& operator=(OVR__OpenVR__IVROverlay___CreateOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___CreateOverlay& operator=(OVR__OpenVR__IVROverlay___CreateOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___CreateOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682480 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2682558 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x268256c size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268260c size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pOverlayHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_DestroyOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9192))
// CS Name: OVR.OpenVR.IVROverlay::_DestroyOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___DestroyOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___DestroyOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___DestroyOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___DestroyOverlay(OVR__OpenVR__IVROverlay___DestroyOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___DestroyOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___DestroyOverlay(OVR__OpenVR__IVROverlay___DestroyOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___DestroyOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___DestroyOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___DestroyOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___DestroyOverlay& operator=(OVR__OpenVR__IVROverlay___DestroyOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___DestroyOverlay& operator=(OVR__OpenVR__IVROverlay___DestroyOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___DestroyOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682638 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26826fc size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2682710 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682794 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetHighQualityOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9193))
// CS Name: OVR.OpenVR.IVROverlay::_SetHighQualityOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetHighQualityOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetHighQualityOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetHighQualityOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay(OVR__OpenVR__IVROverlay___SetHighQualityOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetHighQualityOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay(OVR__OpenVR__IVROverlay___SetHighQualityOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetHighQualityOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay& operator=(OVR__OpenVR__IVROverlay___SetHighQualityOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetHighQualityOverlay& operator=(OVR__OpenVR__IVROverlay___SetHighQualityOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetHighQualityOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26827bc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2682880 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2682894 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682918 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetHighQualityOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9194))
// CS Name: OVR.OpenVR.IVROverlay::_GetHighQualityOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetHighQualityOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetHighQualityOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetHighQualityOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay(OVR__OpenVR__IVROverlay___GetHighQualityOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetHighQualityOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay(OVR__OpenVR__IVROverlay___GetHighQualityOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetHighQualityOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay& operator=(OVR__OpenVR__IVROverlay___GetHighQualityOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetHighQualityOverlay& operator=(OVR__OpenVR__IVROverlay___GetHighQualityOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetHighQualityOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682940 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26829fc size 0x14 virtual true final false
 uint64_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2682a10 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682a30 size 0x28 virtual true final false
 uint64_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayKey
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9195))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayKey
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayKey : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayKey", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayKey(OVR__OpenVR__IVROverlay___GetOverlayKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayKey", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayKey(OVR__OpenVR__IVROverlay___GetOverlayKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayKey(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayKey& operator=(OVR__OpenVR__IVROverlay___GetOverlayKey&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayKey& operator=(OVR__OpenVR__IVROverlay___GetOverlayKey const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayKey(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682a58 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2682b1c size 0x14 virtual true final false
 uint32_t Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method BeginInvoke addr 0x2682b30 size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682c20 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVROverlayError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9196))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayName
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayName(OVR__OpenVR__IVROverlay___GetOverlayName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayName(OVR__OpenVR__IVROverlay___GetOverlayName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayName& operator=(OVR__OpenVR__IVROverlay___GetOverlayName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayName& operator=(OVR__OpenVR__IVROverlay___GetOverlayName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682c4c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2682d10 size 0x14 virtual true final false
 uint32_t Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method BeginInvoke addr 0x2682d24 size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682e14 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVROverlayError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9197))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayName
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayName(OVR__OpenVR__IVROverlay___SetOverlayName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayName(OVR__OpenVR__IVROverlay___SetOverlayName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayName& operator=(OVR__OpenVR__IVROverlay___SetOverlayName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayName& operator=(OVR__OpenVR__IVROverlay___SetOverlayName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682e40 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2682f04 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchName) ;

/// @brief Method BeginInvoke addr 0x2682f18 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2682fa4 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayImageData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9198))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayImageData
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayImageData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayImageData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayImageData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData(OVR__OpenVR__IVROverlay___GetOverlayImageData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayImageData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData(OVR__OpenVR__IVROverlay___GetOverlayImageData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayImageData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData& operator=(OVR__OpenVR__IVROverlay___GetOverlayImageData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayImageData& operator=(OVR__OpenVR__IVROverlay___GetOverlayImageData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayImageData(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2682fcc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683090 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight) ;

/// @brief Method BeginInvoke addr 0x26830a4 size 0x118 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26831bc size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9199))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum(OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum(OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum& operator=(OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum& operator=(OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26831f0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26832b4 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVROverlayError error) ;

/// @brief Method BeginInvoke addr 0x26832c8 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVROverlayError error, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268334c size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayRenderingPid
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9200))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayRenderingPid
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayRenderingPid : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayRenderingPid() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRenderingPid", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid(OVR__OpenVR__IVROverlay___SetOverlayRenderingPid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRenderingPid", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid(OVR__OpenVR__IVROverlay___SetOverlayRenderingPid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayRenderingPid(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid& operator=(OVR__OpenVR__IVROverlay___SetOverlayRenderingPid&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderingPid& operator=(OVR__OpenVR__IVROverlay___SetOverlayRenderingPid const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayRenderingPid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683374 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683438 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unPID) ;

/// @brief Method BeginInvoke addr 0x268344c size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683500 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayRenderingPid
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9201))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayRenderingPid
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayRenderingPid : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayRenderingPid() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayRenderingPid", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid(OVR__OpenVR__IVROverlay___GetOverlayRenderingPid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayRenderingPid", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid(OVR__OpenVR__IVROverlay___GetOverlayRenderingPid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayRenderingPid(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid& operator=(OVR__OpenVR__IVROverlay___GetOverlayRenderingPid&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderingPid& operator=(OVR__OpenVR__IVROverlay___GetOverlayRenderingPid const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayRenderingPid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683528 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26835ec size 0x14 virtual true final false
 uint32_t Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2683600 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683684 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayFlag
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9202))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayFlag
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayFlag : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayFlag() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayFlag", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag(OVR__OpenVR__IVROverlay___SetOverlayFlag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayFlag", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag(OVR__OpenVR__IVROverlay___SetOverlayFlag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayFlag(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag& operator=(OVR__OpenVR__IVROverlay___SetOverlayFlag&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayFlag& operator=(OVR__OpenVR__IVROverlay___SetOverlayFlag const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayFlag(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26836ac size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683770 size 0x18 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) ;

/// @brief Method BeginInvoke addr 0x2683788 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683870 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayFlag
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9203))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayFlag
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayFlag : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayFlag() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayFlag", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag(OVR__OpenVR__IVROverlay___GetOverlayFlag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayFlag", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag(OVR__OpenVR__IVROverlay___GetOverlayFlag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayFlag(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag& operator=(OVR__OpenVR__IVROverlay___GetOverlayFlag&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlag& operator=(OVR__OpenVR__IVROverlay___GetOverlayFlag const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayFlag(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683898 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268395c size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled) ;

/// @brief Method BeginInvoke addr 0x2683970 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683a58 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<bool> pbEnabled, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9204))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayColor
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayColor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayColor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayColor(OVR__OpenVR__IVROverlay___SetOverlayColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayColor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayColor(OVR__OpenVR__IVROverlay___SetOverlayColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayColor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayColor& operator=(OVR__OpenVR__IVROverlay___SetOverlayColor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayColor& operator=(OVR__OpenVR__IVROverlay___SetOverlayColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683a84 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683b48 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) ;

/// @brief Method BeginInvoke addr 0x2683b5c size 0xe0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683c3c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9205))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayColor
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayColor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayColor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayColor(OVR__OpenVR__IVROverlay___GetOverlayColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayColor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayColor(OVR__OpenVR__IVROverlay___GetOverlayColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayColor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayColor& operator=(OVR__OpenVR__IVROverlay___GetOverlayColor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayColor& operator=(OVR__OpenVR__IVROverlay___GetOverlayColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683c64 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683d28 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue) ;

/// @brief Method BeginInvoke addr 0x2683d3c size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683e2c size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayAlpha
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9206))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayAlpha
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayAlpha : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayAlpha() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayAlpha", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha(OVR__OpenVR__IVROverlay___SetOverlayAlpha const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayAlpha", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha(OVR__OpenVR__IVROverlay___SetOverlayAlpha&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayAlpha(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha& operator=(OVR__OpenVR__IVROverlay___SetOverlayAlpha&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayAlpha& operator=(OVR__OpenVR__IVROverlay___SetOverlayAlpha const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2683e60 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2683f24 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fAlpha) ;

/// @brief Method BeginInvoke addr 0x2683f38 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2683fec size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayAlpha
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9207))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayAlpha
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayAlpha : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayAlpha() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayAlpha", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha(OVR__OpenVR__IVROverlay___GetOverlayAlpha const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayAlpha", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha(OVR__OpenVR__IVROverlay___GetOverlayAlpha&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayAlpha(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha& operator=(OVR__OpenVR__IVROverlay___GetOverlayAlpha&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayAlpha& operator=(OVR__OpenVR__IVROverlay___GetOverlayAlpha const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684014 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26840d8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha) ;

/// @brief Method BeginInvoke addr 0x26840ec size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26841a4 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfAlpha, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTexelAspect
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9208))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTexelAspect
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTexelAspect : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTexelAspect() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTexelAspect", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect(OVR__OpenVR__IVROverlay___SetOverlayTexelAspect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTexelAspect", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect(OVR__OpenVR__IVROverlay___SetOverlayTexelAspect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTexelAspect(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect& operator=(OVR__OpenVR__IVROverlay___SetOverlayTexelAspect&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexelAspect& operator=(OVR__OpenVR__IVROverlay___SetOverlayTexelAspect const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTexelAspect(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26841d0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684294 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect) ;

/// @brief Method BeginInvoke addr 0x26842a8 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268435c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTexelAspect
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9209))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTexelAspect
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTexelAspect : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTexelAspect() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTexelAspect", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect(OVR__OpenVR__IVROverlay___GetOverlayTexelAspect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTexelAspect", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect(OVR__OpenVR__IVROverlay___GetOverlayTexelAspect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTexelAspect(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect& operator=(OVR__OpenVR__IVROverlay___GetOverlayTexelAspect&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexelAspect& operator=(OVR__OpenVR__IVROverlay___GetOverlayTexelAspect const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTexelAspect(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684384 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684448 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect) ;

/// @brief Method BeginInvoke addr 0x268445c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684514 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfTexelAspect, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlaySortOrder
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9210))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlaySortOrder
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlaySortOrder : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlaySortOrder() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlaySortOrder", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder(OVR__OpenVR__IVROverlay___SetOverlaySortOrder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlaySortOrder", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder(OVR__OpenVR__IVROverlay___SetOverlaySortOrder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlaySortOrder(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder& operator=(OVR__OpenVR__IVROverlay___SetOverlaySortOrder&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlaySortOrder& operator=(OVR__OpenVR__IVROverlay___SetOverlaySortOrder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlaySortOrder(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684540 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684604 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder) ;

/// @brief Method BeginInvoke addr 0x2684618 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26846cc size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlaySortOrder
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9211))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlaySortOrder
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlaySortOrder : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlaySortOrder() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlaySortOrder", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder(OVR__OpenVR__IVROverlay___GetOverlaySortOrder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlaySortOrder", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder(OVR__OpenVR__IVROverlay___GetOverlaySortOrder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlaySortOrder(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder& operator=(OVR__OpenVR__IVROverlay___GetOverlaySortOrder&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlaySortOrder& operator=(OVR__OpenVR__IVROverlay___GetOverlaySortOrder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlaySortOrder(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26846f4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26847b8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder) ;

/// @brief Method BeginInvoke addr 0x26847cc size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684884 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punSortOrder, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayWidthInMeters
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9212))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayWidthInMeters
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters(OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters(OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters& operator=(OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters& operator=(OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26848b0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684974 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters) ;

/// @brief Method BeginInvoke addr 0x2684988 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684a3c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayWidthInMeters
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9213))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayWidthInMeters
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters(OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters(OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters& operator=(OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters& operator=(OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684a64 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684b28 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters) ;

/// @brief Method BeginInvoke addr 0x2684b3c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684bf4 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfWidthInMeters, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayAutoCurveDistanceRangeInMeters
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9214))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters& operator=(OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters& operator=(OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684c20 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684ce4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) ;

/// @brief Method BeginInvoke addr 0x2684cf8 size 0xc8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684dc0 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayAutoCurveDistanceRangeInMeters
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9215))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters& operator=(OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters& operator=(OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684de8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2684eac size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters) ;

/// @brief Method BeginInvoke addr 0x2684ec0 size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2684f94 size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTextureColorSpace
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9216))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTextureColorSpace
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace(OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace(OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace& operator=(OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace& operator=(OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2684fc8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268508c size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace) ;

/// @brief Method BeginInvoke addr 0x26850a0 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2685154 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTextureColorSpace
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9217))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTextureColorSpace
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace(OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace(OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268517c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2685240 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::EColorSpace> peTextureColorSpace) ;

/// @brief Method BeginInvoke addr 0x2685254 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::EColorSpace> peTextureColorSpace, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268530c size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::EColorSpace> peTextureColorSpace, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTextureBounds
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9218))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTextureBounds
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTextureBounds : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTextureBounds() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTextureBounds", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds(OVR__OpenVR__IVROverlay___SetOverlayTextureBounds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTextureBounds", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds(OVR__OpenVR__IVROverlay___SetOverlayTextureBounds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTextureBounds(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds& operator=(OVR__OpenVR__IVROverlay___SetOverlayTextureBounds&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTextureBounds& operator=(OVR__OpenVR__IVROverlay___SetOverlayTextureBounds const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTextureBounds(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2685338 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26853fc size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) ;

/// @brief Method BeginInvoke addr 0x2685410 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26854c8 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTextureBounds
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9219))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTextureBounds
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTextureBounds : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTextureBounds() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureBounds", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds(OVR__OpenVR__IVROverlay___GetOverlayTextureBounds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureBounds", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds(OVR__OpenVR__IVROverlay___GetOverlayTextureBounds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTextureBounds(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureBounds&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureBounds& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureBounds const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTextureBounds(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26854f4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26855b8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) ;

/// @brief Method BeginInvoke addr 0x26855cc size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2685684 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayRenderModel
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9220))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayRenderModel
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayRenderModel : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayRenderModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayRenderModel", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel(OVR__OpenVR__IVROverlay___GetOverlayRenderModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayRenderModel", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel(OVR__OpenVR__IVROverlay___GetOverlayRenderModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayRenderModel(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel& operator=(OVR__OpenVR__IVROverlay___GetOverlayRenderModel&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayRenderModel& operator=(OVR__OpenVR__IVROverlay___GetOverlayRenderModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayRenderModel(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26856b0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2685774 size 0x14 virtual true final false
 uint32_t Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::HmdColor_t> pColor, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method BeginInvoke addr 0x2685788 size 0x124 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::HmdColor_t> pColor, ByRef<OVR::OpenVR::EVROverlayError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26858ac size 0x34 virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::HmdColor_t> pColor, ByRef<OVR::OpenVR::EVROverlayError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayRenderModel
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9221))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayRenderModel
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayRenderModel : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayRenderModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRenderModel", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel(OVR__OpenVR__IVROverlay___SetOverlayRenderModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRenderModel", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel(OVR__OpenVR__IVROverlay___SetOverlayRenderModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayRenderModel(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel& operator=(OVR__OpenVR__IVROverlay___SetOverlayRenderModel&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayRenderModel& operator=(OVR__OpenVR__IVROverlay___SetOverlayRenderModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayRenderModel(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26858e0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26859a4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<OVR::OpenVR::HmdColor_t> pColor) ;

/// @brief Method BeginInvoke addr 0x26859b8 size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<OVR::OpenVR::HmdColor_t> pColor, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2685a78 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdColor_t> pColor, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTransformType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9222))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTransformType
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTransformType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTransformType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType(OVR__OpenVR__IVROverlay___GetOverlayTransformType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType(OVR__OpenVR__IVROverlay___GetOverlayTransformType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTransformType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformType& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformType const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTransformType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2685aa4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2685b68 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayTransformType> peTransformType) ;

/// @brief Method BeginInvoke addr 0x2685b7c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayTransformType> peTransformType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2685c34 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VROverlayTransformType> peTransformType, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTransformAbsolute
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9223))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTransformAbsolute
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute(OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute(OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2685c60 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2685d24 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x2685d38 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2685e20 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTransformAbsolute
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9224))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTransformAbsolute
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute(OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute(OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2685e4c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2685f10 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x2685f24 size 0xec virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686010 size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTransformTrackedDeviceRelative
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9225))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686044 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686108 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x268611c size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686204 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTransformTrackedDeviceRelative
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9226))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686230 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26862f4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x2686308 size 0xec virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26863f4 size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTransformTrackedDeviceComponent
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9227))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686428 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26864ec size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) ;

/// @brief Method BeginInvoke addr 0x2686500 size 0xbc virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26865bc size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTransformTrackedDeviceComponent
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9228))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26865e4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26866a8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameSize) ;

/// @brief Method BeginInvoke addr 0x26866bc size 0xd8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686794 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punDeviceIndex, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTransformOverlayRelative
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9229))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTransformOverlayRelative
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative(OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative(OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative& operator=(OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26867c0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686884 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x2686898 size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268696c size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTransformOverlayRelative
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9230))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTransformOverlayRelative
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative(OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative(OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative& operator=(OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26869a0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686a64 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) ;

/// @brief Method BeginInvoke addr 0x2686a78 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686b44 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9231))
// CS Name: OVR.OpenVR.IVROverlay::_ShowOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___ShowOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ShowOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowOverlay(OVR__OpenVR__IVROverlay___ShowOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowOverlay(OVR__OpenVR__IVROverlay___ShowOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ShowOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ShowOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowOverlay& operator=(OVR__OpenVR__IVROverlay___ShowOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ShowOverlay& operator=(OVR__OpenVR__IVROverlay___ShowOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ShowOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686b70 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686c34 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2686c48 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686ccc size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_HideOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9232))
// CS Name: OVR.OpenVR.IVROverlay::_HideOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___HideOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___HideOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___HideOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___HideOverlay(OVR__OpenVR__IVROverlay___HideOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___HideOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___HideOverlay(OVR__OpenVR__IVROverlay___HideOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___HideOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___HideOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___HideOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___HideOverlay& operator=(OVR__OpenVR__IVROverlay___HideOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___HideOverlay& operator=(OVR__OpenVR__IVROverlay___HideOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___HideOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686cf4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686db8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2686dcc size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686e50 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsOverlayVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9233))
// CS Name: OVR.OpenVR.IVROverlay::_IsOverlayVisible
class CORDL_TYPE OVR__OpenVR__IVROverlay___IsOverlayVisible : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___IsOverlayVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsOverlayVisible", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible(OVR__OpenVR__IVROverlay___IsOverlayVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsOverlayVisible", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible(OVR__OpenVR__IVROverlay___IsOverlayVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___IsOverlayVisible(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible& operator=(OVR__OpenVR__IVROverlay___IsOverlayVisible&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___IsOverlayVisible& operator=(OVR__OpenVR__IVROverlay___IsOverlayVisible const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___IsOverlayVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686e78 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686f3c size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2686f50 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2686fd4 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTransformForOverlayCoordinates
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9234))
// CS Name: OVR.OpenVR.IVROverlay::_GetTransformForOverlayCoordinates
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates(OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates(OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates& operator=(OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates& operator=(OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686ffc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26870c0 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTransform) ;

/// @brief Method BeginInvoke addr 0x26870d4 size 0x118 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26871ec size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PollNextOverlayEvent
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9235))
// CS Name: OVR.OpenVR.IVROverlay::_PollNextOverlayEvent
class CORDL_TYPE OVR__OpenVR__IVROverlay___PollNextOverlayEvent : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___PollNextOverlayEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___PollNextOverlayEvent", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent(OVR__OpenVR__IVROverlay___PollNextOverlayEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___PollNextOverlayEvent", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent(OVR__OpenVR__IVROverlay___PollNextOverlayEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___PollNextOverlayEvent(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent& operator=(OVR__OpenVR__IVROverlay___PollNextOverlayEvent&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___PollNextOverlayEvent& operator=(OVR__OpenVR__IVROverlay___PollNextOverlayEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___PollNextOverlayEvent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687218 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26872dc size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) ;

/// @brief Method BeginInvoke addr 0x26872f0 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26873d8 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t> pEvent, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayInputMethod
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9236))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayInputMethod
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayInputMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayInputMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayInputMethod", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod(OVR__OpenVR__IVROverlay___GetOverlayInputMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayInputMethod", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod(OVR__OpenVR__IVROverlay___GetOverlayInputMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayInputMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod& operator=(OVR__OpenVR__IVROverlay___GetOverlayInputMethod&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayInputMethod& operator=(OVR__OpenVR__IVROverlay___GetOverlayInputMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayInputMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687404 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26874c8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayInputMethod> peInputMethod) ;

/// @brief Method BeginInvoke addr 0x26874dc size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayInputMethod> peInputMethod, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687594 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VROverlayInputMethod> peInputMethod, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayInputMethod
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9237))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayInputMethod
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayInputMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayInputMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayInputMethod", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod(OVR__OpenVR__IVROverlay___SetOverlayInputMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayInputMethod", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod(OVR__OpenVR__IVROverlay___SetOverlayInputMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayInputMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod& operator=(OVR__OpenVR__IVROverlay___SetOverlayInputMethod&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayInputMethod& operator=(OVR__OpenVR__IVROverlay___SetOverlayInputMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayInputMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26875c0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687684 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod eInputMethod) ;

/// @brief Method BeginInvoke addr 0x2687698 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod eInputMethod, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268774c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayMouseScale
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9238))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayMouseScale
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayMouseScale : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayMouseScale() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayMouseScale", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale(OVR__OpenVR__IVROverlay___GetOverlayMouseScale const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayMouseScale", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale(OVR__OpenVR__IVROverlay___GetOverlayMouseScale&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayMouseScale(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale& operator=(OVR__OpenVR__IVROverlay___GetOverlayMouseScale&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayMouseScale& operator=(OVR__OpenVR__IVROverlay___GetOverlayMouseScale const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayMouseScale(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687774 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687838 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale) ;

/// @brief Method BeginInvoke addr 0x268784c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687904 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayMouseScale
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9239))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayMouseScale
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayMouseScale : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayMouseScale() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayMouseScale", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale(OVR__OpenVR__IVROverlay___SetOverlayMouseScale const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayMouseScale", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale(OVR__OpenVR__IVROverlay___SetOverlayMouseScale&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayMouseScale(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale& operator=(OVR__OpenVR__IVROverlay___SetOverlayMouseScale&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayMouseScale& operator=(OVR__OpenVR__IVROverlay___SetOverlayMouseScale const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayMouseScale(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687930 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26879f4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale) ;

/// @brief Method BeginInvoke addr 0x2687a08 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687ac0 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ComputeOverlayIntersection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9240))
// CS Name: OVR.OpenVR.IVROverlay::_ComputeOverlayIntersection
class CORDL_TYPE OVR__OpenVR__IVROverlay___ComputeOverlayIntersection : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ComputeOverlayIntersection() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ComputeOverlayIntersection", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection(OVR__OpenVR__IVROverlay___ComputeOverlayIntersection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ComputeOverlayIntersection", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection(OVR__OpenVR__IVROverlay___ComputeOverlayIntersection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ComputeOverlayIntersection(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection& operator=(OVR__OpenVR__IVROverlay___ComputeOverlayIntersection&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ComputeOverlayIntersection& operator=(OVR__OpenVR__IVROverlay___ComputeOverlayIntersection const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ComputeOverlayIntersection(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687aec size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687bb0 size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<OVR::OpenVR::VROverlayIntersectionResults_t> pResults) ;

/// @brief Method BeginInvoke addr 0x2687bc4 size 0xec virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<OVR::OpenVR::VROverlayIntersectionResults_t> pResults, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687cb0 size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<OVR::OpenVR::VROverlayIntersectionResults_t> pResults, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsHoverTargetOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9241))
// CS Name: OVR.OpenVR.IVROverlay::_IsHoverTargetOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___IsHoverTargetOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___IsHoverTargetOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsHoverTargetOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay(OVR__OpenVR__IVROverlay___IsHoverTargetOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsHoverTargetOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay(OVR__OpenVR__IVROverlay___IsHoverTargetOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___IsHoverTargetOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay& operator=(OVR__OpenVR__IVROverlay___IsHoverTargetOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___IsHoverTargetOverlay& operator=(OVR__OpenVR__IVROverlay___IsHoverTargetOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___IsHoverTargetOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687ce4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687da8 size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2687dbc size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687e40 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetGamepadFocusOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9242))
// CS Name: OVR.OpenVR.IVROverlay::_GetGamepadFocusOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay(OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay(OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay& operator=(OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay& operator=(OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687e68 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687f24 size 0x14 virtual true final false
 uint64_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2687f38 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2687f58 size 0x28 virtual true final false
 uint64_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetGamepadFocusOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9243))
// CS Name: OVR.OpenVR.IVROverlay::_SetGamepadFocusOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay(OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay(OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay& operator=(OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay& operator=(OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687f80 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688044 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulNewFocusOverlay) ;

/// @brief Method BeginInvoke addr 0x2688058 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulNewFocusOverlay, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26880dc size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayNeighbor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9244))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayNeighbor
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayNeighbor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayNeighbor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayNeighbor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor(OVR__OpenVR__IVROverlay___SetOverlayNeighbor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayNeighbor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor(OVR__OpenVR__IVROverlay___SetOverlayNeighbor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayNeighbor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor& operator=(OVR__OpenVR__IVROverlay___SetOverlayNeighbor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayNeighbor& operator=(OVR__OpenVR__IVROverlay___SetOverlayNeighbor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayNeighbor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688104 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26881c8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) ;

/// @brief Method BeginInvoke addr 0x26881dc size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26882a8 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_MoveGamepadFocusToNeighbor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9245))
// CS Name: OVR.OpenVR.IVROverlay::_MoveGamepadFocusToNeighbor
class CORDL_TYPE OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor(OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor(OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor& operator=(OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor& operator=(OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26882d0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688394 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) ;

/// @brief Method BeginInvoke addr 0x26883a8 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268845c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayDualAnalogTransform
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9246))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayDualAnalogTransform
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform(OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform(OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform& operator=(OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform& operator=(OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688484 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688548 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ::cordl_internals::intptr_t vCenter, float_t fRadius) ;

/// @brief Method BeginInvoke addr 0x268855c size 0x114 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ::cordl_internals::intptr_t vCenter, float_t fRadius, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2688670 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayDualAnalogTransform
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9247))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayDualAnalogTransform
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform(OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform(OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform& operator=(OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform& operator=(OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688698 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268875c size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius) ;

/// @brief Method BeginInvoke addr 0x2688770 size 0x11c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268888c size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayTexture
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9248))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayTexture
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayTexture : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTexture", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture(OVR__OpenVR__IVROverlay___SetOverlayTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayTexture", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture(OVR__OpenVR__IVROverlay___SetOverlayTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayTexture(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture& operator=(OVR__OpenVR__IVROverlay___SetOverlayTexture&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayTexture& operator=(OVR__OpenVR__IVROverlay___SetOverlayTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26888c0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688984 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::Texture_t> pTexture) ;

/// @brief Method BeginInvoke addr 0x2688998 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::Texture_t> pTexture, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2688a50 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::Texture_t> pTexture, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ClearOverlayTexture
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9249))
// CS Name: OVR.OpenVR.IVROverlay::_ClearOverlayTexture
class CORDL_TYPE OVR__OpenVR__IVROverlay___ClearOverlayTexture : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ClearOverlayTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ClearOverlayTexture", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture(OVR__OpenVR__IVROverlay___ClearOverlayTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ClearOverlayTexture", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture(OVR__OpenVR__IVROverlay___ClearOverlayTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ClearOverlayTexture(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture& operator=(OVR__OpenVR__IVROverlay___ClearOverlayTexture&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ClearOverlayTexture& operator=(OVR__OpenVR__IVROverlay___ClearOverlayTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ClearOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688a7c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688b40 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x2688b54 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2688bd8 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayRaw
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9250))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayRaw
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayRaw : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayRaw() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRaw", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw(OVR__OpenVR__IVROverlay___SetOverlayRaw const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayRaw", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw(OVR__OpenVR__IVROverlay___SetOverlayRaw&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayRaw(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw& operator=(OVR__OpenVR__IVROverlay___SetOverlayRaw&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayRaw& operator=(OVR__OpenVR__IVROverlay___SetOverlayRaw const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayRaw(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688c00 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688cc4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) ;

/// @brief Method BeginInvoke addr 0x2688cd8 size 0x10c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2688de4 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayFromFile
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9251))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayFromFile
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayFromFile : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayFromFile() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayFromFile", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile(OVR__OpenVR__IVROverlay___SetOverlayFromFile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayFromFile", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile(OVR__OpenVR__IVROverlay___SetOverlayFromFile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayFromFile(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile& operator=(OVR__OpenVR__IVROverlay___SetOverlayFromFile&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayFromFile& operator=(OVR__OpenVR__IVROverlay___SetOverlayFromFile const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayFromFile(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688e0c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688ed0 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath) ;

/// @brief Method BeginInvoke addr 0x2688ee4 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2688f70 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTexture
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9252))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTexture
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTexture : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTexture", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture(OVR__OpenVR__IVROverlay___GetOverlayTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTexture", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture(OVR__OpenVR__IVROverlay___GetOverlayTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTexture(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture& operator=(OVR__OpenVR__IVROverlay___GetOverlayTexture&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTexture& operator=(OVR__OpenVR__IVROverlay___GetOverlayTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688f98 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268905c size 0x1c virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ::cordl_internals::intptr_t pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<OVR::OpenVR::ETextureType> pAPIType, ByRef<OVR::OpenVR::EColorSpace> pColorSpace, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds) ;

/// @brief Method BeginInvoke addr 0x2689078 size 0x1b8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ::cordl_internals::intptr_t pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<OVR::OpenVR::ETextureType> pAPIType, ByRef<OVR::OpenVR::EColorSpace> pColorSpace, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689230 size 0x3c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<OVR::OpenVR::ETextureType> pAPIType, ByRef<OVR::OpenVR::EColorSpace> pColorSpace, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReleaseNativeOverlayHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9253))
// CS Name: OVR.OpenVR.IVROverlay::_ReleaseNativeOverlayHandle
class CORDL_TYPE OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle(OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle(OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle& operator=(OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle& operator=(OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268926c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689330 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pNativeTextureHandle) ;

/// @brief Method BeginInvoke addr 0x2689344 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pNativeTextureHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26893f8 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayTextureSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9254))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayTextureSize
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayTextureSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayTextureSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize(OVR__OpenVR__IVROverlay___GetOverlayTextureSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayTextureSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize(OVR__OpenVR__IVROverlay___GetOverlayTextureSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayTextureSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayTextureSize& operator=(OVR__OpenVR__IVROverlay___GetOverlayTextureSize const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayTextureSize(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689420 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26894e4 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight) ;

/// @brief Method BeginInvoke addr 0x26894f8 size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26895cc size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CreateDashboardOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9255))
// CS Name: OVR.OpenVR.IVROverlay::_CreateDashboardOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___CreateDashboardOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___CreateDashboardOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CreateDashboardOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay(OVR__OpenVR__IVROverlay___CreateDashboardOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CreateDashboardOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay(OVR__OpenVR__IVROverlay___CreateDashboardOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___CreateDashboardOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay& operator=(OVR__OpenVR__IVROverlay___CreateDashboardOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___CreateDashboardOverlay& operator=(OVR__OpenVR__IVROverlay___CreateDashboardOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___CreateDashboardOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689600 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26896d8 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle) ;

/// @brief Method BeginInvoke addr 0x26896ec size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26897a4 size 0x34 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsDashboardVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9256))
// CS Name: OVR.OpenVR.IVROverlay::_IsDashboardVisible
class CORDL_TYPE OVR__OpenVR__IVROverlay___IsDashboardVisible : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___IsDashboardVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsDashboardVisible", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible(OVR__OpenVR__IVROverlay___IsDashboardVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsDashboardVisible", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible(OVR__OpenVR__IVROverlay___IsDashboardVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___IsDashboardVisible(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible& operator=(OVR__OpenVR__IVROverlay___IsDashboardVisible&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___IsDashboardVisible& operator=(OVR__OpenVR__IVROverlay___IsDashboardVisible const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___IsDashboardVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26897d8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689894 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x26898a8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26898c8 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsActiveDashboardOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9257))
// CS Name: OVR.OpenVR.IVROverlay::_IsActiveDashboardOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay(OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay(OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay& operator=(OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay& operator=(OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26898f0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26899b4 size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle) ;

/// @brief Method BeginInvoke addr 0x26899c8 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689a4c size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetDashboardOverlaySceneProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9258))
// CS Name: OVR.OpenVR.IVROverlay::_SetDashboardOverlaySceneProcess
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess(OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess(OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess& operator=(OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess& operator=(OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689a74 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689b38 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId) ;

/// @brief Method BeginInvoke addr 0x2689b4c size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689c00 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDashboardOverlaySceneProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9259))
// CS Name: OVR.OpenVR.IVROverlay::_GetDashboardOverlaySceneProcess
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess(OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess(OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess& operator=(OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess& operator=(OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689c28 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689cec size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId) ;

/// @brief Method BeginInvoke addr 0x2689d00 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689db8 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punProcessId, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowDashboard
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9260))
// CS Name: OVR.OpenVR.IVROverlay::_ShowDashboard
class CORDL_TYPE OVR__OpenVR__IVROverlay___ShowDashboard : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ShowDashboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowDashboard", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowDashboard(OVR__OpenVR__IVROverlay___ShowDashboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowDashboard", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowDashboard(OVR__OpenVR__IVROverlay___ShowDashboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ShowDashboard(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ShowDashboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowDashboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowDashboard& operator=(OVR__OpenVR__IVROverlay___ShowDashboard&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ShowDashboard& operator=(OVR__OpenVR__IVROverlay___ShowDashboard const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ShowDashboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689de4 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689eb8 size 0x14 virtual true final false
 void Invoke(::StringW pchOverlayToShow) ;

/// @brief Method BeginInvoke addr 0x2689ecc size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchOverlayToShow, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689eec size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetPrimaryDashboardDevice
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9261))
// CS Name: OVR.OpenVR.IVROverlay::_GetPrimaryDashboardDevice
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice(OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice(OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice& operator=(OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice& operator=(OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2689ef8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2689fb4 size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x2689fc8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2689fe8 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowKeyboard
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9262))
// CS Name: OVR.OpenVR.IVROverlay::_ShowKeyboard
class CORDL_TYPE OVR__OpenVR__IVROverlay___ShowKeyboard : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ShowKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowKeyboard", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowKeyboard(OVR__OpenVR__IVROverlay___ShowKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowKeyboard", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowKeyboard(OVR__OpenVR__IVROverlay___ShowKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ShowKeyboard(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ShowKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowKeyboard& operator=(OVR__OpenVR__IVROverlay___ShowKeyboard&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ShowKeyboard& operator=(OVR__OpenVR__IVROverlay___ShowKeyboard const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ShowKeyboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a010 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a0d4 size 0x1c virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) ;

/// @brief Method BeginInvoke addr 0x268a0f0 size 0x13c virtual true final false
 System::IAsyncResult BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268a22c size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowKeyboardForOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9263))
// CS Name: OVR.OpenVR.IVROverlay::_ShowKeyboardForOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay(OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay(OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay& operator=(OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay& operator=(OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a254 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a318 size 0x1c virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) ;

/// @brief Method BeginInvoke addr 0x268a334 size 0x14c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268a480 size 0x28 virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetKeyboardText
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9264))
// CS Name: OVR.OpenVR.IVROverlay::_GetKeyboardText
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetKeyboardText : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetKeyboardText() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetKeyboardText", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetKeyboardText(OVR__OpenVR__IVROverlay___GetKeyboardText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetKeyboardText", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetKeyboardText(OVR__OpenVR__IVROverlay___GetKeyboardText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetKeyboardText(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetKeyboardText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetKeyboardText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetKeyboardText& operator=(OVR__OpenVR__IVROverlay___GetKeyboardText&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetKeyboardText& operator=(OVR__OpenVR__IVROverlay___GetKeyboardText const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetKeyboardText(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a4a8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a580 size 0x14 virtual true final false
 uint32_t Invoke(System::Text::StringBuilder pchText, uint32_t cchText) ;

/// @brief Method BeginInvoke addr 0x268a594 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(System::Text::StringBuilder pchText, uint32_t cchText, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268a628 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_HideKeyboard
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9265))
// CS Name: OVR.OpenVR.IVROverlay::_HideKeyboard
class CORDL_TYPE OVR__OpenVR__IVROverlay___HideKeyboard : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___HideKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___HideKeyboard", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___HideKeyboard(OVR__OpenVR__IVROverlay___HideKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___HideKeyboard", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___HideKeyboard(OVR__OpenVR__IVROverlay___HideKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___HideKeyboard(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___HideKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___HideKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___HideKeyboard& operator=(OVR__OpenVR__IVROverlay___HideKeyboard&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___HideKeyboard& operator=(OVR__OpenVR__IVROverlay___HideKeyboard const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___HideKeyboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a650 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a70c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x268a720 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268a740 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetKeyboardTransformAbsolute
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9266))
// CS Name: OVR.OpenVR.IVROverlay::_SetKeyboardTransformAbsolute
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute(OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute(OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute& operator=(OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a74c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a810 size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) ;

/// @brief Method BeginInvoke addr 0x268a824 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268a8dc size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetKeyboardPositionForOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9267))
// CS Name: OVR.OpenVR.IVROverlay::_SetKeyboardPositionForOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay(OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay(OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay& operator=(OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay& operator=(OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268a8f8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268a9bc size 0x14 virtual true final false
 void Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdRect2_t avoidRect) ;

/// @brief Method BeginInvoke addr 0x268a9d0 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::HmdRect2_t avoidRect, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268aa88 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetOverlayIntersectionMask
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9268))
// CS Name: OVR.OpenVR.IVROverlay::_SetOverlayIntersectionMask
class CORDL_TYPE OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask(OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask(OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask& operator=(OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask& operator=(OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268aa94 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268ab58 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) ;

/// @brief Method BeginInvoke addr 0x268ab6c size 0xfc virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268ac68 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOverlayFlags
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9269))
// CS Name: OVR.OpenVR.IVROverlay::_GetOverlayFlags
class CORDL_TYPE OVR__OpenVR__IVROverlay___GetOverlayFlags : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___GetOverlayFlags() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayFlags", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags(OVR__OpenVR__IVROverlay___GetOverlayFlags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___GetOverlayFlags", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags(OVR__OpenVR__IVROverlay___GetOverlayFlags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___GetOverlayFlags(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags& operator=(OVR__OpenVR__IVROverlay___GetOverlayFlags&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___GetOverlayFlags& operator=(OVR__OpenVR__IVROverlay___GetOverlayFlags const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___GetOverlayFlags(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268ac94 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268ad58 size 0x14 virtual true final false
 OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags) ;

/// @brief Method BeginInvoke addr 0x268ad6c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268ae24 size 0x2c virtual true final false
 OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> pFlags, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowMessageOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9270))
// CS Name: OVR.OpenVR.IVROverlay::_ShowMessageOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___ShowMessageOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___ShowMessageOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowMessageOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay(OVR__OpenVR__IVROverlay___ShowMessageOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___ShowMessageOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay(OVR__OpenVR__IVROverlay___ShowMessageOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___ShowMessageOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay& operator=(OVR__OpenVR__IVROverlay___ShowMessageOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___ShowMessageOverlay& operator=(OVR__OpenVR__IVROverlay___ShowMessageOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___ShowMessageOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268ae50 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268af28 size 0x14 virtual true final false
 OVR::OpenVR::VRMessageOverlayResponse Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text) ;

/// @brief Method BeginInvoke addr 0x268af3c size 0x34 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268af70 size 0x28 virtual true final false
 OVR::OpenVR::VRMessageOverlayResponse EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CloseMessageOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9271))
// CS Name: OVR.OpenVR.IVROverlay::_CloseMessageOverlay
class CORDL_TYPE OVR__OpenVR__IVROverlay___CloseMessageOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVROverlay___CloseMessageOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CloseMessageOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay(OVR__OpenVR__IVROverlay___CloseMessageOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVROverlay___CloseMessageOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay(OVR__OpenVR__IVROverlay___CloseMessageOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVROverlay___CloseMessageOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay& operator=(OVR__OpenVR__IVROverlay___CloseMessageOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVROverlay___CloseMessageOverlay& operator=(OVR__OpenVR__IVROverlay___CloseMessageOverlay const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVROverlay___CloseMessageOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268af98 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b054 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x268b068 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b088 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVROverlay
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9272))
// CS Name: OVR.OpenVR.IVROverlay
struct CORDL_TYPE IVROverlay : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _CloseMessageOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay;

using _ShowMessageOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay;

using _GetOverlayFlags = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags;

using _SetOverlayIntersectionMask = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask;

using _SetKeyboardPositionForOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay;

using _SetKeyboardTransformAbsolute = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute;

using _HideKeyboard = OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard;

using _GetKeyboardText = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText;

using _ShowKeyboardForOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay;

using _ShowKeyboard = OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard;

using _GetPrimaryDashboardDevice = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice;

using _ShowDashboard = OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard;

using _GetDashboardOverlaySceneProcess = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess;

using _SetDashboardOverlaySceneProcess = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess;

using _IsActiveDashboardOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay;

using _IsDashboardVisible = OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible;

using _CreateDashboardOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay;

using _GetOverlayTextureSize = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize;

using _ReleaseNativeOverlayHandle = OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle;

using _GetOverlayTexture = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture;

using _SetOverlayFromFile = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile;

using _SetOverlayRaw = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw;

using _ClearOverlayTexture = OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture;

using _SetOverlayTexture = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture;

using _GetOverlayDualAnalogTransform = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform;

using _SetOverlayDualAnalogTransform = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform;

using _MoveGamepadFocusToNeighbor = OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor;

using _SetOverlayNeighbor = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor;

using _SetGamepadFocusOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay;

using _GetGamepadFocusOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay;

using _IsHoverTargetOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay;

using _ComputeOverlayIntersection = OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection;

using _SetOverlayMouseScale = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale;

using _GetOverlayMouseScale = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale;

using _SetOverlayInputMethod = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod;

using _GetOverlayInputMethod = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod;

using _PollNextOverlayEvent = OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent;

using _GetTransformForOverlayCoordinates = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates;

using _IsOverlayVisible = OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible;

using _HideOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay;

using _ShowOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay;

using _SetOverlayTransformOverlayRelative = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative;

using _GetOverlayTransformOverlayRelative = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative;

using _GetOverlayTransformTrackedDeviceComponent = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent;

using _SetOverlayTransformTrackedDeviceComponent = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent;

using _GetOverlayTransformTrackedDeviceRelative = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative;

using _SetOverlayTransformTrackedDeviceRelative = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative;

using _GetOverlayTransformAbsolute = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute;

using _SetOverlayTransformAbsolute = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute;

using _GetOverlayTransformType = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType;

using _SetOverlayRenderModel = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel;

using _GetOverlayRenderModel = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel;

using _GetOverlayTextureBounds = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds;

using _SetOverlayTextureBounds = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds;

using _GetOverlayTextureColorSpace = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace;

using _SetOverlayTextureColorSpace = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace;

using _GetOverlayAutoCurveDistanceRangeInMeters = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters;

using _SetOverlayAutoCurveDistanceRangeInMeters = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters;

using _GetOverlayWidthInMeters = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters;

using _SetOverlayWidthInMeters = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters;

using _GetOverlaySortOrder = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder;

using _SetOverlaySortOrder = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder;

using _GetOverlayTexelAspect = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect;

using _SetOverlayTexelAspect = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect;

using _GetOverlayAlpha = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha;

using _SetOverlayAlpha = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha;

using _GetOverlayColor = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor;

using _SetOverlayColor = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor;

using _GetOverlayFlag = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag;

using _SetOverlayFlag = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag;

using _GetOverlayRenderingPid = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid;

using _SetOverlayRenderingPid = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid;

using _GetOverlayErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum;

using _GetOverlayImageData = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData;

using _SetOverlayName = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName;

using _GetOverlayName = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName;

using _GetOverlayKey = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey;

using _GetHighQualityOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay;

using _SetHighQualityOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay;

using _DestroyOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay;

using _CreateOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay;

using _FindOverlay = OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay;

// Ctor Parameters [CppParam { name: "FindOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay", modifiers: "", def_value: None }, CppParam { name: "CreateOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay", modifiers: "", def_value: None }, CppParam { name: "DestroyOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay", modifiers: "", def_value: None }, CppParam { name: "SetHighQualityOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay", modifiers: "", def_value: None }, CppParam { name: "GetHighQualityOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay", modifiers: "", def_value: None }, CppParam { name: "GetOverlayKey", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey", modifiers: "", def_value: None }, CppParam { name: "GetOverlayName", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName", modifiers: "", def_value: None }, CppParam { name: "SetOverlayName", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName", modifiers: "", def_value: None }, CppParam { name: "GetOverlayImageData", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData", modifiers: "", def_value: None }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "SetOverlayRenderingPid", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid", modifiers: "", def_value: None }, CppParam { name: "GetOverlayRenderingPid", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFlag", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag", modifiers: "", def_value: None }, CppParam { name: "GetOverlayFlag", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag", modifiers: "", def_value: None }, CppParam { name: "SetOverlayColor", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor", modifiers: "", def_value: None }, CppParam { name: "GetOverlayColor", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor", modifiers: "", def_value: None }, CppParam { name: "SetOverlayAlpha", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha", modifiers: "", def_value: None }, CppParam { name: "GetOverlayAlpha", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexelAspect", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTexelAspect", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect", modifiers: "", def_value: None }, CppParam { name: "SetOverlaySortOrder", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder", modifiers: "", def_value: None }, CppParam { name: "GetOverlaySortOrder", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder", modifiers: "", def_value: None }, CppParam { name: "SetOverlayWidthInMeters", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters", modifiers: "", def_value: None }, CppParam { name: "GetOverlayWidthInMeters", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters", modifiers: "", def_value: None }, CppParam { name: "SetOverlayAutoCurveDistanceRangeInMeters", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "", def_value: None }, CppParam { name: "GetOverlayAutoCurveDistanceRangeInMeters", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTextureColorSpace", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureColorSpace", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTextureBounds", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureBounds", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds", modifiers: "", def_value: None }, CppParam { name: "GetOverlayRenderModel", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel", modifiers: "", def_value: None }, CppParam { name: "SetOverlayRenderModel", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformType", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformAbsolute", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformAbsolute", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformOverlayRelative", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformOverlayRelative", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: "", def_value: None }, CppParam { name: "ShowOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay", modifiers: "", def_value: None }, CppParam { name: "HideOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay", modifiers: "", def_value: None }, CppParam { name: "IsOverlayVisible", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible", modifiers: "", def_value: None }, CppParam { name: "GetTransformForOverlayCoordinates", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates", modifiers: "", def_value: None }, CppParam { name: "PollNextOverlayEvent", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent", modifiers: "", def_value: None }, CppParam { name: "GetOverlayInputMethod", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod", modifiers: "", def_value: None }, CppParam { name: "SetOverlayInputMethod", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod", modifiers: "", def_value: None }, CppParam { name: "GetOverlayMouseScale", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale", modifiers: "", def_value: None }, CppParam { name: "SetOverlayMouseScale", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale", modifiers: "", def_value: None }, CppParam { name: "ComputeOverlayIntersection", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection", modifiers: "", def_value: None }, CppParam { name: "IsHoverTargetOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay", modifiers: "", def_value: None }, CppParam { name: "GetGamepadFocusOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay", modifiers: "", def_value: None }, CppParam { name: "SetGamepadFocusOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay", modifiers: "", def_value: None }, CppParam { name: "SetOverlayNeighbor", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor", modifiers: "", def_value: None }, CppParam { name: "MoveGamepadFocusToNeighbor", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: "", def_value: None }, CppParam { name: "SetOverlayDualAnalogTransform", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform", modifiers: "", def_value: None }, CppParam { name: "GetOverlayDualAnalogTransform", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexture", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture", modifiers: "", def_value: None }, CppParam { name: "ClearOverlayTexture", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture", modifiers: "", def_value: None }, CppParam { name: "SetOverlayRaw", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFromFile", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTexture", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture", modifiers: "", def_value: None }, CppParam { name: "ReleaseNativeOverlayHandle", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureSize", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize", modifiers: "", def_value: None }, CppParam { name: "CreateDashboardOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay", modifiers: "", def_value: None }, CppParam { name: "IsDashboardVisible", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible", modifiers: "", def_value: None }, CppParam { name: "IsActiveDashboardOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay", modifiers: "", def_value: None }, CppParam { name: "SetDashboardOverlaySceneProcess", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: "", def_value: None }, CppParam { name: "GetDashboardOverlaySceneProcess", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: "", def_value: None }, CppParam { name: "ShowDashboard", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard", modifiers: "", def_value: None }, CppParam { name: "GetPrimaryDashboardDevice", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice", modifiers: "", def_value: None }, CppParam { name: "ShowKeyboard", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard", modifiers: "", def_value: None }, CppParam { name: "ShowKeyboardForOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay", modifiers: "", def_value: None }, CppParam { name: "GetKeyboardText", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText", modifiers: "", def_value: None }, CppParam { name: "HideKeyboard", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard", modifiers: "", def_value: None }, CppParam { name: "SetKeyboardTransformAbsolute", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute", modifiers: "", def_value: None }, CppParam { name: "SetKeyboardPositionForOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay", modifiers: "", def_value: None }, CppParam { name: "SetOverlayIntersectionMask", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask", modifiers: "", def_value: None }, CppParam { name: "GetOverlayFlags", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags", modifiers: "", def_value: None }, CppParam { name: "ShowMessageOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay", modifiers: "", def_value: None }, CppParam { name: "CloseMessageOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay", modifiers: "", def_value: None }]
constexpr IVROverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay FindOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay CreateOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay DestroyOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay SetHighQualityOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay GetHighQualityOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey GetOverlayKey, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName GetOverlayName, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName SetOverlayName, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData GetOverlayImageData, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum GetOverlayErrorNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid SetOverlayRenderingPid, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid GetOverlayRenderingPid, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag SetOverlayFlag, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag GetOverlayFlag, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor SetOverlayColor, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor GetOverlayColor, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha SetOverlayAlpha, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha GetOverlayAlpha, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect SetOverlayTexelAspect, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect GetOverlayTexelAspect, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder SetOverlaySortOrder, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder GetOverlaySortOrder, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters SetOverlayWidthInMeters, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters GetOverlayWidthInMeters, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters SetOverlayAutoCurveDistanceRangeInMeters, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters GetOverlayAutoCurveDistanceRangeInMeters, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace SetOverlayTextureColorSpace, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace GetOverlayTextureColorSpace, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds SetOverlayTextureBounds, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds GetOverlayTextureBounds, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel GetOverlayRenderModel, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel SetOverlayRenderModel, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType GetOverlayTransformType, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute SetOverlayTransformAbsolute, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute GetOverlayTransformAbsolute, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative SetOverlayTransformTrackedDeviceRelative, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative GetOverlayTransformTrackedDeviceRelative, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent SetOverlayTransformTrackedDeviceComponent, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent GetOverlayTransformTrackedDeviceComponent, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative GetOverlayTransformOverlayRelative, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative SetOverlayTransformOverlayRelative, OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay ShowOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay HideOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible IsOverlayVisible, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates GetTransformForOverlayCoordinates, OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent PollNextOverlayEvent, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod GetOverlayInputMethod, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod SetOverlayInputMethod, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale GetOverlayMouseScale, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale SetOverlayMouseScale, OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection ComputeOverlayIntersection, OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay IsHoverTargetOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay GetGamepadFocusOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay SetGamepadFocusOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor SetOverlayNeighbor, OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor MoveGamepadFocusToNeighbor, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform SetOverlayDualAnalogTransform, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform GetOverlayDualAnalogTransform, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture SetOverlayTexture, OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture ClearOverlayTexture, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw SetOverlayRaw, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile SetOverlayFromFile, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture GetOverlayTexture, OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle ReleaseNativeOverlayHandle, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize GetOverlayTextureSize, OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay CreateDashboardOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible IsDashboardVisible, OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay IsActiveDashboardOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess SetDashboardOverlaySceneProcess, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess GetDashboardOverlaySceneProcess, OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard ShowDashboard, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice GetPrimaryDashboardDevice, OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard ShowKeyboard, OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay ShowKeyboardForOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText GetKeyboardText, OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard HideKeyboard, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute SetKeyboardTransformAbsolute, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay SetKeyboardPositionForOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask SetOverlayIntersectionMask, OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags GetOverlayFlags, OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay ShowMessageOverlay, OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay CloseMessageOverlay) noexcept;


                    constexpr IVROverlay(IVROverlay const&) = default;
                    constexpr IVROverlay(IVROverlay&&) = default;
                    constexpr IVROverlay& operator=(IVROverlay const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVROverlay& operator=(IVROverlay&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x290};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVROverlay(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay __declspec(property(get=__get_FindOverlay, put=__set_FindOverlay))  FindOverlay;

constexpr void __set_FindOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay __get_FindOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay __declspec(property(get=__get_CreateOverlay, put=__set_CreateOverlay))  CreateOverlay;

constexpr void __set_CreateOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay __get_CreateOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay __declspec(property(get=__get_DestroyOverlay, put=__set_DestroyOverlay))  DestroyOverlay;

constexpr void __set_DestroyOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay __get_DestroyOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay __declspec(property(get=__get_SetHighQualityOverlay, put=__set_SetHighQualityOverlay))  SetHighQualityOverlay;

constexpr void __set_SetHighQualityOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay __get_SetHighQualityOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay __declspec(property(get=__get_GetHighQualityOverlay, put=__set_GetHighQualityOverlay))  GetHighQualityOverlay;

constexpr void __set_GetHighQualityOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay __get_GetHighQualityOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey __declspec(property(get=__get_GetOverlayKey, put=__set_GetOverlayKey))  GetOverlayKey;

constexpr void __set_GetOverlayKey(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey __get_GetOverlayKey() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName __declspec(property(get=__get_GetOverlayName, put=__set_GetOverlayName))  GetOverlayName;

constexpr void __set_GetOverlayName(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName __get_GetOverlayName() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName __declspec(property(get=__get_SetOverlayName, put=__set_SetOverlayName))  SetOverlayName;

constexpr void __set_SetOverlayName(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName __get_SetOverlayName() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData __declspec(property(get=__get_GetOverlayImageData, put=__set_GetOverlayImageData))  GetOverlayImageData;

constexpr void __set_GetOverlayImageData(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData __get_GetOverlayImageData() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum __declspec(property(get=__get_GetOverlayErrorNameFromEnum, put=__set_GetOverlayErrorNameFromEnum))  GetOverlayErrorNameFromEnum;

constexpr void __set_GetOverlayErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum __get_GetOverlayErrorNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid __declspec(property(get=__get_SetOverlayRenderingPid, put=__set_SetOverlayRenderingPid))  SetOverlayRenderingPid;

constexpr void __set_SetOverlayRenderingPid(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid __get_SetOverlayRenderingPid() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid __declspec(property(get=__get_GetOverlayRenderingPid, put=__set_GetOverlayRenderingPid))  GetOverlayRenderingPid;

constexpr void __set_GetOverlayRenderingPid(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid __get_GetOverlayRenderingPid() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag __declspec(property(get=__get_SetOverlayFlag, put=__set_SetOverlayFlag))  SetOverlayFlag;

constexpr void __set_SetOverlayFlag(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag __get_SetOverlayFlag() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag __declspec(property(get=__get_GetOverlayFlag, put=__set_GetOverlayFlag))  GetOverlayFlag;

constexpr void __set_GetOverlayFlag(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag __get_GetOverlayFlag() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor __declspec(property(get=__get_SetOverlayColor, put=__set_SetOverlayColor))  SetOverlayColor;

constexpr void __set_SetOverlayColor(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor __get_SetOverlayColor() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor __declspec(property(get=__get_GetOverlayColor, put=__set_GetOverlayColor))  GetOverlayColor;

constexpr void __set_GetOverlayColor(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor __get_GetOverlayColor() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha __declspec(property(get=__get_SetOverlayAlpha, put=__set_SetOverlayAlpha))  SetOverlayAlpha;

constexpr void __set_SetOverlayAlpha(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha __get_SetOverlayAlpha() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha __declspec(property(get=__get_GetOverlayAlpha, put=__set_GetOverlayAlpha))  GetOverlayAlpha;

constexpr void __set_GetOverlayAlpha(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha __get_GetOverlayAlpha() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect __declspec(property(get=__get_SetOverlayTexelAspect, put=__set_SetOverlayTexelAspect))  SetOverlayTexelAspect;

constexpr void __set_SetOverlayTexelAspect(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect __get_SetOverlayTexelAspect() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect __declspec(property(get=__get_GetOverlayTexelAspect, put=__set_GetOverlayTexelAspect))  GetOverlayTexelAspect;

constexpr void __set_GetOverlayTexelAspect(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect __get_GetOverlayTexelAspect() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder __declspec(property(get=__get_SetOverlaySortOrder, put=__set_SetOverlaySortOrder))  SetOverlaySortOrder;

constexpr void __set_SetOverlaySortOrder(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder __get_SetOverlaySortOrder() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder __declspec(property(get=__get_GetOverlaySortOrder, put=__set_GetOverlaySortOrder))  GetOverlaySortOrder;

constexpr void __set_GetOverlaySortOrder(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder __get_GetOverlaySortOrder() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters __declspec(property(get=__get_SetOverlayWidthInMeters, put=__set_SetOverlayWidthInMeters))  SetOverlayWidthInMeters;

constexpr void __set_SetOverlayWidthInMeters(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters __get_SetOverlayWidthInMeters() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters __declspec(property(get=__get_GetOverlayWidthInMeters, put=__set_GetOverlayWidthInMeters))  GetOverlayWidthInMeters;

constexpr void __set_GetOverlayWidthInMeters(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters __get_GetOverlayWidthInMeters() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters __declspec(property(get=__get_SetOverlayAutoCurveDistanceRangeInMeters, put=__set_SetOverlayAutoCurveDistanceRangeInMeters))  SetOverlayAutoCurveDistanceRangeInMeters;

constexpr void __set_SetOverlayAutoCurveDistanceRangeInMeters(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters __get_SetOverlayAutoCurveDistanceRangeInMeters() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters __declspec(property(get=__get_GetOverlayAutoCurveDistanceRangeInMeters, put=__set_GetOverlayAutoCurveDistanceRangeInMeters))  GetOverlayAutoCurveDistanceRangeInMeters;

constexpr void __set_GetOverlayAutoCurveDistanceRangeInMeters(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters __get_GetOverlayAutoCurveDistanceRangeInMeters() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace __declspec(property(get=__get_SetOverlayTextureColorSpace, put=__set_SetOverlayTextureColorSpace))  SetOverlayTextureColorSpace;

constexpr void __set_SetOverlayTextureColorSpace(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace __get_SetOverlayTextureColorSpace() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace __declspec(property(get=__get_GetOverlayTextureColorSpace, put=__set_GetOverlayTextureColorSpace))  GetOverlayTextureColorSpace;

constexpr void __set_GetOverlayTextureColorSpace(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace __get_GetOverlayTextureColorSpace() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds __declspec(property(get=__get_SetOverlayTextureBounds, put=__set_SetOverlayTextureBounds))  SetOverlayTextureBounds;

constexpr void __set_SetOverlayTextureBounds(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds __get_SetOverlayTextureBounds() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds __declspec(property(get=__get_GetOverlayTextureBounds, put=__set_GetOverlayTextureBounds))  GetOverlayTextureBounds;

constexpr void __set_GetOverlayTextureBounds(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds __get_GetOverlayTextureBounds() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel __declspec(property(get=__get_GetOverlayRenderModel, put=__set_GetOverlayRenderModel))  GetOverlayRenderModel;

constexpr void __set_GetOverlayRenderModel(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel __get_GetOverlayRenderModel() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel __declspec(property(get=__get_SetOverlayRenderModel, put=__set_SetOverlayRenderModel))  SetOverlayRenderModel;

constexpr void __set_SetOverlayRenderModel(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel __get_SetOverlayRenderModel() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType __declspec(property(get=__get_GetOverlayTransformType, put=__set_GetOverlayTransformType))  GetOverlayTransformType;

constexpr void __set_GetOverlayTransformType(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType __get_GetOverlayTransformType() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute __declspec(property(get=__get_SetOverlayTransformAbsolute, put=__set_SetOverlayTransformAbsolute))  SetOverlayTransformAbsolute;

constexpr void __set_SetOverlayTransformAbsolute(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute __get_SetOverlayTransformAbsolute() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute __declspec(property(get=__get_GetOverlayTransformAbsolute, put=__set_GetOverlayTransformAbsolute))  GetOverlayTransformAbsolute;

constexpr void __set_GetOverlayTransformAbsolute(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute __get_GetOverlayTransformAbsolute() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative __declspec(property(get=__get_SetOverlayTransformTrackedDeviceRelative, put=__set_SetOverlayTransformTrackedDeviceRelative))  SetOverlayTransformTrackedDeviceRelative;

constexpr void __set_SetOverlayTransformTrackedDeviceRelative(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative __get_SetOverlayTransformTrackedDeviceRelative() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative __declspec(property(get=__get_GetOverlayTransformTrackedDeviceRelative, put=__set_GetOverlayTransformTrackedDeviceRelative))  GetOverlayTransformTrackedDeviceRelative;

constexpr void __set_GetOverlayTransformTrackedDeviceRelative(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative __get_GetOverlayTransformTrackedDeviceRelative() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent __declspec(property(get=__get_SetOverlayTransformTrackedDeviceComponent, put=__set_SetOverlayTransformTrackedDeviceComponent))  SetOverlayTransformTrackedDeviceComponent;

constexpr void __set_SetOverlayTransformTrackedDeviceComponent(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent __get_SetOverlayTransformTrackedDeviceComponent() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent __declspec(property(get=__get_GetOverlayTransformTrackedDeviceComponent, put=__set_GetOverlayTransformTrackedDeviceComponent))  GetOverlayTransformTrackedDeviceComponent;

constexpr void __set_GetOverlayTransformTrackedDeviceComponent(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent __get_GetOverlayTransformTrackedDeviceComponent() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative __declspec(property(get=__get_GetOverlayTransformOverlayRelative, put=__set_GetOverlayTransformOverlayRelative))  GetOverlayTransformOverlayRelative;

constexpr void __set_GetOverlayTransformOverlayRelative(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative __get_GetOverlayTransformOverlayRelative() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative __declspec(property(get=__get_SetOverlayTransformOverlayRelative, put=__set_SetOverlayTransformOverlayRelative))  SetOverlayTransformOverlayRelative;

constexpr void __set_SetOverlayTransformOverlayRelative(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative __get_SetOverlayTransformOverlayRelative() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay __declspec(property(get=__get_ShowOverlay, put=__set_ShowOverlay))  ShowOverlay;

constexpr void __set_ShowOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay __get_ShowOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay __declspec(property(get=__get_HideOverlay, put=__set_HideOverlay))  HideOverlay;

constexpr void __set_HideOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay __get_HideOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible __declspec(property(get=__get_IsOverlayVisible, put=__set_IsOverlayVisible))  IsOverlayVisible;

constexpr void __set_IsOverlayVisible(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible __get_IsOverlayVisible() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates __declspec(property(get=__get_GetTransformForOverlayCoordinates, put=__set_GetTransformForOverlayCoordinates))  GetTransformForOverlayCoordinates;

constexpr void __set_GetTransformForOverlayCoordinates(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates __get_GetTransformForOverlayCoordinates() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent __declspec(property(get=__get_PollNextOverlayEvent, put=__set_PollNextOverlayEvent))  PollNextOverlayEvent;

constexpr void __set_PollNextOverlayEvent(OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent __get_PollNextOverlayEvent() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod __declspec(property(get=__get_GetOverlayInputMethod, put=__set_GetOverlayInputMethod))  GetOverlayInputMethod;

constexpr void __set_GetOverlayInputMethod(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod __get_GetOverlayInputMethod() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod __declspec(property(get=__get_SetOverlayInputMethod, put=__set_SetOverlayInputMethod))  SetOverlayInputMethod;

constexpr void __set_SetOverlayInputMethod(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod __get_SetOverlayInputMethod() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale __declspec(property(get=__get_GetOverlayMouseScale, put=__set_GetOverlayMouseScale))  GetOverlayMouseScale;

constexpr void __set_GetOverlayMouseScale(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale __get_GetOverlayMouseScale() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale __declspec(property(get=__get_SetOverlayMouseScale, put=__set_SetOverlayMouseScale))  SetOverlayMouseScale;

constexpr void __set_SetOverlayMouseScale(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale __get_SetOverlayMouseScale() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection __declspec(property(get=__get_ComputeOverlayIntersection, put=__set_ComputeOverlayIntersection))  ComputeOverlayIntersection;

constexpr void __set_ComputeOverlayIntersection(OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection __get_ComputeOverlayIntersection() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay __declspec(property(get=__get_IsHoverTargetOverlay, put=__set_IsHoverTargetOverlay))  IsHoverTargetOverlay;

constexpr void __set_IsHoverTargetOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay __get_IsHoverTargetOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay __declspec(property(get=__get_GetGamepadFocusOverlay, put=__set_GetGamepadFocusOverlay))  GetGamepadFocusOverlay;

constexpr void __set_GetGamepadFocusOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay __get_GetGamepadFocusOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay __declspec(property(get=__get_SetGamepadFocusOverlay, put=__set_SetGamepadFocusOverlay))  SetGamepadFocusOverlay;

constexpr void __set_SetGamepadFocusOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay __get_SetGamepadFocusOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor __declspec(property(get=__get_SetOverlayNeighbor, put=__set_SetOverlayNeighbor))  SetOverlayNeighbor;

constexpr void __set_SetOverlayNeighbor(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor __get_SetOverlayNeighbor() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor __declspec(property(get=__get_MoveGamepadFocusToNeighbor, put=__set_MoveGamepadFocusToNeighbor))  MoveGamepadFocusToNeighbor;

constexpr void __set_MoveGamepadFocusToNeighbor(OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor __get_MoveGamepadFocusToNeighbor() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform __declspec(property(get=__get_SetOverlayDualAnalogTransform, put=__set_SetOverlayDualAnalogTransform))  SetOverlayDualAnalogTransform;

constexpr void __set_SetOverlayDualAnalogTransform(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform __get_SetOverlayDualAnalogTransform() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform __declspec(property(get=__get_GetOverlayDualAnalogTransform, put=__set_GetOverlayDualAnalogTransform))  GetOverlayDualAnalogTransform;

constexpr void __set_GetOverlayDualAnalogTransform(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform __get_GetOverlayDualAnalogTransform() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture __declspec(property(get=__get_SetOverlayTexture, put=__set_SetOverlayTexture))  SetOverlayTexture;

constexpr void __set_SetOverlayTexture(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture __get_SetOverlayTexture() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture __declspec(property(get=__get_ClearOverlayTexture, put=__set_ClearOverlayTexture))  ClearOverlayTexture;

constexpr void __set_ClearOverlayTexture(OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture __get_ClearOverlayTexture() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw __declspec(property(get=__get_SetOverlayRaw, put=__set_SetOverlayRaw))  SetOverlayRaw;

constexpr void __set_SetOverlayRaw(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw __get_SetOverlayRaw() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile __declspec(property(get=__get_SetOverlayFromFile, put=__set_SetOverlayFromFile))  SetOverlayFromFile;

constexpr void __set_SetOverlayFromFile(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile __get_SetOverlayFromFile() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture __declspec(property(get=__get_GetOverlayTexture, put=__set_GetOverlayTexture))  GetOverlayTexture;

constexpr void __set_GetOverlayTexture(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture __get_GetOverlayTexture() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle __declspec(property(get=__get_ReleaseNativeOverlayHandle, put=__set_ReleaseNativeOverlayHandle))  ReleaseNativeOverlayHandle;

constexpr void __set_ReleaseNativeOverlayHandle(OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle __get_ReleaseNativeOverlayHandle() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize __declspec(property(get=__get_GetOverlayTextureSize, put=__set_GetOverlayTextureSize))  GetOverlayTextureSize;

constexpr void __set_GetOverlayTextureSize(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize __get_GetOverlayTextureSize() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay __declspec(property(get=__get_CreateDashboardOverlay, put=__set_CreateDashboardOverlay))  CreateDashboardOverlay;

constexpr void __set_CreateDashboardOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay __get_CreateDashboardOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible __declspec(property(get=__get_IsDashboardVisible, put=__set_IsDashboardVisible))  IsDashboardVisible;

constexpr void __set_IsDashboardVisible(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible __get_IsDashboardVisible() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay __declspec(property(get=__get_IsActiveDashboardOverlay, put=__set_IsActiveDashboardOverlay))  IsActiveDashboardOverlay;

constexpr void __set_IsActiveDashboardOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay __get_IsActiveDashboardOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess __declspec(property(get=__get_SetDashboardOverlaySceneProcess, put=__set_SetDashboardOverlaySceneProcess))  SetDashboardOverlaySceneProcess;

constexpr void __set_SetDashboardOverlaySceneProcess(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess __get_SetDashboardOverlaySceneProcess() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess __declspec(property(get=__get_GetDashboardOverlaySceneProcess, put=__set_GetDashboardOverlaySceneProcess))  GetDashboardOverlaySceneProcess;

constexpr void __set_GetDashboardOverlaySceneProcess(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess __get_GetDashboardOverlaySceneProcess() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard __declspec(property(get=__get_ShowDashboard, put=__set_ShowDashboard))  ShowDashboard;

constexpr void __set_ShowDashboard(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard __get_ShowDashboard() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice __declspec(property(get=__get_GetPrimaryDashboardDevice, put=__set_GetPrimaryDashboardDevice))  GetPrimaryDashboardDevice;

constexpr void __set_GetPrimaryDashboardDevice(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice __get_GetPrimaryDashboardDevice() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard __declspec(property(get=__get_ShowKeyboard, put=__set_ShowKeyboard))  ShowKeyboard;

constexpr void __set_ShowKeyboard(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard __get_ShowKeyboard() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay __declspec(property(get=__get_ShowKeyboardForOverlay, put=__set_ShowKeyboardForOverlay))  ShowKeyboardForOverlay;

constexpr void __set_ShowKeyboardForOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay __get_ShowKeyboardForOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText __declspec(property(get=__get_GetKeyboardText, put=__set_GetKeyboardText))  GetKeyboardText;

constexpr void __set_GetKeyboardText(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText __get_GetKeyboardText() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard __declspec(property(get=__get_HideKeyboard, put=__set_HideKeyboard))  HideKeyboard;

constexpr void __set_HideKeyboard(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard __get_HideKeyboard() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute __declspec(property(get=__get_SetKeyboardTransformAbsolute, put=__set_SetKeyboardTransformAbsolute))  SetKeyboardTransformAbsolute;

constexpr void __set_SetKeyboardTransformAbsolute(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute __get_SetKeyboardTransformAbsolute() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay __declspec(property(get=__get_SetKeyboardPositionForOverlay, put=__set_SetKeyboardPositionForOverlay))  SetKeyboardPositionForOverlay;

constexpr void __set_SetKeyboardPositionForOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay __get_SetKeyboardPositionForOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask __declspec(property(get=__get_SetOverlayIntersectionMask, put=__set_SetOverlayIntersectionMask))  SetOverlayIntersectionMask;

constexpr void __set_SetOverlayIntersectionMask(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask __get_SetOverlayIntersectionMask() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags __declspec(property(get=__get_GetOverlayFlags, put=__set_GetOverlayFlags))  GetOverlayFlags;

constexpr void __set_GetOverlayFlags(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags __get_GetOverlayFlags() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay __declspec(property(get=__get_ShowMessageOverlay, put=__set_ShowMessageOverlay))  ShowMessageOverlay;

constexpr void __set_ShowMessageOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay __get_ShowMessageOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay __declspec(property(get=__get_CloseMessageOverlay, put=__set_CloseMessageOverlay))  CloseMessageOverlay;

constexpr void __set_CloseMessageOverlay(OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay __get_CloseMessageOverlay() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ClearOverlayTexture, "OVR.OpenVR", "IVROverlay/_ClearOverlayTexture");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___CloseMessageOverlay, "OVR.OpenVR", "IVROverlay/_CloseMessageOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ComputeOverlayIntersection, "OVR.OpenVR", "IVROverlay/_ComputeOverlayIntersection");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateDashboardOverlay, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___CreateOverlay, "OVR.OpenVR", "IVROverlay/_CreateOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___DestroyOverlay, "OVR.OpenVR", "IVROverlay/_DestroyOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___FindOverlay, "OVR.OpenVR", "IVROverlay/_FindOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess, "OVR.OpenVR", "IVROverlay/_GetDashboardOverlaySceneProcess");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay, "OVR.OpenVR", "IVROverlay/_GetGamepadFocusOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetHighQualityOverlay, "OVR.OpenVR", "IVROverlay/_GetHighQualityOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetKeyboardText, "OVR.OpenVR", "IVROverlay/_GetKeyboardText");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAlpha, "OVR.OpenVR", "IVROverlay/_GetOverlayAlpha");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters, "OVR.OpenVR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayColor, "OVR.OpenVR", "IVROverlay/_GetOverlayColor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum, "OVR.OpenVR", "IVROverlay/_GetOverlayErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlag, "OVR.OpenVR", "IVROverlay/_GetOverlayFlag");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayFlags, "OVR.OpenVR", "IVROverlay/_GetOverlayFlags");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayImageData, "OVR.OpenVR", "IVROverlay/_GetOverlayImageData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayInputMethod, "OVR.OpenVR", "IVROverlay/_GetOverlayInputMethod");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayKey, "OVR.OpenVR", "IVROverlay/_GetOverlayKey");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayMouseScale, "OVR.OpenVR", "IVROverlay/_GetOverlayMouseScale");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayName, "OVR.OpenVR", "IVROverlay/_GetOverlayName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderModel, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderModel");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayRenderingPid, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderingPid");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlaySortOrder, "OVR.OpenVR", "IVROverlay/_GetOverlaySortOrder");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexelAspect, "OVR.OpenVR", "IVROverlay/_GetOverlayTexelAspect");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTexture, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureBounds, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureBounds");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureColorSpace");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTextureSize, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformAbsolute");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformOverlayRelative");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceComponent");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceRelative");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayTransformType, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformType");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters, "OVR.OpenVR", "IVROverlay/_GetOverlayWidthInMeters");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice, "OVR.OpenVR", "IVROverlay/_GetPrimaryDashboardDevice");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates, "OVR.OpenVR", "IVROverlay/_GetTransformForOverlayCoordinates");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideKeyboard, "OVR.OpenVR", "IVROverlay/_HideKeyboard");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___HideOverlay, "OVR.OpenVR", "IVROverlay/_HideOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay, "OVR.OpenVR", "IVROverlay/_IsActiveDashboardOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsDashboardVisible, "OVR.OpenVR", "IVROverlay/_IsDashboardVisible");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsHoverTargetOverlay, "OVR.OpenVR", "IVROverlay/_IsHoverTargetOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___IsOverlayVisible, "OVR.OpenVR", "IVROverlay/_IsOverlayVisible");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor, "OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent, "OVR.OpenVR", "IVROverlay/_PollNextOverlayEvent");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle, "OVR.OpenVR", "IVROverlay/_ReleaseNativeOverlayHandle");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess, "OVR.OpenVR", "IVROverlay/_SetDashboardOverlaySceneProcess");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay, "OVR.OpenVR", "IVROverlay/_SetGamepadFocusOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetHighQualityOverlay, "OVR.OpenVR", "IVROverlay/_SetHighQualityOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay, "OVR.OpenVR", "IVROverlay/_SetKeyboardPositionForOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAlpha, "OVR.OpenVR", "IVROverlay/_SetOverlayAlpha");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters, "OVR.OpenVR", "IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayColor, "OVR.OpenVR", "IVROverlay/_SetOverlayColor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform, "OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFlag, "OVR.OpenVR", "IVROverlay/_SetOverlayFlag");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayFromFile, "OVR.OpenVR", "IVROverlay/_SetOverlayFromFile");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayInputMethod, "OVR.OpenVR", "IVROverlay/_SetOverlayInputMethod");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask, "OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayMouseScale, "OVR.OpenVR", "IVROverlay/_SetOverlayMouseScale");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayName, "OVR.OpenVR", "IVROverlay/_SetOverlayName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayNeighbor, "OVR.OpenVR", "IVROverlay/_SetOverlayNeighbor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRaw, "OVR.OpenVR", "IVROverlay/_SetOverlayRaw");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderModel, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderModel");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayRenderingPid, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderingPid");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlaySortOrder, "OVR.OpenVR", "IVROverlay/_SetOverlaySortOrder");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexelAspect, "OVR.OpenVR", "IVROverlay/_SetOverlayTexelAspect");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTexture, "OVR.OpenVR", "IVROverlay/_SetOverlayTexture");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureBounds, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureBounds");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureColorSpace");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformAbsolute");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformOverlayRelative");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceComponent");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceRelative");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters, "OVR.OpenVR", "IVROverlay/_SetOverlayWidthInMeters");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowDashboard, "OVR.OpenVR", "IVROverlay/_ShowDashboard");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboard, "OVR.OpenVR", "IVROverlay/_ShowKeyboard");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay, "OVR.OpenVR", "IVROverlay/_ShowKeyboardForOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowMessageOverlay, "OVR.OpenVR", "IVROverlay/_ShowMessageOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVROverlay___ShowOverlay, "OVR.OpenVR", "IVROverlay/_ShowOverlay");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay, "OVR.OpenVR", "IVROverlay");
