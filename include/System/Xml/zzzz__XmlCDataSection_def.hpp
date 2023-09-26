#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlCDataSection;
}
// Type: System.Xml::XmlCDataSection
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11460))
// CS Name: System.Xml.XmlCDataSection
class CORDL_TYPE XmlCDataSection : public System::Xml::XmlCharacterData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlCDataSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCDataSection", modifiers: " const&", def_value: None }]
constexpr XmlCDataSection(XmlCDataSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCDataSection", modifiers: "&&", def_value: None }]
constexpr XmlCDataSection(XmlCDataSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlCDataSection(void* ptr) noexcept : System::Xml::XmlCharacterData(ptr) {
}


  constexpr XmlCDataSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlCDataSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlCDataSection& operator=(XmlCDataSection&& o) noexcept = default;
  constexpr XmlCDataSection& operator=(XmlCDataSection const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 bool __declspec(property(get=get_IsText))  IsText;


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlCDataSection(::StringW data, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x27222a8 size 0x2c virtual false final false
 void _ctor(::StringW data, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x2722300 size 0x28 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2722328 size 0x28 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x2722350 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x2722358 size 0x84 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method CloneNode addr 0x27223dc size 0x5c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsText addr 0x2722438 size 0x8 virtual true final false
 bool get_IsText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlCDataSection);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCDataSection, "System.Xml", "XmlCDataSection");
