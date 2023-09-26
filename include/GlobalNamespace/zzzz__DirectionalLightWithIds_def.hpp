#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class DirectionalLight;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
// Type: ::DirectionalLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14702))
// CS Name: DirectionalLightWithIds
class CORDL_TYPE DirectionalLightWithIds : public GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~DirectionalLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: " const&", def_value: None }]
constexpr DirectionalLightWithIds(DirectionalLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "&&", def_value: None }]
constexpr DirectionalLightWithIds(DirectionalLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectionalLightWithIds(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithIds(ptr) {
}


  constexpr DirectionalLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectionalLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectionalLightWithIds& operator=(DirectionalLightWithIds&& o) noexcept = default;
  constexpr DirectionalLightWithIds& operator=(DirectionalLightWithIds const& o) noexcept = default;
                


// Fields

 GlobalNamespace::DirectionalLight __declspec(property(get=__get__directionalLight, put=__set__directionalLight))  _directionalLight;

constexpr void __set__directionalLight(GlobalNamespace::DirectionalLight value) ;

constexpr GlobalNamespace::DirectionalLight __get__directionalLight() const;

 bool __declspec(property(get=__get__setIntensityOnly, put=__set__setIntensityOnly))  _setIntensityOnly;

constexpr void __set__setIntensityOnly(bool value) ;

constexpr bool __get__setIntensityOnly() const;

 UnityEngine::Color __declspec(property(get=__get__defaultColor, put=__set__defaultColor))  _defaultColor;

constexpr void __set__defaultColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__defaultColor() const;


// Methods

/// @brief Method ColorWasSet addr 0x1fd81d4 size 0x44 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit DirectionalLightWithIds() ;

/// @brief Method .ctor addr 0x1fd8218 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DirectionalLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithIds, "", "DirectionalLightWithIds");
