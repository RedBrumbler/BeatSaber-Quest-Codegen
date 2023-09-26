#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlNodeConverter;
}
// Type: Newtonsoft.Json.Converters::XmlNodeConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11791))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12029))
// CS Name: Newtonsoft.Json.Converters.XmlNodeConverter
class CORDL_TYPE XmlNodeConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlNodeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeConverter", modifiers: " const&", def_value: None }]
constexpr XmlNodeConverter(XmlNodeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeConverter", modifiers: "&&", def_value: None }]
constexpr XmlNodeConverter(XmlNodeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNodeConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr XmlNodeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNodeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNodeConverter& operator=(XmlNodeConverter&& o) noexcept = default;
  constexpr XmlNodeConverter& operator=(XmlNodeConverter const& o) noexcept = default;
                


// Fields

/// @brief Field TextName offset 0
static constexpr ::ConstString  TextName{u"#text"};

/// @brief Field CommentName offset 0
static constexpr ::ConstString  CommentName{u"#comment"};

/// @brief Field CDataName offset 0
static constexpr ::ConstString  CDataName{u"#cdata-section"};

/// @brief Field WhitespaceName offset 0
static constexpr ::ConstString  WhitespaceName{u"#whitespace"};

/// @brief Field SignificantWhitespaceName offset 0
static constexpr ::ConstString  SignificantWhitespaceName{u"#significant-whitespace"};

/// @brief Field DeclarationName offset 0
static constexpr ::ConstString  DeclarationName{u"?xml"};

/// @brief Field JsonNamespaceUri offset 0
static constexpr ::ConstString  JsonNamespaceUri{u"http://james.newtonking.com/projects/json"};

 ::StringW __declspec(property(get=__get__DeserializeRootElementName_k__BackingField, put=__set__DeserializeRootElementName_k__BackingField))  _DeserializeRootElementName_k__BackingField;

constexpr void __set__DeserializeRootElementName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__DeserializeRootElementName_k__BackingField() const;

 bool __declspec(property(get=__get__WriteArrayAttribute_k__BackingField, put=__set__WriteArrayAttribute_k__BackingField))  _WriteArrayAttribute_k__BackingField;

constexpr void __set__WriteArrayAttribute_k__BackingField(bool value) ;

constexpr bool __get__WriteArrayAttribute_k__BackingField() const;

 bool __declspec(property(get=__get__OmitRootObject_k__BackingField, put=__set__OmitRootObject_k__BackingField))  _OmitRootObject_k__BackingField;

constexpr void __set__OmitRootObject_k__BackingField(bool value) ;

constexpr bool __get__OmitRootObject_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_DeserializeRootElementName, put=set_DeserializeRootElementName))  DeserializeRootElementName;

 bool __declspec(property(get=get_WriteArrayAttribute, put=set_WriteArrayAttribute))  WriteArrayAttribute;

 bool __declspec(property(get=get_OmitRootObject, put=set_OmitRootObject))  OmitRootObject;


// Methods

/// @brief Method get_DeserializeRootElementName addr 0x2575508 size 0x8 virtual false final false
 ::StringW get_DeserializeRootElementName() ;

/// @brief Method set_DeserializeRootElementName addr 0x2575510 size 0x8 virtual false final false
 void set_DeserializeRootElementName(::StringW value) ;

/// @brief Method get_WriteArrayAttribute addr 0x2575518 size 0x8 virtual false final false
 bool get_WriteArrayAttribute() ;

/// @brief Method set_WriteArrayAttribute addr 0x2575520 size 0xc virtual false final false
 void set_WriteArrayAttribute(bool value) ;

/// @brief Method get_OmitRootObject addr 0x257552c size 0x8 virtual false final false
 bool get_OmitRootObject() ;

/// @brief Method set_OmitRootObject addr 0x2575534 size 0xc virtual false final false
 void set_OmitRootObject(bool value) ;

