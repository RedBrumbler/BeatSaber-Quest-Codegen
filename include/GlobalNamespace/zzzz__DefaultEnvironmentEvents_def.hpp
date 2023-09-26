#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct GlobalNamespace__IndexFilter__IndexFilterRandomType;
}
namespace GlobalNamespace {
struct GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering;
}
// Type: ::BasicBeatmapEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4194))
// CS Name: DefaultEnvironmentEvents::BasicBeatmapEvent
class CORDL_TYPE GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent(GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent(GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent& operator=(GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent&& o) noexcept = default;
  constexpr GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent& operator=(GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__eventType, put=__set__eventType))  _eventType;

constexpr void __set__eventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__eventType() const;

 int32_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int32_t value) ;

constexpr int32_t __get__value() const;

 float_t __declspec(property(get=__get__floatValue, put=__set__floatValue))  _floatValue;

constexpr void __set__floatValue(float_t value) ;

constexpr float_t __get__floatValue() const;


// Properties

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=get_eventType))  eventType;

 int32_t __declspec(property(get=get_value))  value;

 float_t __declspec(property(get=get_floatValue))  floatValue;


// Methods

/// @brief Method get_eventType addr 0x21f55d4 size 0x8 virtual false final false
 GlobalNamespace::BasicBeatmapEventType get_eventType() ;

/// @brief Method get_value addr 0x21f55dc size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method get_floatValue addr 0x21f55e4 size 0x8 virtual false final false
 float_t get_floatValue() ;

// Ctor Parameters []
explicit GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent() ;

/// @brief Method .ctor addr 0x21f55ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightGroupDistribution
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4195))
// CS Name: DefaultEnvironmentEvents::LightGroupDistribution
class CORDL_TYPE GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution(GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution(GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution&& o) noexcept = default;
  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useDistribution, put=__set__useDistribution))  _useDistribution;

constexpr void __set__useDistribution(bool value) ;

constexpr bool __get__useDistribution() const;

 float_t __declspec(property(get=__get__distributionParam, put=__set__distributionParam))  _distributionParam;

constexpr void __set__distributionParam(float_t value) ;

constexpr float_t __get__distributionParam() const;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __declspec(property(get=__get__distributionParamType, put=__set__distributionParamType))  _distributionParamType;

constexpr void __set__distributionParamType(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __get__distributionParamType() const;


// Properties

 bool __declspec(property(get=get_useDistribution))  useDistribution;

 float_t __declspec(property(get=get_distributionParam))  distributionParam;

 GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType __declspec(property(get=get_distributionParamType))  distributionParamType;


// Methods

/// @brief Method get_useDistribution addr 0x21f55f4 size 0x8 virtual false final false
 bool get_useDistribution() ;

/// @brief Method get_distributionParam addr 0x21f55fc size 0x8 virtual false final false
 float_t get_distributionParam() ;

/// @brief Method get_distributionParamType addr 0x21f5604 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType get_distributionParamType() ;

// Ctor Parameters []
explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution() ;

/// @brief Method .ctor addr 0x21f560c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightGroupFiltering
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4196))
// CS Name: DefaultEnvironmentEvents::LightGroupFiltering
class CORDL_TYPE GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering(GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering(GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering&& o) noexcept = default;
  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useFiltering, put=__set__useFiltering))  _useFiltering;

constexpr void __set__useFiltering(bool value) ;

constexpr bool __get__useFiltering() const;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType __declspec(property(get=__get__randomType, put=__set__randomType))  _randomType;

constexpr void __set__randomType(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType value) ;

constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType __get__randomType() const;

 float_t __declspec(property(get=__get__limit, put=__set__limit))  _limit;

constexpr void __set__limit(float_t value) ;

constexpr float_t __get__limit() const;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __declspec(property(get=__get__alsoAffectType, put=__set__alsoAffectType))  _alsoAffectType;

constexpr void __set__alsoAffectType(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType value) ;

constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __get__alsoAffectType() const;

 int32_t __declspec(property(get=__get__seed, put=__set__seed))  _seed;

constexpr void __set__seed(int32_t value) ;

constexpr int32_t __get__seed() const;

 int32_t __declspec(property(get=__get__chunks, put=__set__chunks))  _chunks;

constexpr void __set__chunks(int32_t value) ;

constexpr int32_t __get__chunks() const;


// Properties

 bool __declspec(property(get=get_useFiltering))  useFiltering;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType __declspec(property(get=get_randomType))  randomType;

 float_t __declspec(property(get=get_limit))  limit;

 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType __declspec(property(get=get_alsoAffectType))  alsoAffectType;

 int32_t __declspec(property(get=get_seed))  seed;

 int32_t __declspec(property(get=get_chunks))  chunks;


// Methods

/// @brief Method get_useFiltering addr 0x21f5614 size 0x8 virtual false final false
 bool get_useFiltering() ;

/// @brief Method get_randomType addr 0x21f561c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType get_randomType() ;

