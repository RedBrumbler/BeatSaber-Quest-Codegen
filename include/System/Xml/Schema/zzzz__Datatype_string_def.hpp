#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_string;
}
// Type: System.Xml.Schema::Datatype_string
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11585))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11588))
// CS Name: System.Xml.Schema.Datatype_string
class CORDL_TYPE Datatype_string : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_string() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_string", modifiers: " const&", def_value: None }]
constexpr Datatype_string(Datatype_string const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_string", modifiers: "&&", def_value: None }]
constexpr Datatype_string(Datatype_string&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_string(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_string& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_string& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_string& operator=(Datatype_string&& o) noexcept = default;
  constexpr Datatype_string& operator=(Datatype_string const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;


// Methods

/// @brief Method CreateValueConverter addr 0x27571a0 size 0xc virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x27571ac size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method get_FacetsChecker addr 0x27571b4 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x275720c size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x2757214 size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method TryParseValue addr 0x275721c size 0xd4 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_string() ;

/// @brief Method .ctor addr 0x27572f0 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_string);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_string, "System.Xml.Schema", "Datatype_string");
