#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class InAttribute;
}
// Type: System.Runtime.InteropServices::InAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3319))
// CS Name: System.Runtime.InteropServices.InAttribute
class CORDL_TYPE InAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: " const&", def_value: None }]
constexpr InAttribute(InAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: "&&", def_value: None }]
constexpr InAttribute(InAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr InAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InAttribute& operator=(InAttribute&& o) noexcept = default;
  constexpr InAttribute& operator=(InAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InAttribute() ;

/// @brief Method .ctor addr 0x23a2a94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::InAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::InAttribute, "System.Runtime.InteropServices", "InAttribute");
