#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
namespace UnityEngine {
class GameObject;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class OVRTracker;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Color;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__EventDataBuffer;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__OperationResult;
}
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceComponentType;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace GlobalNamespace {
class OVRDisplay;
}
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace System {
class Version;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureSettings;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRProfile;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
class OVRBoundary;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceStorageLocation;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CameraDevice;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__ColorSpace;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__DepthQuality;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__EyeTextureFormat;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__MrcActivationMode;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__MrcCameraType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__PassthroughInitializationState;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__SystemHeadsetType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__TiledMultiResLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__XRDevice;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__XrApi;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRManager__PassthroughCapabilities;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRManager____c;
}
namespace GlobalNamespace {
class OVRManager;
}
// Type: ::XrApi
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8553))
// CS Name: OVRManager::XrApi
struct CORDL_TYPE GlobalNamespace__OVRManager__XrApi : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__XrApi(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__XrApi(GlobalNamespace__OVRManager__XrApi const&) = default;
                    constexpr GlobalNamespace__OVRManager__XrApi(GlobalNamespace__OVRManager__XrApi&&) = default;
                    constexpr GlobalNamespace__OVRManager__XrApi& operator=(GlobalNamespace__OVRManager__XrApi const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__XrApi& operator=(GlobalNamespace__OVRManager__XrApi&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__XrApi(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__XrApi_Unwrapped : int32_t {
__Unknown = 0,
__CAPI = 1,
__VRAPI = 2,
__OpenXR = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__XrApi_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__XrApi_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XrApi const Unknown;

/// @brief Field CAPI offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XrApi const CAPI;

/// @brief Field VRAPI offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XrApi const VRAPI;

/// @brief Field OpenXR offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XrApi const OpenXR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackingOrigin
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8554))
// CS Name: OVRManager::TrackingOrigin
struct CORDL_TYPE GlobalNamespace__OVRManager__TrackingOrigin : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__TrackingOrigin(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__TrackingOrigin(GlobalNamespace__OVRManager__TrackingOrigin const&) = default;
                    constexpr GlobalNamespace__OVRManager__TrackingOrigin(GlobalNamespace__OVRManager__TrackingOrigin&&) = default;
                    constexpr GlobalNamespace__OVRManager__TrackingOrigin& operator=(GlobalNamespace__OVRManager__TrackingOrigin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__TrackingOrigin& operator=(GlobalNamespace__OVRManager__TrackingOrigin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__TrackingOrigin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__TrackingOrigin_Unwrapped : int32_t {
__EyeLevel = 0,
__FloorLevel = 1,
__Stage = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__TrackingOrigin_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__TrackingOrigin_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EyeLevel offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin const EyeLevel;

/// @brief Field FloorLevel offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin const FloorLevel;

/// @brief Field Stage offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin const Stage;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EyeTextureFormat
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8555))
// CS Name: OVRManager::EyeTextureFormat
struct CORDL_TYPE GlobalNamespace__OVRManager__EyeTextureFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__EyeTextureFormat(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__EyeTextureFormat(GlobalNamespace__OVRManager__EyeTextureFormat const&) = default;
                    constexpr GlobalNamespace__OVRManager__EyeTextureFormat(GlobalNamespace__OVRManager__EyeTextureFormat&&) = default;
                    constexpr GlobalNamespace__OVRManager__EyeTextureFormat& operator=(GlobalNamespace__OVRManager__EyeTextureFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__EyeTextureFormat& operator=(GlobalNamespace__OVRManager__EyeTextureFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__EyeTextureFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__EyeTextureFormat_Unwrapped : int32_t {
__Default = 0,
__R16G16B16A16_FP = 2,
__R11G11B10_FP = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__EyeTextureFormat_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__EyeTextureFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat const Default;

/// @brief Field R16G16B16A16_FP offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat const R16G16B16A16_FP;

/// @brief Field R11G11B10_FP offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat const R11G11B10_FP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FoveatedRenderingLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8556))
// CS Name: OVRManager::FoveatedRenderingLevel
struct CORDL_TYPE GlobalNamespace__OVRManager__FoveatedRenderingLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__FoveatedRenderingLevel(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__FoveatedRenderingLevel(GlobalNamespace__OVRManager__FoveatedRenderingLevel const&) = default;
                    constexpr GlobalNamespace__OVRManager__FoveatedRenderingLevel(GlobalNamespace__OVRManager__FoveatedRenderingLevel&&) = default;
                    constexpr GlobalNamespace__OVRManager__FoveatedRenderingLevel& operator=(GlobalNamespace__OVRManager__FoveatedRenderingLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__FoveatedRenderingLevel& operator=(GlobalNamespace__OVRManager__FoveatedRenderingLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__FoveatedRenderingLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__FoveatedRenderingLevel_Unwrapped : int32_t {
__Off = 0,
__Low = 1,
__Medium = 2,
__High = 3,
__HighTop = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__FoveatedRenderingLevel_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__FoveatedRenderingLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel const Off;

/// @brief Field Low offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel const Low;

/// @brief Field Medium offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel const Medium;

/// @brief Field High offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel const High;

/// @brief Field HighTop offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel const HighTop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FixedFoveatedRenderingLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8557))
// CS Name: OVRManager::FixedFoveatedRenderingLevel
struct CORDL_TYPE GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel(GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const&) = default;
                    constexpr GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel(GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel&&) = default;
                    constexpr GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel& operator=(GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel& operator=(GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel_Unwrapped : int32_t {
__Off = 0,
__Low = 1,
__Medium = 2,
__High = 3,
__HighTop = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const Off;

/// @brief Field Low offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const Low;

/// @brief Field Medium offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const Medium;

/// @brief Field High offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const High;

/// @brief Field HighTop offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel const HighTop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TiledMultiResLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8558))
// CS Name: OVRManager::TiledMultiResLevel
struct CORDL_TYPE GlobalNamespace__OVRManager__TiledMultiResLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__TiledMultiResLevel(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__TiledMultiResLevel(GlobalNamespace__OVRManager__TiledMultiResLevel const&) = default;
                    constexpr GlobalNamespace__OVRManager__TiledMultiResLevel(GlobalNamespace__OVRManager__TiledMultiResLevel&&) = default;
                    constexpr GlobalNamespace__OVRManager__TiledMultiResLevel& operator=(GlobalNamespace__OVRManager__TiledMultiResLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__TiledMultiResLevel& operator=(GlobalNamespace__OVRManager__TiledMultiResLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__TiledMultiResLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__TiledMultiResLevel_Unwrapped : int32_t {
__Off = 0,
__LMSLow = 1,
__LMSMedium = 2,
__LMSHigh = 3,
__LMSHighTop = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__TiledMultiResLevel_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__TiledMultiResLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel const Off;

/// @brief Field LMSLow offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel const LMSLow;

/// @brief Field LMSMedium offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel const LMSMedium;

/// @brief Field LMSHigh offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel const LMSHigh;

/// @brief Field LMSHighTop offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel const LMSHighTop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SystemHeadsetType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8559))
// CS Name: OVRManager::SystemHeadsetType
struct CORDL_TYPE GlobalNamespace__OVRManager__SystemHeadsetType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__SystemHeadsetType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__SystemHeadsetType(GlobalNamespace__OVRManager__SystemHeadsetType const&) = default;
                    constexpr GlobalNamespace__OVRManager__SystemHeadsetType(GlobalNamespace__OVRManager__SystemHeadsetType&&) = default;
                    constexpr GlobalNamespace__OVRManager__SystemHeadsetType& operator=(GlobalNamespace__OVRManager__SystemHeadsetType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__SystemHeadsetType& operator=(GlobalNamespace__OVRManager__SystemHeadsetType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__SystemHeadsetType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__SystemHeadsetType_Unwrapped : int32_t {
__None = 0,
__Oculus_Quest = 8,
__Oculus_Quest_2 = 9,
__Meta_Quest_Pro = 10,
__Placeholder_11 = 11,
__Placeholder_12 = 12,
__Placeholder_13 = 13,
__Placeholder_14 = 14,
__Rift_DK1 = 4096,
__Rift_DK2 = 4097,
__Rift_CV1 = 4098,
__Rift_CB = 4099,
__Rift_S = 4100,
__Oculus_Link_Quest = 4101,
__Oculus_Link_Quest_2 = 4102,
__Meta_Link_Quest_Pro = 4103,
__PC_Placeholder_4104 = 4104,
__PC_Placeholder_4105 = 4105,
__PC_Placeholder_4106 = 4106,
__PC_Placeholder_4107 = 4107,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__SystemHeadsetType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__SystemHeadsetType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const None;

/// @brief Field Oculus_Quest offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Oculus_Quest;

/// @brief Field Oculus_Quest_2 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Oculus_Quest_2;

/// @brief Field Meta_Quest_Pro offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Meta_Quest_Pro;

/// @brief Field Placeholder_11 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Placeholder_11;

/// @brief Field Placeholder_12 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Placeholder_12;

/// @brief Field Placeholder_13 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Placeholder_13;

/// @brief Field Placeholder_14 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Placeholder_14;

/// @brief Field Rift_DK1 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Rift_DK1;

/// @brief Field Rift_DK2 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Rift_DK2;

/// @brief Field Rift_CV1 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Rift_CV1;

/// @brief Field Rift_CB offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Rift_CB;

/// @brief Field Rift_S offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Rift_S;

/// @brief Field Oculus_Link_Quest offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Oculus_Link_Quest;

/// @brief Field Oculus_Link_Quest_2 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Oculus_Link_Quest_2;

/// @brief Field Meta_Link_Quest_Pro offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const Meta_Link_Quest_Pro;

/// @brief Field PC_Placeholder_4104 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const PC_Placeholder_4104;

/// @brief Field PC_Placeholder_4105 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const PC_Placeholder_4105;

/// @brief Field PC_Placeholder_4106 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const PC_Placeholder_4106;

/// @brief Field PC_Placeholder_4107 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType const PC_Placeholder_4107;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::XRDevice
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8560))
// CS Name: OVRManager::XRDevice
struct CORDL_TYPE GlobalNamespace__OVRManager__XRDevice : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__XRDevice(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__XRDevice(GlobalNamespace__OVRManager__XRDevice const&) = default;
                    constexpr GlobalNamespace__OVRManager__XRDevice(GlobalNamespace__OVRManager__XRDevice&&) = default;
                    constexpr GlobalNamespace__OVRManager__XRDevice& operator=(GlobalNamespace__OVRManager__XRDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__XRDevice& operator=(GlobalNamespace__OVRManager__XRDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__XRDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__XRDevice_Unwrapped : int32_t {
__Unknown = 0,
__Oculus = 1,
__OpenVR = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__XRDevice_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__XRDevice_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XRDevice const Unknown;

/// @brief Field Oculus offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XRDevice const Oculus;

/// @brief Field OpenVR offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__XRDevice const OpenVR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorSpace
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8561))
// CS Name: OVRManager::ColorSpace
struct CORDL_TYPE GlobalNamespace__OVRManager__ColorSpace : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__ColorSpace(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__ColorSpace(GlobalNamespace__OVRManager__ColorSpace const&) = default;
                    constexpr GlobalNamespace__OVRManager__ColorSpace(GlobalNamespace__OVRManager__ColorSpace&&) = default;
                    constexpr GlobalNamespace__OVRManager__ColorSpace& operator=(GlobalNamespace__OVRManager__ColorSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__ColorSpace& operator=(GlobalNamespace__OVRManager__ColorSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__ColorSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__ColorSpace_Unwrapped : int32_t {
__Unknown = 0,
__Unmanaged = 1,
__Rec_2020 = 2,
__Rec_709 = 3,
__Rift_CV1 = 4,
__Rift_S = 5,
__Quest = 6,
__P3 = 7,
__Adobe_RGB = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__ColorSpace_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__ColorSpace_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Unknown;

/// @brief Field Unmanaged offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Unmanaged;

/// @brief Field Rec_2020 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Rec_2020;

/// @brief Field Rec_709 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Rec_709;

/// @brief Field Rift_CV1 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Rift_CV1;

/// @brief Field Rift_S offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Rift_S;

/// @brief Field Quest offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Quest;

/// @brief Field P3 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const P3;

/// @brief Field Adobe_RGB offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace const Adobe_RGB;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ProcessorPerformanceLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8562))
// CS Name: OVRManager::ProcessorPerformanceLevel
struct CORDL_TYPE GlobalNamespace__OVRManager__ProcessorPerformanceLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__ProcessorPerformanceLevel(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__ProcessorPerformanceLevel(GlobalNamespace__OVRManager__ProcessorPerformanceLevel const&) = default;
                    constexpr GlobalNamespace__OVRManager__ProcessorPerformanceLevel(GlobalNamespace__OVRManager__ProcessorPerformanceLevel&&) = default;
                    constexpr GlobalNamespace__OVRManager__ProcessorPerformanceLevel& operator=(GlobalNamespace__OVRManager__ProcessorPerformanceLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__ProcessorPerformanceLevel& operator=(GlobalNamespace__OVRManager__ProcessorPerformanceLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__ProcessorPerformanceLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__ProcessorPerformanceLevel_Unwrapped : int32_t {
__PowerSavings = 0,
__SustainedLow = 1,
__SustainedHigh = 2,
__Boost = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__ProcessorPerformanceLevel_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__ProcessorPerformanceLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PowerSavings offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel const PowerSavings;

/// @brief Field SustainedLow offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel const SustainedLow;

/// @brief Field SustainedHigh offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel const SustainedHigh;

/// @brief Field Boost offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel const Boost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CompositionMethod
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8563))
// CS Name: OVRManager::CompositionMethod
struct CORDL_TYPE GlobalNamespace__OVRManager__CompositionMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__CompositionMethod(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__CompositionMethod(GlobalNamespace__OVRManager__CompositionMethod const&) = default;
                    constexpr GlobalNamespace__OVRManager__CompositionMethod(GlobalNamespace__OVRManager__CompositionMethod&&) = default;
                    constexpr GlobalNamespace__OVRManager__CompositionMethod& operator=(GlobalNamespace__OVRManager__CompositionMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__CompositionMethod& operator=(GlobalNamespace__OVRManager__CompositionMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__CompositionMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__CompositionMethod_Unwrapped : int32_t {
__External = 0,
__Direct = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__CompositionMethod_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__CompositionMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field External offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod const External;

/// @brief Field Direct offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod const Direct;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CameraDevice
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8564))
// CS Name: OVRManager::CameraDevice
struct CORDL_TYPE GlobalNamespace__OVRManager__CameraDevice : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__CameraDevice(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__CameraDevice(GlobalNamespace__OVRManager__CameraDevice const&) = default;
                    constexpr GlobalNamespace__OVRManager__CameraDevice(GlobalNamespace__OVRManager__CameraDevice&&) = default;
                    constexpr GlobalNamespace__OVRManager__CameraDevice& operator=(GlobalNamespace__OVRManager__CameraDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__CameraDevice& operator=(GlobalNamespace__OVRManager__CameraDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__CameraDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__CameraDevice_Unwrapped : int32_t {
__WebCamera0 = 0,
__WebCamera1 = 1,
__ZEDCamera = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__CameraDevice_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__CameraDevice_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field WebCamera0 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice const WebCamera0;

/// @brief Field WebCamera1 offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice const WebCamera1;

/// @brief Field ZEDCamera offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice const ZEDCamera;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DepthQuality
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8565))
// CS Name: OVRManager::DepthQuality
struct CORDL_TYPE GlobalNamespace__OVRManager__DepthQuality : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__DepthQuality(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__DepthQuality(GlobalNamespace__OVRManager__DepthQuality const&) = default;
                    constexpr GlobalNamespace__OVRManager__DepthQuality(GlobalNamespace__OVRManager__DepthQuality&&) = default;
                    constexpr GlobalNamespace__OVRManager__DepthQuality& operator=(GlobalNamespace__OVRManager__DepthQuality const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__DepthQuality& operator=(GlobalNamespace__OVRManager__DepthQuality&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__DepthQuality(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__DepthQuality_Unwrapped : int32_t {
__Low = 0,
__Medium = 1,
__High = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__DepthQuality_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__DepthQuality_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Low offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality const Low;

/// @brief Field Medium offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality const Medium;

/// @brief Field High offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality const High;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualGreenScreenType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8566))
// CS Name: OVRManager::VirtualGreenScreenType
struct CORDL_TYPE GlobalNamespace__OVRManager__VirtualGreenScreenType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__VirtualGreenScreenType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__VirtualGreenScreenType(GlobalNamespace__OVRManager__VirtualGreenScreenType const&) = default;
                    constexpr GlobalNamespace__OVRManager__VirtualGreenScreenType(GlobalNamespace__OVRManager__VirtualGreenScreenType&&) = default;
                    constexpr GlobalNamespace__OVRManager__VirtualGreenScreenType& operator=(GlobalNamespace__OVRManager__VirtualGreenScreenType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__VirtualGreenScreenType& operator=(GlobalNamespace__OVRManager__VirtualGreenScreenType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__VirtualGreenScreenType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__VirtualGreenScreenType_Unwrapped : int32_t {
__Off = 0,
__OuterBoundary = 1,
__PlayArea = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__VirtualGreenScreenType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__VirtualGreenScreenType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType const Off;

/// @brief Field OuterBoundary offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType const OuterBoundary;

/// @brief Field PlayArea offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType const PlayArea;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MrcActivationMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8567))
// CS Name: OVRManager::MrcActivationMode
struct CORDL_TYPE GlobalNamespace__OVRManager__MrcActivationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__MrcActivationMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__MrcActivationMode(GlobalNamespace__OVRManager__MrcActivationMode const&) = default;
                    constexpr GlobalNamespace__OVRManager__MrcActivationMode(GlobalNamespace__OVRManager__MrcActivationMode&&) = default;
                    constexpr GlobalNamespace__OVRManager__MrcActivationMode& operator=(GlobalNamespace__OVRManager__MrcActivationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__MrcActivationMode& operator=(GlobalNamespace__OVRManager__MrcActivationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__MrcActivationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__MrcActivationMode_Unwrapped : int32_t {
__Automatic = 0,
__Disabled = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__MrcActivationMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__MrcActivationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Automatic offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode const Automatic;

/// @brief Field Disabled offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MrcCameraType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8568))
// CS Name: OVRManager::MrcCameraType
struct CORDL_TYPE GlobalNamespace__OVRManager__MrcCameraType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__MrcCameraType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__MrcCameraType(GlobalNamespace__OVRManager__MrcCameraType const&) = default;
                    constexpr GlobalNamespace__OVRManager__MrcCameraType(GlobalNamespace__OVRManager__MrcCameraType&&) = default;
                    constexpr GlobalNamespace__OVRManager__MrcCameraType& operator=(GlobalNamespace__OVRManager__MrcCameraType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__MrcCameraType& operator=(GlobalNamespace__OVRManager__MrcCameraType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__MrcCameraType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__MrcCameraType_Unwrapped : int32_t {
__Normal = 0,
__Foreground = 1,
__Background = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__MrcCameraType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__MrcCameraType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType const Normal;

/// @brief Field Foreground offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType const Foreground;

/// @brief Field Background offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType const Background;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InstantiateMrcCameraDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8569))
// CS Name: OVRManager::InstantiateMrcCameraDelegate
class CORDL_TYPE GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate(GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate(GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate& operator=(GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate& operator=(GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x25ff13c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x25ff214 size 0x14 virtual true final false
 UnityEngine::GameObject Invoke(UnityEngine::GameObject mainCameraGameObject, GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType cameraType) ;

/// @brief Method BeginInvoke addr 0x25ff228 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::GameObject mainCameraGameObject, GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType cameraType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x25ff2bc size 0xc virtual true final false
 UnityEngine::GameObject EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PassthroughInitializationState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8570))
// CS Name: OVRManager::PassthroughInitializationState
struct CORDL_TYPE GlobalNamespace__OVRManager__PassthroughInitializationState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRManager__PassthroughInitializationState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRManager__PassthroughInitializationState(GlobalNamespace__OVRManager__PassthroughInitializationState const&) = default;
                    constexpr GlobalNamespace__OVRManager__PassthroughInitializationState(GlobalNamespace__OVRManager__PassthroughInitializationState&&) = default;
                    constexpr GlobalNamespace__OVRManager__PassthroughInitializationState& operator=(GlobalNamespace__OVRManager__PassthroughInitializationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRManager__PassthroughInitializationState& operator=(GlobalNamespace__OVRManager__PassthroughInitializationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__PassthroughInitializationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRManager__PassthroughInitializationState_Unwrapped : int32_t {
__Unspecified = 0,
__Pending = 1,
__Initialized = 2,
__Failed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRManager__PassthroughInitializationState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRManager__PassthroughInitializationState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unspecified offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState const Unspecified;

/// @brief Field Pending offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState const Pending;

/// @brief Field Initialized offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState const Initialized;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PassthroughCapabilities
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8571))
// CS Name: OVRManager::PassthroughCapabilities
class CORDL_TYPE GlobalNamespace__OVRManager__PassthroughCapabilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OVRManager__PassthroughCapabilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager__PassthroughCapabilities", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRManager__PassthroughCapabilities(GlobalNamespace__OVRManager__PassthroughCapabilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager__PassthroughCapabilities", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRManager__PassthroughCapabilities(GlobalNamespace__OVRManager__PassthroughCapabilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager__PassthroughCapabilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRManager__PassthroughCapabilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager__PassthroughCapabilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager__PassthroughCapabilities& operator=(GlobalNamespace__OVRManager__PassthroughCapabilities&& o) noexcept = default;
  constexpr GlobalNamespace__OVRManager__PassthroughCapabilities& operator=(GlobalNamespace__OVRManager__PassthroughCapabilities const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__SupportsPassthrough_k__BackingField, put=__set__SupportsPassthrough_k__BackingField))  _SupportsPassthrough_k__BackingField;

constexpr void __set__SupportsPassthrough_k__BackingField(bool value) ;

constexpr bool __get__SupportsPassthrough_k__BackingField() const;

 bool __declspec(property(get=__get__SupportsColorPassthrough_k__BackingField, put=__set__SupportsColorPassthrough_k__BackingField))  _SupportsColorPassthrough_k__BackingField;

constexpr void __set__SupportsColorPassthrough_k__BackingField(bool value) ;

constexpr bool __get__SupportsColorPassthrough_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_SupportsPassthrough))  SupportsPassthrough;

 bool __declspec(property(get=get_SupportsColorPassthrough))  SupportsColorPassthrough;


// Methods

/// @brief Method get_SupportsPassthrough addr 0x25ff2c8 size 0x8 virtual false final false
 bool get_SupportsPassthrough() ;

/// @brief Method get_SupportsColorPassthrough addr 0x25ff2d0 size 0x8 virtual false final false
 bool get_SupportsColorPassthrough() ;

// Ctor Parameters [CppParam { name: "supportsPassthrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportsColorPassthrough", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRManager__PassthroughCapabilities(bool supportsPassthrough, bool supportsColorPassthrough) ;

/// @brief Method .ctor addr 0x25ff2d8 size 0x30 virtual false final false
 void _ctor(bool supportsPassthrough, bool supportsColorPassthrough) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8572))
// CS Name: OVRManager::<>c
class CORDL_TYPE GlobalNamespace__OVRManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRManager____c(GlobalNamespace__OVRManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRManager____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRManager____c(GlobalNamespace__OVRManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRManager____c& operator=(GlobalNamespace__OVRManager____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRManager____c& operator=(GlobalNamespace__OVRManager____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRManager____c value) ;

static GlobalNamespace::GlobalNamespace__OVRManager____c __get___9() ;

static System::Func_2<float_t,::StringW> __declspec(property(get=__get___9__397_0, put=__set___9__397_0))  __9__397_0;

static void __set___9__397_0(System::Func_2<float_t,::StringW> value) ;

static System::Func_2<float_t,::StringW> __get___9__397_0() ;

static System::Comparison_1<UnityEngine::Camera> __declspec(property(get=__get___9__413_0, put=__set___9__413_0))  __9__413_0;

static void __set___9__413_0(System::Comparison_1<UnityEngine::Camera> value) ;

static System::Comparison_1<UnityEngine::Camera> __get___9__413_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRManager____c() ;

/// @brief Method .ctor addr 0x25ff36c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitOVRManager>b__397_0 addr 0x25ff374 size 0x1c virtual false final false
 ::StringW _InitOVRManager_b__397_0(float_t f) ;

/// @brief Method <FindMainCamera>b__413_0 addr 0x25ff390 size 0x80 virtual false final false
 int32_t _FindMainCamera_b__413_0(UnityEngine::Camera c0, UnityEngine::Camera c1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8573))
// CS Name: OVRManager
class CORDL_TYPE OVRManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRManager____c;

using PassthroughCapabilities = GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities;

using PassthroughInitializationState = GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState;

using InstantiateMrcCameraDelegate = GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate;

using MrcCameraType = GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType;

using MrcActivationMode = GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode;

using VirtualGreenScreenType = GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType;

using DepthQuality = GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality;

using CameraDevice = GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice;

using CompositionMethod = GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod;

using ProcessorPerformanceLevel = GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel;

using ColorSpace = GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace;

using XRDevice = GlobalNamespace::GlobalNamespace__OVRManager__XRDevice;

using SystemHeadsetType = GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType;

using TiledMultiResLevel = GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel;

using FixedFoveatedRenderingLevel = GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel;

using FoveatedRenderingLevel = GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel;

using EyeTextureFormat = GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat;

using TrackingOrigin = GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin;

using XrApi = GlobalNamespace::GlobalNamespace__OVRManager__XrApi;

/// @brief Convert operator to GlobalNamespace::OVRMixedRealityCaptureConfiguration
constexpr operator  GlobalNamespace::OVRMixedRealityCaptureConfiguration() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~OVRManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: " const&", def_value: None }]
constexpr OVRManager(OVRManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: "&&", def_value: None }]
constexpr OVRManager(OVRManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRManager& operator=(OVRManager&& o) noexcept = default;
  constexpr OVRManager& operator=(OVRManager const& o) noexcept = default;
                


// Fields

static GlobalNamespace::OVRManager __declspec(property(get=__get__instance_k__BackingField, put=__set__instance_k__BackingField))  _instance_k__BackingField;

static void __set__instance_k__BackingField(GlobalNamespace::OVRManager value) ;

static GlobalNamespace::OVRManager __get__instance_k__BackingField() ;

static GlobalNamespace::OVRDisplay __declspec(property(get=__get__display_k__BackingField, put=__set__display_k__BackingField))  _display_k__BackingField;

static void __set__display_k__BackingField(GlobalNamespace::OVRDisplay value) ;

static GlobalNamespace::OVRDisplay __get__display_k__BackingField() ;

static GlobalNamespace::OVRTracker __declspec(property(get=__get__tracker_k__BackingField, put=__set__tracker_k__BackingField))  _tracker_k__BackingField;

static void __set__tracker_k__BackingField(GlobalNamespace::OVRTracker value) ;

static GlobalNamespace::OVRTracker __get__tracker_k__BackingField() ;

static GlobalNamespace::OVRBoundary __declspec(property(get=__get__boundary_k__BackingField, put=__set__boundary_k__BackingField))  _boundary_k__BackingField;

static void __set__boundary_k__BackingField(GlobalNamespace::OVRBoundary value) ;

static GlobalNamespace::OVRBoundary __get__boundary_k__BackingField() ;

static GlobalNamespace::OVRRuntimeSettings __declspec(property(get=__get__runtimeSettings_k__BackingField, put=__set__runtimeSettings_k__BackingField))  _runtimeSettings_k__BackingField;

static void __set__runtimeSettings_k__BackingField(GlobalNamespace::OVRRuntimeSettings value) ;

static GlobalNamespace::OVRRuntimeSettings __get__runtimeSettings_k__BackingField() ;

static GlobalNamespace::OVRProfile __declspec(property(get=__get__profile, put=__set__profile))  _profile;

static void __set__profile(GlobalNamespace::OVRProfile value) ;

static GlobalNamespace::OVRProfile __get__profile() ;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Camera> __declspec(property(get=__get_disabledCameras, put=__set_disabledCameras))  disabledCameras;

constexpr void __set_disabledCameras(System::Collections::Generic::IEnumerable_1<UnityEngine::Camera> value) ;

constexpr System::Collections::Generic::IEnumerable_1<UnityEngine::Camera> __get_disabledCameras() const;

 float_t __declspec(property(get=__get_prevTimeScale, put=__set_prevTimeScale))  prevTimeScale;

constexpr void __set_prevTimeScale(float_t value) ;

constexpr float_t __get_prevTimeScale() const;

static System::Action __declspec(property(get=__get_HMDAcquired, put=__set_HMDAcquired))  HMDAcquired;

static void __set_HMDAcquired(System::Action value) ;

static System::Action __get_HMDAcquired() ;

static System::Action __declspec(property(get=__get_HMDLost, put=__set_HMDLost))  HMDLost;

static void __set_HMDLost(System::Action value) ;

static System::Action __get_HMDLost() ;

static System::Action __declspec(property(get=__get_HMDMounted, put=__set_HMDMounted))  HMDMounted;

static void __set_HMDMounted(System::Action value) ;

static System::Action __get_HMDMounted() ;

static System::Action __declspec(property(get=__get_HMDUnmounted, put=__set_HMDUnmounted))  HMDUnmounted;

static void __set_HMDUnmounted(System::Action value) ;

static System::Action __get_HMDUnmounted() ;

static System::Action __declspec(property(get=__get_VrFocusAcquired, put=__set_VrFocusAcquired))  VrFocusAcquired;

static void __set_VrFocusAcquired(System::Action value) ;

static System::Action __get_VrFocusAcquired() ;

static System::Action __declspec(property(get=__get_VrFocusLost, put=__set_VrFocusLost))  VrFocusLost;

static void __set_VrFocusLost(System::Action value) ;

static System::Action __get_VrFocusLost() ;

static System::Action __declspec(property(get=__get_InputFocusAcquired, put=__set_InputFocusAcquired))  InputFocusAcquired;

static void __set_InputFocusAcquired(System::Action value) ;

static System::Action __get_InputFocusAcquired() ;

static System::Action __declspec(property(get=__get_InputFocusLost, put=__set_InputFocusLost))  InputFocusLost;

static void __set_InputFocusLost(System::Action value) ;

static System::Action __get_InputFocusLost() ;

static System::Action __declspec(property(get=__get_AudioOutChanged, put=__set_AudioOutChanged))  AudioOutChanged;

static void __set_AudioOutChanged(System::Action value) ;

static System::Action __get_AudioOutChanged() ;

static System::Action __declspec(property(get=__get_AudioInChanged, put=__set_AudioInChanged))  AudioInChanged;

static void __set_AudioInChanged(System::Action value) ;

static System::Action __get_AudioInChanged() ;

static System::Action __declspec(property(get=__get_TrackingAcquired, put=__set_TrackingAcquired))  TrackingAcquired;

static void __set_TrackingAcquired(System::Action value) ;

static System::Action __get_TrackingAcquired() ;

static System::Action __declspec(property(get=__get_TrackingLost, put=__set_TrackingLost))  TrackingLost;

static void __set_TrackingLost(System::Action value) ;

static System::Action __get_TrackingLost() ;

static System::Action_2<float_t,float_t> __declspec(property(get=__get_DisplayRefreshRateChanged, put=__set_DisplayRefreshRateChanged))  DisplayRefreshRateChanged;

static void __set_DisplayRefreshRateChanged(System::Action_2<float_t,float_t> value) ;

static System::Action_2<float_t,float_t> __get_DisplayRefreshRateChanged() ;

static System::Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> __declspec(property(get=__get_SpatialAnchorCreateComplete, put=__set_SpatialAnchorCreateComplete))  SpatialAnchorCreateComplete;

static void __set_SpatialAnchorCreateComplete(System::Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> value) ;

static System::Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> __get_SpatialAnchorCreateComplete() ;

static System::Action_6<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType,bool> __declspec(property(get=__get_SpaceSetComponentStatusComplete, put=__set_SpaceSetComponentStatusComplete))  SpaceSetComponentStatusComplete;

static void __set_SpaceSetComponentStatusComplete(System::Action_6<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value) ;

static System::Action_6<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType,bool> __get_SpaceSetComponentStatusComplete() ;

static System::Action_1<uint64_t> __declspec(property(get=__get_SpaceQueryResults, put=__set_SpaceQueryResults))  SpaceQueryResults;

static void __set_SpaceQueryResults(System::Action_1<uint64_t> value) ;

static System::Action_1<uint64_t> __get_SpaceQueryResults() ;

static System::Action_2<uint64_t,bool> __declspec(property(get=__get_SpaceQueryComplete, put=__set_SpaceQueryComplete))  SpaceQueryComplete;

static void __set_SpaceQueryComplete(System::Action_2<uint64_t,bool> value) ;

static System::Action_2<uint64_t,bool> __get_SpaceQueryComplete() ;

static System::Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> __declspec(property(get=__get_SpaceSaveComplete, put=__set_SpaceSaveComplete))  SpaceSaveComplete;

static void __set_SpaceSaveComplete(System::Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> value) ;

static System::Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> __get_SpaceSaveComplete() ;

static System::Action_4<uint64_t,bool,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation> __declspec(property(get=__get_SpaceEraseComplete, put=__set_SpaceEraseComplete))  SpaceEraseComplete;

static void __set_SpaceEraseComplete(System::Action_4<uint64_t,bool,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation> value) ;

static System::Action_4<uint64_t,bool,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation> __get_SpaceEraseComplete() ;

static System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __declspec(property(get=__get_ShareSpacesComplete, put=__set_ShareSpacesComplete))  ShareSpacesComplete;

static void __set_ShareSpacesComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

static System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __get_ShareSpacesComplete() ;

static System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __declspec(property(get=__get_SpaceListSaveComplete, put=__set_SpaceListSaveComplete))  SpaceListSaveComplete;

static void __set_SpaceListSaveComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

static System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __get_SpaceListSaveComplete() ;

static System::Action_2<uint64_t,bool> __declspec(property(get=__get_SceneCaptureComplete, put=__set_SceneCaptureComplete))  SceneCaptureComplete;

static void __set_SceneCaptureComplete(System::Action_2<uint64_t,bool> value) ;

static System::Action_2<uint64_t,bool> __get_SceneCaptureComplete() ;

static System::Action __declspec(property(get=__get_HSWDismissed, put=__set_HSWDismissed))  HSWDismissed;

static void __set_HSWDismissed(System::Action value) ;

static System::Action __get_HSWDismissed() ;

static bool __declspec(property(get=__get__isHmdPresentCached, put=__set__isHmdPresentCached))  _isHmdPresentCached;

static void __set__isHmdPresentCached(bool value) ;

static bool __get__isHmdPresentCached() ;

static bool __declspec(property(get=__get__isHmdPresent, put=__set__isHmdPresent))  _isHmdPresent;

static void __set__isHmdPresent(bool value) ;

static bool __get__isHmdPresent() ;

static bool __declspec(property(get=__get__wasHmdPresent, put=__set__wasHmdPresent))  _wasHmdPresent;

static void __set__wasHmdPresent(bool value) ;

static bool __get__wasHmdPresent() ;

static bool __declspec(property(get=__get__hasVrFocusCached, put=__set__hasVrFocusCached))  _hasVrFocusCached;

static void __set__hasVrFocusCached(bool value) ;

static bool __get__hasVrFocusCached() ;

static bool __declspec(property(get=__get__hasVrFocus, put=__set__hasVrFocus))  _hasVrFocus;

static void __set__hasVrFocus(bool value) ;

static bool __get__hasVrFocus() ;

static bool __declspec(property(get=__get__hadVrFocus, put=__set__hadVrFocus))  _hadVrFocus;

static void __set__hadVrFocus(bool value) ;

static bool __get__hadVrFocus() ;

static bool __declspec(property(get=__get__hadInputFocus, put=__set__hadInputFocus))  _hadInputFocus;

static void __set__hadInputFocus(bool value) ;

static bool __get__hadInputFocus() ;

 bool __declspec(property(get=__get_useRecommendedMSAALevel, put=__set_useRecommendedMSAALevel))  useRecommendedMSAALevel;

constexpr void __set_useRecommendedMSAALevel(bool value) ;

constexpr bool __get_useRecommendedMSAALevel() const;

 bool __declspec(property(get=__get__monoscopic, put=__set__monoscopic))  _monoscopic;

constexpr void __set__monoscopic(bool value) ;

constexpr bool __get__monoscopic() const;

 GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace __declspec(property(get=__get__colorGamut, put=__set__colorGamut))  _colorGamut;

constexpr void __set__colorGamut(GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace __get__colorGamut() const;

 float_t __declspec(property(get=__get_minRenderScale, put=__set_minRenderScale))  minRenderScale;

constexpr void __set_minRenderScale(float_t value) ;

constexpr float_t __get_minRenderScale() const;

 float_t __declspec(property(get=__get_maxRenderScale, put=__set_maxRenderScale))  maxRenderScale;

constexpr void __set_maxRenderScale(float_t value) ;

constexpr float_t __get_maxRenderScale() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headPoseRelativeOffsetRotation, put=__set__headPoseRelativeOffsetRotation))  _headPoseRelativeOffsetRotation;

constexpr void __set__headPoseRelativeOffsetRotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headPoseRelativeOffsetRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headPoseRelativeOffsetTranslation, put=__set__headPoseRelativeOffsetTranslation))  _headPoseRelativeOffsetTranslation;

constexpr void __set__headPoseRelativeOffsetTranslation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headPoseRelativeOffsetTranslation() const;

 int32_t __declspec(property(get=__get_profilerTcpPort, put=__set_profilerTcpPort))  profilerTcpPort;

constexpr void __set_profilerTcpPort(int32_t value) ;

constexpr int32_t __get_profilerTcpPort() const;

 bool __declspec(property(get=__get_expandMixedRealityCapturePropertySheet, put=__set_expandMixedRealityCapturePropertySheet))  expandMixedRealityCapturePropertySheet;

constexpr void __set_expandMixedRealityCapturePropertySheet(bool value) ;

constexpr bool __get_expandMixedRealityCapturePropertySheet() const;

 bool __declspec(property(get=__get_enableMixedReality, put=__set_enableMixedReality))  enableMixedReality;

constexpr void __set_enableMixedReality(bool value) ;

constexpr bool __get_enableMixedReality() const;

 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=__get_compositionMethod, put=__set_compositionMethod))  compositionMethod;

constexpr void __set_compositionMethod(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __get_compositionMethod() const;

 UnityEngine::LayerMask __declspec(property(get=__get_extraHiddenLayers, put=__set_extraHiddenLayers))  extraHiddenLayers;

constexpr void __set_extraHiddenLayers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_extraHiddenLayers() const;

 UnityEngine::LayerMask __declspec(property(get=__get_extraVisibleLayers, put=__set_extraVisibleLayers))  extraVisibleLayers;

constexpr void __set_extraVisibleLayers(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_extraVisibleLayers() const;

 bool __declspec(property(get=__get_dynamicCullingMask, put=__set_dynamicCullingMask))  dynamicCullingMask;

constexpr void __set_dynamicCullingMask(bool value) ;

constexpr bool __get_dynamicCullingMask() const;

 UnityEngine::Color __declspec(property(get=__get_externalCompositionBackdropColorRift, put=__set_externalCompositionBackdropColorRift))  externalCompositionBackdropColorRift;

constexpr void __set_externalCompositionBackdropColorRift(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_externalCompositionBackdropColorRift() const;

 UnityEngine::Color __declspec(property(get=__get_externalCompositionBackdropColorQuest, put=__set_externalCompositionBackdropColorQuest))  externalCompositionBackdropColorQuest;

constexpr void __set_externalCompositionBackdropColorQuest(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_externalCompositionBackdropColorQuest() const;

 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=__get_capturingCameraDevice, put=__set_capturingCameraDevice))  capturingCameraDevice;

constexpr void __set_capturingCameraDevice(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __get_capturingCameraDevice() const;

 bool __declspec(property(get=__get_flipCameraFrameHorizontally, put=__set_flipCameraFrameHorizontally))  flipCameraFrameHorizontally;

constexpr void __set_flipCameraFrameHorizontally(bool value) ;

constexpr bool __get_flipCameraFrameHorizontally() const;

 bool __declspec(property(get=__get_flipCameraFrameVertically, put=__set_flipCameraFrameVertically))  flipCameraFrameVertically;

constexpr void __set_flipCameraFrameVertically(bool value) ;

constexpr bool __get_flipCameraFrameVertically() const;

 float_t __declspec(property(get=__get_handPoseStateLatency, put=__set_handPoseStateLatency))  handPoseStateLatency;

constexpr void __set_handPoseStateLatency(float_t value) ;

constexpr float_t __get_handPoseStateLatency() const;

 float_t __declspec(property(get=__get_sandwichCompositionRenderLatency, put=__set_sandwichCompositionRenderLatency))  sandwichCompositionRenderLatency;

constexpr void __set_sandwichCompositionRenderLatency(float_t value) ;

constexpr float_t __get_sandwichCompositionRenderLatency() const;

 int32_t __declspec(property(get=__get_sandwichCompositionBufferedFrames, put=__set_sandwichCompositionBufferedFrames))  sandwichCompositionBufferedFrames;

constexpr void __set_sandwichCompositionBufferedFrames(int32_t value) ;

constexpr int32_t __get_sandwichCompositionBufferedFrames() const;

 UnityEngine::Color __declspec(property(get=__get_chromaKeyColor, put=__set_chromaKeyColor))  chromaKeyColor;

constexpr void __set_chromaKeyColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_chromaKeyColor() const;

 float_t __declspec(property(get=__get_chromaKeySimilarity, put=__set_chromaKeySimilarity))  chromaKeySimilarity;

constexpr void __set_chromaKeySimilarity(float_t value) ;

constexpr float_t __get_chromaKeySimilarity() const;

 float_t __declspec(property(get=__get_chromaKeySmoothRange, put=__set_chromaKeySmoothRange))  chromaKeySmoothRange;

constexpr void __set_chromaKeySmoothRange(float_t value) ;

constexpr float_t __get_chromaKeySmoothRange() const;

 float_t __declspec(property(get=__get_chromaKeySpillRange, put=__set_chromaKeySpillRange))  chromaKeySpillRange;

constexpr void __set_chromaKeySpillRange(float_t value) ;

constexpr float_t __get_chromaKeySpillRange() const;

 bool __declspec(property(get=__get_useDynamicLighting, put=__set_useDynamicLighting))  useDynamicLighting;

constexpr void __set_useDynamicLighting(bool value) ;

constexpr bool __get_useDynamicLighting() const;

 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=__get_depthQuality, put=__set_depthQuality))  depthQuality;

constexpr void __set_depthQuality(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __get_depthQuality() const;

 float_t __declspec(property(get=__get_dynamicLightingSmoothFactor, put=__set_dynamicLightingSmoothFactor))  dynamicLightingSmoothFactor;

constexpr void __set_dynamicLightingSmoothFactor(float_t value) ;

constexpr float_t __get_dynamicLightingSmoothFactor() const;

 float_t __declspec(property(get=__get_dynamicLightingDepthVariationClampingValue, put=__set_dynamicLightingDepthVariationClampingValue))  dynamicLightingDepthVariationClampingValue;

constexpr void __set_dynamicLightingDepthVariationClampingValue(float_t value) ;

constexpr float_t __get_dynamicLightingDepthVariationClampingValue() const;

 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=__get_virtualGreenScreenType, put=__set_virtualGreenScreenType))  virtualGreenScreenType;

constexpr void __set_virtualGreenScreenType(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __get_virtualGreenScreenType() const;

 float_t __declspec(property(get=__get_virtualGreenScreenTopY, put=__set_virtualGreenScreenTopY))  virtualGreenScreenTopY;

constexpr void __set_virtualGreenScreenTopY(float_t value) ;

constexpr float_t __get_virtualGreenScreenTopY() const;

 float_t __declspec(property(get=__get_virtualGreenScreenBottomY, put=__set_virtualGreenScreenBottomY))  virtualGreenScreenBottomY;

constexpr void __set_virtualGreenScreenBottomY(float_t value) ;

constexpr float_t __get_virtualGreenScreenBottomY() const;

 bool __declspec(property(get=__get_virtualGreenScreenApplyDepthCulling, put=__set_virtualGreenScreenApplyDepthCulling))  virtualGreenScreenApplyDepthCulling;

constexpr void __set_virtualGreenScreenApplyDepthCulling(bool value) ;

constexpr bool __get_virtualGreenScreenApplyDepthCulling() const;

 float_t __declspec(property(get=__get_virtualGreenScreenDepthTolerance, put=__set_virtualGreenScreenDepthTolerance))  virtualGreenScreenDepthTolerance;

constexpr void __set_virtualGreenScreenDepthTolerance(float_t value) ;

constexpr float_t __get_virtualGreenScreenDepthTolerance() const;

 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=__get_mrcActivationMode, put=__set_mrcActivationMode))  mrcActivationMode;

constexpr void __set_mrcActivationMode(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __get_mrcActivationMode() const;

 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=__get_instantiateMixedRealityCameraGameObject, put=__set_instantiateMixedRealityCameraGameObject))  instantiateMixedRealityCameraGameObject;

constexpr void __set_instantiateMixedRealityCameraGameObject(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __get_instantiateMixedRealityCameraGameObject() const;

 bool __declspec(property(get=__get_isInsightPassthroughEnabled, put=__set_isInsightPassthroughEnabled))  isInsightPassthroughEnabled;

constexpr void __set_isInsightPassthroughEnabled(bool value) ;

constexpr bool __get_isInsightPassthroughEnabled() const;

 bool __declspec(property(get=__get_requestBodyTrackingPermissionOnStartup, put=__set_requestBodyTrackingPermissionOnStartup))  requestBodyTrackingPermissionOnStartup;

constexpr void __set_requestBodyTrackingPermissionOnStartup(bool value) ;

constexpr bool __get_requestBodyTrackingPermissionOnStartup() const;

 bool __declspec(property(get=__get_requestFaceTrackingPermissionOnStartup, put=__set_requestFaceTrackingPermissionOnStartup))  requestFaceTrackingPermissionOnStartup;

constexpr void __set_requestFaceTrackingPermissionOnStartup(bool value) ;

constexpr bool __get_requestFaceTrackingPermissionOnStartup() const;

 bool __declspec(property(get=__get_requestEyeTrackingPermissionOnStartup, put=__set_requestEyeTrackingPermissionOnStartup))  requestEyeTrackingPermissionOnStartup;

constexpr void __set_requestEyeTrackingPermissionOnStartup(bool value) ;

constexpr bool __get_requestEyeTrackingPermissionOnStartup() const;

static ::StringW __declspec(property(get=__get_OCULUS_UNITY_NAME_STR, put=__set_OCULUS_UNITY_NAME_STR))  OCULUS_UNITY_NAME_STR;

static void __set_OCULUS_UNITY_NAME_STR(::StringW value) ;

static ::StringW __get_OCULUS_UNITY_NAME_STR() ;

static ::StringW __declspec(property(get=__get_OPENVR_UNITY_NAME_STR, put=__set_OPENVR_UNITY_NAME_STR))  OPENVR_UNITY_NAME_STR;

static void __set_OPENVR_UNITY_NAME_STR(::StringW value) ;

static ::StringW __get_OPENVR_UNITY_NAME_STR() ;

static GlobalNamespace::GlobalNamespace__OVRManager__XRDevice __declspec(property(get=__get_loadedXRDevice, put=__set_loadedXRDevice))  loadedXRDevice;

static void __set_loadedXRDevice(GlobalNamespace::GlobalNamespace__OVRManager__XRDevice value) ;

static GlobalNamespace::GlobalNamespace__OVRManager__XRDevice __get_loadedXRDevice() ;

static UnityEngine::Vector3 __declspec(property(get=__get_OpenVRTouchRotationOffsetEulerLeft, put=__set_OpenVRTouchRotationOffsetEulerLeft))  OpenVRTouchRotationOffsetEulerLeft;

static void __set_OpenVRTouchRotationOffsetEulerLeft(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_OpenVRTouchRotationOffsetEulerLeft() ;

static UnityEngine::Vector3 __declspec(property(get=__get_OpenVRTouchRotationOffsetEulerRight, put=__set_OpenVRTouchRotationOffsetEulerRight))  OpenVRTouchRotationOffsetEulerRight;

static void __set_OpenVRTouchRotationOffsetEulerRight(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_OpenVRTouchRotationOffsetEulerRight() ;

static UnityEngine::Vector3 __declspec(property(get=__get_OpenVRTouchPositionOffsetLeft, put=__set_OpenVRTouchPositionOffsetLeft))  OpenVRTouchPositionOffsetLeft;

static void __set_OpenVRTouchPositionOffsetLeft(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_OpenVRTouchPositionOffsetLeft() ;

static UnityEngine::Vector3 __declspec(property(get=__get_OpenVRTouchPositionOffsetRight, put=__set_OpenVRTouchPositionOffsetRight))  OpenVRTouchPositionOffsetRight;

static void __set_OpenVRTouchPositionOffsetRight(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_OpenVRTouchPositionOffsetRight() ;

static bool __declspec(property(get=__get_m_SpaceWarpEnabled, put=__set_m_SpaceWarpEnabled))  m_SpaceWarpEnabled;

static void __set_m_SpaceWarpEnabled(bool value) ;

static bool __get_m_SpaceWarpEnabled() ;

static UnityEngine::Transform __declspec(property(get=__get_m_AppSpaceTransform, put=__set_m_AppSpaceTransform))  m_AppSpaceTransform;

static void __set_m_AppSpaceTransform(UnityEngine::Transform value) ;

static UnityEngine::Transform __get_m_AppSpaceTransform() ;

static UnityEngine::DepthTextureMode __declspec(property(get=__get_m_CachedDepthTextureMode, put=__set_m_CachedDepthTextureMode))  m_CachedDepthTextureMode;

static void __set_m_CachedDepthTextureMode(UnityEngine::DepthTextureMode value) ;

static UnityEngine::DepthTextureMode __get_m_CachedDepthTextureMode() ;

 bool __declspec(property(get=__get__localDimming, put=__set__localDimming))  _localDimming;

constexpr void __set__localDimming(bool value) ;

constexpr bool __get__localDimming() const;

 GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin __declspec(property(get=__get__trackingOriginType, put=__set__trackingOriginType))  _trackingOriginType;

constexpr void __set__trackingOriginType(GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin __get__trackingOriginType() const;

 bool __declspec(property(get=__get_usePositionTracking, put=__set_usePositionTracking))  usePositionTracking;

constexpr void __set_usePositionTracking(bool value) ;

constexpr bool __get_usePositionTracking() const;

 bool __declspec(property(get=__get_useRotationTracking, put=__set_useRotationTracking))  useRotationTracking;

constexpr void __set_useRotationTracking(bool value) ;

constexpr bool __get_useRotationTracking() const;

 bool __declspec(property(get=__get_useIPDInPositionTracking, put=__set_useIPDInPositionTracking))  useIPDInPositionTracking;

constexpr void __set_useIPDInPositionTracking(bool value) ;

constexpr bool __get_useIPDInPositionTracking() const;

 bool __declspec(property(get=__get_resetTrackerOnLoad, put=__set_resetTrackerOnLoad))  resetTrackerOnLoad;

constexpr void __set_resetTrackerOnLoad(bool value) ;

constexpr bool __get_resetTrackerOnLoad() const;

 bool __declspec(property(get=__get_AllowRecenter, put=__set_AllowRecenter))  AllowRecenter;

constexpr void __set_AllowRecenter(bool value) ;

constexpr bool __get_AllowRecenter() const;

 bool __declspec(property(get=__get_LateControllerUpdate, put=__set_LateControllerUpdate))  LateControllerUpdate;

constexpr void __set_LateControllerUpdate(bool value) ;

constexpr bool __get_LateControllerUpdate() const;

 bool __declspec(property(get=__get_LateLatching, put=__set_LateLatching))  LateLatching;

constexpr void __set_LateLatching(bool value) ;

constexpr bool __get_LateLatching() const;

 bool __declspec(property(get=__get__isSupportedPlatform_k__BackingField, put=__set__isSupportedPlatform_k__BackingField))  _isSupportedPlatform_k__BackingField;

constexpr void __set__isSupportedPlatform_k__BackingField(bool value) ;

constexpr bool __get__isSupportedPlatform_k__BackingField() const;

static bool __declspec(property(get=__get__isUserPresentCached, put=__set__isUserPresentCached))  _isUserPresentCached;

static void __set__isUserPresentCached(bool value) ;

static bool __get__isUserPresentCached() ;

static bool __declspec(property(get=__get__isUserPresent, put=__set__isUserPresent))  _isUserPresent;

static void __set__isUserPresent(bool value) ;

static bool __get__isUserPresent() ;

static bool __declspec(property(get=__get__wasUserPresent, put=__set__wasUserPresent))  _wasUserPresent;

static void __set__wasUserPresent(bool value) ;

static bool __get__wasUserPresent() ;

static bool __declspec(property(get=__get_prevAudioOutIdIsCached, put=__set_prevAudioOutIdIsCached))  prevAudioOutIdIsCached;

static void __set_prevAudioOutIdIsCached(bool value) ;

static bool __get_prevAudioOutIdIsCached() ;

static bool __declspec(property(get=__get_prevAudioInIdIsCached, put=__set_prevAudioInIdIsCached))  prevAudioInIdIsCached;

static void __set_prevAudioInIdIsCached(bool value) ;

static bool __get_prevAudioInIdIsCached() ;

static ::StringW __declspec(property(get=__get_prevAudioOutId, put=__set_prevAudioOutId))  prevAudioOutId;

static void __set_prevAudioOutId(::StringW value) ;

static ::StringW __get_prevAudioOutId() ;

static ::StringW __declspec(property(get=__get_prevAudioInId, put=__set_prevAudioInId))  prevAudioInId;

static void __set_prevAudioInId(::StringW value) ;

static ::StringW __get_prevAudioInId() ;

static bool __declspec(property(get=__get_wasPositionTracked, put=__set_wasPositionTracked))  wasPositionTracked;

static void __set_wasPositionTracked(bool value) ;

static bool __get_wasPositionTracked() ;

static GlobalNamespace::GlobalNamespace__OVRPlugin__EventDataBuffer __declspec(property(get=__get_eventDataBuffer, put=__set_eventDataBuffer))  eventDataBuffer;

static void __set_eventDataBuffer(GlobalNamespace::GlobalNamespace__OVRPlugin__EventDataBuffer value) ;

static GlobalNamespace::GlobalNamespace__OVRPlugin__EventDataBuffer __get_eventDataBuffer() ;

static ::StringW __declspec(property(get=__get_UnityAlphaOrBetaVersionWarningMessage, put=__set_UnityAlphaOrBetaVersionWarningMessage))  UnityAlphaOrBetaVersionWarningMessage;

static void __set_UnityAlphaOrBetaVersionWarningMessage(::StringW value) ;

static ::StringW __get_UnityAlphaOrBetaVersionWarningMessage() ;

static bool __declspec(property(get=__get_OVRManagerinitialized, put=__set_OVRManagerinitialized))  OVRManagerinitialized;

static void __set_OVRManagerinitialized(bool value) ;

static bool __get_OVRManagerinitialized() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> __declspec(property(get=__get_s_displaySubsystems, put=__set_s_displaySubsystems))  s_displaySubsystems;

static void __set_s_displaySubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> __get_s_displaySubsystems() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __declspec(property(get=__get_s_displaySubsystemDescriptors, put=__set_s_displaySubsystemDescriptors))  s_displaySubsystemDescriptors;

static void __set_s_displaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __get_s_displaySubsystemDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> __declspec(property(get=__get_s_inputSubsystems, put=__set_s_inputSubsystems))  s_inputSubsystems;

static void __set_s_inputSubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> __get_s_inputSubsystems() ;

static bool __declspec(property(get=__get_multipleMainCameraWarningPresented, put=__set_multipleMainCameraWarningPresented))  multipleMainCameraWarningPresented;

static void __set_multipleMainCameraWarningPresented(bool value) ;

static bool __get_multipleMainCameraWarningPresented() ;

static bool __declspec(property(get=__get_suppressUnableToFindMainCameraMessage, put=__set_suppressUnableToFindMainCameraMessage))  suppressUnableToFindMainCameraMessage;

static void __set_suppressUnableToFindMainCameraMessage(bool value) ;

static bool __get_suppressUnableToFindMainCameraMessage() ;

static System::WeakReference_1<UnityEngine::Camera> __declspec(property(get=__get_lastFoundMainCamera, put=__set_lastFoundMainCamera))  lastFoundMainCamera;

static void __set_lastFoundMainCamera(System::WeakReference_1<UnityEngine::Camera> value) ;

static System::WeakReference_1<UnityEngine::Camera> __get_lastFoundMainCamera() ;

static bool __declspec(property(get=__get_staticMixedRealityCaptureInitialized, put=__set_staticMixedRealityCaptureInitialized))  staticMixedRealityCaptureInitialized;

static void __set_staticMixedRealityCaptureInitialized(bool value) ;

static bool __get_staticMixedRealityCaptureInitialized() ;

static bool __declspec(property(get=__get_staticPrevEnableMixedRealityCapture, put=__set_staticPrevEnableMixedRealityCapture))  staticPrevEnableMixedRealityCapture;

static void __set_staticPrevEnableMixedRealityCapture(bool value) ;

static bool __get_staticPrevEnableMixedRealityCapture() ;

static GlobalNamespace::OVRMixedRealityCaptureSettings __declspec(property(get=__get_staticMrcSettings, put=__set_staticMrcSettings))  staticMrcSettings;

static void __set_staticMrcSettings(GlobalNamespace::OVRMixedRealityCaptureSettings value) ;

static GlobalNamespace::OVRMixedRealityCaptureSettings __get_staticMrcSettings() ;

static bool __declspec(property(get=__get_suppressDisableMixedRealityBecauseOfNoMainCameraWarning, put=__set_suppressDisableMixedRealityBecauseOfNoMainCameraWarning))  suppressDisableMixedRealityBecauseOfNoMainCameraWarning;

static void __set_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value) ;

static bool __get_suppressDisableMixedRealityBecauseOfNoMainCameraWarning() ;

static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState __declspec(property(get=__get__passthroughInitializationState, put=__set__passthroughInitializationState))  _passthroughInitializationState;

static void __set__passthroughInitializationState(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState value) ;

static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState __get__passthroughInitializationState() ;

static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities __declspec(property(get=__get__passthroughCapabilities, put=__set__passthroughCapabilities))  _passthroughCapabilities;

static void __set__passthroughCapabilities(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities value) ;

static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities __get__passthroughCapabilities() ;


// Properties

static GlobalNamespace::OVRManager __declspec(property(get=get_instance, put=set_instance))  instance;

static GlobalNamespace::OVRDisplay __declspec(property(get=get_display, put=set_display))  display;

static GlobalNamespace::OVRTracker __declspec(property(get=get_tracker, put=set_tracker))  tracker;

static GlobalNamespace::OVRBoundary __declspec(property(get=get_boundary, put=set_boundary))  boundary;

static GlobalNamespace::OVRRuntimeSettings __declspec(property(get=get_runtimeSettings, put=set_runtimeSettings))  runtimeSettings;

static GlobalNamespace::OVRProfile __declspec(property(get=get_profile))  profile;

static bool __declspec(property(get=get_isHmdPresent, put=set_isHmdPresent))  isHmdPresent;

static ::StringW __declspec(property(get=get_audioOutId))  audioOutId;

static ::StringW __declspec(property(get=get_audioInId))  audioInId;

static bool __declspec(property(get=get_hasVrFocus, put=set_hasVrFocus))  hasVrFocus;

static bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;

 bool __declspec(property(get=get_chromatic, put=set_chromatic))  chromatic;

 bool __declspec(property(get=get_monoscopic, put=set_monoscopic))  monoscopic;

 GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace __declspec(property(get=get_colorGamut, put=set_colorGamut))  colorGamut;

 GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace __declspec(property(get=get_nativeColorGamut))  nativeColorGamut;

 UnityEngine::Vector3 __declspec(property(get=get_headPoseRelativeOffsetRotation, put=set_headPoseRelativeOffsetRotation))  headPoseRelativeOffsetRotation;

 UnityEngine::Vector3 __declspec(property(get=get_headPoseRelativeOffsetTranslation, put=set_headPoseRelativeOffsetTranslation))  headPoseRelativeOffsetTranslation;

static bool __declspec(property(get=get_eyeFovPremultipliedAlphaModeEnabled, put=set_eyeFovPremultipliedAlphaModeEnabled))  eyeFovPremultipliedAlphaModeEnabled;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_enableMixedReality, put=OVRMixedRealityCaptureConfiguration_set_enableMixedReality))  OVRMixedRealityCaptureConfiguration_enableMixedReality;

 UnityEngine::LayerMask __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers, put=OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers))  OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

 UnityEngine::LayerMask __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers, put=OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers))  OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask, put=OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask))  OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_compositionMethod, put=OVRMixedRealityCaptureConfiguration_set_compositionMethod))  OVRMixedRealityCaptureConfiguration_compositionMethod;

 UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift, put=OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift))  OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

 UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest, put=OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest))  OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice, put=OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice))  OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally, put=OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally))  OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically, put=OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically))  OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency, put=OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency))  OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency, put=OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency))  OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

 int32_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames, put=OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames))  OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

 UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeyColor, put=OVRMixedRealityCaptureConfiguration_set_chromaKeyColor))  OVRMixedRealityCaptureConfiguration_chromaKeyColor;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity))  OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange))  OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange))  OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_useDynamicLighting, put=OVRMixedRealityCaptureConfiguration_set_useDynamicLighting))  OVRMixedRealityCaptureConfiguration_useDynamicLighting;

 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_depthQuality, put=OVRMixedRealityCaptureConfiguration_set_depthQuality))  OVRMixedRealityCaptureConfiguration_depthQuality;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor, put=OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor))  OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue, put=OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue))  OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_mrcActivationMode, put=OVRMixedRealityCaptureConfiguration_set_mrcActivationMode))  OVRMixedRealityCaptureConfiguration_mrcActivationMode;

 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject, put=OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject))  OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;

 GlobalNamespace::GlobalNamespace__OVRManager__XrApi __declspec(property(get=get_xrApi))  xrApi;

 uint64_t __declspec(property(get=get_xrInstance))  xrInstance;

 uint64_t __declspec(property(get=get_xrSession))  xrSession;

 int32_t __declspec(property(get=get_vsyncCount, put=set_vsyncCount))  vsyncCount;

