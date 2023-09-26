#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlSignificantWhitespace;
}
// Type: System.Xml::XmlSignificantWhitespace
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11487))
// CS Name: System.Xml.XmlSignificantWhitespace
class CORDL_TYPE XmlSignificantWhitespace : public System::Xml::XmlCharacterData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlSignificantWhitespace() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSignificantWhitespace", modifiers: " const&", def_value: None }]
constexpr XmlSignificantWhitespace(XmlSignificantWhitespace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSignificantWhitespace", modifiers: "&&", def_value: None }]
constexpr XmlSignificantWhitespace(XmlSignificantWhitespace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSignificantWhitespace(void* ptr) noexcept : System::Xml::XmlCharacterData(ptr) {
}


  constexpr XmlSignificantWhitespace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSignificantWhitespace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSignificantWhitespace& operator=(XmlSignificantWhitespace&& o) noexcept = default;
  constexpr XmlSignificantWhitespace& operator=(XmlSignificantWhitespace const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_IsText))  IsText;


// Methods

// Ctor Parameters [CppParam { name: "strData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlSignificantWhitespace(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x272c650 size 0xa4 virtual false final false
 void _ctor(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x27313ec size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2731414 size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x273143c size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x2731444 size 0x88 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method CloneNode addr 0x27314cc size 0x5c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_Value addr 0x2731528 size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2731538 size 0x94 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_IsText addr 0x27315cc size 0x8 virtual true final false
 bool get_IsText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlSignificantWhitespace);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlSignificantWhitespace, "System.Xml", "XmlSignificantWhitespace");
