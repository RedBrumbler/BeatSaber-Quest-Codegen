#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct GlobalNamespace__LightConstants__BakeId;
}
namespace GlobalNamespace {
class GlobalNamespace__LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14713))
// CS Name: LightmapLightsWithIds::LightIntensitiesWithId
class CORDL_TYPE GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId : public GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId&& o) noexcept = default;
  constexpr GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__LightConstants__BakeId __declspec(property(get=__get__bakeId, put=__set__bakeId))  _bakeId;

constexpr void __set__bakeId(GlobalNamespace::GlobalNamespace__LightConstants__BakeId value) ;

constexpr GlobalNamespace::GlobalNamespace__LightConstants__BakeId __get__bakeId() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__weight, put=__set__weight))  _weight;

constexpr void __set__weight(float_t value) ;

constexpr float_t __get__weight() const;

 int32_t __declspec(property(get=__get__lightmapLightIdColorPropertyId, put=__set__lightmapLightIdColorPropertyId))  _lightmapLightIdColorPropertyId;

constexpr void __set__lightmapLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightmapLightIdColorPropertyId() const;

 int32_t __declspec(property(get=__get__lightProbeLightIdColorPropertyId, put=__set__lightProbeLightIdColorPropertyId))  _lightProbeLightIdColorPropertyId;

constexpr void __set__lightProbeLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightProbeLightIdColorPropertyId() const;

 bool __declspec(property(get=__get__initializedPropertyIds, put=__set__initializedPropertyIds))  _initializedPropertyIds;

constexpr void __set__initializedPropertyIds(bool value) ;

constexpr bool __get__initializedPropertyIds() const;


// Properties

 GlobalNamespace::GlobalNamespace__LightConstants__BakeId __declspec(property(get=get_bakeId))  bakeId;

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;

 float_t __declspec(property(get=get_weight, put=set_weight))  weight;


// Methods

/// @brief Method get_bakeId addr 0x1fd8770 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__LightConstants__BakeId get_bakeId() ;

/// @brief Method get_intensity addr 0x1fd8778 size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x1fd8780 size 0x8 virtual false final false
 void set_intensity(float_t value) ;

/// @brief Method get_weight addr 0x1fd8788 size 0x8 virtual false final false
 float_t get_weight() ;

/// @brief Method set_weight addr 0x1fd8790 size 0x8 virtual false final false
 void set_weight(float_t value) ;

/// @brief Method SetDataToShaders addr 0x1fd85f8 size 0x160 virtual false final false
 void SetDataToShaders(UnityEngine::Color lightmapColor, UnityEngine::Color probeColor) ;

// Ctor Parameters []
explicit GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId() ;

/// @brief Method .ctor addr 0x1fd8798 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightmapLightsWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14725))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14714))
// CS Name: LightmapLightsWithIds
class CORDL_TYPE LightmapLightsWithIds : public GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LightmapLightsWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: " const&", def_value: None }]
constexpr LightmapLightsWithIds(LightmapLightsWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "&&", def_value: None }]
constexpr LightmapLightsWithIds(LightmapLightsWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapLightsWithIds(void* ptr) noexcept : GlobalNamespace::LightWithIds(ptr) {
}


  constexpr LightmapLightsWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapLightsWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapLightsWithIds& operator=(LightmapLightsWithIds&& o) noexcept = default;
  constexpr LightmapLightsWithIds& operator=(LightmapLightsWithIds const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__maxTotalIntensity, put=__set__maxTotalIntensity))  _maxTotalIntensity;

constexpr void __set__maxTotalIntensity(float_t value) ;

constexpr float_t __get__maxTotalIntensity() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData))  _lightIntensityData;

constexpr void __set__lightIntensityData(::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> __get__lightIntensityData() const;


// Properties

 float_t __declspec(property(get=get_maxTotalIntensity, put=set_maxTotalIntensity))  maxTotalIntensity;


// Methods

/// @brief Method get_maxTotalIntensity addr 0x1fd83f0 size 0x8 virtual false final false
 float_t get_maxTotalIntensity() ;

/// @brief Method set_maxTotalIntensity addr 0x1fd83f8 size 0x8 virtual false final false
 void set_maxTotalIntensity(float_t value) ;

/// @brief Method ProcessNewColorData addr 0x1fd8400 size 0x1f8 virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1fd8758 size 0x8 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

// Ctor Parameters []
explicit LightmapLightsWithIds() ;

/// @brief Method .ctor addr 0x1fd8760 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId, "", "LightmapLightsWithIds/LightIntensitiesWithId");
NEED_NO_BOX(GlobalNamespace::LightmapLightsWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmapLightsWithIds, "", "LightmapLightsWithIds");
