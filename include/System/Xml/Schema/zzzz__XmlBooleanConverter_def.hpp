#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Type;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlBooleanConverter;
}
// Type: System.Xml.Schema::XmlBooleanConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11713))
// CS Name: System.Xml.Schema.XmlBooleanConverter
class CORDL_TYPE XmlBooleanConverter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlBooleanConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: " const&", def_value: None }]
constexpr XmlBooleanConverter(XmlBooleanConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: "&&", def_value: None }]
constexpr XmlBooleanConverter(XmlBooleanConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlBooleanConverter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlBooleanConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlBooleanConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlBooleanConverter& operator=(XmlBooleanConverter&& o) noexcept = default;
  constexpr XmlBooleanConverter& operator=(XmlBooleanConverter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlBooleanConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x2776244 size 0x64 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x275734c size 0x60 virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method ToBoolean addr 0x27762a8 size 0xa8 virtual true final false
 bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x2776350 size 0x2dc virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x277662c size 0x58 virtual true final false
 ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x2776684 size 0x2cc virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2776950 size 0x32c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(bool value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2776c7c size 0x340 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2776fbc size 0x5a0 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlBooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlBooleanConverter, "System.Xml.Schema", "XmlBooleanConverter");