static float_t __declspec(property(get=get_batteryLevel))  batteryLevel;

static float_t __declspec(property(get=get_batteryTemperature))  batteryTemperature;

static int32_t __declspec(property(get=get_batteryStatus))  batteryStatus;

static float_t __declspec(property(get=get_volumeLevel))  volumeLevel;

static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel __declspec(property(get=get_suggestedCpuPerfLevel, put=set_suggestedCpuPerfLevel))  suggestedCpuPerfLevel;

static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel __declspec(property(get=get_suggestedGpuPerfLevel, put=set_suggestedGpuPerfLevel))  suggestedGpuPerfLevel;

static int32_t __declspec(property(get=get_cpuLevel, put=set_cpuLevel))  cpuLevel;

static int32_t __declspec(property(get=get_gpuLevel, put=set_gpuLevel))  gpuLevel;

static bool __declspec(property(get=get_isPowerSavingActive))  isPowerSavingActive;

static GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat __declspec(property(get=get_eyeTextureFormat, put=set_eyeTextureFormat))  eyeTextureFormat;

static bool __declspec(property(get=get_eyeTrackedFoveatedRenderingSupported))  eyeTrackedFoveatedRenderingSupported;

static bool __declspec(property(get=get_eyeTrackedFoveatedRenderingEnabled, put=set_eyeTrackedFoveatedRenderingEnabled))  eyeTrackedFoveatedRenderingEnabled;

