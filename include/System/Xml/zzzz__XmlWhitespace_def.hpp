#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlWhitespace;
}
// Type: System.Xml::XmlWhitespace
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11490))
// CS Name: System.Xml.XmlWhitespace
class CORDL_TYPE XmlWhitespace : public System::Xml::XmlCharacterData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlWhitespace() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: " const&", def_value: None }]
constexpr XmlWhitespace(XmlWhitespace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWhitespace", modifiers: "&&", def_value: None }]
constexpr XmlWhitespace(XmlWhitespace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlWhitespace(void* ptr) noexcept : System::Xml::XmlCharacterData(ptr) {
}


  constexpr XmlWhitespace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlWhitespace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlWhitespace& operator=(XmlWhitespace&& o) noexcept = default;
  constexpr XmlWhitespace& operator=(XmlWhitespace const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_IsText))  IsText;


// Methods

// Ctor Parameters [CppParam { name: "strData", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlWhitespace(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x272c6f4 size 0xa4 virtual false final false
 void _ctor(::StringW strData, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x273199c size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x27319c4 size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x27319ec size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x27319f4 size 0x88 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_Value addr 0x2731a7c size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2731a8c size 0x94 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method CloneNode addr 0x2731b20 size 0x5c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsText addr 0x2731b7c size 0x8 virtual true final false
 bool get_IsText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlWhitespace);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWhitespace, "System.Xml", "XmlWhitespace");
