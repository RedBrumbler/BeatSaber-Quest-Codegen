#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class BitStack;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlEncodedRawTextWriterIndent;
}
// Type: System.Xml::XmlEncodedRawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11411))
// CS Name: System.Xml.XmlEncodedRawTextWriterIndent
class CORDL_TYPE XmlEncodedRawTextWriterIndent : public System::Xml::XmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~XmlEncodedRawTextWriterIndent() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriterIndent", modifiers: " const&", def_value: None }]
constexpr XmlEncodedRawTextWriterIndent(XmlEncodedRawTextWriterIndent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
constexpr XmlEncodedRawTextWriterIndent(XmlEncodedRawTextWriterIndent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEncodedRawTextWriterIndent(void* ptr) noexcept : System::Xml::XmlEncodedRawTextWriter(ptr) {
}


  constexpr XmlEncodedRawTextWriterIndent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEncodedRawTextWriterIndent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEncodedRawTextWriterIndent& operator=(XmlEncodedRawTextWriterIndent&& o) noexcept = default;
  constexpr XmlEncodedRawTextWriterIndent& operator=(XmlEncodedRawTextWriterIndent const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_indentLevel, put=__set_indentLevel))  indentLevel;

constexpr void __set_indentLevel(int32_t value) ;

constexpr int32_t __get_indentLevel() const;

 bool __declspec(property(get=__get_newLineOnAttributes, put=__set_newLineOnAttributes))  newLineOnAttributes;

constexpr void __set_newLineOnAttributes(bool value) ;

constexpr bool __get_newLineOnAttributes() const;

 ::StringW __declspec(property(get=__get_indentChars, put=__set_indentChars))  indentChars;

constexpr void __set_indentChars(::StringW value) ;

constexpr ::StringW __get_indentChars() const;

 bool __declspec(property(get=__get_mixedContent, put=__set_mixedContent))  mixedContent;

constexpr void __set_mixedContent(bool value) ;

constexpr bool __get_mixedContent() const;

 System::Xml::BitStack __declspec(property(get=__get_mixedContentStack, put=__set_mixedContentStack))  mixedContentStack;

constexpr void __set_mixedContentStack(System::Xml::BitStack value) ;

constexpr System::Xml::BitStack __get_mixedContentStack() const;

 System::Xml::ConformanceLevel __declspec(property(get=__get_conformanceLevel, put=__set_conformanceLevel))  conformanceLevel;

constexpr void __set_conformanceLevel(System::Xml::ConformanceLevel value) ;

constexpr System::Xml::ConformanceLevel __get_conformanceLevel() const;


// Methods

// Ctor Parameters [CppParam { name: "writer", ty: "System::IO::TextWriter", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit XmlEncodedRawTextWriterIndent(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26f6f00 size 0x28 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit XmlEncodedRawTextWriterIndent(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26f703c size 0x28 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteDocType addr 0x26f7064 size 0x60 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26f710c size 0x98 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26f71a4 size 0x44 virtual true final false
 void StartElementContent() ;

/// @brief Method OnRootElement addr 0x26f71e8 size 0x8 virtual true final false
 void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel) ;

/// @brief Method WriteEndElement addr 0x26f71f0 size 0x98 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26f7288 size 0x98 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26f7320 size 0x3c virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteCData addr 0x26f735c size 0xc virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26f7368 size 0x40 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26f73a8 size 0x48 virtual true final false
 void WriteProcessingInstruction(::StringW target, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26f73f0 size 0xc virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26f73fc size 0xc virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26f7408 size 0xc virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26f7414 size 0xc virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26f7420 size 0xc virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26f742c size 0xc virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f7438 size 0xc virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f7444 size 0xc virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x26f7450 size 0xc virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Init addr 0x26f6f28 size 0x114 virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteIndent addr 0x26f70c4 size 0x48 virtual false final false
 void WriteIndent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEncodedRawTextWriterIndent, "System.Xml", "XmlEncodedRawTextWriterIndent");
