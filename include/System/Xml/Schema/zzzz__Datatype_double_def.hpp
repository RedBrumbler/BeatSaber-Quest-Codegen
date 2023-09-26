#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_double;
}
// Type: System.Xml.Schema::Datatype_double
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11585))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11591))
// CS Name: System.Xml.Schema.Datatype_double
class CORDL_TYPE Datatype_double : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_double() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_double", modifiers: " const&", def_value: None }]
constexpr Datatype_double(Datatype_double const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_double", modifiers: "&&", def_value: None }]
constexpr Datatype_double(Datatype_double&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_double(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_double& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_double& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_double& operator=(Datatype_double&& o) noexcept = default;
  constexpr Datatype_double& operator=(Datatype_double const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method CreateValueConverter addr 0x2757bd4 size 0x8 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x2757bdc size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2757c34 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueType addr 0x2757c3c size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x2757c94 size 0x58 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2757cec size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x2757cf4 size 0x94 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method TryParseValue addr 0x2757d88 size 0x140 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_double() ;

/// @brief Method .ctor addr 0x2757ec8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_double);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_double, "System.Xml.Schema", "Datatype_double");
