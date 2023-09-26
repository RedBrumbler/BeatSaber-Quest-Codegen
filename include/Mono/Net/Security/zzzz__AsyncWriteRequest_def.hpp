#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncWriteRequest;
}
// Type: Mono.Net.Security::AsyncWriteRequest
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7694))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7696))
// CS Name: Mono.Net.Security.AsyncWriteRequest
class CORDL_TYPE AsyncWriteRequest : public Mono::Net::Security::AsyncReadOrWriteRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AsyncWriteRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncWriteRequest", modifiers: " const&", def_value: None }]
constexpr AsyncWriteRequest(AsyncWriteRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncWriteRequest", modifiers: "&&", def_value: None }]
constexpr AsyncWriteRequest(AsyncWriteRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncWriteRequest(void* ptr) noexcept : Mono::Net::Security::AsyncReadOrWriteRequest(ptr) {
}


  constexpr AsyncWriteRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncWriteRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncWriteRequest& operator=(AsyncWriteRequest&& o) noexcept = default;
  constexpr AsyncWriteRequest& operator=(AsyncWriteRequest const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit AsyncWriteRequest(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method .ctor addr 0x26bf588 size 0x8 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Run addr 0x26bf590 size 0x78 virtual true final false
 Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncWriteRequest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncWriteRequest, "Mono.Net.Security", "AsyncWriteRequest");
