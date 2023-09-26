#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__Boundary__BoundaryType;
}
namespace UnityEngine {
struct Vector3;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class NativeMethods;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__NativeMethods__Internal;
}
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__NativeMethods__UserDefinedSettings;
}
// Type: ::UserDefinedSettings
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15249))
// CS Name: Unity.XR.Oculus.NativeMethods::UserDefinedSettings
struct CORDL_TYPE Unity__XR__Oculus__NativeMethods__UserDefinedSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "phaseSync", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__NativeMethods__UserDefinedSettings(uint16_t sharedDepthBuffer, uint16_t dashSupport, uint16_t stereoRenderingMode, uint16_t colorSpace, uint16_t lowOverheadMode, uint16_t optimizeBufferDiscards, uint16_t phaseSync, uint16_t symmetricProjection, uint16_t subsampledLayout, uint16_t lateLatching, uint16_t lateLatchingDebug, uint16_t enableTrackingOriginStageMode, uint16_t spaceWarp, uint16_t depthSubmission, uint16_t foveatedRenderingMethod) noexcept;


                    constexpr Unity__XR__Oculus__NativeMethods__UserDefinedSettings(Unity__XR__Oculus__NativeMethods__UserDefinedSettings const&) = default;
                    constexpr Unity__XR__Oculus__NativeMethods__UserDefinedSettings(Unity__XR__Oculus__NativeMethods__UserDefinedSettings&&) = default;
                    constexpr Unity__XR__Oculus__NativeMethods__UserDefinedSettings& operator=(Unity__XR__Oculus__NativeMethods__UserDefinedSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__NativeMethods__UserDefinedSettings& operator=(Unity__XR__Oculus__NativeMethods__UserDefinedSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1e};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__NativeMethods__UserDefinedSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_sharedDepthBuffer, put=__set_sharedDepthBuffer))  sharedDepthBuffer;

constexpr void __set_sharedDepthBuffer(uint16_t value) ;

constexpr uint16_t __get_sharedDepthBuffer() const;

 uint16_t __declspec(property(get=__get_dashSupport, put=__set_dashSupport))  dashSupport;

constexpr void __set_dashSupport(uint16_t value) ;

constexpr uint16_t __get_dashSupport() const;

 uint16_t __declspec(property(get=__get_stereoRenderingMode, put=__set_stereoRenderingMode))  stereoRenderingMode;

constexpr void __set_stereoRenderingMode(uint16_t value) ;

constexpr uint16_t __get_stereoRenderingMode() const;

 uint16_t __declspec(property(get=__get_colorSpace, put=__set_colorSpace))  colorSpace;

constexpr void __set_colorSpace(uint16_t value) ;

constexpr uint16_t __get_colorSpace() const;

 uint16_t __declspec(property(get=__get_lowOverheadMode, put=__set_lowOverheadMode))  lowOverheadMode;

constexpr void __set_lowOverheadMode(uint16_t value) ;

constexpr uint16_t __get_lowOverheadMode() const;

 uint16_t __declspec(property(get=__get_optimizeBufferDiscards, put=__set_optimizeBufferDiscards))  optimizeBufferDiscards;

constexpr void __set_optimizeBufferDiscards(uint16_t value) ;

constexpr uint16_t __get_optimizeBufferDiscards() const;

 uint16_t __declspec(property(get=__get_phaseSync, put=__set_phaseSync))  phaseSync;

constexpr void __set_phaseSync(uint16_t value) ;

constexpr uint16_t __get_phaseSync() const;

 uint16_t __declspec(property(get=__get_symmetricProjection, put=__set_symmetricProjection))  symmetricProjection;

constexpr void __set_symmetricProjection(uint16_t value) ;

constexpr uint16_t __get_symmetricProjection() const;

 uint16_t __declspec(property(get=__get_subsampledLayout, put=__set_subsampledLayout))  subsampledLayout;

constexpr void __set_subsampledLayout(uint16_t value) ;

