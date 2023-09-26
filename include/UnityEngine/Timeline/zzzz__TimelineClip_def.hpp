#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineClip__BlendCurveMode;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineClip__ClipExtrapolation;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimelineClip__Versions;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade;
}
// Type: ::Versions
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14076))
// CS Name: UnityEngine.Timeline.TimelineClip::Versions
struct CORDL_TYPE UnityEngine__Timeline__TimelineClip__Versions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineClip__Versions(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineClip__Versions(UnityEngine__Timeline__TimelineClip__Versions const&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__Versions(UnityEngine__Timeline__TimelineClip__Versions&&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__Versions& operator=(UnityEngine__Timeline__TimelineClip__Versions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineClip__Versions& operator=(UnityEngine__Timeline__TimelineClip__Versions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineClip__Versions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineClip__Versions_Unwrapped : int32_t {
__Initial = 0,
__ClipInFromGlobalToLocal = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineClip__Versions_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineClip__Versions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Initial offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions const Initial;

/// @brief Field ClipInFromGlobalToLocal offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions const ClipInFromGlobalToLocal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::TimelineClipUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14077))
// CS Name: UnityEngine.Timeline.TimelineClip::TimelineClipUpgrade
class CORDL_TYPE UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade(UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade(UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade& operator=(UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade&& o) noexcept = default;
  constexpr UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade& operator=(UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade const& o) noexcept = default;
                


// Methods

/// @brief Method UpgradeClipInFromGlobalToLocal addr 0x2aefae8 size 0x3c virtual false final false
static void UpgradeClipInFromGlobalToLocal(UnityEngine::Timeline::TimelineClip clip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::ClipExtrapolation
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14078))
// CS Name: UnityEngine.Timeline.TimelineClip::ClipExtrapolation
struct CORDL_TYPE UnityEngine__Timeline__TimelineClip__ClipExtrapolation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineClip__ClipExtrapolation(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineClip__ClipExtrapolation(UnityEngine__Timeline__TimelineClip__ClipExtrapolation const&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__ClipExtrapolation(UnityEngine__Timeline__TimelineClip__ClipExtrapolation&&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__ClipExtrapolation& operator=(UnityEngine__Timeline__TimelineClip__ClipExtrapolation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineClip__ClipExtrapolation& operator=(UnityEngine__Timeline__TimelineClip__ClipExtrapolation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineClip__ClipExtrapolation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineClip__ClipExtrapolation_Unwrapped : int32_t {
__None = 0,
__Hold = 1,
__Loop = 2,
__PingPong = 3,
__Continue = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineClip__ClipExtrapolation_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineClip__ClipExtrapolation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation const None;

/// @brief Field Hold offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation const Hold;

/// @brief Field Loop offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation const Loop;

/// @brief Field PingPong offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation const PingPong;

/// @brief Field Continue offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation const Continue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::BlendCurveMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14079))
// CS Name: UnityEngine.Timeline.TimelineClip::BlendCurveMode
struct CORDL_TYPE UnityEngine__Timeline__TimelineClip__BlendCurveMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimelineClip__BlendCurveMode(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimelineClip__BlendCurveMode(UnityEngine__Timeline__TimelineClip__BlendCurveMode const&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__BlendCurveMode(UnityEngine__Timeline__TimelineClip__BlendCurveMode&&) = default;
                    constexpr UnityEngine__Timeline__TimelineClip__BlendCurveMode& operator=(UnityEngine__Timeline__TimelineClip__BlendCurveMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimelineClip__BlendCurveMode& operator=(UnityEngine__Timeline__TimelineClip__BlendCurveMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimelineClip__BlendCurveMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimelineClip__BlendCurveMode_Unwrapped : int32_t {
__Auto = 0,
__Manual = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimelineClip__BlendCurveMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimelineClip__BlendCurveMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode const Auto;

/// @brief Field Manual offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode const Manual;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineClip
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14080))
// CS Name: UnityEngine.Timeline.TimelineClip
class CORDL_TYPE TimelineClip : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BlendCurveMode = UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode;

using ClipExtrapolation = UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation;

using TimelineClipUpgrade = UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade;

using Versions = UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions;

/// @brief Convert operator to UnityEngine::Timeline::ICurvesOwner
constexpr operator  UnityEngine::Timeline::ICurvesOwner() const noexcept;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~TimelineClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: " const&", def_value: None }]
constexpr TimelineClip(TimelineClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "&&", def_value: None }]
constexpr TimelineClip(TimelineClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineClip(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimelineClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineClip& operator=(TimelineClip&& o) noexcept = default;
  constexpr TimelineClip& operator=(TimelineClip const& o) noexcept = default;
                


// Fields

/// @brief Field k_LatestVersion offset 0
static constexpr int32_t  k_LatestVersion{1};

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

static UnityEngine::Timeline::ClipCaps __declspec(property(get=__get_kDefaultClipCaps, put=__set_kDefaultClipCaps))  kDefaultClipCaps;

static void __set_kDefaultClipCaps(UnityEngine::Timeline::ClipCaps value) ;

static UnityEngine::Timeline::ClipCaps __get_kDefaultClipCaps() ;

static float_t __declspec(property(get=__get_kDefaultClipDurationInSeconds, put=__set_kDefaultClipDurationInSeconds))  kDefaultClipDurationInSeconds;

static void __set_kDefaultClipDurationInSeconds(float_t value) ;

static float_t __get_kDefaultClipDurationInSeconds() ;

static double_t __declspec(property(get=__get_kTimeScaleMin, put=__set_kTimeScaleMin))  kTimeScaleMin;

static void __set_kTimeScaleMin(double_t value) ;

static double_t __get_kTimeScaleMin() ;

static double_t __declspec(property(get=__get_kTimeScaleMax, put=__set_kTimeScaleMax))  kTimeScaleMax;

static void __set_kTimeScaleMax(double_t value) ;

static double_t __get_kTimeScaleMax() ;

static ::StringW __declspec(property(get=__get_kDefaultCurvesName, put=__set_kDefaultCurvesName))  kDefaultCurvesName;

static void __set_kDefaultCurvesName(::StringW value) ;

static ::StringW __get_kDefaultCurvesName() ;

static double_t __declspec(property(get=__get_kMinDuration, put=__set_kMinDuration))  kMinDuration;

static void __set_kMinDuration(double_t value) ;

static double_t __get_kMinDuration() ;

static double_t __declspec(property(get=__get_kMaxTimeValue, put=__set_kMaxTimeValue))  kMaxTimeValue;

static void __set_kMaxTimeValue(double_t value) ;

static double_t __get_kMaxTimeValue() ;

 double_t __declspec(property(get=__get_m_Start, put=__set_m_Start))  m_Start;

constexpr void __set_m_Start(double_t value) ;

constexpr double_t __get_m_Start() const;

 double_t __declspec(property(get=__get_m_ClipIn, put=__set_m_ClipIn))  m_ClipIn;

constexpr void __set_m_ClipIn(double_t value) ;

constexpr double_t __get_m_ClipIn() const;

 UnityEngine::Object __declspec(property(get=__get_m_Asset, put=__set_m_Asset))  m_Asset;

constexpr void __set_m_Asset(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_m_Asset() const;

 double_t __declspec(property(get=__get_m_Duration, put=__set_m_Duration))  m_Duration;

constexpr void __set_m_Duration(double_t value) ;

constexpr double_t __get_m_Duration() const;

 double_t __declspec(property(get=__get_m_TimeScale, put=__set_m_TimeScale))  m_TimeScale;

constexpr void __set_m_TimeScale(double_t value) ;

constexpr double_t __get_m_TimeScale() const;

 UnityEngine::Timeline::TrackAsset __declspec(property(get=__get_m_ParentTrack, put=__set_m_ParentTrack))  m_ParentTrack;

constexpr void __set_m_ParentTrack(UnityEngine::Timeline::TrackAsset value) ;

constexpr UnityEngine::Timeline::TrackAsset __get_m_ParentTrack() const;

 double_t __declspec(property(get=__get_m_EaseInDuration, put=__set_m_EaseInDuration))  m_EaseInDuration;

constexpr void __set_m_EaseInDuration(double_t value) ;

constexpr double_t __get_m_EaseInDuration() const;

 double_t __declspec(property(get=__get_m_EaseOutDuration, put=__set_m_EaseOutDuration))  m_EaseOutDuration;

constexpr void __set_m_EaseOutDuration(double_t value) ;

constexpr double_t __get_m_EaseOutDuration() const;

 double_t __declspec(property(get=__get_m_BlendInDuration, put=__set_m_BlendInDuration))  m_BlendInDuration;

constexpr void __set_m_BlendInDuration(double_t value) ;

constexpr double_t __get_m_BlendInDuration() const;

 double_t __declspec(property(get=__get_m_BlendOutDuration, put=__set_m_BlendOutDuration))  m_BlendOutDuration;

constexpr void __set_m_BlendOutDuration(double_t value) ;

constexpr double_t __get_m_BlendOutDuration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_MixInCurve, put=__set_m_MixInCurve))  m_MixInCurve;

constexpr void __set_m_MixInCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_MixInCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_MixOutCurve, put=__set_m_MixOutCurve))  m_MixOutCurve;

constexpr void __set_m_MixOutCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_MixOutCurve() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __declspec(property(get=__get_m_BlendInCurveMode, put=__set_m_BlendInCurveMode))  m_BlendInCurveMode;

constexpr void __set_m_BlendInCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __get_m_BlendInCurveMode() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __declspec(property(get=__get_m_BlendOutCurveMode, put=__set_m_BlendOutCurveMode))  m_BlendOutCurveMode;

constexpr void __set_m_BlendOutCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __get_m_BlendOutCurveMode() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_ExposedParameterNames, put=__set_m_ExposedParameterNames))  m_ExposedParameterNames;

constexpr void __set_m_ExposedParameterNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_ExposedParameterNames() const;

 UnityEngine::AnimationClip __declspec(property(get=__get_m_AnimationCurves, put=__set_m_AnimationCurves))  m_AnimationCurves;

constexpr void __set_m_AnimationCurves(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get_m_AnimationCurves() const;

 bool __declspec(property(get=__get_m_Recordable, put=__set_m_Recordable))  m_Recordable;

constexpr void __set_m_Recordable(bool value) ;

constexpr bool __get_m_Recordable() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=__get_m_PostExtrapolationMode, put=__set_m_PostExtrapolationMode))  m_PostExtrapolationMode;

constexpr void __set_m_PostExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __get_m_PostExtrapolationMode() const;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=__get_m_PreExtrapolationMode, put=__set_m_PreExtrapolationMode))  m_PreExtrapolationMode;

constexpr void __set_m_PreExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __get_m_PreExtrapolationMode() const;

 double_t __declspec(property(get=__get_m_PostExtrapolationTime, put=__set_m_PostExtrapolationTime))  m_PostExtrapolationTime;

constexpr void __set_m_PostExtrapolationTime(double_t value) ;

constexpr double_t __get_m_PostExtrapolationTime() const;

 double_t __declspec(property(get=__get_m_PreExtrapolationTime, put=__set_m_PreExtrapolationTime))  m_PreExtrapolationTime;

constexpr void __set_m_PreExtrapolationTime(double_t value) ;

constexpr double_t __get_m_PreExtrapolationTime() const;

 ::StringW __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName))  m_DisplayName;

constexpr void __set_m_DisplayName(::StringW value) ;

constexpr ::StringW __get_m_DisplayName() const;


// Properties

 bool __declspec(property(get=get_hasPreExtrapolation))  hasPreExtrapolation;

 bool __declspec(property(get=get_hasPostExtrapolation))  hasPostExtrapolation;

 double_t __declspec(property(get=get_timeScale, put=set_timeScale))  timeScale;

 double_t __declspec(property(get=get_start, put=set_start))  start;

 double_t __declspec(property(get=get_duration, put=set_duration))  duration;

 double_t __declspec(property(get=get_end))  end;

 double_t __declspec(property(get=get_clipIn, put=set_clipIn))  clipIn;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 double_t __declspec(property(get=get_clipAssetDuration))  clipAssetDuration;

 UnityEngine::AnimationClip __declspec(property(get=get_curves, put=set_curves))  curves;

 ::StringW __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName))  UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

 bool __declspec(property(get=get_hasCurves))  hasCurves;

 UnityEngine::Object __declspec(property(get=get_asset, put=set_asset))  asset;

 UnityEngine::Object __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_assetOwner))  UnityEngine_Timeline_ICurvesOwner_assetOwner;

 UnityEngine::Timeline::TrackAsset __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_targetTrack))  UnityEngine_Timeline_ICurvesOwner_targetTrack;

 UnityEngine::Object __declspec(property(get=get_underlyingAsset, put=set_underlyingAsset))  underlyingAsset;

 UnityEngine::Timeline::TrackAsset __declspec(property(get=get_parentTrack, put=set_parentTrack))  parentTrack;

 double_t __declspec(property(get=get_easeInDuration, put=set_easeInDuration))  easeInDuration;

 double_t __declspec(property(get=get_easeOutDuration, put=set_easeOutDuration))  easeOutDuration;

 double_t __declspec(property(get=get_eastOutTime))  eastOutTime;

 double_t __declspec(property(get=get_easeOutTime))  easeOutTime;

 double_t __declspec(property(get=get_blendInDuration, put=set_blendInDuration))  blendInDuration;

 double_t __declspec(property(get=get_blendOutDuration, put=set_blendOutDuration))  blendOutDuration;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __declspec(property(get=get_blendInCurveMode, put=set_blendInCurveMode))  blendInCurveMode;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode __declspec(property(get=get_blendOutCurveMode, put=set_blendOutCurveMode))  blendOutCurveMode;

 bool __declspec(property(get=get_hasBlendIn))  hasBlendIn;

 bool __declspec(property(get=get_hasBlendOut))  hasBlendOut;

 UnityEngine::AnimationCurve __declspec(property(get=get_mixInCurve, put=set_mixInCurve))  mixInCurve;

 float_t __declspec(property(get=get_mixInPercentage))  mixInPercentage;

 double_t __declspec(property(get=get_mixInDuration))  mixInDuration;

 UnityEngine::AnimationCurve __declspec(property(get=get_mixOutCurve, put=set_mixOutCurve))  mixOutCurve;

 double_t __declspec(property(get=get_mixOutTime))  mixOutTime;

 double_t __declspec(property(get=get_mixOutDuration))  mixOutDuration;

 float_t __declspec(property(get=get_mixOutPercentage))  mixOutPercentage;

 bool __declspec(property(get=get_recordable, put=set_recordable))  recordable;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_exposedParameters))  exposedParameters;

 UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;

 UnityEngine::AnimationClip __declspec(property(get=get_animationClip))  animationClip;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_postExtrapolationMode, put=set_postExtrapolationMode))  postExtrapolationMode;

 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation __declspec(property(get=get_preExtrapolationMode, put=set_preExtrapolationMode))  preExtrapolationMode;

 double_t __declspec(property(get=get_extrapolatedStart))  extrapolatedStart;

 double_t __declspec(property(get=get_extrapolatedDuration))  extrapolatedDuration;


