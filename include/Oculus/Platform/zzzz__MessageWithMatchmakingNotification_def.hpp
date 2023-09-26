#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class Room;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingNotification;
}
// Type: Oculus.Platform::MessageWithMatchmakingNotification
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13222)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 953 }), TypeDefinitionIndex(TypeDefinitionIndex(13487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13312))
// CS Name: Oculus.Platform.MessageWithMatchmakingNotification
class CORDL_TYPE MessageWithMatchmakingNotification : public Oculus::Platform::Message_1<Oculus::Platform::Models::Room> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingNotification", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingNotification(MessageWithMatchmakingNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingNotification", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingNotification(MessageWithMatchmakingNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingNotification(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::Room>(ptr) {
}


  constexpr MessageWithMatchmakingNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingNotification& operator=(MessageWithMatchmakingNotification&& o) noexcept = default;
  constexpr MessageWithMatchmakingNotification& operator=(MessageWithMatchmakingNotification const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithMatchmakingNotification(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25af454 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoom addr 0x25b4500 size 0x3c virtual true final false
 Oculus::Platform::Models::Room GetRoom() ;

/// @brief Method GetDataFromMessage addr 0x25b453c size 0x9c virtual true final false
 Oculus::Platform::Models::Room GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMatchmakingNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingNotification, "Oculus.Platform", "MessageWithMatchmakingNotification");