static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel __declspec(property(get=get_foveatedRenderingLevel, put=set_foveatedRenderingLevel))  foveatedRenderingLevel;

static bool __declspec(property(get=get_fixedFoveatedRenderingSupported))  fixedFoveatedRenderingSupported;

static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel __declspec(property(get=get_fixedFoveatedRenderingLevel, put=set_fixedFoveatedRenderingLevel))  fixedFoveatedRenderingLevel;

static bool __declspec(property(get=get_useDynamicFoveatedRendering, put=set_useDynamicFoveatedRendering))  useDynamicFoveatedRendering;

static bool __declspec(property(get=get_useDynamicFixedFoveatedRendering, put=set_useDynamicFixedFoveatedRendering))  useDynamicFixedFoveatedRendering;

static bool __declspec(property(get=get_tiledMultiResSupported))  tiledMultiResSupported;

static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel __declspec(property(get=get_tiledMultiResLevel, put=set_tiledMultiResLevel))  tiledMultiResLevel;

static bool __declspec(property(get=get_gpuUtilSupported))  gpuUtilSupported;

static float_t __declspec(property(get=get_gpuUtilLevel))  gpuUtilLevel;

static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType __declspec(property(get=get_systemHeadsetType))  systemHeadsetType;

 GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin __declspec(property(get=get_trackingOriginType, put=set_trackingOriginType))  trackingOriginType;

 bool __declspec(property(get=get_isSupportedPlatform, put=set_isSupportedPlatform))  isSupportedPlatform;

 bool __declspec(property(get=get_isUserPresent, put=set_isUserPresent))  isUserPresent;

