#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Xml {
class BitStack;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriterIndent;
}
// Type: System.Xml::XmlUtf8RawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11436))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11437))
// CS Name: System.Xml.XmlUtf8RawTextWriterIndent
class CORDL_TYPE XmlUtf8RawTextWriterIndent : public System::Xml::XmlUtf8RawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~XmlUtf8RawTextWriterIndent() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: " const&", def_value: None }]
constexpr XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
constexpr XmlUtf8RawTextWriterIndent(XmlUtf8RawTextWriterIndent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUtf8RawTextWriterIndent(void* ptr) noexcept : System::Xml::XmlUtf8RawTextWriter(ptr) {
}


  constexpr XmlUtf8RawTextWriterIndent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUtf8RawTextWriterIndent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUtf8RawTextWriterIndent& operator=(XmlUtf8RawTextWriterIndent&& o) noexcept = default;
  constexpr XmlUtf8RawTextWriterIndent& operator=(XmlUtf8RawTextWriterIndent const& o) noexcept = default;
                


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

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit XmlUtf8RawTextWriterIndent(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x2716e28 size 0x28 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteDocType addr 0x2716f5c size 0x60 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x2717004 size 0x6c virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x2717070 size 0x50 virtual true final false
 void StartElementContent() ;

/// @brief Method OnRootElement addr 0x27170c0 size 0x8 virtual true final false
 void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel) ;

/// @brief Method WriteEndElement addr 0x27170c8 size 0x80 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x2717148 size 0x80 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x27171c8 size 0x3c virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteCData addr 0x2717204 size 0xc virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x2717210 size 0x40 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x2717250 size 0x48 virtual true final false
 void WriteProcessingInstruction(::StringW target, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x2717298 size 0xc virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x27172a4 size 0xc virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x27172b0 size 0xc virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x27172bc size 0xc virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x27172c8 size 0xc virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x27172d4 size 0xc virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x27172e0 size 0xc virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x27172ec size 0xc virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x27172f8 size 0x10 virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Init addr 0x2716e50 size 0x10c virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteIndent addr 0x2716fbc size 0x48 virtual false final false
 void WriteIndent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUtf8RawTextWriterIndent, "System.Xml", "XmlUtf8RawTextWriterIndent");
