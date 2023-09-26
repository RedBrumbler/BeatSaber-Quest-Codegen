#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSessionList;
}
// Type: Oculus.Platform::MessageWithNetSyncSessionList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4468 }), TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13277))
// CS Name: Oculus.Platform.MessageWithNetSyncSessionList
class CORDL_TYPE MessageWithNetSyncSessionList : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetSyncSessionList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: " const&", def_value: None }]
constexpr MessageWithNetSyncSessionList(MessageWithNetSyncSessionList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: "&&", def_value: None }]
constexpr MessageWithNetSyncSessionList(MessageWithNetSyncSessionList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetSyncSessionList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionList>(ptr) {
}


  constexpr MessageWithNetSyncSessionList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetSyncSessionList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetSyncSessionList& operator=(MessageWithNetSyncSessionList&& o) noexcept = default;
  constexpr MessageWithNetSyncSessionList& operator=(MessageWithNetSyncSessionList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetSyncSessionList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25b2564 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetSyncSessionList addr 0x25b25bc size 0x3c virtual true final false
 Oculus::Platform::Models::NetSyncSessionList GetNetSyncSessionList() ;

/// @brief Method GetDataFromMessage addr 0x25b25f8 size 0x9c virtual true final false
 Oculus::Platform::Models::NetSyncSessionList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithNetSyncSessionList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSessionList, "Oculus.Platform", "MessageWithNetSyncSessionList");
