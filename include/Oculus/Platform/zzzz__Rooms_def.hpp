#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace Oculus::Platform::Models {
class RoomList;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class RoomOptions;
}
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform {
class Rooms;
}
// Type: Oculus.Platform::Rooms
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13331))
// CS Name: Oculus.Platform.Rooms
class CORDL_TYPE Rooms : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rooms() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: " const&", def_value: None }]
constexpr Rooms(Rooms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "&&", def_value: None }]
constexpr Rooms(Rooms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rooms(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rooms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rooms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rooms& operator=(Rooms&& o) noexcept = default;
  constexpr Rooms& operator=(Rooms const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateDataStore addr 0x25b5dcc size 0x320 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> UpdateDataStore(uint64_t roomID, System::Collections::Generic::Dictionary_2<::StringW,::StringW> data) ;

/// @brief Method SetRoomInviteNotificationCallback addr 0x25b60ec size 0x4 virtual false final false
static void SetRoomInviteNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method CreateAndJoinPrivate addr 0x25b6164 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> CreateAndJoinPrivate(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method CreateAndJoinPrivate2 addr 0x25b62dc size 0x18c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> CreateAndJoinPrivate2(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method Get addr 0x25b6468 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Get(uint64_t roomID) ;

/// @brief Method GetCurrent addr 0x25b65c8 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> GetCurrent() ;

/// @brief Method GetCurrentForUser addr 0x25b6720 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> GetCurrentForUser(uint64_t userID) ;

/// @brief Method GetInvitableUsers addr 0x25b6880 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> GetInvitableUsers() ;

/// @brief Method GetInvitableUsers2 addr 0x25b69d8 size 0x174 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> GetInvitableUsers2(Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method GetModeratedRooms addr 0x25b6b4c size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> GetModeratedRooms() ;

/// @brief Method InviteUser addr 0x25b6ca4 size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> InviteUser(uint64_t roomID, ::StringW inviteToken) ;

/// @brief Method Join addr 0x25b6e14 size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Join(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method Join2 addr 0x25b6f84 size 0x184 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Join2(uint64_t roomID, Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method KickUser addr 0x25b7108 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds) ;

/// @brief Method LaunchInvitableUserFlow addr 0x25b7280 size 0x14c virtual false final false
static Oculus::Platform::Request LaunchInvitableUserFlow(uint64_t roomID) ;

/// @brief Method Leave addr 0x25b73cc size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> Leave(uint64_t roomID) ;

/// @brief Method SetDescription addr 0x25b752c size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> SetDescription(uint64_t roomID, ::StringW description) ;

/// @brief Method UpdateMembershipLockStatus addr 0x25b769c size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> UpdateMembershipLockStatus(uint64_t roomID, Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) ;

/// @brief Method UpdateOwner addr 0x25b780c size 0x15c virtual false final false
static Oculus::Platform::Request UpdateOwner(uint64_t roomID, uint64_t userID) ;

/// @brief Method UpdatePrivateRoomJoinPolicy addr 0x25b7968 size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> UpdatePrivateRoomJoinPolicy(uint64_t roomID, Oculus::Platform::RoomJoinPolicy newJoinPolicy) ;

/// @brief Method SetRoomInviteAcceptedNotificationCallback addr 0x25b60f0 size 0x74 virtual false final false
static void SetRoomInviteAcceptedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method SetRoomInviteReceivedNotificationCallback addr 0x25b7ad8 size 0x74 virtual false final false
static void SetRoomInviteReceivedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::RoomInviteNotification> callback) ;

/// @brief Method SetUpdateNotificationCallback addr 0x25b7b4c size 0x74 virtual false final false
static void SetUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room> callback) ;

/// @brief Method GetNextRoomListPage addr 0x25b7bc0 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList> GetNextRoomListPage(Oculus::Platform::Models::RoomList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Rooms);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Rooms, "Oculus.Platform", "Rooms");
