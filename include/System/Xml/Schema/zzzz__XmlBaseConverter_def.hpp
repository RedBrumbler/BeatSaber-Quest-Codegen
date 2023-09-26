#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Uri;
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
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlBaseConverter;
}
// Type: System.Xml.Schema::XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11709))
// CS Name: System.Xml.Schema.XmlBaseConverter
class CORDL_TYPE XmlBaseConverter : public System::Xml::Schema::XmlValueConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlBaseConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlBaseConverter", modifiers: " const&", def_value: None }]
constexpr XmlBaseConverter(XmlBaseConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlBaseConverter", modifiers: "&&", def_value: None }]
constexpr XmlBaseConverter(XmlBaseConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlBaseConverter(void* ptr) noexcept : System::Xml::Schema::XmlValueConverter(ptr) {
}


  constexpr XmlBaseConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlBaseConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlBaseConverter& operator=(XmlBaseConverter&& o) noexcept = default;
  constexpr XmlBaseConverter& operator=(XmlBaseConverter const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(System::Xml::Schema::XmlSchemaType value) ;

constexpr System::Xml::Schema::XmlSchemaType __get_schemaType() const;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=__get_typeCode, put=__set_typeCode))  typeCode;

constexpr void __set_typeCode(System::Xml::Schema::XmlTypeCode value) ;

constexpr System::Xml::Schema::XmlTypeCode __get_typeCode() const;

 System::Type __declspec(property(get=__get_clrTypeDefault, put=__set_clrTypeDefault))  clrTypeDefault;

constexpr void __set_clrTypeDefault(System::Type value) ;

constexpr System::Type __get_clrTypeDefault() const;

static System::Type __declspec(property(get=__get_ICollectionType, put=__set_ICollectionType))  ICollectionType;

static void __set_ICollectionType(System::Type value) ;

static System::Type __get_ICollectionType() ;

static System::Type __declspec(property(get=__get_IEnumerableType, put=__set_IEnumerableType))  IEnumerableType;

static void __set_IEnumerableType(System::Type value) ;

static System::Type __get_IEnumerableType() ;

static System::Type __declspec(property(get=__get_IListType, put=__set_IListType))  IListType;

static void __set_IListType(System::Type value) ;

static System::Type __get_IListType() ;

static System::Type __declspec(property(get=__get_ObjectArrayType, put=__set_ObjectArrayType))  ObjectArrayType;

static void __set_ObjectArrayType(System::Type value) ;

static System::Type __get_ObjectArrayType() ;

static System::Type __declspec(property(get=__get_StringArrayType, put=__set_StringArrayType))  StringArrayType;

static void __set_StringArrayType(System::Type value) ;

static System::Type __get_StringArrayType() ;

static System::Type __declspec(property(get=__get_XmlAtomicValueArrayType, put=__set_XmlAtomicValueArrayType))  XmlAtomicValueArrayType;

static void __set_XmlAtomicValueArrayType(System::Type value) ;

static System::Type __get_XmlAtomicValueArrayType() ;

static System::Type __declspec(property(get=__get_DecimalType, put=__set_DecimalType))  DecimalType;

static void __set_DecimalType(System::Type value) ;

static System::Type __get_DecimalType() ;

static System::Type __declspec(property(get=__get_Int32Type, put=__set_Int32Type))  Int32Type;

static void __set_Int32Type(System::Type value) ;

static System::Type __get_Int32Type() ;

static System::Type __declspec(property(get=__get_Int64Type, put=__set_Int64Type))  Int64Type;

static void __set_Int64Type(System::Type value) ;

static System::Type __get_Int64Type() ;

static System::Type __declspec(property(get=__get_StringType, put=__set_StringType))  StringType;

static void __set_StringType(System::Type value) ;

static System::Type __get_StringType() ;

static System::Type __declspec(property(get=__get_XmlAtomicValueType, put=__set_XmlAtomicValueType))  XmlAtomicValueType;

static void __set_XmlAtomicValueType(System::Type value) ;

static System::Type __get_XmlAtomicValueType() ;

static System::Type __declspec(property(get=__get_ObjectType, put=__set_ObjectType))  ObjectType;

static void __set_ObjectType(System::Type value) ;

static System::Type __get_ObjectType() ;

static System::Type __declspec(property(get=__get_ByteType, put=__set_ByteType))  ByteType;

static void __set_ByteType(System::Type value) ;

static System::Type __get_ByteType() ;

static System::Type __declspec(property(get=__get_Int16Type, put=__set_Int16Type))  Int16Type;

static void __set_Int16Type(System::Type value) ;

static System::Type __get_Int16Type() ;

static System::Type __declspec(property(get=__get_SByteType, put=__set_SByteType))  SByteType;

static void __set_SByteType(System::Type value) ;

static System::Type __get_SByteType() ;

static System::Type __declspec(property(get=__get_UInt16Type, put=__set_UInt16Type))  UInt16Type;

static void __set_UInt16Type(System::Type value) ;

static System::Type __get_UInt16Type() ;

static System::Type __declspec(property(get=__get_UInt32Type, put=__set_UInt32Type))  UInt32Type;

static void __set_UInt32Type(System::Type value) ;

static System::Type __get_UInt32Type() ;

static System::Type __declspec(property(get=__get_UInt64Type, put=__set_UInt64Type))  UInt64Type;

static void __set_UInt64Type(System::Type value) ;

static System::Type __get_UInt64Type() ;

static System::Type __declspec(property(get=__get_XPathItemType, put=__set_XPathItemType))  XPathItemType;

static void __set_XPathItemType(System::Type value) ;

static System::Type __get_XPathItemType() ;

static System::Type __declspec(property(get=__get_DoubleType, put=__set_DoubleType))  DoubleType;

static void __set_DoubleType(System::Type value) ;

static System::Type __get_DoubleType() ;

static System::Type __declspec(property(get=__get_SingleType, put=__set_SingleType))  SingleType;

static void __set_SingleType(System::Type value) ;

static System::Type __get_SingleType() ;

static System::Type __declspec(property(get=__get_DateTimeType, put=__set_DateTimeType))  DateTimeType;

static void __set_DateTimeType(System::Type value) ;

static System::Type __get_DateTimeType() ;

static System::Type __declspec(property(get=__get_DateTimeOffsetType, put=__set_DateTimeOffsetType))  DateTimeOffsetType;

static void __set_DateTimeOffsetType(System::Type value) ;

static System::Type __get_DateTimeOffsetType() ;

static System::Type __declspec(property(get=__get_BooleanType, put=__set_BooleanType))  BooleanType;

static void __set_BooleanType(System::Type value) ;

static System::Type __get_BooleanType() ;

static System::Type __declspec(property(get=__get_ByteArrayType, put=__set_ByteArrayType))  ByteArrayType;

static void __set_ByteArrayType(System::Type value) ;

static System::Type __get_ByteArrayType() ;

static System::Type __declspec(property(get=__get_XmlQualifiedNameType, put=__set_XmlQualifiedNameType))  XmlQualifiedNameType;

static void __set_XmlQualifiedNameType(System::Type value) ;

static System::Type __get_XmlQualifiedNameType() ;

static System::Type __declspec(property(get=__get_UriType, put=__set_UriType))  UriType;

static void __set_UriType(System::Type value) ;

static System::Type __get_UriType() ;

static System::Type __declspec(property(get=__get_TimeSpanType, put=__set_TimeSpanType))  TimeSpanType;

static void __set_TimeSpanType(System::Type value) ;

static System::Type __get_TimeSpanType() ;

static System::Type __declspec(property(get=__get_XPathNavigatorType, put=__set_XPathNavigatorType))  XPathNavigatorType;

static void __set_XPathNavigatorType(System::Type value) ;

static System::Type __get_XPathNavigatorType() ;


// Properties

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_SchemaType))  SchemaType;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::StringW __declspec(property(get=get_XmlTypeName))  XmlTypeName;

 System::Type __declspec(property(get=get_DefaultClrType))  DefaultClrType;


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlBaseConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x2768b8c size 0xdc virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

