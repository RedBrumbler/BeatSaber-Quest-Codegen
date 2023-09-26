#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithShareMediaResult;
}
// Type: Oculus.Platform::MessageWithShareMediaResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13494)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4482 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13299))
// CS Name: Oculus.Platform.MessageWithShareMediaResult
class CORDL_TYPE MessageWithShareMediaResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::ShareMediaResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithShareMediaResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithShareMediaResult", modifiers: " const&", def_value: None }]
constexpr MessageWithShareMediaResult(MessageWithShareMediaResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithShareMediaResult", modifiers: "&&", def_value: None }]
constexpr MessageWithShareMediaResult(MessageWithShareMediaResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithShareMediaResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::ShareMediaResult>(ptr) {
}


  constexpr MessageWithShareMediaResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithShareMediaResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithShareMediaResult& operator=(MessageWithShareMediaResult&& o) noexcept = default;
  constexpr MessageWithShareMediaResult& operator=(MessageWithShareMediaResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithShareMediaResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25af08c size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetShareMediaResult addr 0x25b39ac size 0x3c virtual true final false
 Oculus::Platform::Models::ShareMediaResult GetShareMediaResult() ;

/// @brief Method GetDataFromMessage addr 0x25b39e8 size 0x9c virtual true final false
 Oculus::Platform::Models::ShareMediaResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithShareMediaResult, "Oculus.Platform", "MessageWithShareMediaResult");
