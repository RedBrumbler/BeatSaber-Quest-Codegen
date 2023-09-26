#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Xml::Schema {
class XmlBaseConverter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IList;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlListConverter;
}
// Type: System.Xml.Schema::XmlListConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11719))
// CS Name: System.Xml.Schema.XmlListConverter
class CORDL_TYPE XmlListConverter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlListConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: " const&", def_value: None }]
constexpr XmlListConverter(XmlListConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: "&&", def_value: None }]
constexpr XmlListConverter(XmlListConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlListConverter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlListConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlListConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlListConverter& operator=(XmlListConverter&& o) noexcept = default;
  constexpr XmlListConverter& operator=(XmlListConverter const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_atomicConverter, put=__set_atomicConverter))  atomicConverter;

constexpr void __set_atomicConverter(System::Xml::Schema::XmlValueConverter value) ;

constexpr System::Xml::Schema::XmlValueConverter __get_atomicConverter() const;


// Methods

// Ctor Parameters [CppParam { name: "atomicConverter", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }]
explicit XmlListConverter(System::Xml::Schema::XmlBaseConverter atomicConverter) ;

/// @brief Method .ctor addr 0x2783b24 size 0x70 virtual false final false
 void _ctor(System::Xml::Schema::XmlBaseConverter atomicConverter) ;

// Ctor Parameters [CppParam { name: "atomicConverter", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }, CppParam { name: "clrTypeDefault", ty: "System::Type", modifiers: "", def_value: None }]
explicit XmlListConverter(System::Xml::Schema::XmlBaseConverter atomicConverter, System::Type clrTypeDefault) ;

/// @brief Method .ctor addr 0x2779b68 size 0x78 virtual false final false
 void _ctor(System::Xml::Schema::XmlBaseConverter atomicConverter, System::Type clrTypeDefault) ;

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlListConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x2779a68 size 0x68 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x2783f3c size 0x1ac virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlValueConverter atomicConverter) ;

/// @brief Method ChangeType addr 0x27840e8 size 0x108 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeListType addr 0x277f774 size 0xdf8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeListType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method IsListType addr 0x27841f0 size 0x190 virtual false final false
 bool IsListType(System::Type type) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> ToArray(::bs_hook::Il2CppWrapperType list, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ToList addr 0x2784a48 size 0x644 virtual false final false
 System::Collections::IList ToList(::bs_hook::Il2CppWrapperType list, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method StringAsList addr 0x2784998 size 0xb0 virtual false final false
 System::Collections::Generic::List_1<::StringW> StringAsList(::StringW value) ;

/// @brief Method ListAsString addr 0x27845ec size 0x3ac virtual false final false
 ::StringW ListAsString(System::Collections::IEnumerable list, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method CreateInvalidClrMappingException addr 0x2784380 size 0x26c virtual false final false
 System::Exception CreateInvalidClrMappingException(System::Type sourceType, System::Type destinationType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlListConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlListConverter, "System.Xml.Schema", "XmlListConverter");