/// @brief Method get_limit addr 0x21f5624 size 0x8 virtual false final false
 float_t get_limit() ;

/// @brief Method get_alsoAffectType addr 0x21f562c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType get_alsoAffectType() ;

/// @brief Method get_seed addr 0x21f5634 size 0x8 virtual false final false
 int32_t get_seed() ;

/// @brief Method get_chunks addr 0x21f563c size 0x8 virtual false final false
 int32_t get_chunks() ;

// Ctor Parameters []
explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering() ;

/// @brief Method .ctor addr 0x21f5644 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightGroupEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4197))
// CS Name: DefaultEnvironmentEvents::LightGroupEvent
class CORDL_TYPE GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent(GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent(GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent&& o) noexcept = default;
  constexpr GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent& operator=(GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightGroupSO __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(GlobalNamespace::LightGroupSO value) ;

constexpr GlobalNamespace::LightGroupSO __get__lightGroup() const;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=__get__environmentColorType, put=__set__environmentColorType))  _environmentColorType;

constexpr void __set__environmentColorType(GlobalNamespace::EnvironmentColorType value) ;

constexpr GlobalNamespace::EnvironmentColorType __get__environmentColorType() const;

 float_t __declspec(property(get=__get__brightness, put=__set__brightness))  _brightness;

constexpr void __set__brightness(float_t value) ;

constexpr float_t __get__brightness() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__brightnessDistribution, put=__set__brightnessDistribution))  _brightnessDistribution;

constexpr void __set__brightnessDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__brightnessDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=__get__brightnessFiltering, put=__set__brightnessFiltering))  _brightnessFiltering;

constexpr void __set__brightnessFiltering(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __get__brightnessFiltering() const;

 float_t __declspec(property(get=__get__rotationX, put=__set__rotationX))  _rotationX;

constexpr void __set__rotationX(float_t value) ;

constexpr float_t __get__rotationX() const;

 float_t __declspec(property(get=__get__rotationY, put=__set__rotationY))  _rotationY;

constexpr void __set__rotationY(float_t value) ;

constexpr float_t __get__rotationY() const;

 float_t __declspec(property(get=__get__rotationZ, put=__set__rotationZ))  _rotationZ;

constexpr void __set__rotationZ(float_t value) ;

constexpr float_t __get__rotationZ() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__rotationXDistribution, put=__set__rotationXDistribution))  _rotationXDistribution;

constexpr void __set__rotationXDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__rotationXDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__rotationYDistribution, put=__set__rotationYDistribution))  _rotationYDistribution;

constexpr void __set__rotationYDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__rotationYDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__rotationZDistribution, put=__set__rotationZDistribution))  _rotationZDistribution;

constexpr void __set__rotationZDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__rotationZDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=__get__rotationFiltering, put=__set__rotationFiltering))  _rotationFiltering;

constexpr void __set__rotationFiltering(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __get__rotationFiltering() const;

 float_t __declspec(property(get=__get__translationX, put=__set__translationX))  _translationX;

constexpr void __set__translationX(float_t value) ;

constexpr float_t __get__translationX() const;

 float_t __declspec(property(get=__get__translationY, put=__set__translationY))  _translationY;

constexpr void __set__translationY(float_t value) ;

constexpr float_t __get__translationY() const;

 float_t __declspec(property(get=__get__translationZ, put=__set__translationZ))  _translationZ;

constexpr void __set__translationZ(float_t value) ;

constexpr float_t __get__translationZ() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__translationXDistribution, put=__set__translationXDistribution))  _translationXDistribution;

constexpr void __set__translationXDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__translationXDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__translationYDistribution, put=__set__translationYDistribution))  _translationYDistribution;

constexpr void __set__translationYDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__translationYDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=__get__translationZDistribution, put=__set__translationZDistribution))  _translationZDistribution;

constexpr void __set__translationZDistribution(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __get__translationZDistribution() const;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=__get__translationFiltering, put=__set__translationFiltering))  _translationFiltering;

constexpr void __set__translationFiltering(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering value) ;

constexpr GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __get__translationFiltering() const;


// Properties

 GlobalNamespace::LightGroupSO __declspec(property(get=get_lightGroup))  lightGroup;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=get_environmentColorType))  environmentColorType;

 float_t __declspec(property(get=get_brightness))  brightness;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_brightnessDistribution))  brightnessDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=get_brightnessFiltering))  brightnessFiltering;

 float_t __declspec(property(get=get_rotationX))  rotationX;

 float_t __declspec(property(get=get_rotationY))  rotationY;

 float_t __declspec(property(get=get_rotationZ))  rotationZ;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_rotationXDistribution))  rotationXDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_rotationYDistribution))  rotationYDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_rotationZDistribution))  rotationZDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=get_rotationFiltering))  rotationFiltering;

 float_t __declspec(property(get=get_translationX))  translationX;

 float_t __declspec(property(get=get_translationY))  translationY;

 float_t __declspec(property(get=get_translationZ))  translationZ;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_translationXDistribution))  translationXDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_translationYDistribution))  translationYDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution __declspec(property(get=get_translationZDistribution))  translationZDistribution;

 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering __declspec(property(get=get_translationFiltering))  translationFiltering;


