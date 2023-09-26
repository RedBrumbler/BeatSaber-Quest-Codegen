#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadCancelResult;
}
// Type: Oculus.Platform::MessageWithAssetFileDownloadCancelResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4437 }), TypeDefinitionIndex(TypeDefinitionIndex(13410)), TypeDefinitionIndex(TypeDefinitionIndex(13222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13236))
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadCancelResult
class CORDL_TYPE MessageWithAssetFileDownloadCancelResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadCancelResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetFileDownloadCancelResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetFileDownloadCancelResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadCancelResult>(ptr) {
}


  constexpr MessageWithAssetFileDownloadCancelResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadCancelResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadCancelResult& operator=(MessageWithAssetFileDownloadCancelResult&& o) noexcept = default;
  constexpr MessageWithAssetFileDownloadCancelResult& operator=(MessageWithAssetFileDownloadCancelResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetFileDownloadCancelResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25ade54 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetFileDownloadCancelResult addr 0x25b00e4 size 0x3c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadCancelResult GetAssetFileDownloadCancelResult() ;

/// @brief Method GetDataFromMessage addr 0x25b0120 size 0x9c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadCancelResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadCancelResult, "Oculus.Platform", "MessageWithAssetFileDownloadCancelResult");
