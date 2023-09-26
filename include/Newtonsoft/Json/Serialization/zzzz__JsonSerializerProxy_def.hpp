#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
// Type: Newtonsoft.Json.Serialization::JsonSerializerProxy
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11797))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11918))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerProxy
class CORDL_TYPE JsonSerializerProxy : public Newtonsoft::Json::JsonSerializer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~JsonSerializerProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: " const&", def_value: None }]
constexpr JsonSerializerProxy(JsonSerializerProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: "&&", def_value: None }]
constexpr JsonSerializerProxy(JsonSerializerProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializerProxy(void* ptr) noexcept : Newtonsoft::Json::JsonSerializer(ptr) {
}


  constexpr JsonSerializerProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializerProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializerProxy& operator=(JsonSerializerProxy&& o) noexcept = default;
  constexpr JsonSerializerProxy& operator=(JsonSerializerProxy const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::JsonSerializerInternalReader __declspec(property(get=__get__serializerReader, put=__set__serializerReader))  _serializerReader;

constexpr void __set__serializerReader(Newtonsoft::Json::Serialization::JsonSerializerInternalReader value) ;

constexpr Newtonsoft::Json::Serialization::JsonSerializerInternalReader __get__serializerReader() const;

 Newtonsoft::Json::Serialization::JsonSerializerInternalWriter __declspec(property(get=__get__serializerWriter, put=__set__serializerWriter))  _serializerWriter;

constexpr void __set__serializerWriter(Newtonsoft::Json::Serialization::JsonSerializerInternalWriter value) ;

constexpr Newtonsoft::Json::Serialization::JsonSerializerInternalWriter __get__serializerWriter() const;

 Newtonsoft::Json::JsonSerializer __declspec(property(get=__get__serializer, put=__set__serializer))  _serializer;

constexpr void __set__serializer(Newtonsoft::Json::JsonSerializer value) ;

constexpr Newtonsoft::Json::JsonSerializer __get__serializer() const;


// Properties

 Newtonsoft::Json::Serialization::IReferenceResolver __declspec(property(get=get_ReferenceResolver, put=set_ReferenceResolver))  ReferenceResolver;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=get_TraceWriter, put=set_TraceWriter))  TraceWriter;

 System::Collections::IEqualityComparer __declspec(property(get=get_EqualityComparer, put=set_EqualityComparer))  EqualityComparer;

 Newtonsoft::Json::JsonConverterCollection __declspec(property(get=get_Converters))  Converters;

 Newtonsoft::Json::DefaultValueHandling __declspec(property(get=get_DefaultValueHandling, put=set_DefaultValueHandling))  DefaultValueHandling;

 Newtonsoft::Json::Serialization::IContractResolver __declspec(property(get=get_ContractResolver, put=set_ContractResolver))  ContractResolver;

 Newtonsoft::Json::MissingMemberHandling __declspec(property(get=get_MissingMemberHandling, put=set_MissingMemberHandling))  MissingMemberHandling;

 Newtonsoft::Json::NullValueHandling __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling))  NullValueHandling;

 Newtonsoft::Json::ObjectCreationHandling __declspec(property(get=get_ObjectCreationHandling, put=set_ObjectCreationHandling))  ObjectCreationHandling;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ReferenceLoopHandling, put=set_ReferenceLoopHandling))  ReferenceLoopHandling;

 Newtonsoft::Json::PreserveReferencesHandling __declspec(property(get=get_PreserveReferencesHandling, put=set_PreserveReferencesHandling))  PreserveReferencesHandling;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_TypeNameHandling, put=set_TypeNameHandling))  TypeNameHandling;

 Newtonsoft::Json::MetadataPropertyHandling __declspec(property(get=get_MetadataPropertyHandling, put=set_MetadataPropertyHandling))  MetadataPropertyHandling;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=get_TypeNameAssemblyFormat, put=set_TypeNameAssemblyFormat))  TypeNameAssemblyFormat;

 Newtonsoft::Json::ConstructorHandling __declspec(property(get=get_ConstructorHandling, put=set_ConstructorHandling))  ConstructorHandling;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=get_Binder, put=set_Binder))  Binder;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=get_Context, put=set_Context))  Context;

 Newtonsoft::Json::Formatting __declspec(property(get=get_Formatting, put=set_Formatting))  Formatting;

 Newtonsoft::Json::DateFormatHandling __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling))  DateFormatHandling;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling))  DateTimeZoneHandling;

 Newtonsoft::Json::DateParseHandling __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling))  DateParseHandling;

 Newtonsoft::Json::FloatFormatHandling __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling))  FloatFormatHandling;

 Newtonsoft::Json::FloatParseHandling __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling))  FloatParseHandling;

 Newtonsoft::Json::StringEscapeHandling __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling))  StringEscapeHandling;

 ::StringW __declspec(property(get=get_DateFormatString, put=set_DateFormatString))  DateFormatString;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;

 System::Nullable_1<int32_t> __declspec(property(get=get_MaxDepth, put=set_MaxDepth))  MaxDepth;

 bool __declspec(property(get=get_CheckAdditionalContent, put=set_CheckAdditionalContent))  CheckAdditionalContent;


