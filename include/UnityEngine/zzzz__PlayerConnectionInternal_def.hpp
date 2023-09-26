#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine {
class PlayerConnectionInternal;
}
// Type: UnityEngine::PlayerConnectionInternal
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10103))
// CS Name: UnityEngine.PlayerConnectionInternal
class CORDL_TYPE PlayerConnectionInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::IPlayerEditorConnectionNative
constexpr operator  UnityEngine::IPlayerEditorConnectionNative() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayerConnectionInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: " const&", def_value: None }]
constexpr PlayerConnectionInternal(PlayerConnectionInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "&&", def_value: None }]
constexpr PlayerConnectionInternal(PlayerConnectionInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerConnectionInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerConnectionInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerConnectionInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerConnectionInternal& operator=(PlayerConnectionInternal&& o) noexcept = default;
  constexpr PlayerConnectionInternal& operator=(PlayerConnectionInternal const& o) noexcept = default;
                


// Methods

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.SendMessage addr 0x2b804ec size 0x12c virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_SendMessage(System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.TrySendMessage addr 0x2b8066c size 0x130 virtual true final true
 bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.Poll addr 0x2b807f0 size 0x28 virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_Poll() ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.RegisterInternal addr 0x2b80840 size 0x84 virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(System::Guid messageId) ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal addr 0x2b80900 size 0x84 virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(System::Guid messageId) ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.Initialize addr 0x2b809c0 size 0x28 virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_Initialize() ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.IsConnected addr 0x2b80a10 size 0x28 virtual true final true
 bool UnityEngine_IPlayerEditorConnectionNative_IsConnected() ;

/// @brief Method UnityEngine.IPlayerEditorConnectionNative.DisconnectAll addr 0x2b80a60 size 0x28 virtual true final true
 void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll() ;

/// @brief Method IsConnected addr 0x2b80a38 size 0x28 virtual false final false
static bool IsConnected() ;

/// @brief Method Initialize addr 0x2b809e8 size 0x28 virtual false final false
static void Initialize() ;

/// @brief Method RegisterInternal addr 0x2b808c4 size 0x3c virtual false final false
static void RegisterInternal(::StringW messageId) ;

/// @brief Method UnregisterInternal addr 0x2b80984 size 0x3c virtual false final false
static void UnregisterInternal(::StringW messageId) ;

/// @brief Method SendMessage addr 0x2b80618 size 0x54 virtual false final false
static void SendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method TrySendMessage addr 0x2b8079c size 0x54 virtual false final false
static bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method PollInternal addr 0x2b80818 size 0x28 virtual false final false
static void PollInternal() ;

/// @brief Method DisconnectAll addr 0x2b80a88 size 0x28 virtual false final false
static void DisconnectAll() ;

// Ctor Parameters []
explicit PlayerConnectionInternal() ;

/// @brief Method .ctor addr 0x2b80ab0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PlayerConnectionInternal);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerConnectionInternal, "UnityEngine", "PlayerConnectionInternal");
