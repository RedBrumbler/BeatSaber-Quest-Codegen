#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckWriter;
}
// Type: System.Xml::XmlAsyncCheckWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11408))
// CS Name: System.Xml.XmlAsyncCheckWriter
class CORDL_TYPE XmlAsyncCheckWriter : public System::Xml::XmlWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlAsyncCheckWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: " const&", def_value: None }]
constexpr XmlAsyncCheckWriter(XmlAsyncCheckWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "&&", def_value: None }]
constexpr XmlAsyncCheckWriter(XmlAsyncCheckWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAsyncCheckWriter(void* ptr) noexcept : System::Xml::XmlWriter(ptr) {
}


  constexpr XmlAsyncCheckWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAsyncCheckWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAsyncCheckWriter& operator=(XmlAsyncCheckWriter&& o) noexcept = default;
  constexpr XmlAsyncCheckWriter& operator=(XmlAsyncCheckWriter const& o) noexcept = default;
                


// Fields

 System::Xml::XmlWriter __declspec(property(get=__get_coreWriter, put=__set_coreWriter))  coreWriter;

constexpr void __set_coreWriter(System::Xml::XmlWriter value) ;

constexpr System::Xml::XmlWriter __get_coreWriter() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_lastTask, put=__set_lastTask))  lastTask;

constexpr void __set_lastTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_lastTask() const;


// Properties

 System::Xml::WriteState __declspec(property(get=get_WriteState))  WriteState;


// Methods

// Ctor Parameters [CppParam { name: "writer", ty: "System::Xml::XmlWriter", modifiers: "", def_value: None }]
explicit XmlAsyncCheckWriter(System::Xml::XmlWriter writer) ;

/// @brief Method .ctor addr 0x26f3490 size 0x7c virtual false final false
 void _ctor(System::Xml::XmlWriter writer) ;

/// @brief Method CheckAsync addr 0x26f350c size 0x84 virtual false final false
 void CheckAsync() ;

/// @brief Method WriteStartDocument addr 0x26f3590 size 0x28 virtual true final false
 void WriteStartDocument() ;

/// @brief Method WriteStartDocument addr 0x26f35b8 size 0x38 virtual true final false
 void WriteStartDocument(bool standalone) ;

/// @brief Method WriteEndDocument addr 0x26f35f0 size 0x28 virtual true final false
 void WriteEndDocument() ;

/// @brief Method WriteDocType addr 0x26f3618 size 0x58 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26f3670 size 0x50 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26f36c0 size 0x28 virtual true final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x26f36e8 size 0x28 virtual true final false
 void WriteFullEndElement() ;

/// @brief Method WriteStartAttribute addr 0x26f3710 size 0x50 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26f3760 size 0x2c virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x26f378c size 0x3c virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26f37c8 size 0x3c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26f3804 size 0x44 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26f3848 size 0x3c virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26f3884 size 0x3c virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteWhitespace addr 0x26f38c0 size 0x3c virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26f38fc size 0x3c virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26f3938 size 0x44 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26f397c size 0x54 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f39d0 size 0x54 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26f3a24 size 0x3c virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x26f3a60 size 0x54 virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteBinHex addr 0x26f3ab4 size 0x54 virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method get_WriteState addr 0x26f3b08 size 0x2c virtual true final false
 System::Xml::WriteState get_WriteState() ;

/// @brief Method Close addr 0x26f3b34 size 0x2c virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26f3b60 size 0x2c virtual true final false
 void Flush() ;

/// @brief Method LookupPrefix addr 0x26f3b8c size 0x3c virtual true final false
 ::StringW LookupPrefix(::StringW ns) ;

/// @brief Method WriteValue addr 0x26f3bc8 size 0x3c virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method Dispose addr 0x26f3c04 size 0x24 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlAsyncCheckWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAsyncCheckWriter, "System.Xml", "XmlAsyncCheckWriter");