// Methods

/// @brief Method add_Error addr 0x25455ec size 0x20 virtual true final false
 void add_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

/// @brief Method remove_Error addr 0x254560c size 0x20 virtual true final false
 void remove_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

/// @brief Method get_ReferenceResolver addr 0x254562c size 0x20 virtual true final false
 Newtonsoft::Json::Serialization::IReferenceResolver get_ReferenceResolver() ;

/// @brief Method set_ReferenceResolver addr 0x254564c size 0x20 virtual true final false
 void set_ReferenceResolver(Newtonsoft::Json::Serialization::IReferenceResolver value) ;

/// @brief Method get_TraceWriter addr 0x254566c size 0x20 virtual true final false
 Newtonsoft::Json::Serialization::ITraceWriter get_TraceWriter() ;

/// @brief Method set_TraceWriter addr 0x254568c size 0x20 virtual true final false
 void set_TraceWriter(Newtonsoft::Json::Serialization::ITraceWriter value) ;

/// @brief Method get_EqualityComparer addr 0x25456ac size 0x20 virtual true final false
 System::Collections::IEqualityComparer get_EqualityComparer() ;

/// @brief Method set_EqualityComparer addr 0x25456cc size 0x24 virtual true final false
 void set_EqualityComparer(System::Collections::IEqualityComparer value) ;

/// @brief Method get_Converters addr 0x25456f0 size 0x24 virtual true final false
 Newtonsoft::Json::JsonConverterCollection get_Converters() ;

/// @brief Method get_DefaultValueHandling addr 0x2545714 size 0x24 virtual true final false
 Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling() ;

/// @brief Method set_DefaultValueHandling addr 0x2545738 size 0x24 virtual true final false
 void set_DefaultValueHandling(Newtonsoft::Json::DefaultValueHandling value) ;

/// @brief Method get_ContractResolver addr 0x254575c size 0x24 virtual true final false
 Newtonsoft::Json::Serialization::IContractResolver get_ContractResolver() ;

/// @brief Method set_ContractResolver addr 0x2545780 size 0x24 virtual true final false
 void set_ContractResolver(Newtonsoft::Json::Serialization::IContractResolver value) ;

/// @brief Method get_MissingMemberHandling addr 0x25457a4 size 0x24 virtual true final false
 Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling() ;

/// @brief Method set_MissingMemberHandling addr 0x25457c8 size 0x24 virtual true final false
 void set_MissingMemberHandling(Newtonsoft::Json::MissingMemberHandling value) ;