// Methods

/// @brief Method get_lightGroup addr 0x21f564c size 0x8 virtual false final false
 GlobalNamespace::LightGroupSO get_lightGroup() ;

/// @brief Method get_environmentColorType addr 0x21f5654 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentColorType get_environmentColorType() ;

/// @brief Method get_brightness addr 0x21f565c size 0x8 virtual false final false
 float_t get_brightness() ;

/// @brief Method get_brightnessDistribution addr 0x21f5664 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_brightnessDistribution() ;

/// @brief Method get_brightnessFiltering addr 0x21f566c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering get_brightnessFiltering() ;

/// @brief Method get_rotationX addr 0x21f5674 size 0x8 virtual false final false
 float_t get_rotationX() ;

/// @brief Method get_rotationY addr 0x21f567c size 0x8 virtual false final false
 float_t get_rotationY() ;

/// @brief Method get_rotationZ addr 0x21f5684 size 0x8 virtual false final false
 float_t get_rotationZ() ;

/// @brief Method get_rotationXDistribution addr 0x21f568c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_rotationXDistribution() ;

/// @brief Method get_rotationYDistribution addr 0x21f5694 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_rotationYDistribution() ;

/// @brief Method get_rotationZDistribution addr 0x21f569c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_rotationZDistribution() ;

/// @brief Method get_rotationFiltering addr 0x21f56a4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering get_rotationFiltering() ;

/// @brief Method get_translationX addr 0x21f56ac size 0x8 virtual false final false
 float_t get_translationX() ;

/// @brief Method get_translationY addr 0x21f56b4 size 0x8 virtual false final false
 float_t get_translationY() ;

/// @brief Method get_translationZ addr 0x21f56bc size 0x8 virtual false final false
 float_t get_translationZ() ;

/// @brief Method get_translationXDistribution addr 0x21f56c4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_translationXDistribution() ;

/// @brief Method get_translationYDistribution addr 0x21f56cc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_translationYDistribution() ;

/// @brief Method get_translationZDistribution addr 0x21f56d4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution get_translationZDistribution() ;

/// @brief Method get_translationFiltering addr 0x21f56dc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering get_translationFiltering() ;

// Ctor Parameters []
explicit GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent() ;

/// @brief Method .ctor addr 0x21f56e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DefaultEnvironmentEvents
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4198))
// CS Name: DefaultEnvironmentEvents
class CORDL_TYPE DefaultEnvironmentEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LightGroupEvent = GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent;

using LightGroupFiltering = GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering;

using LightGroupDistribution = GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution;

using BasicBeatmapEvent = GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DefaultEnvironmentEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: " const&", def_value: None }]
constexpr DefaultEnvironmentEvents(DefaultEnvironmentEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: "&&", def_value: None }]
constexpr DefaultEnvironmentEvents(DefaultEnvironmentEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultEnvironmentEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultEnvironmentEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultEnvironmentEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultEnvironmentEvents& operator=(DefaultEnvironmentEvents&& o) noexcept = default;
  constexpr DefaultEnvironmentEvents& operator=(DefaultEnvironmentEvents const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent> __declspec(property(get=__get__basicBeatmapEvents, put=__set__basicBeatmapEvents))  _basicBeatmapEvents;

constexpr void __set__basicBeatmapEvents(::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent> __get__basicBeatmapEvents() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent> __declspec(property(get=__get__lightGroupEvents, put=__set__lightGroupEvents))  _lightGroupEvents;

constexpr void __set__lightGroupEvents(::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent> __get__lightGroupEvents() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent> __declspec(property(get=get_basicBeatmapEvents))  basicBeatmapEvents;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent> __declspec(property(get=get_lightGroupEvents))  lightGroupEvents;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_basicBeatmapEvents addr 0x21f5584 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent> get_basicBeatmapEvents() ;

/// @brief Method get_lightGroupEvents addr 0x21f558c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent> get_lightGroupEvents() ;

/// @brief Method get_isEmpty addr 0x21f5594 size 0x38 virtual false final false
 bool get_isEmpty() ;

// Ctor Parameters []
explicit DefaultEnvironmentEvents() ;

/// @brief Method .ctor addr 0x21f55cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DefaultEnvironmentEvents);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultEnvironmentEvents, "", "DefaultEnvironmentEvents");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__BasicBeatmapEvent, "", "DefaultEnvironmentEvents/BasicBeatmapEvent");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupDistribution, "", "DefaultEnvironmentEvents/LightGroupDistribution");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent, "", "DefaultEnvironmentEvents/LightGroupEvent");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering, "", "DefaultEnvironmentEvents/LightGroupFiltering");
