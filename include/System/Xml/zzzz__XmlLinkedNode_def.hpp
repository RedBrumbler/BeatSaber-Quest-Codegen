#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlLinkedNode;
}
// Type: System.Xml::XmlLinkedNode
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11474))
// CS Name: System.Xml.XmlLinkedNode
class CORDL_TYPE XmlLinkedNode : public System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlLinkedNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: " const&", def_value: None }]
constexpr XmlLinkedNode(XmlLinkedNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "&&", def_value: None }]
constexpr XmlLinkedNode(XmlLinkedNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlLinkedNode(void* ptr) noexcept : System::Xml::XmlNode(ptr) {
}


  constexpr XmlLinkedNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlLinkedNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlLinkedNode& operator=(XmlLinkedNode&& o) noexcept = default;
  constexpr XmlLinkedNode& operator=(XmlLinkedNode const& o) noexcept = default;
                


// Fields

 System::Xml::XmlLinkedNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Xml::XmlLinkedNode value) ;

constexpr System::Xml::XmlLinkedNode __get_next() const;


// Properties

 System::Xml::XmlNode __declspec(property(get=get_PreviousSibling))  PreviousSibling;

 System::Xml::XmlNode __declspec(property(get=get_NextSibling))  NextSibling;


// Methods

// Ctor Parameters [CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlLinkedNode(System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x272783c size 0x18 virtual false final false
 void _ctor(System::Xml::XmlDocument doc) ;

/// @brief Method get_PreviousSibling addr 0x2729bd0 size 0x68 virtual true final false
 System::Xml::XmlNode get_PreviousSibling() ;

/// @brief Method get_NextSibling addr 0x2729c38 size 0x50 virtual true final false
 System::Xml::XmlNode get_NextSibling() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlLinkedNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlLinkedNode, "System.Xml", "XmlLinkedNode");
