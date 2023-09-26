#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithLightGroupIds;
}
// Type: ::DirectionalLightWithLightGroupIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14735))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14707))
// CS Name: DirectionalLightWithLightGroupIds
class CORDL_TYPE DirectionalLightWithLightGroupIds : public GlobalNamespace::RuntimeLightWithLightGroupIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~DirectionalLightWithLightGroupIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: " const&", def_value: None }]
constexpr DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: "&&", def_value: None }]
constexpr DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectionalLightWithLightGroupIds(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithLightGroupIds(ptr) {
}


  constexpr DirectionalLightWithLightGroupIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectionalLightWithLightGroupIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectionalLightWithLightGroupIds& operator=(DirectionalLightWithLightGroupIds&& o) noexcept = default;
  constexpr DirectionalLightWithLightGroupIds& operator=(DirectionalLightWithLightGroupIds const& o) noexcept = default;
                


// Fields

 GlobalNamespace::DirectionalLight __declspec(property(get=__get__directionalLight, put=__set__directionalLight))  _directionalLight;

constexpr void __set__directionalLight(GlobalNamespace::DirectionalLight value) ;

constexpr GlobalNamespace::DirectionalLight __get__directionalLight() const;


// Methods

/// @brief Method ColorWasSet addr 0x1fd82a4 size 0x20 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit DirectionalLightWithLightGroupIds() ;

/// @brief Method .ctor addr 0x1fd82c4 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DirectionalLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithLightGroupIds, "", "DirectionalLightWithLightGroupIds");
