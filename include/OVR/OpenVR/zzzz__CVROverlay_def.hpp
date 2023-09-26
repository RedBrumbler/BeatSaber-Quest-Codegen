#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct IVROverlay;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVROverlay___PollNextOverlayEvent;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVROverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion;
}
// Type: ::_PollNextOverlayEventPacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9367))
// CS Name: OVR.OpenVR.CVROverlay::_PollNextOverlayEventPacked
class CORDL_TYPE OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked(OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked(OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked& operator=(OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked&& o) noexcept = default;
  constexpr OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked& operator=(OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2696d28 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2696dec size 0x14 virtual true final false
 bool Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) ;

/// @brief Method BeginInvoke addr 0x2696e00 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2696ee8 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::PollNextOverlayEventUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9368))
// CS Name: OVR.OpenVR.CVROverlay::PollNextOverlayEventUnion
struct CORDL_TYPE OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent", modifiers: "", def_value: None }, CppParam { name: "pPollNextOverlayEventPacked", ty: "OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked", modifiers: "", def_value: None }]
constexpr OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion(OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent pPollNextOverlayEvent, OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked pPollNextOverlayEventPacked) noexcept;


                    constexpr OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion(OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion const&) = default;
                    constexpr OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion(OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion&&) = default;
                    constexpr OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion& operator=(OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion& operator=(OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent __declspec(property(get=__get_pPollNextOverlayEvent, put=__set_pPollNextOverlayEvent))  pPollNextOverlayEvent;

constexpr void __set_pPollNextOverlayEvent(OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVROverlay___PollNextOverlayEvent __get_pPollNextOverlayEvent() const;

 OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked __declspec(property(get=__get_pPollNextOverlayEventPacked, put=__set_pPollNextOverlayEventPacked))  pPollNextOverlayEventPacked;

constexpr void __set_pPollNextOverlayEventPacked(OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked value) ;

constexpr OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked __get_pPollNextOverlayEventPacked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::CVROverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9369))
// CS Name: OVR.OpenVR.CVROverlay
class CORDL_TYPE CVROverlay : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PollNextOverlayEventUnion = OVR::OpenVR::OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion;

using _PollNextOverlayEventPacked = OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x2a0};

virtual ~CVROverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: " const&", def_value: None }]
constexpr CVROverlay(CVROverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "&&", def_value: None }]
constexpr CVROverlay(CVROverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVROverlay(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVROverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVROverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVROverlay& operator=(CVROverlay&& o) noexcept = default;
  constexpr CVROverlay& operator=(CVROverlay const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVROverlay __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVROverlay value) ;

constexpr OVR::OpenVR::IVROverlay __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVROverlay(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2695e40 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method FindOverlay addr 0x2695f54 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError FindOverlay(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle) ;

/// @brief Method CreateOverlay addr 0x2695f7c size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError CreateOverlay(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle) ;

/// @brief Method DestroyOverlay addr 0x2695fa4 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError DestroyOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method SetHighQualityOverlay addr 0x2695fc8 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetHighQualityOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method GetHighQualityOverlay addr 0x2695fec size 0x24 virtual false final false
 uint64_t GetHighQualityOverlay() ;

/// @brief Method GetOverlayKey addr 0x2696010 size 0x24 virtual false final false
 uint32_t GetOverlayKey(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method GetOverlayName addr 0x2696034 size 0x24 virtual false final false
 uint32_t GetOverlayName(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method SetOverlayName addr 0x2696058 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayName(uint64_t ulOverlayHandle, ::StringW pchName) ;

/// @brief Method GetOverlayImageData addr 0x269607c size 0x2c virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayImageData(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight) ;

/// @brief Method GetOverlayErrorNameFromEnum addr 0x26960a8 size 0x84 virtual false final false
 ::StringW GetOverlayErrorNameFromEnum(OVR::OpenVR::EVROverlayError error) ;

/// @brief Method SetOverlayRenderingPid addr 0x269612c size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint32_t unPID) ;

/// @brief Method GetOverlayRenderingPid addr 0x2696150 size 0x24 virtual false final false
 uint32_t GetOverlayRenderingPid(uint64_t ulOverlayHandle) ;

/// @brief Method SetOverlayFlag addr 0x2696174 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayFlag(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) ;

/// @brief Method GetOverlayFlag addr 0x269619c size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayFlag(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled) ;

/// @brief Method SetOverlayColor addr 0x26961c4 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayColor(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) ;

/// @brief Method GetOverlayColor addr 0x26961e8 size 0x30 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayColor(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue) ;

/// @brief Method SetOverlayAlpha addr 0x2696218 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayAlpha(uint64_t ulOverlayHandle, float_t fAlpha) ;

/// @brief Method GetOverlayAlpha addr 0x269623c size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayAlpha(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha) ;

/// @brief Method SetOverlayTexelAspect addr 0x2696264 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTexelAspect(uint64_t ulOverlayHandle, float_t fTexelAspect) ;

/// @brief Method GetOverlayTexelAspect addr 0x2696288 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTexelAspect(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect) ;

/// @brief Method SetOverlaySortOrder addr 0x26962b0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlaySortOrder(uint64_t ulOverlayHandle, uint32_t unSortOrder) ;

/// @brief Method GetOverlaySortOrder addr 0x26962d4 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlaySortOrder(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder) ;

/// @brief Method SetOverlayWidthInMeters addr 0x26962fc size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float_t fWidthInMeters) ;

/// @brief Method GetOverlayWidthInMeters addr 0x2696320 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayWidthInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters) ;

/// @brief Method SetOverlayAutoCurveDistanceRangeInMeters addr 0x2696348 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) ;

/// @brief Method GetOverlayAutoCurveDistanceRangeInMeters addr 0x269636c size 0x2c virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters) ;

/// @brief Method SetOverlayTextureColorSpace addr 0x2696398 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace) ;

/// @brief Method GetOverlayTextureColorSpace addr 0x26963bc size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::EColorSpace> peTextureColorSpace) ;

/// @brief Method SetOverlayTextureBounds addr 0x26963e0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) ;

/// @brief Method GetOverlayTextureBounds addr 0x2696404 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) ;

/// @brief Method GetOverlayRenderModel addr 0x2696428 size 0x24 virtual false final false
 uint32_t GetOverlayRenderModel(uint64_t ulOverlayHandle, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::HmdColor_t> pColor, ByRef<OVR::OpenVR::EVROverlayError> pError) ;

/// @brief Method SetOverlayRenderModel addr 0x269644c size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayRenderModel(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<OVR::OpenVR::HmdColor_t> pColor) ;

/// @brief Method GetOverlayTransformType addr 0x2696470 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTransformType(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayTransformType> peTransformType) ;

/// @brief Method SetOverlayTransformAbsolute addr 0x2696494 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) ;

/// @brief Method GetOverlayTransformAbsolute addr 0x26964b8 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) ;

/// @brief Method SetOverlayTransformTrackedDeviceRelative addr 0x26964dc size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method GetOverlayTransformTrackedDeviceRelative addr 0x2696500 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method SetOverlayTransformTrackedDeviceComponent addr 0x2696528 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) ;

/// @brief Method GetOverlayTransformTrackedDeviceComponent addr 0x269654c size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameSize) ;

/// @brief Method GetOverlayTransformOverlayRelative addr 0x2696574 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) ;

/// @brief Method SetOverlayTransformOverlayRelative addr 0x269659c size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) ;

/// @brief Method ShowOverlay addr 0x26965c0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError ShowOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method HideOverlay addr 0x26965e4 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError HideOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method IsOverlayVisible addr 0x2696608 size 0x24 virtual false final false
 bool IsOverlayVisible(uint64_t ulOverlayHandle) ;

/// @brief Method GetTransformForOverlayCoordinates addr 0x269662c size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTransform) ;

/// @brief Method PollNextOverlayEvent addr 0x2696650 size 0x180 virtual false final false
 bool PollNextOverlayEvent(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) ;

/// @brief Method GetOverlayInputMethod addr 0x26967d0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayInputMethod(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayInputMethod> peInputMethod) ;

/// @brief Method SetOverlayInputMethod addr 0x26967f4 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayInputMethod(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod eInputMethod) ;

/// @brief Method GetOverlayMouseScale addr 0x2696818 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale) ;

/// @brief Method SetOverlayMouseScale addr 0x269683c size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::HmdVector2_t> pvecMouseScale) ;

/// @brief Method ComputeOverlayIntersection addr 0x2696860 size 0x24 virtual false final false
 bool ComputeOverlayIntersection(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<OVR::OpenVR::VROverlayIntersectionResults_t> pResults) ;

/// @brief Method IsHoverTargetOverlay addr 0x2696884 size 0x24 virtual false final false
 bool IsHoverTargetOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method GetGamepadFocusOverlay addr 0x26968a8 size 0x24 virtual false final false
 uint64_t GetGamepadFocusOverlay() ;

/// @brief Method SetGamepadFocusOverlay addr 0x26968cc size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay) ;

/// @brief Method SetOverlayNeighbor addr 0x26968f0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayNeighbor(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) ;

/// @brief Method MoveGamepadFocusToNeighbor addr 0x2696914 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError MoveGamepadFocusToNeighbor(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) ;

/// @brief Method SetOverlayDualAnalogTransform addr 0x2696938 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ::cordl_internals::intptr_t vCenter, float_t fRadius) ;

/// @brief Method GetOverlayDualAnalogTransform addr 0x269695c size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius) ;

/// @brief Method SetOverlayTexture addr 0x2696984 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayTexture(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::Texture_t> pTexture) ;

/// @brief Method ClearOverlayTexture addr 0x26969a8 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError ClearOverlayTexture(uint64_t ulOverlayHandle) ;

/// @brief Method SetOverlayRaw addr 0x26969cc size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayRaw(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) ;

/// @brief Method SetOverlayFromFile addr 0x26969f0 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayFromFile(uint64_t ulOverlayHandle, ::StringW pchFilePath) ;

/// @brief Method GetOverlayTexture addr 0x2696a14 size 0x3c virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTexture(uint64_t ulOverlayHandle, ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ::cordl_internals::intptr_t pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<OVR::OpenVR::ETextureType> pAPIType, ByRef<OVR::OpenVR::EColorSpace> pColorSpace, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds) ;

/// @brief Method ReleaseNativeOverlayHandle addr 0x2696a50 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pNativeTextureHandle) ;

/// @brief Method GetOverlayTextureSize addr 0x2696a74 size 0x2c virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayTextureSize(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight) ;

/// @brief Method CreateDashboardOverlay addr 0x2696aa0 size 0x2c virtual false final false
 OVR::OpenVR::EVROverlayError CreateDashboardOverlay(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle) ;

/// @brief Method IsDashboardVisible addr 0x2696acc size 0x24 virtual false final false
 bool IsDashboardVisible() ;

/// @brief Method IsActiveDashboardOverlay addr 0x2696af0 size 0x24 virtual false final false
 bool IsActiveDashboardOverlay(uint64_t ulOverlayHandle) ;

/// @brief Method SetDashboardOverlaySceneProcess addr 0x2696b14 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint32_t unProcessId) ;

/// @brief Method GetDashboardOverlaySceneProcess addr 0x2696b38 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId) ;

/// @brief Method ShowDashboard addr 0x2696b60 size 0x24 virtual false final false
 void ShowDashboard(::StringW pchOverlayToShow) ;

/// @brief Method GetPrimaryDashboardDevice addr 0x2696b84 size 0x24 virtual false final false
 uint32_t GetPrimaryDashboardDevice() ;

/// @brief Method ShowKeyboard addr 0x2696ba8 size 0x2c virtual false final false
 OVR::OpenVR::EVROverlayError ShowKeyboard(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) ;

/// @brief Method ShowKeyboardForOverlay addr 0x2696bd4 size 0x30 virtual false final false
 OVR::OpenVR::EVROverlayError ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) ;

/// @brief Method GetKeyboardText addr 0x2696c04 size 0x24 virtual false final false
 uint32_t GetKeyboardText(System::Text::StringBuilder pchText, uint32_t cchText) ;

/// @brief Method HideKeyboard addr 0x2696c28 size 0x24 virtual false final false
 void HideKeyboard() ;

/// @brief Method SetKeyboardTransformAbsolute addr 0x2696c4c size 0x24 virtual false final false
 void SetKeyboardTransformAbsolute(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) ;

/// @brief Method SetKeyboardPositionForOverlay addr 0x2696c70 size 0x24 virtual false final false
 void SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, OVR::OpenVR::HmdRect2_t avoidRect) ;

/// @brief Method SetOverlayIntersectionMask addr 0x2696c94 size 0x24 virtual false final false
 OVR::OpenVR::EVROverlayError SetOverlayIntersectionMask(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) ;

/// @brief Method GetOverlayFlags addr 0x2696cb8 size 0x28 virtual false final false
 OVR::OpenVR::EVROverlayError GetOverlayFlags(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags) ;

/// @brief Method ShowMessageOverlay addr 0x2696ce0 size 0x24 virtual false final false
 OVR::OpenVR::VRMessageOverlayResponse ShowMessageOverlay(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text) ;

/// @brief Method CloseMessageOverlay addr 0x2696d04 size 0x24 virtual false final false
 void CloseMessageOverlay() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVROverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVROverlay, "OVR.OpenVR", "CVROverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVROverlay___PollNextOverlayEventPacked, "OVR.OpenVR", "CVROverlay/_PollNextOverlayEventPacked");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVROverlay__PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
