#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
struct DateTime;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System {
struct Decimal;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyConverter;
}
// Type: System.Xml.Schema::XmlAnyConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11717))
// CS Name: System.Xml.Schema.XmlAnyConverter
class CORDL_TYPE XmlAnyConverter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlAnyConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: " const&", def_value: None }]
constexpr XmlAnyConverter(XmlAnyConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "&&", def_value: None }]
constexpr XmlAnyConverter(XmlAnyConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAnyConverter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlAnyConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAnyConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAnyConverter& operator=(XmlAnyConverter&& o) noexcept = default;
  constexpr XmlAnyConverter& operator=(XmlAnyConverter const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_Item, put=__set_Item))  Item;

static void __set_Item(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_Item() ;

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_AnyAtomic, put=__set_AnyAtomic))  AnyAtomic;

static void __set_AnyAtomic(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_AnyAtomic() ;


// Methods

// Ctor Parameters [CppParam { name: "typeCode", ty: "System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: None }]
explicit XmlAnyConverter(System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method .ctor addr 0x2780624 size 0x68 virtual false final false
 void _ctor(System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method ToBoolean addr 0x278068c size 0x1b4 virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTime addr 0x278097c size 0x1b4 virtual true final false
 System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTimeOffset addr 0x2780b30 size 0x1c4 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDecimal addr 0x2780cf4 size 0x1c4 virtual true final false
 System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x2780eb8 size 0x1b4 virtual true final false
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x278106c size 0x1b4 virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x2781220 size 0x1b4 virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x27813d4 size 0x1c0 virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ChangeType addr 0x2781594 size 0x1fc virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(bool value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x27818f4 size 0x1f8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::DateTime value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2781aec size 0x240 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::Decimal value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2781d2c size 0x1f8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(double_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2781f24 size 0x1f8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int32_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x278211c size 0x1f8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int64_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2782314 size 0x208 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x278251c size 0x14f4 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardDestination addr 0x2780840 size 0x13c virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardDestination(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardSource addr 0x2781790 size 0x164 virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardSource(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ToNavigator addr 0x2783a10 size 0x88 virtual false final false
 System::Xml::XPath::XPathNavigator ToNavigator(System::Xml::XPath::XPathNavigator nav) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlAnyConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlAnyConverter, "System.Xml.Schema", "XmlAnyConverter");
