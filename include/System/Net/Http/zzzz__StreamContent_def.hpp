#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Net {
class TransportContext;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Http {
class StreamContent;
}
// Type: System.Net.Http::StreamContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14836))
// CS Name: System.Net.Http.StreamContent
class CORDL_TYPE StreamContent : public System::Net::Http::HttpContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~StreamContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: " const&", def_value: None }]
constexpr StreamContent(StreamContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "&&", def_value: None }]
constexpr StreamContent(StreamContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamContent(void* ptr) noexcept : System::Net::Http::HttpContent(ptr) {
}


  constexpr StreamContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamContent& operator=(StreamContent&& o) noexcept = default;
  constexpr StreamContent& operator=(StreamContent const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(System::IO::Stream value) ;

constexpr System::IO::Stream __get_content() const;

 int32_t __declspec(property(get=__get_bufferSize, put=__set_bufferSize))  bufferSize;

constexpr void __set_bufferSize(int32_t value) ;

constexpr int32_t __get_bufferSize() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 int64_t __declspec(property(get=__get_startPosition, put=__set_startPosition))  startPosition;

constexpr void __set_startPosition(int64_t value) ;

constexpr int64_t __get_startPosition() const;

 bool __declspec(property(get=__get_contentCopied, put=__set_contentCopied))  contentCopied;

constexpr void __set_contentCopied(bool value) ;

constexpr bool __get_contentCopied() const;


// Methods

// Ctor Parameters [CppParam { name: "content", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit StreamContent(System::IO::Stream content) ;

/// @brief Method .ctor addr 0x26d3c30 size 0x8 virtual false final false
 void _ctor(System::IO::Stream content) ;

// Ctor Parameters [CppParam { name: "content", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit StreamContent(System::IO::Stream content, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x26d3c38 size 0xe8 virtual false final false
 void _ctor(System::IO::Stream content, int32_t bufferSize) ;

// Ctor Parameters [CppParam { name: "content", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit StreamContent(System::IO::Stream content, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method .ctor addr 0x26d0338 size 0x28 virtual false final false
 void _ctor(System::IO::Stream content, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x26d3d20 size 0x4c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method SerializeToStreamAsync addr 0x26d3d6c size 0xd8 virtual true final false
 System::Threading::Tasks::Task SerializeToStreamAsync(System::IO::Stream stream, System::Net::TransportContext context) ;

/// @brief Method TryComputeLength addr 0x26d3e44 size 0x68 virtual true final false
 bool TryComputeLength(ByRef<int64_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::StreamContent);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::StreamContent, "System.Net.Http", "StreamContent");
