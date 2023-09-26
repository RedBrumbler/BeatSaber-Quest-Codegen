#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class IDtdAttributeListInfo;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaElementDecl;
}
// Type: System.Xml.Schema::SchemaElementDecl
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11665))
// CS Name: System.Xml.Schema.SchemaElementDecl
class CORDL_TYPE SchemaElementDecl : public System::Xml::Schema::SchemaDeclBase {
public:
// Declarations
/// @brief Convert operator to System::Xml::IDtdAttributeListInfo
constexpr operator  System::Xml::IDtdAttributeListInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SchemaElementDecl() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: " const&", def_value: None }]
constexpr SchemaElementDecl(SchemaElementDecl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: "&&", def_value: None }]
constexpr SchemaElementDecl(SchemaElementDecl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaElementDecl(void* ptr) noexcept : System::Xml::Schema::SchemaDeclBase(ptr) {
}


  constexpr SchemaElementDecl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaElementDecl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaElementDecl& operator=(SchemaElementDecl&& o) noexcept = default;
  constexpr SchemaElementDecl& operator=(SchemaElementDecl const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::Schema::SchemaAttDef> __declspec(property(get=__get_attdefs, put=__set_attdefs))  attdefs;

constexpr void __set_attdefs(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::Schema::SchemaAttDef> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::Schema::SchemaAttDef> __get_attdefs() const;

 System::Collections::Generic::List_1<System::Xml::IDtdDefaultAttributeInfo> __declspec(property(get=__get_defaultAttdefs, put=__set_defaultAttdefs))  defaultAttdefs;

constexpr void __set_defaultAttdefs(System::Collections::Generic::List_1<System::Xml::IDtdDefaultAttributeInfo> value) ;

constexpr System::Collections::Generic::List_1<System::Xml::IDtdDefaultAttributeInfo> __get_defaultAttdefs() const;

 bool __declspec(property(get=__get_isIdDeclared, put=__set_isIdDeclared))  isIdDeclared;

constexpr void __set_isIdDeclared(bool value) ;

constexpr bool __get_isIdDeclared() const;

 bool __declspec(property(get=__get_hasNonCDataAttribute, put=__set_hasNonCDataAttribute))  hasNonCDataAttribute;

constexpr void __set_hasNonCDataAttribute(bool value) ;

constexpr bool __get_hasNonCDataAttribute() const;

 bool __declspec(property(get=__get_hasRequiredAttribute, put=__set_hasRequiredAttribute))  hasRequiredAttribute;

constexpr void __set_hasRequiredAttribute(bool value) ;

constexpr bool __get_hasRequiredAttribute() const;

 bool __declspec(property(get=__get_isNotationDeclared, put=__set_isNotationDeclared))  isNotationDeclared;

constexpr void __set_isNotationDeclared(bool value) ;

constexpr bool __get_isNotationDeclared() const;

 System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::XmlQualifiedName> __declspec(property(get=__get_prohibitedAttributes, put=__set_prohibitedAttributes))  prohibitedAttributes;

constexpr void __set_prohibitedAttributes(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::XmlQualifiedName> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::XmlQualifiedName> __get_prohibitedAttributes() const;

 System::Xml::Schema::ContentValidator __declspec(property(get=__get_contentValidator, put=__set_contentValidator))  contentValidator;

constexpr void __set_contentValidator(System::Xml::Schema::ContentValidator value) ;

constexpr System::Xml::Schema::ContentValidator __get_contentValidator() const;

 System::Xml::Schema::XmlSchemaAnyAttribute __declspec(property(get=__get_anyAttribute, put=__set_anyAttribute))  anyAttribute;

constexpr void __set_anyAttribute(System::Xml::Schema::XmlSchemaAnyAttribute value) ;

constexpr System::Xml::Schema::XmlSchemaAnyAttribute __get_anyAttribute() const;

static System::Xml::Schema::SchemaElementDecl __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Xml::Schema::SchemaElementDecl value) ;

static System::Xml::Schema::SchemaElementDecl __get_Empty() ;


// Properties

 bool __declspec(property(get=System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes))  System_Xml_IDtdAttributeListInfo_HasNonCDataAttributes;

 bool __declspec(property(get=get_IsIdDeclared, put=set_IsIdDeclared))  IsIdDeclared;

 bool __declspec(property(get=get_HasNonCDataAttribute, put=set_HasNonCDataAttribute))  HasNonCDataAttribute;

 bool __declspec(property(get=get_IsNotationDeclared, put=set_IsNotationDeclared))  IsNotationDeclared;

 System::Xml::Schema::ContentValidator __declspec(property(get=get_ContentValidator, put=set_ContentValidator))  ContentValidator;

 System::Xml::Schema::XmlSchemaAnyAttribute __declspec(property(put=set_AnyAttribute))  AnyAttribute;

 System::Collections::Generic::IList_1<System::Xml::IDtdDefaultAttributeInfo> __declspec(property(get=get_DefaultAttDefs))  DefaultAttDefs;

 System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::Schema::SchemaAttDef> __declspec(property(get=get_AttDefs))  AttDefs;


// Methods

// Ctor Parameters []
explicit SchemaElementDecl() ;

/// @brief Method .ctor addr 0x2764354 size 0xbc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "dtype", ty: "System::Xml::Schema::XmlSchemaDatatype", modifiers: "", def_value: None }]
explicit SchemaElementDecl(System::Xml::Schema::XmlSchemaDatatype dtype) ;

/// @brief Method .ctor addr 0x2764410 size 0x104 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaDatatype dtype) ;

// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::XmlQualifiedName", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }]
explicit SchemaElementDecl(System::Xml::XmlQualifiedName name, ::StringW prefix) ;

/// @brief Method .ctor addr 0x2764514 size 0xd4 virtual false final false
 void _ctor(System::Xml::XmlQualifiedName name, ::StringW prefix) ;

/// @brief Method CreateAnyTypeElementDecl addr 0x27645e8 size 0xc4 virtual false final false
static System::Xml::Schema::SchemaElementDecl CreateAnyTypeElementDecl() ;

/// @brief Method System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes addr 0x27646ac size 0x8 virtual true final true
 bool System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes() ;

/// @brief Method System.Xml.IDtdAttributeListInfo.LookupAttribute addr 0x27646b4 size 0xb8 virtual true final true
 System::Xml::IDtdAttributeInfo System_Xml_IDtdAttributeListInfo_LookupAttribute(::StringW prefix, ::StringW localName) ;

/// @brief Method System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes addr 0x276476c size 0x8 virtual true final true
 System::Collections::Generic::IEnumerable_1<System::Xml::IDtdDefaultAttributeInfo> System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes() ;

/// @brief Method get_IsIdDeclared addr 0x2764774 size 0x8 virtual false final false
 bool get_IsIdDeclared() ;

/// @brief Method set_IsIdDeclared addr 0x276477c size 0xc virtual false final false
 void set_IsIdDeclared(bool value) ;

/// @brief Method get_HasNonCDataAttribute addr 0x2764788 size 0x8 virtual false final false
 bool get_HasNonCDataAttribute() ;

/// @brief Method set_HasNonCDataAttribute addr 0x2764790 size 0xc virtual false final false
 void set_HasNonCDataAttribute(bool value) ;

/// @brief Method get_IsNotationDeclared addr 0x276479c size 0x8 virtual false final false
 bool get_IsNotationDeclared() ;

/// @brief Method set_IsNotationDeclared addr 0x27647a4 size 0xc virtual false final false
 void set_IsNotationDeclared(bool value) ;

/// @brief Method get_ContentValidator addr 0x27647b0 size 0x8 virtual false final false
 System::Xml::Schema::ContentValidator get_ContentValidator() ;

/// @brief Method set_ContentValidator addr 0x27647b8 size 0x8 virtual false final false
 void set_ContentValidator(System::Xml::Schema::ContentValidator value) ;

/// @brief Method set_AnyAttribute addr 0x27647c0 size 0x8 virtual false final false
 void set_AnyAttribute(System::Xml::Schema::XmlSchemaAnyAttribute value) ;

/// @brief Method AddAttDef addr 0x27647c8 size 0x154 virtual false final false
 void AddAttDef(System::Xml::Schema::SchemaAttDef attdef) ;

/// @brief Method GetAttDef addr 0x276491c size 0x78 virtual false final false
 System::Xml::Schema::SchemaAttDef GetAttDef(System::Xml::XmlQualifiedName qname) ;

/// @brief Method get_DefaultAttDefs addr 0x2764994 size 0x8 virtual false final false
 System::Collections::Generic::IList_1<System::Xml::IDtdDefaultAttributeInfo> get_DefaultAttDefs() ;

/// @brief Method get_AttDefs addr 0x276499c size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,System::Xml::Schema::SchemaAttDef> get_AttDefs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::SchemaElementDecl);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SchemaElementDecl, "System.Xml.Schema", "SchemaElementDecl");