// Methods

/// @brief Method UpgradeToLatestVersion addr 0x2aefab0 size 0x38 virtual false final false
 void UpgradeToLatestVersion() ;

// Ctor Parameters [CppParam { name: "parent", ty: "UnityEngine::Timeline::TrackAsset", modifiers: "", def_value: None }]
explicit TimelineClip(UnityEngine::Timeline::TrackAsset parent) ;

/// @brief Method .ctor addr 0x2aefb24 size 0x3c virtual false final false
 void _ctor(UnityEngine::Timeline::TrackAsset parent) ;

/// @brief Method get_hasPreExtrapolation addr 0x2aefc54 size 0x20 virtual false final false
 bool get_hasPreExtrapolation() ;

/// @brief Method get_hasPostExtrapolation addr 0x2aefc74 size 0x20 virtual false final false
 bool get_hasPostExtrapolation() ;

/// @brief Method get_timeScale addr 0x2aefc94 size 0xd8 virtual false final false
 double_t get_timeScale() ;

/// @brief Method set_timeScale addr 0x2aefe5c size 0xdc virtual false final false
 void set_timeScale(double_t value) ;

/// @brief Method get_start addr 0x2aeff3c size 0x8 virtual false final false
 double_t get_start() ;

/// @brief Method set_start addr 0x2aec010 size 0x104 virtual false final false
 void set_start(double_t value) ;

