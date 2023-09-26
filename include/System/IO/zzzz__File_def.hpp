#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class StreamReader;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class FileStream;
}
namespace System::Security::AccessControl {
class FileSecurity;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct FileAttributes;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Type: System.IO::File
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3578))
// CS Name: System.IO.File
class CORDL_TYPE File : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~File() = default;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: " const&", def_value: None }]
constexpr File(File const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
constexpr File(File&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit File(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr File& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr File& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr File& operator=(File&& o) noexcept = default;
  constexpr File& operator=(File const& o) noexcept = default;
                


// Methods

/// @brief Method OpenText addr 0x23d2af0 size 0xc8 virtual false final false
static System::IO::StreamReader OpenText(::StringW path) ;

/// @brief Method CreateText addr 0x23d2bb8 size 0xb4 virtual false final false
static System::IO::StreamWriter CreateText(::StringW path) ;

/// @brief Method AppendText addr 0x23d2c6c size 0xb4 virtual false final false
static System::IO::StreamWriter AppendText(::StringW path) ;

/// @brief Method Create addr 0x23d2d20 size 0x8 virtual false final false
static System::IO::FileStream Create(::StringW path) ;

/// @brief Method Create addr 0x23d2d28 size 0x80 virtual false final false
static System::IO::FileStream Create(::StringW path, int32_t bufferSize) ;

/// @brief Method Delete addr 0x23d2da8 size 0xac virtual false final false
static void Delete(::StringW path) ;

/// @brief Method Exists addr 0x23c99d8 size 0x1bc virtual false final false
static bool Exists(::StringW path) ;

/// @brief Method Open addr 0x23d307c size 0x14 virtual false final false
static System::IO::FileStream Open(::StringW path, System::IO::FileMode mode) ;

/// @brief Method Open addr 0x23d3090 size 0x8c virtual false final false
static System::IO::FileStream Open(::StringW path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share) ;

/// @brief Method GetAttributes addr 0x23d311c size 0x5c virtual false final false
static System::IO::FileAttributes GetAttributes(::StringW path) ;

/// @brief Method OpenRead addr 0x23d31f8 size 0x70 virtual false final false
static System::IO::FileStream OpenRead(::StringW path) ;

/// @brief Method OpenWrite addr 0x23d3268 size 0x70 virtual false final false
static System::IO::FileStream OpenWrite(::StringW path) ;

/// @brief Method ReadAllText addr 0x23d32d8 size 0xcc virtual false final false
static ::StringW ReadAllText(::StringW path) ;

/// @brief Method InternalReadAllText addr 0x23d33a4 size 0x1a8 virtual false final false
static ::StringW InternalReadAllText(::StringW path, System::Text::Encoding encoding) ;

/// @brief Method WriteAllText addr 0x23d354c size 0x23c virtual false final false
static void WriteAllText(::StringW path, ::StringW contents) ;

/// @brief Method ReadAllBytes addr 0x23d3788 size 0x2c0 virtual false final false
static ::ArrayW<uint8_t> ReadAllBytes(::StringW path) ;

/// @brief Method ReadAllBytesUnknownLength addr 0x23d3a48 size 0x470 virtual false final false
static ::ArrayW<uint8_t> ReadAllBytesUnknownLength(System::IO::FileStream fs) ;

/// @brief Method WriteAllBytes addr 0x23d3eb8 size 0x108 virtual false final false
static void WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes) ;

/// @brief Method InternalWriteAllBytes addr 0x23d3fc0 size 0x1b8 virtual false final false
static void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes) ;

/// @brief Method ReadAllLines addr 0x23d4178 size 0xcc virtual false final false
static ::ArrayW<::StringW> ReadAllLines(::StringW path) ;

/// @brief Method InternalReadAllLines addr 0x23d4244 size 0x284 virtual false final false
static ::ArrayW<::StringW> InternalReadAllLines(::StringW path, System::Text::Encoding encoding) ;

/// @brief Method WriteAllLines addr 0x23d44c8 size 0x4 virtual false final false
static void WriteAllLines(::StringW path, ::ArrayW<::StringW> contents) ;

/// @brief Method WriteAllLines addr 0x23d44cc size 0x134 virtual false final false
static void WriteAllLines(::StringW path, System::Collections::Generic::IEnumerable_1<::StringW> contents) ;

/// @brief Method InternalWriteAllLines addr 0x23d4600 size 0x404 virtual false final false
static void InternalWriteAllLines(System::IO::TextWriter writer, System::Collections::Generic::IEnumerable_1<::StringW> contents) ;

/// @brief Method AppendAllLines addr 0x23d4a04 size 0x138 virtual false final false
static void AppendAllLines(::StringW path, System::Collections::Generic::IEnumerable_1<::StringW> contents) ;

/// @brief Method Replace addr 0x23d4b3c size 0x8 virtual false final false
static void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName) ;

/// @brief Method Replace addr 0x23d4b44 size 0x130 virtual false final false
static void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors) ;

/// @brief Method GetAccessControl addr 0x23d4de4 size 0x8 virtual false final false
static System::Security::AccessControl::FileSecurity GetAccessControl(::StringW path) ;

/// @brief Method GetAccessControl addr 0x23d4dec size 0x74 virtual false final false
static System::Security::AccessControl::FileSecurity GetAccessControl(::StringW path, System::Security::AccessControl::AccessControlSections includeSections) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(System::IO::File, "System.IO", "File");
