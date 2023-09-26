#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlName;
}
// Forward declare root types
namespace System::Xml {
class XmlElement;
}
// Type: System.Xml::XmlElement
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11469))
// CS Name: System.Xml.XmlElement
class CORDL_TYPE XmlElement : public System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: " const&", def_value: None }]
constexpr XmlElement(XmlElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElement", modifiers: "&&", def_value: None }]
constexpr XmlElement(XmlElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlElement(void* ptr) noexcept : System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlElement& operator=(XmlElement&& o) noexcept = default;
  constexpr XmlElement& operator=(XmlElement const& o) noexcept = default;
                


// Fields

 System::Xml::XmlName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::XmlName value) ;

constexpr System::Xml::XmlName __get_name() const;

 System::Xml::XmlAttributeCollection __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(System::Xml::XmlAttributeCollection value) ;

constexpr System::Xml::XmlAttributeCollection __get_attributes() const;

 System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(System::Xml::XmlLinkedNode value) ;

constexpr System::Xml::XmlLinkedNode __get_lastChild() const;


// Properties

 System::Xml::XmlName __declspec(property(get=get_XmlName, put=set_XmlName))  XmlName;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 bool __declspec(property(get=get_IsEmpty, put=set_IsEmpty))  IsEmpty;

 System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 System::Xml::XmlAttributeCollection __declspec(property(get=get_Attributes))  Attributes;

 bool __declspec(property(get=get_HasAttributes))  HasAttributes;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 System::Xml::XmlNode __declspec(property(get=get_NextSibling))  NextSibling;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::XmlName", modifiers: "", def_value: None }, CppParam { name: "empty", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlElement(System::Xml::XmlName name, bool empty, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x2727a50 size 0x120 virtual false final false
 void _ctor(System::Xml::XmlName name, bool empty, System::Xml::XmlDocument doc) ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceURI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x2727b70 size 0x44 virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method get_XmlName addr 0x2727bb4 size 0x8 virtual false final false
 System::Xml::XmlName get_XmlName() ;

/// @brief Method set_XmlName addr 0x2727bbc size 0x8 virtual false final false
 void set_XmlName(System::Xml::XmlName value) ;

/// @brief Method CloneNode addr 0x2727bc4 size 0x58c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_Name addr 0x2728198 size 0x18 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x272835c size 0x1c virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x2728378 size 0x1c virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x2728394 size 0x1c virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_NodeType addr 0x27283b0 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x27283b8 size 0x8 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_OwnerDocument addr 0x27283c0 size 0x1c virtual true final false
 System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method get_IsContainer addr 0x27283dc size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method AppendChildForLoad addr 0x27283e4 size 0x168 virtual true final false
 System::Xml::XmlNode AppendChildForLoad(System::Xml::XmlNode newChild, System::Xml::XmlDocument doc) ;

/// @brief Method get_IsEmpty addr 0x2728150 size 0x10 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method set_IsEmpty addr 0x2728160 size 0x38 virtual false final false
 void set_IsEmpty(bool value) ;

/// @brief Method get_LastNode addr 0x2728568 size 0x10 virtual true final false
 System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x2728578 size 0x8 virtual true final false
 void set_LastNode(System::Xml::XmlLinkedNode value) ;

/// @brief Method IsValidChildType addr 0x2728580 size 0x24 virtual true final false
 bool IsValidChildType(System::Xml::XmlNodeType type) ;

/// @brief Method get_Attributes addr 0x27285a4 size 0x144 virtual true final false
 System::Xml::XmlAttributeCollection get_Attributes() ;

/// @brief Method get_HasAttributes addr 0x27286e8 size 0x28 virtual true final false
 bool get_HasAttributes() ;

/// @brief Method SetAttributeNode addr 0x2728710 size 0x118 virtual true final false
 System::Xml::XmlAttribute SetAttributeNode(System::Xml::XmlAttribute newAttr) ;

/// @brief Method RemoveAllAttributes addr 0x2728828 size 0x3c virtual true final false
 void RemoveAllAttributes() ;

/// @brief Method RemoveAll addr 0x2728864 size 0x24 virtual true final false
 void RemoveAll() ;

/// @brief Method RemoveAllChildren addr 0x2728564 size 0x4 virtual false final false
 void RemoveAllChildren() ;

/// @brief Method set_InnerXml addr 0x27288f0 size 0x7c virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method get_InnerText addr 0x27289e0 size 0x4 virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x2728aec size 0xb8 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method get_NextSibling addr 0x2728ba4 size 0x3c virtual true final false
 System::Xml::XmlNode get_NextSibling() ;

/// @brief Method SetParent addr 0x2728be0 size 0x8 virtual true final false
 void SetParent(System::Xml::XmlNode node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlElement);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlElement, "System.Xml", "XmlElement");