static System::Version __declspec(property(get=get_utilitiesVersion))  utilitiesVersion;

static System::Version __declspec(property(get=get_pluginVersion))  pluginVersion;

static System::Version __declspec(property(get=get_sdkVersion))  sdkVersion;


// Methods

/// @brief Method get_instance addr 0x25f2d6c size 0x58 virtual false final false
static GlobalNamespace::OVRManager get_instance() ;

/// @brief Method set_instance addr 0x25f2dc4 size 0x5c virtual false final false
static void set_instance(GlobalNamespace::OVRManager value) ;

/// @brief Method get_display addr 0x25f2e20 size 0x58 virtual false final false
static GlobalNamespace::OVRDisplay get_display() ;

/// @brief Method set_display addr 0x25f2e78 size 0x5c virtual false final false
static void set_display(GlobalNamespace::OVRDisplay value) ;

/// @brief Method get_tracker addr 0x25f2ed4 size 0x58 virtual false final false
static GlobalNamespace::OVRTracker get_tracker() ;

/// @brief Method set_tracker addr 0x25f2f2c size 0x5c virtual false final false
static void set_tracker(GlobalNamespace::OVRTracker value) ;

/// @brief Method get_boundary addr 0x25f2f88 size 0x58 virtual false final false
static GlobalNamespace::OVRBoundary get_boundary() ;