constexpr uint16_t __get_subsampledLayout() const;

 uint16_t __declspec(property(get=__get_lateLatching, put=__set_lateLatching))  lateLatching;

constexpr void __set_lateLatching(uint16_t value) ;

constexpr uint16_t __get_lateLatching() const;

 uint16_t __declspec(property(get=__get_lateLatchingDebug, put=__set_lateLatchingDebug))  lateLatchingDebug;

constexpr void __set_lateLatchingDebug(uint16_t value) ;

constexpr uint16_t __get_lateLatchingDebug() const;

 uint16_t __declspec(property(get=__get_enableTrackingOriginStageMode, put=__set_enableTrackingOriginStageMode))  enableTrackingOriginStageMode;

constexpr void __set_enableTrackingOriginStageMode(uint16_t value) ;

constexpr uint16_t __get_enableTrackingOriginStageMode() const;

 uint16_t __declspec(property(get=__get_spaceWarp, put=__set_spaceWarp))  spaceWarp;

constexpr void __set_spaceWarp(uint16_t value) ;

constexpr uint16_t __get_spaceWarp() const;

 uint16_t __declspec(property(get=__get_depthSubmission, put=__set_depthSubmission))  depthSubmission;

constexpr void __set_depthSubmission(uint16_t value) ;

constexpr uint16_t __get_depthSubmission() const;

 uint16_t __declspec(property(get=__get_foveatedRenderingMethod, put=__set_foveatedRenderingMethod))  foveatedRenderingMethod;

constexpr void __set_foveatedRenderingMethod(uint16_t value) ;

