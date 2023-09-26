#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroup;
}
// Type: ::LightRotationGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5047), inst: 3823 }), TypeDefinitionIndex(TypeDefinitionIndex(5036)), TypeDefinitionIndex(TypeDefinitionIndex(5047)), TypeDefinitionIndex(TypeDefinitionIndex(5038)), TypeDefinitionIndex(TypeDefinitionIndex(5037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5043))
// CS Name: LightRotationGroup
class CORDL_TYPE LightRotationGroup : public GlobalNamespace::LightTransformGroup_3<GlobalNamespace::LightGroupRotationXTransform,GlobalNamespace::LightGroupRotationYTransform,GlobalNamespace::LightGroupRotationZTransform> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightRotationGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: " const&", def_value: None }]
constexpr LightRotationGroup(LightRotationGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroup", modifiers: "&&", def_value: None }]
constexpr LightRotationGroup(LightRotationGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationGroup(void* ptr) noexcept : GlobalNamespace::LightTransformGroup_3<GlobalNamespace::LightGroupRotationXTransform,GlobalNamespace::LightGroupRotationYTransform,GlobalNamespace::LightGroupRotationZTransform>(ptr) {
}


  constexpr LightRotationGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationGroup& operator=(LightRotationGroup&& o) noexcept = default;
  constexpr LightRotationGroup& operator=(LightRotationGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightRotationGroup() ;

/// @brief Method .ctor addr 0x2298610 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationGroup, "", "LightRotationGroup");
