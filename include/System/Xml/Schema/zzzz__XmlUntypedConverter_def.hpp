#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTimeOffset;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlUntypedConverter;
}
// Type: System.Xml.Schema::XmlUntypedConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11719))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11716))
// CS Name: System.Xml.Schema.XmlUntypedConverter
class CORDL_TYPE XmlUntypedConverter : public System::Xml::Schema::XmlListConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlUntypedConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: " const&", def_value: None }]
constexpr XmlUntypedConverter(XmlUntypedConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "&&", def_value: None }]
constexpr XmlUntypedConverter(XmlUntypedConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUntypedConverter(void* ptr) noexcept : System::Xml::Schema::XmlListConverter(ptr) {
}


  constexpr XmlUntypedConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUntypedConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUntypedConverter& operator=(XmlUntypedConverter&& o) noexcept = default;
  constexpr XmlUntypedConverter& operator=(XmlUntypedConverter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_allowListToList, put=__set_allowListToList))  allowListToList;

constexpr void __set_allowListToList(bool value) ;

constexpr bool __get_allowListToList() const;

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_Untyped, put=__set_Untyped))  Untyped;

static void __set_Untyped(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_Untyped() ;

static System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_UntypedList, put=__set_UntypedList))  UntypedList;

static void __set_UntypedList(System::Xml::Schema::XmlValueConverter value) ;

static System::Xml::Schema::XmlValueConverter __get_UntypedList() ;


// Methods

// Ctor Parameters []
explicit XmlUntypedConverter() ;

/// @brief Method .ctor addr 0x27799d8 size 0x90 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "atomicConverter", ty: "System::Xml::Schema::XmlUntypedConverter", modifiers: "", def_value: None }, CppParam { name: "allowListToList", ty: "bool", modifiers: "", def_value: None }]
explicit XmlUntypedConverter(System::Xml::Schema::XmlUntypedConverter atomicConverter, bool allowListToList) ;

/// @brief Method .ctor addr 0x2779ad0 size 0x98 virtual false final false
 void _ctor(System::Xml::Schema::XmlUntypedConverter atomicConverter, bool allowListToList) ;

/// @brief Method ToBoolean addr 0x2779be0 size 0xa8 virtual true final false
 bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x2779c88 size 0x1d0 virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTime addr 0x2779f94 size 0xa8 virtual true final false
 System::DateTime ToDateTime(::StringW value) ;

/// @brief Method ToDateTime addr 0x277a03c size 0x1b8 virtual true final false
 System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTimeOffset addr 0x277a1f4 size 0xa8 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::StringW value) ;

/// @brief Method ToDateTimeOffset addr 0x277a29c size 0x1b8 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDecimal addr 0x277a454 size 0xa8 virtual true final false
 System::Decimal ToDecimal(::StringW value) ;

/// @brief Method ToDecimal addr 0x277a4fc size 0x1d0 virtual true final false
 System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x277a6cc size 0xa8 virtual true final false
 double_t ToDouble(::StringW value) ;

/// @brief Method ToDouble addr 0x277a774 size 0x1d0 virtual true final false
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x277a944 size 0xa8 virtual true final false
 int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x277a9ec size 0x1d0 virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x277abbc size 0xa8 virtual true final false
 int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x277ac64 size 0x1d0 virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x277ae34 size 0xa8 virtual true final false
 float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x277aedc size 0x1d0 virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x277b0ac size 0x58 virtual true final false
 ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x277b104 size 0x58 virtual true final false
 ::StringW ToString(System::DateTime value) ;

/// @brief Method ToString addr 0x277b15c size 0x68 virtual true final false
 ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x277b1c4 size 0x68 virtual true final false
 ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x277b22c size 0x60 virtual true final false
 ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x277b28c size 0x58 virtual true final false
 ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x277b2e4 size 0x58 virtual true final false
 ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x277b33c size 0x60 virtual true final false
 ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x277b39c size 0xda8 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x277c144 size 0x1e4 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(bool value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277c4c0 size 0x1cc virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::DateTime value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277c68c size 0x20c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::Decimal value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277c898 size 0x1e0 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(double_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277ca78 size 0x1e0 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int32_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277cc58 size 0x1e0 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int64_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x277ce38 size 0xc08 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x277da40 size 0x14fc virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardDestination addr 0x2779e58 size 0x13c virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardDestination(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeTypeWildcardSource addr 0x277c328 size 0x198 virtual false final false
 ::bs_hook::Il2CppWrapperType ChangeTypeWildcardSource(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeListType addr 0x277ef3c size 0x308 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeListType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method SupportsType addr 0x277f244 size 0x530 virtual false final false
 bool SupportsType(System::Type clrType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlUntypedConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlUntypedConverter, "System.Xml.Schema", "XmlUntypedConverter");