/// @brief Method set_boundary addr 0x25f2fe0 size 0x5c virtual false final false
static void set_boundary(GlobalNamespace::OVRBoundary value) ;

/// @brief Method get_runtimeSettings addr 0x25f303c size 0x58 virtual false final false
static GlobalNamespace::OVRRuntimeSettings get_runtimeSettings() ;

/// @brief Method set_runtimeSettings addr 0x25f3094 size 0x5c virtual false final false
static void set_runtimeSettings(GlobalNamespace::OVRRuntimeSettings value) ;

/// @brief Method get_profile addr 0x25f30f0 size 0x100 virtual false final false
static GlobalNamespace::OVRProfile get_profile() ;

/// @brief Method add_HMDAcquired addr 0x25f31f0 size 0xdc virtual false final false
static void add_HMDAcquired(System::Action value) ;

/// @brief Method remove_HMDAcquired addr 0x25f32cc size 0xdc virtual false final false
static void remove_HMDAcquired(System::Action value) ;

/// @brief Method add_HMDLost addr 0x25f33a8 size 0xdc virtual false final false
static void add_HMDLost(System::Action value) ;

/// @brief Method remove_HMDLost addr 0x25f3484 size 0xdc virtual false final false
static void remove_HMDLost(System::Action value) ;

/// @brief Method add_HMDMounted addr 0x25f3560 size 0xdc virtual false final false
static void add_HMDMounted(System::Action value) ;

