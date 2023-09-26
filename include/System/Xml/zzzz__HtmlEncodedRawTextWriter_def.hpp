#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
struct AttributeProperties;
}
namespace System::Xml {
class TernaryTreeReadOnly;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct ElementProperties;
}
namespace System::Xml {
class ByteStack;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class HtmlEncodedRawTextWriter;
}
// Type: System.Xml::HtmlEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11377))
// CS Name: System.Xml.HtmlEncodedRawTextWriter
class CORDL_TYPE HtmlEncodedRawTextWriter : public System::Xml::XmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~HtmlEncodedRawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: " const&", def_value: None }]
constexpr HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
constexpr HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlEncodedRawTextWriter(void* ptr) noexcept : System::Xml::XmlEncodedRawTextWriter(ptr) {
}


  constexpr HtmlEncodedRawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriter& operator=(HtmlEncodedRawTextWriter&& o) noexcept = default;
  constexpr HtmlEncodedRawTextWriter& operator=(HtmlEncodedRawTextWriter const& o) noexcept = default;
                


// Fields

 System::Xml::ByteStack __declspec(property(get=__get_elementScope, put=__set_elementScope))  elementScope;

constexpr void __set_elementScope(System::Xml::ByteStack value) ;

constexpr System::Xml::ByteStack __get_elementScope() const;

 System::Xml::ElementProperties __declspec(property(get=__get_currentElementProperties, put=__set_currentElementProperties))  currentElementProperties;

constexpr void __set_currentElementProperties(System::Xml::ElementProperties value) ;

constexpr System::Xml::ElementProperties __get_currentElementProperties() const;

 System::Xml::AttributeProperties __declspec(property(get=__get_currentAttributeProperties, put=__set_currentAttributeProperties))  currentAttributeProperties;

constexpr void __set_currentAttributeProperties(System::Xml::AttributeProperties value) ;

constexpr System::Xml::AttributeProperties __get_currentAttributeProperties() const;

 bool __declspec(property(get=__get_endsWithAmpersand, put=__set_endsWithAmpersand))  endsWithAmpersand;

constexpr void __set_endsWithAmpersand(bool value) ;

constexpr bool __get_endsWithAmpersand() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_uriEscapingBuffer, put=__set_uriEscapingBuffer))  uriEscapingBuffer;

constexpr void __set_uriEscapingBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_uriEscapingBuffer() const;

 ::StringW __declspec(property(get=__get_mediaType, put=__set_mediaType))  mediaType;

constexpr void __set_mediaType(::StringW value) ;

constexpr ::StringW __get_mediaType() const;

 bool __declspec(property(get=__get_doNotEscapeUriAttributes, put=__set_doNotEscapeUriAttributes))  doNotEscapeUriAttributes;

constexpr void __set_doNotEscapeUriAttributes(bool value) ;

constexpr bool __get_doNotEscapeUriAttributes() const;

static System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_elementPropertySearch, put=__set_elementPropertySearch))  elementPropertySearch;

static void __set_elementPropertySearch(System::Xml::TernaryTreeReadOnly value) ;

static System::Xml::TernaryTreeReadOnly __get_elementPropertySearch() ;

static System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_attributePropertySearch, put=__set_attributePropertySearch))  attributePropertySearch;

static void __set_attributePropertySearch(System::Xml::TernaryTreeReadOnly value) ;

static System::Xml::TernaryTreeReadOnly __get_attributePropertySearch() ;


// Methods

// Ctor Parameters [CppParam { name: "writer", ty: "System::IO::TextWriter", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit HtmlEncodedRawTextWriter(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26ed8a0 size 0x28 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit HtmlEncodedRawTextWriter(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26edb14 size 0x28 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26eddc0 size 0x4 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26eddc4 size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26eddc8 size 0x228 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26ee0a0 size 0x118 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26ee3ac size 0x54 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26ee4fc size 0xf8 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26ee764 size 0xf8 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26ee964 size 0x170 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26eebf4 size 0x90 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteProcessingInstruction addr 0x26eed18 size 0x128 virtual true final false
 void WriteProcessingInstruction(::StringW target, ::StringW text) ;

/// @brief Method WriteString addr 0x26ef154 size 0x6c virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26ef210 size 0x60 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26ef270 size 0x60 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26ef2d0 size 0x60 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26ef330 size 0x88 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Init addr 0x26ed9a0 size 0x174 virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteMetaElement addr 0x26ee400 size 0xfc virtual false final false
 void WriteMetaElement() ;

/// @brief Method WriteHtmlElementTextBlock addr 0x26ef200 size 0x10 virtual false final false
 void WriteHtmlElementTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeTextBlock addr 0x26ef1c0 size 0x40 virtual false final false
 void WriteHtmlAttributeTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeText addr 0x26efe70 size 0x2d8 virtual false final false
 void WriteHtmlAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteUriAttributeText addr 0x26efaf8 size 0x378 virtual false final false
 void WriteUriAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method OutputRestAmps addr 0x26eec84 size 0x94 virtual false final false
 void OutputRestAmps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::HtmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriter, "System.Xml", "HtmlEncodedRawTextWriter");
