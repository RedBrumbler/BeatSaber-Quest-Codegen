#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
namespace GlobalNamespace {
class PointLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PointLightWithIds;
}
// Type: ::PointLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14730))
// CS Name: PointLightWithIds
class CORDL_TYPE PointLightWithIds : public GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PointLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: " const&", def_value: None }]
constexpr PointLightWithIds(PointLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: "&&", def_value: None }]
constexpr PointLightWithIds(PointLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointLightWithIds(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithIds(ptr) {
}


  constexpr PointLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointLightWithIds& operator=(PointLightWithIds&& o) noexcept = default;
  constexpr PointLightWithIds& operator=(PointLightWithIds const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PointLight __declspec(property(get=__get__pointLight, put=__set__pointLight))  _pointLight;

constexpr void __set__pointLight(GlobalNamespace::PointLight value) ;

constexpr GlobalNamespace::PointLight __get__pointLight() const;


// Methods

/// @brief Method ColorWasSet addr 0x1fdb5ac size 0x20 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit PointLightWithIds() ;

/// @brief Method .ctor addr 0x1fdb5cc size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PointLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLightWithIds, "", "PointLightWithIds");
