#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcModelTypeAttribute;
}
// Type: JetBrains.Annotations::AspMvcModelTypeAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15733))
// CS Name: JetBrains.Annotations.AspMvcModelTypeAttribute
class CORDL_TYPE AspMvcModelTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcModelTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcModelTypeAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcModelTypeAttribute(AspMvcModelTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcModelTypeAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcModelTypeAttribute(AspMvcModelTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcModelTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcModelTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcModelTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcModelTypeAttribute& operator=(AspMvcModelTypeAttribute&& o) noexcept = default;
  constexpr AspMvcModelTypeAttribute& operator=(AspMvcModelTypeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcModelTypeAttribute() ;

/// @brief Method .ctor addr 0x2d732b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcModelTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcModelTypeAttribute, "JetBrains.Annotations", "AspMvcModelTypeAttribute");
