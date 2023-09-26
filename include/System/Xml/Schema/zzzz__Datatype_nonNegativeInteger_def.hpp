#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_integer_def.hpp"
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_nonNegativeInteger;
}
// Type: System.Xml.Schema::Datatype_nonNegativeInteger
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11625))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11632))
// CS Name: System.Xml.Schema.Datatype_nonNegativeInteger
class CORDL_TYPE Datatype_nonNegativeInteger : public System::Xml::Schema::Datatype_integer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_nonNegativeInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_nonNegativeInteger", modifiers: " const&", def_value: None }]
constexpr Datatype_nonNegativeInteger(Datatype_nonNegativeInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_nonNegativeInteger", modifiers: "&&", def_value: None }]
constexpr Datatype_nonNegativeInteger(Datatype_nonNegativeInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_nonNegativeInteger(void* ptr) noexcept : System::Xml::Schema::Datatype_integer(ptr) {
}


  constexpr Datatype_nonNegativeInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_nonNegativeInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_nonNegativeInteger& operator=(Datatype_nonNegativeInteger&& o) noexcept = default;
  constexpr Datatype_nonNegativeInteger& operator=(Datatype_nonNegativeInteger const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_FacetsChecker addr 0x275cba8 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x275cc00 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_nonNegativeInteger() ;

/// @brief Method .ctor addr 0x275cc08 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_nonNegativeInteger);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_nonNegativeInteger, "System.Xml.Schema", "Datatype_nonNegativeInteger");
