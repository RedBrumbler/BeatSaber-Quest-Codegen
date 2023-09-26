#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class RoomList;
}
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingBrowseResult;
}
// Type: Oculus.Platform::MessageWithMatchmakingBrowseResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13222)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4463 }), TypeDefinitionIndex(TypeDefinitionIndex(13459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13313))
// CS Name: Oculus.Platform.MessageWithMatchmakingBrowseResult
class CORDL_TYPE MessageWithMatchmakingBrowseResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingBrowseResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingBrowseResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingBrowseResult", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingBrowseResult(MessageWithMatchmakingBrowseResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingBrowseResult", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingBrowseResult(MessageWithMatchmakingBrowseResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingBrowseResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingBrowseResult>(ptr) {
}


  constexpr MessageWithMatchmakingBrowseResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingBrowseResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingBrowseResult& operator=(MessageWithMatchmakingBrowseResult&& o) noexcept = default;
  constexpr MessageWithMatchmakingBrowseResult& operator=(MessageWithMatchmakingBrowseResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithMatchmakingBrowseResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25ae8a4 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMatchmakingEnqueueResult addr 0x25b45d8 size 0x48 virtual true final false
 Oculus::Platform::Models::MatchmakingEnqueueResult GetMatchmakingEnqueueResult() ;

/// @brief Method GetRoomList addr 0x25b4620 size 0x48 virtual true final false
 Oculus::Platform::Models::RoomList GetRoomList() ;

/// @brief Method GetDataFromMessage addr 0x25b4668 size 0x9c virtual true final false
 Oculus::Platform::Models::MatchmakingBrowseResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMatchmakingBrowseResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingBrowseResult, "Oculus.Platform", "MessageWithMatchmakingBrowseResult");
