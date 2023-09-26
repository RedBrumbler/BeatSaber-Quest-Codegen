#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::IO {
class TextReader;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct EntityHandling;
}
// Forward declare root types
namespace System::Xml {
class XmlTextReader;
}
// Type: System.Xml::XmlTextReader
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11420))
// CS Name: System.Xml.XmlTextReader
class CORDL_TYPE XmlTextReader : public System::Xml::XmlReader {
public:
// Declarations
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr operator  System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlTextReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: " const&", def_value: None }]
constexpr XmlTextReader(XmlTextReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReader", modifiers: "&&", def_value: None }]
constexpr XmlTextReader(XmlTextReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlTextReader(void* ptr) noexcept : System::Xml::XmlReader(ptr) {
}


  constexpr XmlTextReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlTextReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlTextReader& operator=(XmlTextReader&& o) noexcept = default;
  constexpr XmlTextReader& operator=(XmlTextReader const& o) noexcept = default;
                


// Fields

 System::Xml::XmlTextReaderImpl __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(System::Xml::XmlTextReaderImpl value) ;

constexpr System::Xml::XmlTextReaderImpl __get_impl() const;


// Properties

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_Value))  Value;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 bool __declspec(property(get=get_IsEmptyElement))  IsEmptyElement;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 System::Xml::ReadState __declspec(property(get=get_ReadState))  ReadState;

 System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 bool __declspec(property(get=get_CanResolveEntity))  CanResolveEntity;

 System::Xml::EntityHandling __declspec(property(put=set_EntityHandling))  EntityHandling;

 System::Xml::XmlResolver __declspec(property(put=set_XmlResolver))  XmlResolver;

 System::Xml::XmlTextReaderImpl __declspec(property(get=get_Impl))  Impl;

 bool __declspec(property(put=set_XmlValidatingReaderCompatibilityMode))  XmlValidatingReaderCompatibilityMode;

 System::Xml::IDtdInfo __declspec(property(get=get_DtdInfo))  DtdInfo;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "nt", ty: "System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlTextReader(System::IO::TextReader input, System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x27125e0 size 0xac virtual false final false
 void _ctor(System::IO::TextReader input, System::Xml::XmlNameTable nt) ;

/// @brief Method get_NodeType addr 0x271268c size 0x20 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Name addr 0x27126ac size 0x20 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x27126cc size 0x20 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x27126ec size 0x20 virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x271270c size 0x20 virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_Value addr 0x271272c size 0x20 virtual true final false
 ::StringW get_Value() ;

/// @brief Method get_BaseURI addr 0x271274c size 0x20 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method get_IsEmptyElement addr 0x271276c size 0x24 virtual true final false
 bool get_IsEmptyElement() ;

/// @brief Method get_IsDefault addr 0x2712790 size 0x24 virtual true final false
 bool get_IsDefault() ;

/// @brief Method MoveToAttribute addr 0x27127b4 size 0x24 virtual true final false
 bool MoveToAttribute(::StringW name) ;

/// @brief Method MoveToFirstAttribute addr 0x27127d8 size 0x24 virtual true final false
 bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute addr 0x27127fc size 0x24 virtual true final false
 bool MoveToNextAttribute() ;

/// @brief Method MoveToElement addr 0x2712820 size 0x24 virtual true final false
 bool MoveToElement() ;

/// @brief Method ReadAttributeValue addr 0x2712844 size 0x24 virtual true final false
 bool ReadAttributeValue() ;

/// @brief Method Read addr 0x2712868 size 0x24 virtual true final false
 bool Read() ;

/// @brief Method Close addr 0x271288c size 0x24 virtual true final false
 void Close() ;

/// @brief Method get_ReadState addr 0x27128b0 size 0x24 virtual true final false
 System::Xml::ReadState get_ReadState() ;

/// @brief Method get_NameTable addr 0x27128d4 size 0x24 virtual true final false
 System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method LookupNamespace addr 0x27128f8 size 0x38 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method get_CanResolveEntity addr 0x2712930 size 0x8 virtual true final false
 bool get_CanResolveEntity() ;

/// @brief Method ResolveEntity addr 0x2712938 size 0x24 virtual true final false
 void ResolveEntity() ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace addr 0x271295c size 0x24 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix addr 0x2712980 size 0x1c virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) ;

/// @brief Method set_EntityHandling addr 0x271299c size 0x1c virtual false final false
 void set_EntityHandling(System::Xml::EntityHandling value) ;

/// @brief Method set_XmlResolver addr 0x27129b8 size 0x1c virtual false final false
 void set_XmlResolver(System::Xml::XmlResolver value) ;

/// @brief Method get_Impl addr 0x27129d4 size 0x8 virtual false final false
 System::Xml::XmlTextReaderImpl get_Impl() ;

/// @brief Method set_XmlValidatingReaderCompatibilityMode addr 0x27129dc size 0x20 virtual false final false
 void set_XmlValidatingReaderCompatibilityMode(bool value) ;

/// @brief Method get_DtdInfo addr 0x27129fc size 0x24 virtual true final false
 System::Xml::IDtdInfo get_DtdInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlTextReader);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlTextReader, "System.Xml", "XmlTextReader");
