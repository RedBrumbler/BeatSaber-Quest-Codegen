#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlUnspecifiedAttribute;
}
// Type: System.Xml::XmlUnspecifiedAttribute
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11489))
// CS Name: System.Xml.XmlUnspecifiedAttribute
class CORDL_TYPE XmlUnspecifiedAttribute : public System::Xml::XmlAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlUnspecifiedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: " const&", def_value: None }]
constexpr XmlUnspecifiedAttribute(XmlUnspecifiedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "&&", def_value: None }]
constexpr XmlUnspecifiedAttribute(XmlUnspecifiedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUnspecifiedAttribute(void* ptr) noexcept : System::Xml::XmlAttribute(ptr) {
}


  constexpr XmlUnspecifiedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUnspecifiedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUnspecifiedAttribute& operator=(XmlUnspecifiedAttribute&& o) noexcept = default;
  constexpr XmlUnspecifiedAttribute& operator=(XmlUnspecifiedAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_fSpecified, put=__set_fSpecified))  fSpecified;

constexpr void __set_fSpecified(bool value) ;

constexpr bool __get_fSpecified() const;


// Properties

 bool __declspec(property(get=get_Specified))  Specified;

 ::StringW __declspec(property(put=set_InnerText))  InnerText;


// Methods

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceURI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlUnspecifiedAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x272c7c8 size 0x8 virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method get_Specified addr 0x27317f8 size 0x8 virtual true final false
 bool get_Specified() ;

/// @brief Method CloneNode addr 0x2731800 size 0x130 virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method set_InnerText addr 0x2731930 size 0x20 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method RemoveChild addr 0x2731950 size 0x20 virtual true final false
 System::Xml::XmlNode RemoveChild(System::Xml::XmlNode oldChild) ;

/// @brief Method AppendChild addr 0x2731970 size 0x20 virtual true final false
 System::Xml::XmlNode AppendChild(System::Xml::XmlNode newChild) ;

/// @brief Method SetSpecified addr 0x2731990 size 0xc virtual false final false
 void SetSpecified(bool f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlUnspecifiedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUnspecifiedAttribute, "System.Xml", "XmlUnspecifiedAttribute");
