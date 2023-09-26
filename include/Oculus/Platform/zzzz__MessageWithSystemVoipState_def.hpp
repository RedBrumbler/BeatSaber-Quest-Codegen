#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSystemVoipState;
}
// Type: Oculus.Platform::MessageWithSystemVoipState
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13496)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 955 }), TypeDefinitionIndex(TypeDefinitionIndex(13222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13301))
// CS Name: Oculus.Platform.MessageWithSystemVoipState
class CORDL_TYPE MessageWithSystemVoipState : public Oculus::Platform::Message_1<Oculus::Platform::Models::SystemVoipState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithSystemVoipState() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: " const&", def_value: None }]
constexpr MessageWithSystemVoipState(MessageWithSystemVoipState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: "&&", def_value: None }]
constexpr MessageWithSystemVoipState(MessageWithSystemVoipState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithSystemVoipState(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::SystemVoipState>(ptr) {
}


  constexpr MessageWithSystemVoipState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithSystemVoipState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithSystemVoipState& operator=(MessageWithSystemVoipState&& o) noexcept = default;
  constexpr MessageWithSystemVoipState& operator=(MessageWithSystemVoipState const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithSystemVoipState(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25af13c size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetSystemVoipState addr 0x25b3b14 size 0x3c virtual true final false
 Oculus::Platform::Models::SystemVoipState GetSystemVoipState() ;

/// @brief Method GetDataFromMessage addr 0x25b3b50 size 0x9c virtual true final false
 Oculus::Platform::Models::SystemVoipState GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithSystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithSystemVoipState, "Oculus.Platform", "MessageWithSystemVoipState");
