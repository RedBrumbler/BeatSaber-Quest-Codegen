#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTimeBase;
}
// Type: System.Xml.Schema::Datatype_dateTimeBase
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11585))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11596))
// CS Name: System.Xml.Schema.Datatype_dateTimeBase
class CORDL_TYPE Datatype_dateTimeBase : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Datatype_dateTimeBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: " const&", def_value: None }]
constexpr Datatype_dateTimeBase(Datatype_dateTimeBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: "&&", def_value: None }]
constexpr Datatype_dateTimeBase(Datatype_dateTimeBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_dateTimeBase(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_dateTimeBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_dateTimeBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_dateTimeBase& operator=(Datatype_dateTimeBase&& o) noexcept = default;
  constexpr Datatype_dateTimeBase& operator=(Datatype_dateTimeBase const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;

 System::Xml::Schema::XsdDateTimeFlags __declspec(property(get=__get_dateTimeFlags, put=__set_dateTimeFlags))  dateTimeFlags;

constexpr void __set_dateTimeFlags(System::Xml::Schema::XsdDateTimeFlags value) ;

constexpr System::Xml::Schema::XsdDateTimeFlags __get_dateTimeFlags() const;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method CreateValueConverter addr 0x2758f34 size 0x8 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x2758f9c size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2758ff4 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters [CppParam { name: "dateTimeFlags", ty: "System::Xml::Schema::XsdDateTimeFlags", modifiers: "", def_value: None }]
explicit Datatype_dateTimeBase(System::Xml::Schema::XsdDateTimeFlags dateTimeFlags) ;

/// @brief Method .ctor addr 0x2758ffc size 0x68 virtual false final false
 void _ctor(System::Xml::Schema::XsdDateTimeFlags dateTimeFlags) ;

/// @brief Method get_ValueType addr 0x2759064 size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x27590bc size 0x58 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2759114 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x275911c size 0x108 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method TryParseValue addr 0x2759224 size 0x324 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_dateTimeBase);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_dateTimeBase, "System.Xml.Schema", "Datatype_dateTimeBase");