/// @brief Method get_duration addr 0x2af00e4 size 0x8 virtual true final true
 double_t get_duration() ;

/// @brief Method set_duration addr 0x2aec114 size 0xac virtual false final false
 void set_duration(double_t value) ;

/// @brief Method get_end addr 0x2af00ec size 0x10 virtual false final false
 double_t get_end() ;

/// @brief Method get_clipIn addr 0x2af00fc size 0x20 virtual false final false
 double_t get_clipIn() ;

/// @brief Method set_clipIn addr 0x2af011c size 0xd8 virtual false final false
 void set_clipIn(double_t value) ;

/// @brief Method get_displayName addr 0x2af01f4 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2af01fc size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_clipAssetDuration addr 0x2af0204 size 0xc0 virtual false final false
 double_t get_clipAssetDuration() ;

/// @brief Method get_curves addr 0x2af02c4 size 0x8 virtual true final true
 UnityEngine::AnimationClip get_curves() ;

/// @brief Method set_curves addr 0x2af02cc size 0x8 virtual false final false
 void set_curves(UnityEngine::AnimationClip value) ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName addr 0x2af02d4 size 0x58 virtual true final true
 ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() ;

/// @brief Method get_hasCurves addr 0x2af032c size 0x8c virtual true final true
 bool get_hasCurves() ;

