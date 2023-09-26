#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class PartyID;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyID;
}
// Type: Oculus.Platform::MessageWithPartyID
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13222)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4473 }), TypeDefinitionIndex(TypeDefinitionIndex(13476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13284))
// CS Name: Oculus.Platform.MessageWithPartyID
class CORDL_TYPE MessageWithPartyID : public Oculus::Platform::Message_1<Oculus::Platform::Models::PartyID> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPartyID() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyID", modifiers: " const&", def_value: None }]
constexpr MessageWithPartyID(MessageWithPartyID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyID", modifiers: "&&", def_value: None }]
constexpr MessageWithPartyID(MessageWithPartyID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPartyID(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::PartyID>(ptr) {
}


  constexpr MessageWithPartyID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPartyID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPartyID& operator=(MessageWithPartyID&& o) noexcept = default;
  constexpr MessageWithPartyID& operator=(MessageWithPartyID const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPartyID(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25b2cac size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPartyID addr 0x25b2d04 size 0x3c virtual true final false
 Oculus::Platform::Models::PartyID GetPartyID() ;

/// @brief Method GetDataFromMessage addr 0x25b2d40 size 0x9c virtual true final false
 Oculus::Platform::Models::PartyID GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPartyID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPartyID, "Oculus.Platform", "MessageWithPartyID");