/// @brief Method remove_HMDMounted addr 0x25f363c size 0xdc virtual false final false
static void remove_HMDMounted(System::Action value) ;

/// @brief Method add_HMDUnmounted addr 0x25f3718 size 0xdc virtual false final false
static void add_HMDUnmounted(System::Action value) ;

/// @brief Method remove_HMDUnmounted addr 0x25f37f4 size 0xdc virtual false final false
static void remove_HMDUnmounted(System::Action value) ;

/// @brief Method add_VrFocusAcquired addr 0x25f38d0 size 0xdc virtual false final false
static void add_VrFocusAcquired(System::Action value) ;

/// @brief Method remove_VrFocusAcquired addr 0x25f39ac size 0xdc virtual false final false
static void remove_VrFocusAcquired(System::Action value) ;

/// @brief Method add_VrFocusLost addr 0x25f3a88 size 0xdc virtual false final false
static void add_VrFocusLost(System::Action value) ;

/// @brief Method remove_VrFocusLost addr 0x25f3b64 size 0xdc virtual false final false
static void remove_VrFocusLost(System::Action value) ;

/// @brief Method add_InputFocusAcquired addr 0x25f3c40 size 0xdc virtual false final false
static void add_InputFocusAcquired(System::Action value) ;

/// @brief Method remove_InputFocusAcquired addr 0x25f3d1c size 0xdc virtual false final false
static void remove_InputFocusAcquired(System::Action value) ;

/// @brief Method add_InputFocusLost addr 0x25f3df8 size 0xdc virtual false final false
static void add_InputFocusLost(System::Action value) ;

/// @brief Method remove_InputFocusLost addr 0x25f3ed4 size 0xdc virtual false final false
static void remove_InputFocusLost(System::Action value) ;

/// @brief Method add_AudioOutChanged addr 0x25f3fb0 size 0xdc virtual false final false
static void add_AudioOutChanged(System::Action value) ;

/// @brief Method remove_AudioOutChanged addr 0x25f408c size 0xdc virtual false final false
static void remove_AudioOutChanged(System::Action value) ;

/// @brief Method add_AudioInChanged addr 0x25f4168 size 0xdc virtual false final false
static void add_AudioInChanged(System::Action value) ;

/// @brief Method remove_AudioInChanged addr 0x25f4244 size 0xdc virtual false final false
static void remove_AudioInChanged(System::Action value) ;

/// @brief Method add_TrackingAcquired addr 0x25f4320 size 0xdc virtual false final false
static void add_TrackingAcquired(System::Action value) ;

/// @brief Method remove_TrackingAcquired addr 0x25f43fc size 0xdc virtual false final false
static void remove_TrackingAcquired(System::Action value) ;

/// @brief Method add_TrackingLost addr 0x25f44d8 size 0xdc virtual false final false
static void add_TrackingLost(System::Action value) ;

/// @brief Method remove_TrackingLost addr 0x25f45b4 size 0xdc virtual false final false
static void remove_TrackingLost(System::Action value) ;

/// @brief Method add_DisplayRefreshRateChanged addr 0x25f4690 size 0xf4 virtual false final false
static void add_DisplayRefreshRateChanged(System::Action_2<float_t,float_t> value) ;

/// @brief Method remove_DisplayRefreshRateChanged addr 0x25f4784 size 0xf4 virtual false final false
static void remove_DisplayRefreshRateChanged(System::Action_2<float_t,float_t> value) ;

/// @brief Method add_SpatialAnchorCreateComplete addr 0x25f4878 size 0xf4 virtual false final false
static void add_SpatialAnchorCreateComplete(System::Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> value) ;