/// @brief Method get_asset addr 0x2af03b8 size 0x8 virtual true final true
 UnityEngine::Object get_asset() ;

/// @brief Method set_asset addr 0x2af03c0 size 0x8 virtual false final false
 void set_asset(UnityEngine::Object value) ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner addr 0x2af03c8 size 0x8 virtual true final true
 UnityEngine::Object UnityEngine_Timeline_ICurvesOwner_get_assetOwner() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack addr 0x2af03d0 size 0x8 virtual true final true
 UnityEngine::Timeline::TrackAsset UnityEngine_Timeline_ICurvesOwner_get_targetTrack() ;

/// @brief Method get_underlyingAsset addr 0x2af03d8 size 0x8 virtual false final false
 UnityEngine::Object get_underlyingAsset() ;

/// @brief Method set_underlyingAsset addr 0x2af03e0 size 0x4 virtual false final false
 void set_underlyingAsset(UnityEngine::Object value) ;

/// @brief Method get_parentTrack addr 0x2af03e4 size 0x8 virtual false final false
 UnityEngine::Timeline::TrackAsset get_parentTrack() ;

/// @brief Method set_parentTrack addr 0x2af03ec size 0x4 virtual false final false
 void set_parentTrack(UnityEngine::Timeline::TrackAsset value) ;