/// @brief Method get_NullValueHandling addr 0x25457ec size 0x24 virtual true final false
 Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// @brief Method set_NullValueHandling addr 0x2545810 size 0x24 virtual true final false
 void set_NullValueHandling(Newtonsoft::Json::NullValueHandling value) ;

/// @brief Method get_ObjectCreationHandling addr 0x2545834 size 0x24 virtual true final false
 Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling() ;

/// @brief Method set_ObjectCreationHandling addr 0x2545858 size 0x24 virtual true final false
 void set_ObjectCreationHandling(Newtonsoft::Json::ObjectCreationHandling value) ;

/// @brief Method get_ReferenceLoopHandling addr 0x254587c size 0x24 virtual true final false
 Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling() ;

/// @brief Method set_ReferenceLoopHandling addr 0x25458a0 size 0x24 virtual true final false
 void set_ReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_PreserveReferencesHandling addr 0x25458c4 size 0x24 virtual true final false
 Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling() ;

/// @brief Method set_PreserveReferencesHandling addr 0x25458e8 size 0x24 virtual true final false
 void set_PreserveReferencesHandling(Newtonsoft::Json::PreserveReferencesHandling value) ;

/// @brief Method get_TypeNameHandling addr 0x254590c size 0x24 virtual true final false
 Newtonsoft::Json::TypeNameHandling get_TypeNameHandling() ;

/// @brief Method set_TypeNameHandling addr 0x2545930 size 0x24 virtual true final false
 void set_TypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

/// @brief Method get_MetadataPropertyHandling addr 0x2545954 size 0x24 virtual true final false
 Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method set_MetadataPropertyHandling addr 0x2545978 size 0x24 virtual true final false
 void set_MetadataPropertyHandling(Newtonsoft::Json::MetadataPropertyHandling value) ;

/// @brief Method get_TypeNameAssemblyFormat addr 0x254599c size 0x24 virtual true final false
 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat() ;

/// @brief Method set_TypeNameAssemblyFormat addr 0x25459c0 size 0x24 virtual true final false
 void set_TypeNameAssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

/// @brief Method get_ConstructorHandling addr 0x25459e4 size 0x24 virtual true final false
 Newtonsoft::Json::ConstructorHandling get_ConstructorHandling() ;

/// @brief Method set_ConstructorHandling addr 0x2545a08 size 0x24 virtual true final false
 void set_ConstructorHandling(Newtonsoft::Json::ConstructorHandling value) ;

/// @brief Method get_Binder addr 0x2545a2c size 0x20 virtual true final false
 System::Runtime::Serialization::SerializationBinder get_Binder() ;

/// @brief Method set_Binder addr 0x2545a4c size 0x20 virtual true final false
 void set_Binder(System::Runtime::Serialization::SerializationBinder value) ;

/// @brief Method get_Context addr 0x2545a6c size 0x24 virtual true final false
 System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method set_Context addr 0x2545a90 size 0x24 virtual true final false
 void set_Context(System::Runtime::Serialization::StreamingContext value) ;

/// @brief Method get_Formatting addr 0x2545ab4 size 0x24 virtual true final false
 Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method set_Formatting addr 0x2545ad8 size 0x24 virtual true final false
 void set_Formatting(Newtonsoft::Json::Formatting value) ;

/// @brief Method get_DateFormatHandling addr 0x2545afc size 0x24 virtual true final false
 Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// @brief Method set_DateFormatHandling addr 0x2545b20 size 0x24 virtual true final false
 void set_DateFormatHandling(Newtonsoft::Json::DateFormatHandling value) ;

/// @brief Method get_DateTimeZoneHandling addr 0x2545b44 size 0x24 virtual true final false
 Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method set_DateTimeZoneHandling addr 0x2545b68 size 0x24 virtual true final false
 void set_DateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

/// @brief Method get_DateParseHandling addr 0x2545b8c size 0x24 virtual true final false
 Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method set_DateParseHandling addr 0x2545bb0 size 0x24 virtual true final false
 void set_DateParseHandling(Newtonsoft::Json::DateParseHandling value) ;

