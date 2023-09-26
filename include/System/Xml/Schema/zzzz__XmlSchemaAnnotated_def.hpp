#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnnotated;
}
// Type: System.Xml.Schema::XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11675))
// CS Name: System.Xml.Schema.XmlSchemaAnnotated
class CORDL_TYPE XmlSchemaAnnotated : public System::Xml::Schema::XmlSchemaObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaAnnotated() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: " const&", def_value: None }]
constexpr XmlSchemaAnnotated(XmlSchemaAnnotated const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "&&", def_value: None }]
constexpr XmlSchemaAnnotated(XmlSchemaAnnotated&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaAnnotated(void* ptr) noexcept : System::Xml::Schema::XmlSchemaObject(ptr) {
}


  constexpr XmlSchemaAnnotated& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaAnnotated& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaAnnotated& operator=(XmlSchemaAnnotated&& o) noexcept = default;
  constexpr XmlSchemaAnnotated& operator=(XmlSchemaAnnotated const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XmlSchemaAnnotated() ;

/// @brief Method .ctor addr 0x27668f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaAnnotated);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaAnnotated, "System.Xml.Schema", "XmlSchemaAnnotated");
