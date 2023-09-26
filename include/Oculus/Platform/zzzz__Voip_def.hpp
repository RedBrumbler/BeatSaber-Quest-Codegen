#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
class VoipOptions;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
class Oculus__Platform__CAPI__FilterCallback;
}
// Forward declare root types
namespace Oculus::Platform {
class Voip;
}
// Type: Oculus.Platform::Voip
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13338))
// CS Name: Oculus.Platform.Voip
class CORDL_TYPE Voip : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Voip() = default;

// Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: " const&", def_value: None }]
constexpr Voip(Voip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: "&&", def_value: None }]
constexpr Voip(Voip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Voip(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Voip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Voip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Voip& operator=(Voip&& o) noexcept = default;
  constexpr Voip& operator=(Voip const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x25bcc94 size 0xc4 virtual false final false
static void Start(uint64_t userID) ;

/// @brief Method Accept addr 0x25bcd58 size 0xc4 virtual false final false
static void Accept(uint64_t userID) ;

/// @brief Method Stop addr 0x25bce1c size 0xc4 virtual false final false
static void Stop(uint64_t userID) ;

/// @brief Method SetMicrophoneFilterCallback addr 0x25bcee0 size 0x100 virtual false final false
static void SetMicrophoneFilterCallback(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback callback) ;

/// @brief Method SetMicrophoneMuted addr 0x25bcfe0 size 0xc4 virtual false final false
static void SetMicrophoneMuted(Oculus::Platform::VoipMuteState state) ;

/// @brief Method GetSystemVoipMicrophoneMuted addr 0x25bd0a4 size 0xc0 virtual false final false
static Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted() ;

/// @brief Method GetSystemVoipStatus addr 0x25bd164 size 0xc0 virtual false final false
static Oculus::Platform::SystemVoipStatus GetSystemVoipStatus() ;

/// @brief Method GetIsConnectionUsingDtx addr 0x25bd224 size 0xc8 virtual false final false
static Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID) ;

/// @brief Method GetLocalBitrate addr 0x25bd2ec size 0xc8 virtual false final false
static Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID) ;

/// @brief Method GetRemoteBitrate addr 0x25bd3b4 size 0xc8 virtual false final false
static Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID) ;

/// @brief Method SetNewConnectionOptions addr 0x25bd47c size 0xd8 virtual false final false
static void SetNewConnectionOptions(Oculus::Platform::VoipOptions voipOptions) ;

/// @brief Method GetMicrophoneAvailability addr 0x25bd554 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MicrophoneAvailabilityState> GetMicrophoneAvailability() ;

/// @brief Method SetSystemVoipSuppressed addr 0x25bd6ac size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::SystemVoipState> SetSystemVoipSuppressed(bool suppressed) ;

/// @brief Method SetVoipConnectRequestCallback addr 0x25bd80c size 0x74 virtual false final false
static void SetVoipConnectRequestCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetMicrophoneAvailabilityStateUpdateNotificationCallback addr 0x25bd880 size 0x74 virtual false final false
static void SetMicrophoneAvailabilityStateUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method SetVoipStateChangeCallback addr 0x25bd8f4 size 0x74 virtual false final false
static void SetVoipStateChangeCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetSystemVoipStateNotificationCallback addr 0x25bd968 size 0x74 virtual false final false
static void SetSystemVoipStateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::SystemVoipState> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Voip);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Voip, "Oculus.Platform", "Voip");