/// @brief Method GetParentTrack addr 0x2af03f0 size 0x8 virtual false final false
 UnityEngine::Timeline::TrackAsset GetParentTrack() ;

/// @brief Method SetParentTrack_Internal addr 0x2aefb60 size 0xf4 virtual false final false
 void SetParentTrack_Internal(UnityEngine::Timeline::TrackAsset newParentTrack) ;

/// @brief Method get_easeInDuration addr 0x2af052c size 0xbc virtual false final false
 double_t get_easeInDuration() ;

/// @brief Method set_easeInDuration addr 0x2af0614 size 0xf8 virtual false final false
 void set_easeInDuration(double_t value) ;

/// @brief Method get_easeOutDuration addr 0x2af070c size 0xbc virtual false final false
 double_t get_easeOutDuration() ;

/// @brief Method set_easeOutDuration addr 0x2af07f4 size 0xf8 virtual false final false
 void set_easeOutDuration(double_t value) ;

/// @brief Method get_eastOutTime addr 0x2af08ec size 0x2c virtual false final false
 double_t get_eastOutTime() ;

/// @brief Method get_easeOutTime addr 0x2af0918 size 0x2c virtual false final false
 double_t get_easeOutTime() ;

/// @brief Method get_blendInDuration addr 0x2af0944 size 0x20 virtual false final false
 double_t get_blendInDuration() ;

