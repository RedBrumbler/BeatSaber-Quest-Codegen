#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
class XmlDocument;
}
namespace System {
struct Guid;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Type;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Type: Newtonsoft.Json::JsonConvert
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11795))
// CS Name: Newtonsoft.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonConvert() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: " const&", def_value: None }]
constexpr JsonConvert(JsonConvert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
constexpr JsonConvert(JsonConvert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConvert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonConvert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConvert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConvert& operator=(JsonConvert&& o) noexcept = default;
  constexpr JsonConvert& operator=(JsonConvert const& o) noexcept = default;
                


// Fields

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __declspec(property(get=__get__DefaultSettings_k__BackingField, put=__set__DefaultSettings_k__BackingField))  _DefaultSettings_k__BackingField;

static void __set__DefaultSettings_k__BackingField(System::Func_1<Newtonsoft::Json::JsonSerializerSettings> value) ;

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __get__DefaultSettings_k__BackingField() ;

static ::StringW __declspec(property(get=__get_True, put=__set_True))  True;

static void __set_True(::StringW value) ;

static ::StringW __get_True() ;

static ::StringW __declspec(property(get=__get_False, put=__set_False))  False;

static void __set_False(::StringW value) ;

static ::StringW __get_False() ;

static ::StringW __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(::StringW value) ;

static ::StringW __get_Null() ;

static ::StringW __declspec(property(get=__get_Undefined, put=__set_Undefined))  Undefined;

static void __set_Undefined(::StringW value) ;

static ::StringW __get_Undefined() ;

static ::StringW __declspec(property(get=__get_PositiveInfinity, put=__set_PositiveInfinity))  PositiveInfinity;

static void __set_PositiveInfinity(::StringW value) ;

static ::StringW __get_PositiveInfinity() ;

static ::StringW __declspec(property(get=__get_NegativeInfinity, put=__set_NegativeInfinity))  NegativeInfinity;

static void __set_NegativeInfinity(::StringW value) ;

static ::StringW __get_NegativeInfinity() ;

static ::StringW __declspec(property(get=__get_NaN, put=__set_NaN))  NaN;

static void __set_NaN(::StringW value) ;

static ::StringW __get_NaN() ;

static Newtonsoft::Json::JsonSerializerSettings __declspec(property(get=__get_InitialSerializerSettings, put=__set_InitialSerializerSettings))  InitialSerializerSettings;

static void __set_InitialSerializerSettings(Newtonsoft::Json::JsonSerializerSettings value) ;

static Newtonsoft::Json::JsonSerializerSettings __get_InitialSerializerSettings() ;


// Properties

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __declspec(property(get=get_DefaultSettings, put=set_DefaultSettings))  DefaultSettings;


// Methods

/// @brief Method get_DefaultSettings addr 0x2507864 size 0x58 virtual false final false
static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> get_DefaultSettings() ;

/// @brief Method set_DefaultSettings addr 0x25078bc size 0x5c virtual false final false
static void set_DefaultSettings(System::Func_1<Newtonsoft::Json::JsonSerializerSettings> value) ;

/// @brief Method GetDefaultSettings addr 0x2507afc size 0x58 virtual false final false
static Newtonsoft::Json::JsonSerializerSettings GetDefaultSettings() ;

/// @brief Method ToString addr 0x2507b54 size 0x5c virtual false final false
static ::StringW ToString(System::DateTime value) ;

/// @brief Method ToString addr 0x2507bb0 size 0x270 virtual false final false
static ::StringW ToString(System::DateTime value, Newtonsoft::Json::DateFormatHandling format, Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling) ;

/// @brief Method ToString addr 0x2507e20 size 0x68 virtual false final false
static ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x2507e88 size 0x250 virtual false final false
static ::StringW ToString(System::DateTimeOffset value, Newtonsoft::Json::DateFormatHandling format) ;

/// @brief Method ToString addr 0x25043c4 size 0x6c virtual false final false
static ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x2504524 size 0x8c virtual false final false
static ::StringW ToString(char16_t value) ;

/// @brief Method ToString addr 0x2508130 size 0x54 virtual false final false
static ::StringW ToString(::bs_hook::EnumTypeWrapper value) ;

/// @brief Method ToString addr 0x2508184 size 0x6c virtual false final false
static ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x25081f0 size 0x6c virtual false final false
static ::StringW ToString(int16_t value) ;

/// @brief Method ToString addr 0x250825c size 0x6c virtual false final false
static ::StringW ToString(uint16_t value) ;

/// @brief Method ToString addr 0x25082c8 size 0x6c virtual false final false
static ::StringW ToString(uint32_t value) ;

/// @brief Method ToString addr 0x2508334 size 0x6c virtual false final false
static ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x25083a0 size 0x6c virtual false final false
static ::StringW ToString(uint64_t value) ;

/// @brief Method ToString addr 0x250840c size 0xcc virtual false final false
static ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x2503ec0 size 0xf0 virtual false final false
static ::StringW ToString(float_t value, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method EnsureFloatFormat addr 0x2508628 size 0x184 virtual false final false
static ::StringW EnsureFloatFormat(double_t value, ::StringW text, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method ToString addr 0x25087ac size 0xc8 virtual false final false
static ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x2504148 size 0xec virtual false final false
static ::StringW ToString(double_t value, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method EnsureDecimalPlace addr 0x25084d8 size 0x150 virtual false final false
static ::StringW EnsureDecimalPlace(double_t value, ::StringW text) ;

/// @brief Method EnsureDecimalPlace addr 0x2508874 size 0x7c virtual false final false
static ::StringW EnsureDecimalPlace(::StringW text) ;

/// @brief Method ToString addr 0x25088f0 size 0x6c virtual false final false
static ::StringW ToString(uint8_t value) ;

/// @brief Method ToString addr 0x250895c size 0x6c virtual false final false
static ::StringW ToString(int8_t value) ;

/// @brief Method ToString addr 0x25046ac size 0xc8 virtual false final false
static ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x25089c8 size 0x68 virtual false final false
static ::StringW ToString(System::Guid value) ;

/// @brief Method ToString addr 0x2508a30 size 0xb8 virtual false final false
static ::StringW ToString(System::Guid value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x2508ae8 size 0x58 virtual false final false
static ::StringW ToString(System::TimeSpan value) ;

/// @brief Method ToString addr 0x2508b40 size 0x7c virtual false final false
static ::StringW ToString(System::TimeSpan value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x2508c24 size 0xb4 virtual false final false
static ::StringW ToString(System::Uri value) ;

/// @brief Method ToString addr 0x2508cd8 size 0x78 virtual false final false
static ::StringW ToString(System::Uri value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x25080d8 size 0x58 virtual false final false
static ::StringW ToString(::StringW value) ;

/// @brief Method ToString addr 0x2508bbc size 0x68 virtual false final false
static ::StringW ToString(::StringW value, char16_t delimiter) ;

/// @brief Method ToString addr 0x2508d50 size 0xe8 virtual false final false
static ::StringW ToString(::StringW value, char16_t delimiter, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) ;

/// @brief Method ToString addr 0x2508e38 size 0x7a8 virtual false final false
static ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeObject addr 0x25095e0 size 0x5c virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeObject addr 0x25096b8 size 0x68 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeObject addr 0x2509790 size 0xa4 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method SerializeObject addr 0x2509834 size 0xb4 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method SerializeObject addr 0x2509980 size 0x68 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x250963c size 0x7c virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x2509720 size 0x70 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x25098e8 size 0x98 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::Formatting formatting, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObjectInternal addr 0x2509a1c size 0x284 virtual false final false
static ::StringW SerializeObjectInternal(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method DeserializeObject addr 0x2509cb0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value) ;

/// @brief Method DeserializeObject addr 0x2509f5c size 0x68 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x2509fc4 size 0x68 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value) ;

/// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeAnonymousType(::StringW value, T anonymousTypeObject) ;

/// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x250a02c size 0xb0 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method DeserializeObject addr 0x2509d0c size 0x250 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method PopulateObject addr 0x250a128 size 0x68 virtual false final false
static void PopulateObject(::StringW value, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method PopulateObject addr 0x250a190 size 0x26c virtual false final false
static void PopulateObject(::StringW value, ::bs_hook::Il2CppWrapperType target, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeXmlNode addr 0x250a410 size 0x58 virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node) ;

/// @brief Method SerializeXmlNode addr 0x250a468 size 0xf0 virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeXmlNode addr 0x250a558 size 0xfc virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node, Newtonsoft::Json::Formatting formatting, bool omitRootObject) ;

/// @brief Method DeserializeXmlNode addr 0x250a654 size 0x58 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value) ;

/// @brief Method DeserializeXmlNode addr 0x250a6ac size 0x68 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName) ;

/// @brief Method DeserializeXmlNode addr 0x250a714 size 0x1a4 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) ;

/// @brief Method SerializeXNode addr 0x250a8b8 size 0x58 virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node) ;

/// @brief Method SerializeXNode addr 0x250a910 size 0x68 virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeXNode addr 0x250a978 size 0xfc virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node, Newtonsoft::Json::Formatting formatting, bool omitRootObject) ;

/// @brief Method DeserializeXNode addr 0x250aa74 size 0x58 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value) ;

/// @brief Method DeserializeXNode addr 0x250aacc size 0x68 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value, ::StringW deserializeRootElementName) ;

/// @brief Method DeserializeXNode addr 0x250ab34 size 0x1a4 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConvert, "Newtonsoft.Json", "JsonConvert");
