#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct DateTime;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class FacetsChecker;
}
// Type: System.Xml.Schema::FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11647))
// CS Name: System.Xml.Schema.FacetsChecker
class CORDL_TYPE FacetsChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: " const&", def_value: None }]
constexpr FacetsChecker(FacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "&&", def_value: None }]
constexpr FacetsChecker(FacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FacetsChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FacetsChecker& operator=(FacetsChecker&& o) noexcept = default;
  constexpr FacetsChecker& operator=(FacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckLexicalFacets addr 0x2760164 size 0x40 virtual true final false
 System::Exception CheckLexicalFacets(ByRef<::StringW> parseString, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x27603f0 size 0x8 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x27603f8 size 0x8 virtual true final false
 System::Exception CheckValueFacets(System::Decimal value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760400 size 0x8 virtual true final false
 System::Exception CheckValueFacets(int64_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760408 size 0x8 virtual true final false
 System::Exception CheckValueFacets(int32_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760410 size 0x8 virtual true final false
 System::Exception CheckValueFacets(int16_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760418 size 0x8 virtual true final false
 System::Exception CheckValueFacets(System::DateTime value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760420 size 0x8 virtual true final false
 System::Exception CheckValueFacets(double_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760428 size 0x8 virtual true final false
 System::Exception CheckValueFacets(float_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760430 size 0x8 virtual true final false
 System::Exception CheckValueFacets(::StringW value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760438 size 0x8 virtual true final false
 System::Exception CheckValueFacets(::ArrayW<uint8_t> value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760440 size 0x8 virtual true final false
 System::Exception CheckValueFacets(System::TimeSpan value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2760448 size 0x8 virtual true final false
 System::Exception CheckValueFacets(System::Xml::XmlQualifiedName value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckWhitespaceFacets addr 0x27601a4 size 0xe4 virtual false final false
 void CheckWhitespaceFacets(ByRef<::StringW> s, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckPatternFacets addr 0x2760288 size 0x168 virtual false final false
 System::Exception CheckPatternFacets(System::Xml::Schema::RestrictionFacets restriction, ::StringW value) ;

/// @brief Method MatchEnumeration addr 0x2760450 size 0x8 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method Power addr 0x2760458 size 0x12c virtual false final false
static System::Decimal Power(int32_t x, int32_t y) ;

// Ctor Parameters []
explicit FacetsChecker() ;

/// @brief Method .ctor addr 0x2760584 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::FacetsChecker, "System.Xml.Schema", "FacetsChecker");