// Ctor Parameters [CppParam { name: "typeCode", ty: "System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: None }]
explicit XmlBaseConverter(System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method .ctor addr 0x2768c68 size 0xc8 virtual false final false
 void _ctor(System::Xml::Schema::XmlTypeCode typeCode) ;

// Ctor Parameters [CppParam { name: "converterAtomic", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }]
explicit XmlBaseConverter(System::Xml::Schema::XmlBaseConverter converterAtomic) ;

/// @brief Method .ctor addr 0x2768d30 size 0x5c virtual false final false
 void _ctor(System::Xml::Schema::XmlBaseConverter converterAtomic) ;

// Ctor Parameters [CppParam { name: "converterAtomic", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }, CppParam { name: "clrTypeDefault", ty: "System::Type", modifiers: "", def_value: None }]
explicit XmlBaseConverter(System::Xml::Schema::XmlBaseConverter converterAtomic, System::Type clrTypeDefault) ;

/// @brief Method .ctor addr 0x2768d8c size 0x44 virtual false final false
 void _ctor(System::Xml::Schema::XmlBaseConverter converterAtomic, System::Type clrTypeDefault) ;

/// @brief Method ToBoolean addr 0x2768dd0 size 0xf8 virtual true final false
 bool ToBoolean(System::DateTime value) ;

/// @brief Method ToBoolean addr 0x2768ec8 size 0x100 virtual true final false
 bool ToBoolean(double_t value) ;

/// @brief Method ToBoolean addr 0x2768fc8 size 0xf8 virtual true final false
 bool ToBoolean(int32_t value) ;

/// @brief Method ToBoolean addr 0x27690c0 size 0xf8 virtual true final false
 bool ToBoolean(int64_t value) ;

/// @brief Method ToBoolean addr 0x27691b8 size 0xc4 virtual true final false
 bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x276927c size 0xc4 virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTime addr 0x2769340 size 0xf8 virtual true final false
 System::DateTime ToDateTime(bool value) ;

/// @brief Method ToDateTime addr 0x2769438 size 0x104 virtual true final false
 System::DateTime ToDateTime(System::DateTimeOffset value) ;

/// @brief Method ToDateTime addr 0x276953c size 0x100 virtual true final false
 System::DateTime ToDateTime(double_t value) ;

/// @brief Method ToDateTime addr 0x276963c size 0xf8 virtual true final false
 System::DateTime ToDateTime(int32_t value) ;

/// @brief Method ToDateTime addr 0x2769734 size 0xf8 virtual true final false
 System::DateTime ToDateTime(int64_t value) ;

/// @brief Method ToDateTime addr 0x276982c size 0xc4 virtual true final false
 System::DateTime ToDateTime(::StringW value) ;

/// @brief Method ToDateTime addr 0x27698f0 size 0xc4 virtual true final false
 System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTimeOffset addr 0x27699b4 size 0xfc virtual true final false
 System::DateTimeOffset ToDateTimeOffset(System::DateTime value) ;

/// @brief Method ToDateTimeOffset addr 0x2769ab0 size 0xc8 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::StringW value) ;

/// @brief Method ToDateTimeOffset addr 0x2769b78 size 0xc8 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDecimal addr 0x2769c40 size 0xc8 virtual true final false
 System::Decimal ToDecimal(::StringW value) ;

/// @brief Method ToDecimal addr 0x2769d08 size 0xc8 virtual true final false
 System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x2769dd0 size 0xf8 virtual true final false
 double_t ToDouble(bool value) ;

/// @brief Method ToDouble addr 0x2769ec8 size 0xf8 virtual true final false
 double_t ToDouble(System::DateTime value) ;

/// @brief Method ToDouble addr 0x2769fc0 size 0xf8 virtual true final false
 double_t ToDouble(int32_t value) ;

/// @brief Method ToDouble addr 0x276a0b8 size 0xf8 virtual true final false
 double_t ToDouble(int64_t value) ;

/// @brief Method ToDouble addr 0x276a1b0 size 0xc4 virtual true final false
 double_t ToDouble(::StringW value) ;

/// @brief Method ToDouble addr 0x276a274 size 0xc4 virtual true final false
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x276a338 size 0xf8 virtual true final false
 int32_t ToInt32(bool value) ;

/// @brief Method ToInt32 addr 0x276a430 size 0xf8 virtual true final false
 int32_t ToInt32(System::DateTime value) ;

/// @brief Method ToInt32 addr 0x276a528 size 0x100 virtual true final false
 int32_t ToInt32(double_t value) ;

/// @brief Method ToInt32 addr 0x276a628 size 0xf8 virtual true final false
 int32_t ToInt32(int64_t value) ;

/// @brief Method ToInt32 addr 0x276a720 size 0xc4 virtual true final false
 int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x276a7e4 size 0xc4 virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x276a8a8 size 0xf8 virtual true final false
 int64_t ToInt64(bool value) ;

/// @brief Method ToInt64 addr 0x276a9a0 size 0xf8 virtual true final false
 int64_t ToInt64(System::DateTime value) ;

/// @brief Method ToInt64 addr 0x276aa98 size 0x100 virtual true final false
 int64_t ToInt64(double_t value) ;

/// @brief Method ToInt64 addr 0x276ab98 size 0xf8 virtual true final false
 int64_t ToInt64(int32_t value) ;

/// @brief Method ToInt64 addr 0x276ac90 size 0xc4 virtual true final false
 int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x276ad54 size 0xc4 virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x276ae18 size 0x100 virtual true final false
 float_t ToSingle(double_t value) ;

/// @brief Method ToSingle addr 0x276af18 size 0xc4 virtual true final false
 float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x276afdc size 0xc4 virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x276b0a0 size 0xe4 virtual true final false
 ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x276b184 size 0xe4 virtual true final false
 ::StringW ToString(System::DateTime value) ;

/// @brief Method ToString addr 0x276b268 size 0xf0 virtual true final false
 ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x276b358 size 0x110 virtual true final false
 ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x276b468 size 0xec virtual true final false
 ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x276b554 size 0xe4 virtual true final false
 ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x276b638 size 0xe4 virtual true final false
 ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x276b71c size 0xec virtual true final false
 ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x276b808 size 0xb4 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ToString addr 0x276b8bc size 0x14 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ChangeType addr 0x276b8d0 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(bool value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276b958 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::DateTime value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276b9e0 size 0xb4 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::Decimal value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276ba94 size 0x90 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(double_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276bb24 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int32_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276bbac size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int64_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x276bc34 size 0x10 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x276bc44 size 0x14 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method get_SchemaType addr 0x276bc58 size 0x8 virtual false final false
 System::Xml::Schema::XmlSchemaType get_SchemaType() ;

/// @brief Method get_TypeCode addr 0x276bc60 size 0x8 virtual false final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_XmlTypeName addr 0x276bc68 size 0xf4 virtual false final false
 ::StringW get_XmlTypeName() ;

/// @brief Method get_DefaultClrType addr 0x276be78 size 0x8 virtual false final false
 System::Type get_DefaultClrType() ;

/// @brief Method IsDerivedFrom addr 0x276be80 size 0xc4 virtual false final false
static bool IsDerivedFrom(System::Type derivedType, System::Type baseType) ;

/// @brief Method CreateInvalidClrMappingException addr 0x276bf44 size 0x264 virtual false final false
 System::Exception CreateInvalidClrMappingException(System::Type sourceType, System::Type destinationType) ;

/// @brief Method QNameToString addr 0x276bd5c size 0x11c virtual false final false
static ::StringW QNameToString(System::Xml::XmlQualifiedName name) ;

/// @brief Method ChangeListType addr 0x276c1a8 size 0x54 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeListType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method StringToBase64Binary addr 0x276c1fc size 0x90 virtual false final false
static ::ArrayW<uint8_t> StringToBase64Binary(::StringW value) ;

/// @brief Method StringToDate addr 0x276c28c size 0x7c virtual false final false
static System::DateTime StringToDate(::StringW value) ;

/// @brief Method StringToDateTime addr 0x276c308 size 0x7c virtual false final false
static System::DateTime StringToDateTime(::StringW value) ;

/// @brief Method StringToDayTimeDuration addr 0x276c384 size 0x60 virtual false final false
static System::TimeSpan StringToDayTimeDuration(::StringW value) ;

/// @brief Method StringToDuration addr 0x276c3e4 size 0x60 virtual false final false
static System::TimeSpan StringToDuration(::StringW value) ;

/// @brief Method StringToGDay addr 0x276c444 size 0x7c virtual false final false
static System::DateTime StringToGDay(::StringW value) ;

/// @brief Method StringToGMonth addr 0x276c4c0 size 0x7c virtual false final false
static System::DateTime StringToGMonth(::StringW value) ;

/// @brief Method StringToGMonthDay addr 0x276c53c size 0x7c virtual false final false
static System::DateTime StringToGMonthDay(::StringW value) ;

/// @brief Method StringToGYear addr 0x276c5b8 size 0x7c virtual false final false
static System::DateTime StringToGYear(::StringW value) ;

/// @brief Method StringToGYearMonth addr 0x276c634 size 0x7c virtual false final false
static System::DateTime StringToGYearMonth(::StringW value) ;

/// @brief Method StringToDateOffset addr 0x276c6b0 size 0x7c virtual false final false
static System::DateTimeOffset StringToDateOffset(::StringW value) ;

/// @brief Method StringToDateTimeOffset addr 0x276c72c size 0x7c virtual false final false
static System::DateTimeOffset StringToDateTimeOffset(::StringW value) ;

/// @brief Method StringToGDayOffset addr 0x276c7a8 size 0x7c virtual false final false
static System::DateTimeOffset StringToGDayOffset(::StringW value) ;

/// @brief Method StringToGMonthOffset addr 0x276c824 size 0x7c virtual false final false
static System::DateTimeOffset StringToGMonthOffset(::StringW value) ;

/// @brief Method StringToGMonthDayOffset addr 0x276c8a0 size 0x7c virtual false final false
static System::DateTimeOffset StringToGMonthDayOffset(::StringW value) ;

/// @brief Method StringToGYearOffset addr 0x276c91c size 0x7c virtual false final false
static System::DateTimeOffset StringToGYearOffset(::StringW value) ;

/// @brief Method StringToGYearMonthOffset addr 0x276c998 size 0x7c virtual false final false
static System::DateTimeOffset StringToGYearMonthOffset(::StringW value) ;

/// @brief Method StringToHexBinary addr 0x276ca14 size 0x13c virtual false final false
static ::ArrayW<uint8_t> StringToHexBinary(::StringW value) ;

/// @brief Method StringToQName addr 0x276cb50 size 0x2c0 virtual false final false
static System::Xml::XmlQualifiedName StringToQName(::StringW value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method StringToTime addr 0x276ce10 size 0x7c virtual false final false
static System::DateTime StringToTime(::StringW value) ;

/// @brief Method StringToTimeOffset addr 0x276ce8c size 0x7c virtual false final false
static System::DateTimeOffset StringToTimeOffset(::StringW value) ;

/// @brief Method StringToYearMonthDuration addr 0x276cf08 size 0x60 virtual false final false
static System::TimeSpan StringToYearMonthDuration(::StringW value) ;

/// @brief Method AnyUriToString addr 0x276cf68 size 0x14 virtual false final false
static ::StringW AnyUriToString(System::Uri value) ;

/// @brief Method Base64BinaryToString addr 0x276cf7c size 0x58 virtual false final false
static ::StringW Base64BinaryToString(::ArrayW<uint8_t> value) ;

/// @brief Method DateToString addr 0x276cfd4 size 0x44 virtual false final false
static ::StringW DateToString(System::DateTime value) ;

/// @brief Method DateTimeToString addr 0x276d018 size 0x44 virtual false final false
static ::StringW DateTimeToString(System::DateTime value) ;

/// @brief Method DayTimeDurationToString addr 0x276d05c size 0x60 virtual false final false
static ::StringW DayTimeDurationToString(System::TimeSpan value) ;

/// @brief Method DurationToString addr 0x276d0bc size 0x60 virtual false final false
static ::StringW DurationToString(System::TimeSpan value) ;

/// @brief Method GDayToString addr 0x276d11c size 0x44 virtual false final false
static ::StringW GDayToString(System::DateTime value) ;

/// @brief Method GMonthToString addr 0x276d160 size 0x44 virtual false final false
static ::StringW GMonthToString(System::DateTime value) ;

/// @brief Method GMonthDayToString addr 0x276d1a4 size 0x44 virtual false final false
static ::StringW GMonthDayToString(System::DateTime value) ;

/// @brief Method GYearToString addr 0x276d1e8 size 0x44 virtual false final false
static ::StringW GYearToString(System::DateTime value) ;

/// @brief Method GYearMonthToString addr 0x276d22c size 0x44 virtual false final false
static ::StringW GYearMonthToString(System::DateTime value) ;

/// @brief Method DateOffsetToString addr 0x276d270 size 0x48 virtual false final false
static ::StringW DateOffsetToString(System::DateTimeOffset value) ;

/// @brief Method DateTimeOffsetToString addr 0x276d2b8 size 0x48 virtual false final false
static ::StringW DateTimeOffsetToString(System::DateTimeOffset value) ;

/// @brief Method GDayOffsetToString addr 0x276d300 size 0x48 virtual false final false
static ::StringW GDayOffsetToString(System::DateTimeOffset value) ;

/// @brief Method GMonthOffsetToString addr 0x276d348 size 0x48 virtual false final false
static ::StringW GMonthOffsetToString(System::DateTimeOffset value) ;

/// @brief Method GMonthDayOffsetToString addr 0x276d390 size 0x48 virtual false final false
static ::StringW GMonthDayOffsetToString(System::DateTimeOffset value) ;

/// @brief Method GYearOffsetToString addr 0x276d3d8 size 0x48 virtual false final false
static ::StringW GYearOffsetToString(System::DateTimeOffset value) ;

/// @brief Method GYearMonthOffsetToString addr 0x276d420 size 0x48 virtual false final false
static ::StringW GYearMonthOffsetToString(System::DateTimeOffset value) ;

/// @brief Method QNameToString addr 0x276d468 size 0x21c virtual false final false
static ::StringW QNameToString(System::Xml::XmlQualifiedName qname, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method TimeToString addr 0x276d684 size 0x44 virtual false final false
static ::StringW TimeToString(System::DateTime value) ;

/// @brief Method TimeOffsetToString addr 0x276d6c8 size 0x48 virtual false final false
static ::StringW TimeOffsetToString(System::DateTimeOffset value) ;

/// @brief Method YearMonthDurationToString addr 0x276d710 size 0x60 virtual false final false
static ::StringW YearMonthDurationToString(System::TimeSpan value) ;

/// @brief Method DateTimeOffsetToDateTime addr 0x276d770 size 0x24 virtual false final false
static System::DateTime DateTimeOffsetToDateTime(System::DateTimeOffset value) ;

/// @brief Method DecimalToInt32 addr 0x276d794 size 0x204 virtual false final false
static int32_t DecimalToInt32(System::Decimal value) ;

/// @brief Method DecimalToInt64 addr 0x276d998 size 0x204 virtual false final false
static int64_t DecimalToInt64(System::Decimal value) ;

/// @brief Method DecimalToUInt64 addr 0x276db9c size 0x1f8 virtual false final false
static uint64_t DecimalToUInt64(System::Decimal value) ;

/// @brief Method Int32ToByte addr 0x276dd94 size 0x110 virtual false final false
static uint8_t Int32ToByte(int32_t value) ;

/// @brief Method Int32ToInt16 addr 0x276dea4 size 0x110 virtual false final false
static int16_t Int32ToInt16(int32_t value) ;

/// @brief Method Int32ToSByte addr 0x276dfb4 size 0x110 virtual false final false
static int8_t Int32ToSByte(int32_t value) ;

/// @brief Method Int32ToUInt16 addr 0x276e0c4 size 0x110 virtual false final false
static uint16_t Int32ToUInt16(int32_t value) ;

/// @brief Method Int64ToInt32 addr 0x276e1d4 size 0x110 virtual false final false
static int32_t Int64ToInt32(int64_t value) ;

/// @brief Method Int64ToUInt32 addr 0x276e2e4 size 0x110 virtual false final false
static uint32_t Int64ToUInt32(int64_t value) ;

/// @brief Method UntypedAtomicToDateTime addr 0x276e3f4 size 0x7c virtual false final false
static System::DateTime UntypedAtomicToDateTime(::StringW value) ;

/// @brief Method UntypedAtomicToDateTimeOffset addr 0x276e470 size 0x7c virtual false final false
static System::DateTimeOffset UntypedAtomicToDateTimeOffset(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlBaseConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlBaseConverter, "System.Xml.Schema", "XmlBaseConverter");
