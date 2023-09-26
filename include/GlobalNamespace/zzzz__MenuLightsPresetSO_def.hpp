#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MenuLightsPresetSO__LightIdColorPair;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
// Type: ::LightIdColorPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4463))
// CS Name: MenuLightsPresetSO::LightIdColorPair
class CORDL_TYPE GlobalNamespace__MenuLightsPresetSO__LightIdColorPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MenuLightsPresetSO__LightIdColorPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuLightsPresetSO__LightIdColorPair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(GlobalNamespace__MenuLightsPresetSO__LightIdColorPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuLightsPresetSO__LightIdColorPair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(GlobalNamespace__MenuLightsPresetSO__LightIdColorPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(GlobalNamespace__MenuLightsPresetSO__LightIdColorPair&& o) noexcept = default;
  constexpr GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(GlobalNamespace__MenuLightsPresetSO__LightIdColorPair const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lightId, put=__set_lightId))  lightId;

constexpr void __set_lightId(int32_t value) ;

constexpr int32_t __get_lightId() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get_baseColor, put=__set_baseColor))  baseColor;

constexpr void __set_baseColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get_baseColor() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_lightColor))  lightColor;


// Methods

/// @brief Method get_lightColor addr 0x222a03c size 0x2c virtual false final false
 UnityEngine::Color get_lightColor() ;

// Ctor Parameters []
explicit GlobalNamespace__MenuLightsPresetSO__LightIdColorPair() ;

/// @brief Method .ctor addr 0x222a068 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuLightsPresetSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4464))
// CS Name: MenuLightsPresetSO
class CORDL_TYPE MenuLightsPresetSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LightIdColorPair = GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MenuLightsPresetSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: " const&", def_value: None }]
constexpr MenuLightsPresetSO(MenuLightsPresetSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "&&", def_value: None }]
constexpr MenuLightsPresetSO(MenuLightsPresetSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuLightsPresetSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MenuLightsPresetSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuLightsPresetSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuLightsPresetSO& operator=(MenuLightsPresetSO&& o) noexcept = default;
  constexpr MenuLightsPresetSO& operator=(MenuLightsPresetSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSO __declspec(property(get=__get__playersPlaceNeonsColor, put=__set__playersPlaceNeonsColor))  _playersPlaceNeonsColor;

constexpr void __set__playersPlaceNeonsColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__playersPlaceNeonsColor() const;

 float_t __declspec(property(get=__get__playersPlaceNeonsIntensity, put=__set__playersPlaceNeonsIntensity))  _playersPlaceNeonsIntensity;

constexpr void __set__playersPlaceNeonsIntensity(float_t value) ;

constexpr float_t __get__playersPlaceNeonsIntensity() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __declspec(property(get=__get__lightIdColorPairs, put=__set__lightIdColorPairs))  _lightIdColorPairs;

constexpr void __set__lightIdColorPairs(::ArrayW<GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __get__lightIdColorPairs() const;


// Properties

 GlobalNamespace::ColorSO __declspec(property(get=get_playersPlaceNeonsColor))  playersPlaceNeonsColor;

 float_t __declspec(property(get=get_playersPlaceNeonsIntensity))  playersPlaceNeonsIntensity;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __declspec(property(get=get_lightIdColorPairs))  lightIdColorPairs;


// Methods

/// @brief Method get_playersPlaceNeonsColor addr 0x222a014 size 0x8 virtual false final false
 GlobalNamespace::ColorSO get_playersPlaceNeonsColor() ;

/// @brief Method get_playersPlaceNeonsIntensity addr 0x222a01c size 0x8 virtual false final false
 float_t get_playersPlaceNeonsIntensity() ;

/// @brief Method get_lightIdColorPairs addr 0x222a024 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> get_lightIdColorPairs() ;

// Ctor Parameters []
explicit MenuLightsPresetSO() ;

/// @brief Method .ctor addr 0x222a02c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MenuLightsPresetSO__LightIdColorPair, "", "MenuLightsPresetSO/LightIdColorPair");
NEED_NO_BOX(GlobalNamespace::MenuLightsPresetSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO, "", "MenuLightsPresetSO");
