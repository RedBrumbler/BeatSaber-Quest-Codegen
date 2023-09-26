#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlEntityReference;
}
// Type: System.Xml::XmlEntityReference
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11471))
// CS Name: System.Xml.XmlEntityReference
class CORDL_TYPE XmlEntityReference : public System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlEntityReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: " const&", def_value: None }]
constexpr XmlEntityReference(XmlEntityReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: "&&", def_value: None }]
constexpr XmlEntityReference(XmlEntityReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEntityReference(void* ptr) noexcept : System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlEntityReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEntityReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEntityReference& operator=(XmlEntityReference&& o) noexcept = default;
  constexpr XmlEntityReference& operator=(XmlEntityReference const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(System::Xml::XmlLinkedNode value) ;

constexpr System::Xml::XmlLinkedNode __get_lastChild() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 ::StringW __declspec(property(get=get_ChildBaseURI))  ChildBaseURI;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlEntityReference(::StringW name, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x2728f6c size 0xec virtual false final false
 void _ctor(::StringW name, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x2729058 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2729060 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_Value addr 0x2729068 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2729070 size 0x60 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_NodeType addr 0x27290d0 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x27290d8 size 0x38 virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsReadOnly addr 0x2729110 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsContainer addr 0x2729118 size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method SetParent addr 0x2729120 size 0xd0 virtual true final false
 void SetParent(System::Xml::XmlNode node) ;

/// @brief Method SetParentForLoad addr 0x2729848 size 0x10 virtual true final false
 void SetParentForLoad(System::Xml::XmlNode node) ;

/// @brief Method get_LastNode addr 0x2729858 size 0x8 virtual true final false
 System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x2729860 size 0x8 virtual true final false
 void set_LastNode(System::Xml::XmlLinkedNode value) ;

/// @brief Method IsValidChildType addr 0x2729868 size 0x24 virtual true final false
 bool IsValidChildType(System::Xml::XmlNodeType type) ;

/// @brief Method get_BaseURI addr 0x272988c size 0x30 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method ConstructBaseURI addr 0x27298bc size 0xd4 virtual false final false
 ::StringW ConstructBaseURI(::StringW baseURI, ::StringW systemId) ;

/// @brief Method get_ChildBaseURI addr 0x2729990 size 0xd4 virtual false final false
 ::StringW get_ChildBaseURI() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlEntityReference);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEntityReference, "System.Xml", "XmlEntityReference");
