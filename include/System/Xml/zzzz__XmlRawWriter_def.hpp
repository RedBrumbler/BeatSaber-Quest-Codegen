#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlRawWriterBase64Encoder;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct WriteState;
}
// Forward declare root types
namespace System::Xml {
class XmlRawWriter;
}
// Type: System.Xml::XmlRawWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11416))
// CS Name: System.Xml.XmlRawWriter
class CORDL_TYPE XmlRawWriter : public System::Xml::XmlWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlRawWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: " const&", def_value: None }]
constexpr XmlRawWriter(XmlRawWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRawWriter", modifiers: "&&", def_value: None }]
constexpr XmlRawWriter(XmlRawWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlRawWriter(void* ptr) noexcept : System::Xml::XmlWriter(ptr) {
}


  constexpr XmlRawWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlRawWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlRawWriter& operator=(XmlRawWriter&& o) noexcept = default;
  constexpr XmlRawWriter& operator=(XmlRawWriter const& o) noexcept = default;
                


// Fields

 System::Xml::XmlRawWriterBase64Encoder __declspec(property(get=__get_base64Encoder, put=__set_base64Encoder))  base64Encoder;

constexpr void __set_base64Encoder(System::Xml::XmlRawWriterBase64Encoder value) ;

constexpr System::Xml::XmlRawWriterBase64Encoder __get_base64Encoder() const;

 System::Xml::IXmlNamespaceResolver __declspec(property(get=__get_resolver, put=__set_resolver))  resolver;

constexpr void __set_resolver(System::Xml::IXmlNamespaceResolver value) ;

constexpr System::Xml::IXmlNamespaceResolver __get_resolver() const;


// Properties

 System::Xml::WriteState __declspec(property(get=get_WriteState))  WriteState;

 System::Xml::IXmlNamespaceResolver __declspec(property(put=set_NamespaceResolver))  NamespaceResolver;

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

/// @brief Method WriteStartDocument addr 0x26f80fc size 0x60 virtual true final false
 void WriteStartDocument() ;

/// @brief Method WriteStartDocument addr 0x26f815c size 0x60 virtual true final false
 void WriteStartDocument(bool standalone) ;

/// @brief Method WriteEndDocument addr 0x26f81bc size 0x60 virtual true final false
 void WriteEndDocument() ;

/// @brief Method WriteDocType addr 0x26f821c size 0x4 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteEndElement addr 0x26f8220 size 0x60 virtual true final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x26f8280 size 0x60 virtual true final false
 void WriteFullEndElement() ;

/// @brief Method WriteBase64 addr 0x26f745c size 0x8c virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method LookupPrefix addr 0x26f82e0 size 0x60 virtual true final false
 ::StringW LookupPrefix(::StringW ns) ;

/// @brief Method get_WriteState addr 0x26f8340 size 0x60 virtual true final false
 System::Xml::WriteState get_WriteState() ;

/// @brief Method WriteCData addr 0x26f83a0 size 0x10 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteCharEntity addr 0x26f83b0 size 0x94 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26f8444 size 0xa4 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26f84e8 size 0x10 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteChars addr 0x26f84f8 size 0x30 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f8528 size 0x30 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f8558 size 0x10 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteValue addr 0x26f8568 size 0x10 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method set_NamespaceResolver addr 0x26f8578 size 0x8 virtual true final false
 void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver value) ;

/// @brief Method WriteXmlDeclaration addr 0x26f8580 size 0x4 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26f8584 size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method StartElementContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartElementContent() ;

/// @brief Method OnRootElement addr 0x26f8588 size 0x4 virtual true final false
 void OnRootElement(System::Xml::ConformanceLevel conformanceLevel) ;

/// @brief Method WriteEndElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26f858c size 0x10 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteNamespaceDeclaration addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26f859c size 0x8 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x26f85a4 size 0x40 virtual true final false
 void WriteStartNamespaceDeclaration(::StringW prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x26f85e4 size 0x40 virtual true final false
 void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteEndBase64 addr 0x26f8624 size 0x18 virtual true final false
 void WriteEndBase64() ;

/// @brief Method Close addr 0x26f863c size 0x10 virtual true final false
 void Close(System::Xml::WriteState currentState) ;

// Ctor Parameters []
explicit XmlRawWriter() ;

/// @brief Method .ctor addr 0x26f25e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlRawWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlRawWriter, "System.Xml", "XmlRawWriter");