constexpr uint16_t __get_foveatedRenderingMethod() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::Internal
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15250))
// CS Name: Unity.XR.Oculus.NativeMethods::Internal
class CORDL_TYPE Unity__XR__Oculus__NativeMethods__Internal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Unity__XR__Oculus__NativeMethods__Internal() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__NativeMethods__Internal", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__NativeMethods__Internal(Unity__XR__Oculus__NativeMethods__Internal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__NativeMethods__Internal", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__NativeMethods__Internal(Unity__XR__Oculus__NativeMethods__Internal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__NativeMethods__Internal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__NativeMethods__Internal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__NativeMethods__Internal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__NativeMethods__Internal& operator=(Unity__XR__Oculus__NativeMethods__Internal&& o) noexcept = default;
  constexpr Unity__XR__Oculus__NativeMethods__Internal& operator=(Unity__XR__Oculus__NativeMethods__Internal const& o) noexcept = default;
                


// Methods

/// @brief Method SetColorScale addr 0x2b12688 size 0x98 virtual false final false
static void SetColorScale(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method SetColorOffset addr 0x2b12720 size 0x94 virtual false final false
static void SetColorOffset(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method GetIsSupportedDevice addr 0x2b127b4 size 0x70 virtual false final false
static bool GetIsSupportedDevice() ;

/// @brief Method LoadOVRPlugin addr 0x2b12824 size 0x8c virtual false final false
static bool LoadOVRPlugin(::StringW ovrpPath) ;

/// @brief Method UnloadOVRPlugin addr 0x2b128b4 size 0x64 virtual false final false
static void UnloadOVRPlugin() ;

/// @brief Method SetUserDefinedSettings addr 0x2b12918 size 0x8c virtual false final false
static void SetUserDefinedSettings(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings settings) ;

/// @brief Method SetHasUserAuthorizedEyeTrackingPermission addr 0x2b129a4 size 0x7c virtual false final false
static void SetHasUserAuthorizedEyeTrackingPermission(bool authorized) ;

/// @brief Method SetCPULevel addr 0x2b12a20 size 0x7c virtual false final false
static int32_t SetCPULevel(int32_t cpuLevel) ;

/// @brief Method SetGPULevel addr 0x2b12a9c size 0x7c virtual false final false
static int32_t SetGPULevel(int32_t gpuLevel) ;

/// @brief Method GetOVRPVersion addr 0x2b12b18 size 0x80 virtual false final false
static void GetOVRPVersion(::ArrayW<uint8_t> version) ;

/// @brief Method EnablePerfMetrics addr 0x2b12b98 size 0x7c virtual false final false
static void EnablePerfMetrics(bool enable) ;

/// @brief Method EnableAppMetrics addr 0x2b12c14 size 0x7c virtual false final false
static void EnableAppMetrics(bool enable) ;

/// @brief Method SetDeveloperModeStrict addr 0x2b12c90 size 0x84 virtual false final false
static bool SetDeveloperModeStrict(bool active) ;

/// @brief Method GetAppHasInputFocus addr 0x2b12d14 size 0x70 virtual false final false
static bool GetAppHasInputFocus() ;

/// @brief Method GetBoundaryConfigured addr 0x2b12d84 size 0x70 virtual false final false
static bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2b12df4 size 0x8c virtual false final false
static bool GetBoundaryDimensions(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType boundaryType, ByRef<UnityEngine::Vector3> dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2b12e80 size 0x70 virtual false final false
static bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2b12ef0 size 0x7c virtual false final false
static void SetBoundaryVisible(bool boundaryVisible) ;

/// @brief Method GetAppShouldQuit addr 0x2b12f70 size 0x70 virtual false final false
static bool GetAppShouldQuit() ;

/// @brief Method GetDisplayAvailableFrequencies addr 0x2b12fe0 size 0x8c virtual false final false
static bool GetDisplayAvailableFrequencies(::cordl_internals::intptr_t ptr, ByRef<int32_t> numFrequencies) ;

/// @brief Method SetDisplayFrequency addr 0x2b1306c size 0x84 virtual false final false
static bool SetDisplayFrequency(float_t refreshRate) ;

/// @brief Method GetDisplayFrequency addr 0x2b130f0 size 0x84 virtual false final false
static bool GetDisplayFrequency(ByRef<float_t> refreshRate) ;

/// @brief Method GetSystemHeadsetType addr 0x2b13174 size 0x68 virtual false final false
static Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResSupported addr 0x2b131dc size 0x70 virtual false final false
static bool GetTiledMultiResSupported() ;

/// @brief Method SetTiledMultiResLevel addr 0x2b1324c size 0x7c virtual false final false
static void SetTiledMultiResLevel(int32_t level) ;

/// @brief Method GetTiledMultiResLevel addr 0x2b132c8 size 0x68 virtual false final false
static int32_t GetTiledMultiResLevel() ;

/// @brief Method SetTiledMultiResDynamic addr 0x2b13330 size 0x7c virtual false final false
static void SetTiledMultiResDynamic(bool isDynamic) ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported addr 0x2b133ac size 0x70 virtual false final false
static bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetShouldRestartSession addr 0x2b13420 size 0x70 virtual false final false
static bool GetShouldRestartSession() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::NativeMethods
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15251))
// CS Name: Unity.XR.Oculus.NativeMethods
class CORDL_TYPE NativeMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Internal = Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal;

using UserDefinedSettings = Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: " const&", def_value: None }]
constexpr NativeMethods(NativeMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
constexpr NativeMethods(NativeMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeMethods& operator=(NativeMethods&& o) noexcept = default;
  constexpr NativeMethods& operator=(NativeMethods const& o) noexcept = default;
                


// Methods

/// @brief Method SetColorScale addr 0x2b0f914 size 0x4 virtual false final false
static void SetColorScale(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method SetColorOffset addr 0x2b0f918 size 0x4 virtual false final false
static void SetColorOffset(float_t x, float_t y, float_t z, float_t w) ;

/// @brief Method GetIsSupportedDevice addr 0x2b10414 size 0x4 virtual false final false
static bool GetIsSupportedDevice() ;

/// @brief Method LoadOVRPlugin addr 0x2b11094 size 0x4 virtual false final false
static bool LoadOVRPlugin(::StringW ovrpPath) ;

/// @brief Method UnloadOVRPlugin addr 0x2b128b0 size 0x4 virtual false final false
static void UnloadOVRPlugin() ;

/// @brief Method SetUserDefinedSettings addr 0x2b10c14 size 0x2c virtual false final false
static void SetUserDefinedSettings(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings settings) ;

/// @brief Method SetHasUserAuthorizedEyeTrackingPermission addr 0x2b10d24 size 0x8 virtual false final false
static void SetHasUserAuthorizedEyeTrackingPermission(bool authorized) ;

/// @brief Method SetCPULevel addr 0x2b111d8 size 0x4 virtual false final false
static int32_t SetCPULevel(int32_t cpuLevel) ;

/// @brief Method SetGPULevel addr 0x2b111f4 size 0x4 virtual false final false
static int32_t SetGPULevel(int32_t gpuLevel) ;

/// @brief Method GetOVRPVersion addr 0x2b11510 size 0x4 virtual false final false
static void GetOVRPVersion(::ArrayW<uint8_t> version) ;

/// @brief Method EnablePerfMetrics addr 0x2b1230c size 0x8 virtual false final false
static void EnablePerfMetrics(bool enable) ;

/// @brief Method EnableAppMetrics addr 0x2b12680 size 0x8 virtual false final false
static void EnableAppMetrics(bool enable) ;

/// @brief Method SetDeveloperModeStrict addr 0x2b0ffac size 0x8 virtual false final false
static bool SetDeveloperModeStrict(bool active) ;

/// @brief Method GetHasInputFocus addr 0x2b0fdb4 size 0x4 virtual false final false
static bool GetHasInputFocus() ;

/// @brief Method GetBoundaryConfigured addr 0x2b0fe64 size 0x4 virtual false final false
static bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2b0fe6c size 0x4 virtual false final false
static bool GetBoundaryDimensions(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType boundaryType, ByRef<UnityEngine::Vector3> dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2b0fe74 size 0x4 virtual false final false
static bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2b0fe80 size 0x8 virtual false final false
static void SetBoundaryVisible(bool boundaryVisible) ;

/// @brief Method GetAppShouldQuit addr 0x2b12f6c size 0x4 virtual false final false
static bool GetAppShouldQuit() ;

/// @brief Method GetDisplayAvailableFrequencies addr 0x2b113b0 size 0x4 virtual false final false
static bool GetDisplayAvailableFrequencies(::cordl_internals::intptr_t ptr, ByRef<int32_t> numFrequencies) ;

/// @brief Method SetDisplayFrequency addr 0x2b113b8 size 0x4 virtual false final false
static bool SetDisplayFrequency(float_t refreshRate) ;

/// @brief Method GetDisplayFrequency addr 0x2b113c0 size 0x4 virtual false final false
static bool GetDisplayFrequency(ByRef<float_t> refreshRate) ;

/// @brief Method GetSystemHeadsetType addr 0x2b0f920 size 0x4 virtual false final false
static Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResSupported addr 0x2b0f9b0 size 0x4 virtual false final false
static bool GetTiledMultiResSupported() ;

/// @brief Method SetTiledMultiResLevel addr 0x2b0f9b4 size 0x4 virtual false final false
static void SetTiledMultiResLevel(int32_t level) ;

/// @brief Method GetTiledMultiResLevel addr 0x2b0fac4 size 0x4 virtual false final false
static int32_t GetTiledMultiResLevel() ;

/// @brief Method SetTiledMultiResDynamic addr 0x2b0fa44 size 0x8 virtual false final false
static void SetTiledMultiResDynamic(bool isDynamic) ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported addr 0x2b10cbc size 0x4 virtual false final false
static bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetShouldRestartSession addr 0x2b1341c size 0x4 virtual false final false
static bool GetShouldRestartSession() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::NativeMethods, "Unity.XR.Oculus", "NativeMethods");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal, "Unity.XR.Oculus", "NativeMethods/Internal");
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings, "Unity.XR.Oculus", "NativeMethods/UserDefinedSettings");
