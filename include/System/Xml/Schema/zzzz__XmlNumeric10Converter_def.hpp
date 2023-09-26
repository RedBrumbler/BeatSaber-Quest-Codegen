#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
struct Decimal;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric10Converter;
}
// Type: System.Xml.Schema::XmlNumeric10Converter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11710))
// CS Name: System.Xml.Schema.XmlNumeric10Converter
class CORDL_TYPE XmlNumeric10Converter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlNumeric10Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: " const&", def_value: None }]
constexpr XmlNumeric10Converter(XmlNumeric10Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "&&", def_value: None }]
constexpr XmlNumeric10Converter(XmlNumeric10Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNumeric10Converter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlNumeric10Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNumeric10Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNumeric10Converter& operator=(XmlNumeric10Converter&& o) noexcept = default;
  constexpr XmlNumeric10Converter& operator=(XmlNumeric10Converter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlNumeric10Converter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x276ea74 size 0x64 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x2757fe0 size 0x60 virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method ToDecimal addr 0x276ead8 size 0xc8 virtual true final false
 System::Decimal ToDecimal(::StringW value) ;

/// @brief Method ToDecimal addr 0x276eba0 size 0x3e4 virtual true final false
 System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x276f3e4 size 0x54 virtual true final false
 int32_t ToInt32(int64_t value) ;

/// @brief Method ToInt32 addr 0x276f438 size 0x104 virtual true final false
 int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x276f53c size 0x3e4 virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x276f920 size 0x8 virtual true final false
 int64_t ToInt64(int32_t value) ;

/// @brief Method ToInt64 addr 0x276f928 size 0x104 virtual true final false
 int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x276fa2c size 0x3cc virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x276fdf8 size 0xbc virtual true final false
 ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x276feb4 size 0x58 virtual true final false
 ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x276ff0c size 0x58 virtual true final false
 ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x276ff64 size 0x40c virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2770370 size 0x43c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::Decimal value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2770bf8 size 0x424 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int32_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277101c size 0x430 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int64_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277144c size 0x434 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2771880 size 0xefc virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardDestination addr 0x276ef84 size 0x460 virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardDestination(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardSource addr 0x27707ac size 0x44c virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardSource(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlNumeric10Converter, "System.Xml.Schema", "XmlNumeric10Converter");