/// @brief Method remove_SpatialAnchorCreateComplete addr 0x25f496c size 0xf4 virtual false final false
static void remove_SpatialAnchorCreateComplete(System::Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> value) ;

/// @brief Method add_SpaceSetComponentStatusComplete addr 0x25f4a60 size 0xf4 virtual false final false
static void add_SpaceSetComponentStatusComplete(System::Action_6<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value) ;

/// @brief Method remove_SpaceSetComponentStatusComplete addr 0x25f4b54 size 0xf4 virtual false final false
static void remove_SpaceSetComponentStatusComplete(System::Action_6<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType,bool> value) ;

/// @brief Method add_SpaceQueryResults addr 0x25f4c48 size 0xf4 virtual false final false
static void add_SpaceQueryResults(System::Action_1<uint64_t> value) ;

/// @brief Method remove_SpaceQueryResults addr 0x25f4d3c size 0xf4 virtual false final false
static void remove_SpaceQueryResults(System::Action_1<uint64_t> value) ;

/// @brief Method add_SpaceQueryComplete addr 0x25f4e30 size 0xf4 virtual false final false
static void add_SpaceQueryComplete(System::Action_2<uint64_t,bool> value) ;

/// @brief Method remove_SpaceQueryComplete addr 0x25f4f24 size 0xf4 virtual false final false
static void remove_SpaceQueryComplete(System::Action_2<uint64_t,bool> value) ;

/// @brief Method add_SpaceSaveComplete addr 0x25f5018 size 0xf4 virtual false final false
static void add_SpaceSaveComplete(System::Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> value) ;

/// @brief Method remove_SpaceSaveComplete addr 0x25f510c size 0xf4 virtual false final false
static void remove_SpaceSaveComplete(System::Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> value) ;

/// @brief Method add_SpaceEraseComplete addr 0x25f5200 size 0xf4 virtual false final false
static void add_SpaceEraseComplete(System::Action_4<uint64_t,bool,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation> value) ;

/// @brief Method remove_SpaceEraseComplete addr 0x25f52f4 size 0xf4 virtual false final false
static void remove_SpaceEraseComplete(System::Action_4<uint64_t,bool,System::Guid,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation> value) ;