/// @brief Method WriteJson addr 0x2575540 size 0x124 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method WrapXml addr 0x2575664 size 0x11c virtual false final false
 Newtonsoft::Json::Converters::IXmlNode WrapXml(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method PushParentNamespaces addr 0x2575780 size 0x668 virtual false final false
 void PushParentNamespaces(Newtonsoft::Json::Converters::IXmlNode node, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method ResolveFullName addr 0x25774d0 size 0x31c virtual false final false
 ::StringW ResolveFullName(Newtonsoft::Json::Converters::IXmlNode node, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method GetPropertyName addr 0x25777ec size 0x428 virtual false final false
 ::StringW GetPropertyName(Newtonsoft::Json::Converters::IXmlNode node, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method IsArray addr 0x2577c14 size 0x3ec virtual false final false
 bool IsArray(Newtonsoft::Json::Converters::IXmlNode node) ;

/// @brief Method SerializeGroupedNodes addr 0x2578000 size 0x578 virtual false final false
 void SerializeGroupedNodes(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Converters::IXmlNode node, System::Xml::XmlNamespaceManager manager, bool writePropertyName) ;

/// @brief Method SerializeNode addr 0x2575de8 size 0x16e8 virtual false final false
 void SerializeNode(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Converters::IXmlNode node, System::Xml::XmlNamespaceManager manager, bool writePropertyName) ;

/// @brief Method AllSameName addr 0x2578578 size 0x2ac virtual false final false
static bool AllSameName(Newtonsoft::Json::Converters::IXmlNode node) ;

/// @brief Method ReadJson addr 0x2578a38 size 0x658 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method DeserializeValue addr 0x2579a2c size 0x590 virtual false final false
 void DeserializeValue(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, System::Xml::XmlNamespaceManager manager, ::StringW propertyName, Newtonsoft::Json::Converters::IXmlNode currentNode) ;

/// @brief Method ReadElement addr 0x2579090 size 0x2d8 virtual false final false
 void ReadElement(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, Newtonsoft::Json::Converters::IXmlNode currentNode, ::StringW propertyName, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method CreateElement addr 0x257b438 size 0x680 virtual false final false
 void CreateElement(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, Newtonsoft::Json::Converters::IXmlNode currentNode, ::StringW elementName, System::Xml::XmlNamespaceManager manager, ::StringW elementPrefix, System::Collections::Generic::Dictionary_2<::StringW,::StringW> attributeNameValues) ;

/// @brief Method AddAttribute addr 0x257b1ac size 0x28c virtual false final false
static void AddAttribute(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, Newtonsoft::Json::Converters::IXmlNode currentNode, ::StringW attributeName, System::Xml::XmlNamespaceManager manager, ::StringW attributePrefix) ;

/// @brief Method ConvertTokenToXmlValue addr 0x257bc60 size 0x5d8 virtual false final false
 ::StringW ConvertTokenToXmlValue(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method ReadArrayElements addr 0x257a7b0 size 0x38c virtual false final false
 void ReadArrayElements(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, ::StringW propertyName, Newtonsoft::Json::Converters::IXmlNode currentNode, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method AddJsonArrayAttribute addr 0x257c238 size 0x340 virtual false final false
 void AddJsonArrayAttribute(Newtonsoft::Json::Converters::IXmlElement element, Newtonsoft::Json::Converters::IXmlDocument document) ;

/// @brief Method ReadAttributeElements addr 0x257ab3c size 0x670 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> ReadAttributeElements(Newtonsoft::Json::JsonReader reader, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method CreateInstruction addr 0x2579fbc size 0x44c virtual false final false
 void CreateInstruction(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, Newtonsoft::Json::Converters::IXmlNode currentNode, ::StringW propertyName) ;

/// @brief Method CreateDocumentType addr 0x257a408 size 0x3a8 virtual false final false
 void CreateDocumentType(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, Newtonsoft::Json::Converters::IXmlNode currentNode) ;

/// @brief Method CreateElement addr 0x257bab8 size 0x1a8 virtual false final false
 Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW elementName, Newtonsoft::Json::Converters::IXmlDocument document, ::StringW elementPrefix, System::Xml::XmlNamespaceManager manager) ;

/// @brief Method DeserializeNode addr 0x2579368 size 0x6c4 virtual false final false
 void DeserializeNode(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Converters::IXmlDocument document, System::Xml::XmlNamespaceManager manager, Newtonsoft::Json::Converters::IXmlNode currentNode) ;

/// @brief Method IsNamespaceAttribute addr 0x257c578 size 0xe4 virtual false final false
 bool IsNamespaceAttribute(::StringW attributeName, ByRef<::StringW> prefix) ;

/// @brief Method ValueAttributes addr 0x2578824 size 0x214 virtual false final false
 bool ValueAttributes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> c) ;

/// @brief Method CanConvert addr 0x257c65c size 0xf8 virtual true final false
 bool CanConvert(System::Type valueType) ;

// Ctor Parameters []
explicit XmlNodeConverter() ;

/// @brief Method .ctor addr 0x257c754 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XmlNodeConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XmlNodeConverter, "Newtonsoft.Json.Converters", "XmlNodeConverter");