/// @brief Method get_FloatFormatHandling addr 0x2545bd4 size 0x24 virtual true final false
 Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method set_FloatFormatHandling addr 0x2545bf8 size 0x24 virtual true final false
 void set_FloatFormatHandling(Newtonsoft::Json::FloatFormatHandling value) ;

/// @brief Method get_FloatParseHandling addr 0x2545c1c size 0x24 virtual true final false
 Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method set_FloatParseHandling addr 0x2545c40 size 0x24 virtual true final false
 void set_FloatParseHandling(Newtonsoft::Json::FloatParseHandling value) ;

/// @brief Method get_StringEscapeHandling addr 0x2545c64 size 0x24 virtual true final false
 Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method set_StringEscapeHandling addr 0x2545c88 size 0x24 virtual true final false
 void set_StringEscapeHandling(Newtonsoft::Json::StringEscapeHandling value) ;

/// @brief Method get_DateFormatString addr 0x2545cac size 0x24 virtual true final false
 ::StringW get_DateFormatString() ;

/// @brief Method set_DateFormatString addr 0x2545cd0 size 0x24 virtual true final false
 void set_DateFormatString(::StringW value) ;

/// @brief Method get_Culture addr 0x2545cf4 size 0x24 virtual true final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x2545d18 size 0x24 virtual true final false
 void set_Culture(System::Globalization::CultureInfo value) ;

/// @brief Method get_MaxDepth addr 0x2545d3c size 0x24 virtual true final false
 System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method set_MaxDepth addr 0x2545d60 size 0x24 virtual true final false
 void set_MaxDepth(System::Nullable_1<int32_t> value) ;

/// @brief Method get_CheckAdditionalContent addr 0x2545d84 size 0x24 virtual true final false
 bool get_CheckAdditionalContent() ;

/// @brief Method set_CheckAdditionalContent addr 0x2545da8 size 0x28 virtual true final false
 void set_CheckAdditionalContent(bool value) ;

/// @brief Method GetInternalSerializer addr 0x2545dd0 size 0x1c virtual false final false
 Newtonsoft::Json::Serialization::JsonSerializerInternalBase GetInternalSerializer() ;

// Ctor Parameters [CppParam { name: "serializerReader", ty: "Newtonsoft::Json::Serialization::JsonSerializerInternalReader", modifiers: "", def_value: None }]
explicit JsonSerializerProxy(Newtonsoft::Json::Serialization::JsonSerializerInternalReader serializerReader) ;

/// @brief Method .ctor addr 0x2545dec size 0x7c virtual false final false
 void _ctor(Newtonsoft::Json::Serialization::JsonSerializerInternalReader serializerReader) ;

// Ctor Parameters [CppParam { name: "serializerWriter", ty: "Newtonsoft::Json::Serialization::JsonSerializerInternalWriter", modifiers: "", def_value: None }]
explicit JsonSerializerProxy(Newtonsoft::Json::Serialization::JsonSerializerInternalWriter serializerWriter) ;

/// @brief Method .ctor addr 0x2540618 size 0x7c virtual false final false
 void _ctor(Newtonsoft::Json::Serialization::JsonSerializerInternalWriter serializerWriter) ;

/// @brief Method DeserializeInternal addr 0x2545e68 size 0x38 virtual true final false
 ::bs_hook::Il2CppWrapperType DeserializeInternal(Newtonsoft::Json::JsonReader reader, System::Type objectType) ;

/// @brief Method PopulateInternal addr 0x2545ea0 size 0x34 virtual true final false
 void PopulateInternal(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method SerializeInternal addr 0x2545ed4 size 0x30 virtual true final false
 void SerializeInternal(Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value, System::Type rootType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonSerializerProxy);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonSerializerProxy, "Newtonsoft.Json.Serialization", "JsonSerializerProxy");