/// @brief Method add_ShareSpacesComplete addr 0x25f53e8 size 0xf4 virtual false final false
static void add_ShareSpacesComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method remove_ShareSpacesComplete addr 0x25f54dc size 0xf4 virtual false final false
static void remove_ShareSpacesComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method add_SpaceListSaveComplete addr 0x25f55d0 size 0xf4 virtual false final false
static void add_SpaceListSaveComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method remove_SpaceListSaveComplete addr 0x25f56c4 size 0xf4 virtual false final false
static void remove_SpaceListSaveComplete(System::Action_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method add_SceneCaptureComplete addr 0x25f57b8 size 0xf4 virtual false final false
static void add_SceneCaptureComplete(System::Action_2<uint64_t,bool> value) ;

/// @brief Method remove_SceneCaptureComplete addr 0x25f58ac size 0xf4 virtual false final false
static void remove_SceneCaptureComplete(System::Action_2<uint64_t,bool> value) ;

/// @brief Method add_HSWDismissed addr 0x25f59a0 size 0xdc virtual false final false
static void add_HSWDismissed(System::Action value) ;

/// @brief Method remove_HSWDismissed addr 0x25f5a7c size 0xdc virtual false final false
static void remove_HSWDismissed(System::Action value) ;

/// @brief Method get_isHmdPresent addr 0x25f5b58 size 0xd8 virtual false final false
static bool get_isHmdPresent() ;

/// @brief Method set_isHmdPresent addr 0x25f5c30 size 0x64 virtual false final false
static void set_isHmdPresent(bool value) ;

/// @brief Method get_audioOutId addr 0x25f5c94 size 0x50 virtual false final false
static ::StringW get_audioOutId() ;

/// @brief Method get_audioInId addr 0x25f5ce4 size 0x50 virtual false final false
static ::StringW get_audioInId() ;

/// @brief Method get_hasVrFocus addr 0x25f5d34 size 0xd8 virtual false final false
static bool get_hasVrFocus() ;

/// @brief Method set_hasVrFocus addr 0x25f5e0c size 0x64 virtual false final false
static void set_hasVrFocus(bool value) ;

/// @brief Method get_hasInputFocus addr 0x25f5e70 size 0x50 virtual false final false
static bool get_hasInputFocus() ;

/// @brief Method get_chromatic addr 0x25f5ec0 size 0x8c virtual false final false
 bool get_chromatic() ;

/// @brief Method set_chromatic addr 0x25f5f4c size 0x90 virtual false final false
 void set_chromatic(bool value) ;

/// @brief Method get_monoscopic addr 0x25f5fdc size 0x90 virtual false final false
 bool get_monoscopic() ;

/// @brief Method set_monoscopic addr 0x25f606c size 0x9c virtual false final false
 void set_monoscopic(bool value) ;

/// @brief Method get_colorGamut addr 0x25f6108 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace get_colorGamut() ;

/// @brief Method set_colorGamut addr 0x25f6110 size 0x68 virtual false final false
 void set_colorGamut(GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace value) ;

/// @brief Method get_nativeColorGamut addr 0x25f6178 size 0x50 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace get_nativeColorGamut() ;

/// @brief Method IsAdaptiveResSupportedByEngine addr 0x25f61c8 size 0x8 virtual false final false
static bool IsAdaptiveResSupportedByEngine() ;

/// @brief Method get_headPoseRelativeOffsetRotation addr 0x25f61d0 size 0xc virtual false final false
 UnityEngine::Vector3 get_headPoseRelativeOffsetRotation() ;

/// @brief Method set_headPoseRelativeOffsetRotation addr 0x25eb5a4 size 0xe8 virtual false final false
 void set_headPoseRelativeOffsetRotation(UnityEngine::Vector3 value) ;

/// @brief Method get_headPoseRelativeOffsetTranslation addr 0x25f61dc size 0xc virtual false final false
 UnityEngine::Vector3 get_headPoseRelativeOffsetTranslation() ;

/// @brief Method set_headPoseRelativeOffsetTranslation addr 0x25eb48c size 0x118 virtual false final false
 void set_headPoseRelativeOffsetTranslation(UnityEngine::Vector3 value) ;

/// @brief Method get_eyeFovPremultipliedAlphaModeEnabled addr 0x25f61e8 size 0x50 virtual false final false
static bool get_eyeFovPremultipliedAlphaModeEnabled() ;

/// @brief Method set_eyeFovPremultipliedAlphaModeEnabled addr 0x25f6238 size 0x58 virtual false final false
static void set_eyeFovPremultipliedAlphaModeEnabled(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality addr 0x25f6290 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality addr 0x25f6298 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers addr 0x25f62a4 size 0x8 virtual true final true
 UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers addr 0x25f62ac size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(UnityEngine::LayerMask value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers addr 0x25f62b4 size 0x8 virtual true final true
 UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers addr 0x25f62bc size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(UnityEngine::LayerMask value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask addr 0x25f62c4 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask addr 0x25f62cc size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod addr 0x25f62d8 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod addr 0x25f62e0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_compositionMethod(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift addr 0x25f62e8 size 0xc virtual true final true
 UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift addr 0x25f62f4 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest addr 0x25f6300 size 0xc virtual true final true
 UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest addr 0x25f630c size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice addr 0x25f6318 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice addr 0x25f6320 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally addr 0x25f6328 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally addr 0x25f6330 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically addr 0x25f633c size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically addr 0x25f6344 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency addr 0x25f6350 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency addr 0x25f6358 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency addr 0x25f6360 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency addr 0x25f6368 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames addr 0x25f6370 size 0x8 virtual true final true
 int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames addr 0x25f6378 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor addr 0x25f6380 size 0xc virtual true final true
 UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor addr 0x25f638c size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity addr 0x25f6398 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity addr 0x25f63a0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange addr 0x25f63a8 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange addr 0x25f63b0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange addr 0x25f63b8 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange addr 0x25f63c0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting addr 0x25f63c8 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting addr 0x25f63d0 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality addr 0x25f63dc size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality addr 0x25f63e4 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_depthQuality(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor addr 0x25f63ec size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor addr 0x25f63f4 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue addr 0x25f63fc size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue addr 0x25f6404 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType addr 0x25f640c size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType addr 0x25f6414 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY addr 0x25f641c size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY addr 0x25f6424 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY addr 0x25f642c size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY addr 0x25f6434 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling addr 0x25f643c size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling addr 0x25f6444 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance addr 0x25f6450 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance addr 0x25f6458 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode addr 0x25f6460 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode addr 0x25f6468 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject addr 0x25f6470 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject addr 0x25f6478 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

/// @brief Method get_xrApi addr 0x25f6480 size 0x50 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRManager__XrApi get_xrApi() ;

/// @brief Method get_xrInstance addr 0x25f64d0 size 0x50 virtual false final false
 uint64_t get_xrInstance() ;

/// @brief Method get_xrSession addr 0x25f6520 size 0x50 virtual false final false
 uint64_t get_xrSession() ;

/// @brief Method get_vsyncCount addr 0x25f6570 size 0x8c virtual false final false
 int32_t get_vsyncCount() ;

/// @brief Method set_vsyncCount addr 0x25f65fc size 0x90 virtual false final false
 void set_vsyncCount(int32_t value) ;

/// @brief Method get_batteryLevel addr 0x25f668c size 0x8c virtual false final false
static float_t get_batteryLevel() ;

/// @brief Method get_batteryTemperature addr 0x25f6718 size 0x8c virtual false final false
static float_t get_batteryTemperature() ;

/// @brief Method get_batteryStatus addr 0x25f67a4 size 0x8c virtual false final false
static int32_t get_batteryStatus() ;

/// @brief Method get_volumeLevel addr 0x25f6830 size 0x8c virtual false final false
static float_t get_volumeLevel() ;

/// @brief Method get_suggestedCpuPerfLevel addr 0x25f68bc size 0x8c virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel get_suggestedCpuPerfLevel() ;

/// @brief Method set_suggestedCpuPerfLevel addr 0x25f6948 size 0x90 virtual false final false
static void set_suggestedCpuPerfLevel(GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel value) ;

/// @brief Method get_suggestedGpuPerfLevel addr 0x25f69d8 size 0x8c virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel get_suggestedGpuPerfLevel() ;

/// @brief Method set_suggestedGpuPerfLevel addr 0x25f6a64 size 0x90 virtual false final false
static void set_suggestedGpuPerfLevel(GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel value) ;

/// @brief Method get_cpuLevel addr 0x25f6af4 size 0x8c virtual false final false
static int32_t get_cpuLevel() ;

/// @brief Method set_cpuLevel addr 0x25f6b80 size 0x90 virtual false final false
static void set_cpuLevel(int32_t value) ;

/// @brief Method get_gpuLevel addr 0x25f6c10 size 0x8c virtual false final false
static int32_t get_gpuLevel() ;

/// @brief Method set_gpuLevel addr 0x25f6c9c size 0x90 virtual false final false
static void set_gpuLevel(int32_t value) ;

/// @brief Method get_isPowerSavingActive addr 0x25f6d2c size 0x8c virtual false final false
static bool get_isPowerSavingActive() ;

/// @brief Method get_eyeTextureFormat addr 0x25f6db8 size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat get_eyeTextureFormat() ;

/// @brief Method set_eyeTextureFormat addr 0x25f6e08 size 0x58 virtual false final false
static void set_eyeTextureFormat(GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat value) ;

/// @brief Method get_eyeTrackedFoveatedRenderingSupported addr 0x25f6e60 size 0x50 virtual false final false
static bool get_eyeTrackedFoveatedRenderingSupported() ;

/// @brief Method get_eyeTrackedFoveatedRenderingEnabled addr 0x25f6eb0 size 0x50 virtual false final false
static bool get_eyeTrackedFoveatedRenderingEnabled() ;

/// @brief Method set_eyeTrackedFoveatedRenderingEnabled addr 0x25f6f00 size 0x74 virtual false final false
static void set_eyeTrackedFoveatedRenderingEnabled(bool value) ;

/// @brief Method get_foveatedRenderingLevel addr 0x25f6f74 size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel get_foveatedRenderingLevel() ;

/// @brief Method set_foveatedRenderingLevel addr 0x25f6fc4 size 0x58 virtual false final false
static void set_foveatedRenderingLevel(GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel value) ;

/// @brief Method get_fixedFoveatedRenderingSupported addr 0x25f701c size 0x50 virtual false final false
static bool get_fixedFoveatedRenderingSupported() ;

/// @brief Method get_fixedFoveatedRenderingLevel addr 0x25f706c size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel get_fixedFoveatedRenderingLevel() ;

/// @brief Method set_fixedFoveatedRenderingLevel addr 0x25f70bc size 0x58 virtual false final false
static void set_fixedFoveatedRenderingLevel(GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel value) ;

/// @brief Method get_useDynamicFoveatedRendering addr 0x25f7114 size 0x50 virtual false final false
static bool get_useDynamicFoveatedRendering() ;

/// @brief Method set_useDynamicFoveatedRendering addr 0x25f7164 size 0x58 virtual false final false
static void set_useDynamicFoveatedRendering(bool value) ;

/// @brief Method get_useDynamicFixedFoveatedRendering addr 0x25f71bc size 0x50 virtual false final false
static bool get_useDynamicFixedFoveatedRendering() ;

/// @brief Method set_useDynamicFixedFoveatedRendering addr 0x25f720c size 0x58 virtual false final false
static void set_useDynamicFixedFoveatedRendering(bool value) ;

/// @brief Method get_tiledMultiResSupported addr 0x25f7264 size 0x50 virtual false final false
static bool get_tiledMultiResSupported() ;

/// @brief Method get_tiledMultiResLevel addr 0x25f72b4 size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel get_tiledMultiResLevel() ;

/// @brief Method set_tiledMultiResLevel addr 0x25f7304 size 0x58 virtual false final false
static void set_tiledMultiResLevel(GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel value) ;

/// @brief Method get_gpuUtilSupported addr 0x25f735c size 0x50 virtual false final false
static bool get_gpuUtilSupported() ;

/// @brief Method get_gpuUtilLevel addr 0x25f73ac size 0xb0 virtual false final false
static float_t get_gpuUtilLevel() ;

/// @brief Method get_systemHeadsetType addr 0x25f745c size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType get_systemHeadsetType() ;

/// @brief Method SetColorScaleAndOffset addr 0x25f74ac size 0xb8 virtual false final false
static void SetColorScaleAndOffset(UnityEngine::Vector4 colorScale, UnityEngine::Vector4 colorOffset, bool applyToAllLayers) ;

/// @brief Method SetOpenVRLocalPose addr 0x25f7564 size 0x104 virtual false final false
static void SetOpenVRLocalPose(UnityEngine::Vector3 leftPos, UnityEngine::Vector3 rightPos, UnityEngine::Quaternion leftRot, UnityEngine::Quaternion rightRot) ;

/// @brief Method GetOpenVRControllerOffset addr 0x25f7668 size 0x1e4 virtual false final false
static GlobalNamespace::OVRPose GetOpenVRControllerOffset(UnityEngine::XR::XRNode hand) ;

/// @brief Method SetSpaceWarp addr 0x25f784c size 0x274 virtual false final false
static void SetSpaceWarp(bool enabled) ;

/// @brief Method GetSpaceWarp addr 0x25f8138 size 0x58 virtual false final false
static bool GetSpaceWarp() ;

/// @brief Method get_trackingOriginType addr 0x25f8190 size 0x90 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin get_trackingOriginType() ;

/// @brief Method set_trackingOriginType addr 0x25f8220 size 0x1c8 virtual false final false
 void set_trackingOriginType(GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin value) ;

/// @brief Method get_isSupportedPlatform addr 0x25f8578 size 0x8 virtual false final false
 bool get_isSupportedPlatform() ;

/// @brief Method set_isSupportedPlatform addr 0x25f8580 size 0xc virtual false final false
 void set_isSupportedPlatform(bool value) ;

/// @brief Method get_isUserPresent addr 0x25f858c size 0xd8 virtual false final false
 bool get_isUserPresent() ;

/// @brief Method set_isUserPresent addr 0x25f8664 size 0x64 virtual false final false
 void set_isUserPresent(bool value) ;

/// @brief Method get_utilitiesVersion addr 0x25f86c8 size 0x58 virtual false final false
static System::Version get_utilitiesVersion() ;

/// @brief Method get_pluginVersion addr 0x25f8720 size 0x50 virtual false final false
static System::Version get_pluginVersion() ;

/// @brief Method get_sdkVersion addr 0x25f8770 size 0x50 virtual false final false
static System::Version get_sdkVersion() ;

/// @brief Method MixedRealityEnabledFromCmd addr 0x25f87c0 size 0xac virtual false final false
static bool MixedRealityEnabledFromCmd() ;

/// @brief Method UseDirectCompositionFromCmd addr 0x25f886c size 0xac virtual false final false
static bool UseDirectCompositionFromCmd() ;

/// @brief Method UseExternalCompositionFromCmd addr 0x25f8918 size 0xac virtual false final false
static bool UseExternalCompositionFromCmd() ;

/// @brief Method CreateMixedRealityCaptureConfigurationFileFromCmd addr 0x25f89c4 size 0xac virtual false final false
static bool CreateMixedRealityCaptureConfigurationFileFromCmd() ;

/// @brief Method LoadMixedRealityCaptureConfigurationFileFromCmd addr 0x25f8a70 size 0xac virtual false final false
static bool LoadMixedRealityCaptureConfigurationFileFromCmd() ;

/// @brief Method IsUnityAlphaOrBetaVersion addr 0x25f8b1c size 0xb8 virtual false final false
static bool IsUnityAlphaOrBetaVersion() ;

/// @brief Method InitOVRManager addr 0x25f8bd4 size 0xca0 virtual false final false
 void InitOVRManager() ;

/// @brief Method InitPermissionRequest addr 0x25fa030 size 0xd4 virtual false final false
 void InitPermissionRequest() ;

/// @brief Method Awake addr 0x25fa2e8 size 0x6c virtual false final false
 void Awake() ;

/// @brief Method SetCurrentXRDevice addr 0x25fa354 size 0x150 virtual false final false
 void SetCurrentXRDevice() ;

/// @brief Method GetCurrentDisplaySubsystem addr 0x25fa4a4 size 0x190 virtual false final false
static UnityEngine::XR::XRDisplaySubsystem GetCurrentDisplaySubsystem() ;

/// @brief Method GetCurrentDisplaySubsystemDescriptor addr 0x25fa634 size 0x190 virtual false final false
static UnityEngine::XR::XRDisplaySubsystemDescriptor GetCurrentDisplaySubsystemDescriptor() ;

/// @brief Method GetCurrentInputSubsystem addr 0x25f83e8 size 0x190 virtual false final false
static UnityEngine::XR::XRInputSubsystem GetCurrentInputSubsystem() ;

/// @brief Method Initialize addr 0x25f9da0 size 0x290 virtual false final false
 void Initialize() ;

/// @brief Method Update addr 0x25fa7c4 size 0x1f60 virtual false final false
 void Update() ;

/// @brief Method UpdateHMDEvents addr 0x25fc960 size 0x67c virtual false final false
 void UpdateHMDEvents() ;

/// @brief Method FindMainCamera addr 0x25f7ac0 size 0x678 virtual false final false
static UnityEngine::Camera FindMainCamera() ;

/// @brief Method OnDisable addr 0x25fd6e0 size 0xb8 virtual false final false
 void OnDisable() ;

/// @brief Method LateUpdate addr 0x25fd798 size 0x1e8 virtual false final false
 void LateUpdate() ;

/// @brief Method FixedUpdate addr 0x25fd980 size 0x4c virtual false final false
 void FixedUpdate() ;

/// @brief Method OnDestroy addr 0x25fd9cc size 0x9c virtual false final false
 void OnDestroy() ;

/// @brief Method OnApplicationPause addr 0x25fda68 size 0x88 virtual false final false
 void OnApplicationPause(bool pause) ;

/// @brief Method OnApplicationFocus addr 0x25fdaf0 size 0x88 virtual false final false
 void OnApplicationFocus(bool focus) ;

/// @brief Method OnApplicationQuit addr 0x25fdb78 size 0x68 virtual false final false
 void OnApplicationQuit() ;

/// @brief Method ReturnToLauncher addr 0x25fdbe0 size 0x4c virtual false final false
 void ReturnToLauncher() ;

/// @brief Method PlatformUIConfirmQuit addr 0x25fdc2c size 0x8c virtual false final false
static void PlatformUIConfirmQuit() ;

/// @brief Method StaticInitializeMixedRealityCapture addr 0x25f9874 size 0x52c virtual false final false
static void StaticInitializeMixedRealityCapture(GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method StaticUpdateMixedRealityCapture addr 0x25fcfdc size 0x4e0 virtual false final false
static void StaticUpdateMixedRealityCapture(GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, UnityEngine::GameObject gameObject, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency) ;

/// @brief Method StaticShutdownMixedRealityCapture addr 0x25fc724 size 0x10c virtual false final false
static void StaticShutdownMixedRealityCapture(GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method PassthroughInitializedOrPending addr 0x25fdcb8 size 0x10 virtual false final false
static bool PassthroughInitializedOrPending(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState state) ;

/// @brief Method InitializeInsightPassthrough addr 0x25fa104 size 0x1e4 virtual false final false
static bool InitializeInsightPassthrough() ;

/// @brief Method ShutdownInsightPassthrough addr 0x25fc830 size 0x130 virtual false final false
static void ShutdownInsightPassthrough() ;

/// @brief Method UpdateInsightPassthrough addr 0x25fd4bc size 0x224 virtual false final false
static void UpdateInsightPassthrough(bool shouldBeEnabled) ;

/// @brief Method IsInsightPassthroughSupported addr 0x25fdcc8 size 0x50 virtual false final false
static bool IsInsightPassthroughSupported() ;

/// @brief Method GetPassthroughCapabilities addr 0x25fdd18 size 0xfc virtual false final false
static GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities GetPassthroughCapabilities() ;

/// @brief Method IsInsightPassthroughInitialized addr 0x25fde14 size 0x60 virtual false final false
static bool IsInsightPassthroughInitialized() ;

/// @brief Method HasInsightPassthroughInitFailed addr 0x25fde74 size 0x60 virtual false final false
static bool HasInsightPassthroughInitFailed() ;

/// @brief Method IsInsightPassthroughInitPending addr 0x25fded4 size 0x60 virtual false final false
static bool IsInsightPassthroughInitPending() ;

// Ctor Parameters []
explicit OVRManager() ;

/// @brief Method .ctor addr 0x25fdf34 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice, "", "OVRManager/CameraDevice");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__ColorSpace, "", "OVRManager/ColorSpace");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod, "", "OVRManager/CompositionMethod");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality, "", "OVRManager/DepthQuality");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__EyeTextureFormat, "", "OVRManager/EyeTextureFormat");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__FoveatedRenderingLevel, "", "OVRManager/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode, "", "OVRManager/MrcActivationMode");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType, "", "OVRManager/MrcCameraType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughInitializationState, "", "OVRManager/PassthroughInitializationState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__ProcessorPerformanceLevel, "", "OVRManager/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__SystemHeadsetType, "", "OVRManager/SystemHeadsetType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__TiledMultiResLevel, "", "OVRManager/TiledMultiResLevel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin, "", "OVRManager/TrackingOrigin");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType, "", "OVRManager/VirtualGreenScreenType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__XRDevice, "", "OVRManager/XRDevice");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__XrApi, "", "OVRManager/XrApi");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate, "", "OVRManager/InstantiateMrcCameraDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager__PassthroughCapabilities, "", "OVRManager/PassthroughCapabilities");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRManager____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRManager____c, "", "OVRManager/<>c");
NEED_NO_BOX(GlobalNamespace::OVRManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager, "", "OVRManager");