/// @brief Method set_blendInDuration addr 0x2af0964 size 0x88 virtual false final false
 void set_blendInDuration(double_t value) ;

/// @brief Method get_blendOutDuration addr 0x2af09ec size 0x20 virtual false final false
 double_t get_blendOutDuration() ;

/// @brief Method set_blendOutDuration addr 0x2af0a0c size 0x88 virtual false final false
 void set_blendOutDuration(double_t value) ;

/// @brief Method get_blendInCurveMode addr 0x2af0a94 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode get_blendInCurveMode() ;

/// @brief Method set_blendInCurveMode addr 0x2af0a9c size 0x8 virtual false final false
 void set_blendInCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value) ;

/// @brief Method get_blendOutCurveMode addr 0x2af0aa4 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode get_blendOutCurveMode() ;

/// @brief Method set_blendOutCurveMode addr 0x2af0aac size 0x8 virtual false final false
 void set_blendOutCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value) ;

/// @brief Method get_hasBlendIn addr 0x2af07c8 size 0x2c virtual false final false
 bool get_hasBlendIn() ;

/// @brief Method get_hasBlendOut addr 0x2af05e8 size 0x2c virtual false final false
 bool get_hasBlendOut() ;

/// @brief Method get_mixInCurve addr 0x2af0ab4 size 0x8c virtual false final false
 UnityEngine::AnimationCurve get_mixInCurve() ;

/// @brief Method set_mixInCurve addr 0x2af0b58 size 0x8 virtual false final false
 void set_mixInCurve(UnityEngine::AnimationCurve value) ;

/// @brief Method get_mixInPercentage addr 0x2af0b60 size 0x20 virtual false final false
 float_t get_mixInPercentage() ;

/// @brief Method get_mixInDuration addr 0x2af0b80 size 0x44 virtual false final false
 double_t get_mixInDuration() ;

/// @brief Method get_mixOutCurve addr 0x2af0bc4 size 0x8c virtual false final false
 UnityEngine::AnimationCurve get_mixOutCurve() ;

/// @brief Method set_mixOutCurve addr 0x2af0c68 size 0x8 virtual false final false
 void set_mixOutCurve(UnityEngine::AnimationCurve value) ;

/// @brief Method get_mixOutTime addr 0x2af0c70 size 0x2c virtual false final false
 double_t get_mixOutTime() ;

/// @brief Method get_mixOutDuration addr 0x2af0c9c size 0x44 virtual false final false
 double_t get_mixOutDuration() ;

/// @brief Method get_mixOutPercentage addr 0x2af0ce0 size 0x20 virtual false final false
 float_t get_mixOutPercentage() ;

/// @brief Method get_recordable addr 0x2af0d00 size 0x8 virtual false final false
 bool get_recordable() ;

/// @brief Method set_recordable addr 0x2af0d08 size 0xc virtual false final false
 void set_recordable(bool value) ;

/// @brief Method get_exposedParameters addr 0x2af0d14 size 0x80 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_exposedParameters() ;

/// @brief Method get_clipCaps addr 0x2aefd6c size 0xe4 virtual false final false
 UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method Hash addr 0x2af0d94 size 0x1ec virtual false final false
 int32_t Hash() ;

/// @brief Method EvaluateMixOut addr 0x2af0f80 size 0xf4 virtual false final false
 float_t EvaluateMixOut(double_t time) ;

/// @brief Method EvaluateMixIn addr 0x2af1074 size 0xd4 virtual false final false
 float_t EvaluateMixIn(double_t time) ;

/// @brief Method GetDefaultMixInCurve addr 0x2af0b40 size 0x18 virtual false final false
static UnityEngine::AnimationCurve GetDefaultMixInCurve() ;

/// @brief Method GetDefaultMixOutCurve addr 0x2af0c50 size 0x18 virtual false final false
static UnityEngine::AnimationCurve GetDefaultMixOutCurve() ;

/// @brief Method ToLocalTime addr 0x2af1148 size 0xec virtual false final false
 double_t ToLocalTime(double_t time) ;

/// @brief Method ToLocalTimeUnbound addr 0x2af13f4 size 0x50 virtual false final false
 double_t ToLocalTimeUnbound(double_t time) ;

/// @brief Method FromLocalTimeUnbound addr 0x2af1444 size 0x44 virtual false final false
 double_t FromLocalTimeUnbound(double_t time) ;

/// @brief Method get_animationClip addr 0x2af1488 size 0xf8 virtual false final false
 UnityEngine::AnimationClip get_animationClip() ;

/// @brief Method SanitizeTimeValue addr 0x2aeff44 size 0x198 virtual false final false
static double_t SanitizeTimeValue(double_t value, double_t defaultValue) ;

/// @brief Method get_postExtrapolationMode addr 0x2af1580 size 0x24 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_postExtrapolationMode() ;

/// @brief Method set_postExtrapolationMode addr 0x2aec354 size 0x34 virtual false final false
 void set_postExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method get_preExtrapolationMode addr 0x2af15a4 size 0x24 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation get_preExtrapolationMode() ;

/// @brief Method set_preExtrapolationMode addr 0x2aec320 size 0x34 virtual false final false
 void set_preExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value) ;

/// @brief Method SetPostExtrapolationTime addr 0x2af15c8 size 0x8 virtual false final false
 void SetPostExtrapolationTime(double_t time) ;

/// @brief Method SetPreExtrapolationTime addr 0x2af15d0 size 0x8 virtual false final false
 void SetPreExtrapolationTime(double_t time) ;

/// @brief Method IsExtrapolatedTime addr 0x2af15d8 size 0x3c virtual false final false
 bool IsExtrapolatedTime(double_t sequenceTime) ;

/// @brief Method IsPreExtrapolatedTime addr 0x2af1234 size 0x50 virtual false final false
 bool IsPreExtrapolatedTime(double_t sequenceTime) ;

/// @brief Method IsPostExtrapolatedTime addr 0x2af139c size 0x58 virtual false final false
 bool IsPostExtrapolatedTime(double_t sequenceTime) ;

/// @brief Method get_extrapolatedStart addr 0x2af1614 size 0x18 virtual false final false
 double_t get_extrapolatedStart() ;

/// @brief Method get_extrapolatedDuration addr 0x2af162c size 0xcc virtual false final false
 double_t get_extrapolatedDuration() ;

/// @brief Method GetExtrapolatedTime addr 0x2af1284 size 0x118 virtual false final false
static double_t GetExtrapolatedTime(double_t time, UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation mode, double_t duration) ;

/// @brief Method CreateCurves addr 0x2af16f8 size 0xcc virtual true final true
 void CreateCurves(::StringW curvesClipName) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2af17c4 size 0xc virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2af17d0 size 0x38 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method ToString addr 0x2af1808 size 0x1dc virtual true final false
 ::StringW ToString() ;

/// @brief Method ConformEaseValues addr 0x2af19e4 size 0x90 virtual false final false
 void ConformEaseValues() ;

/// @brief Method CalculateEasingRatio addr 0x2af1a74 size 0xcc virtual false final false
static double_t CalculateEasingRatio(double_t easeIn, double_t easeOut) ;

/// @brief Method UpdateDirty addr 0x2aeff38 size 0x4 virtual false final false
 void UpdateDirty(double_t oldValue, double_t newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, "UnityEngine.Timeline", "TimelineClip/BlendCurveMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, "UnityEngine.Timeline", "TimelineClip/ClipExtrapolation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
NEED_NO_BOX(UnityEngine::Timeline::TimelineClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip, "UnityEngine.Timeline", "TimelineClip");
NEED_NO_BOX(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade, "UnityEngine.Timeline", "TimelineClip/TimelineClipUpgrade");
