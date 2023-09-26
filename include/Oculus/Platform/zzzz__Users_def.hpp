#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform {
class UserOptions;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Users;
}
// Type: Oculus.Platform::Users
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13339))
// CS Name: Oculus.Platform.Users
class CORDL_TYPE Users : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Users() = default;

// Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: " const&", def_value: None }]
constexpr Users(Users const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "&&", def_value: None }]
constexpr Users(Users&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Users(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Users& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Users& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Users& operator=(Users&& o) noexcept = default;
  constexpr Users& operator=(Users const& o) noexcept = default;
                


// Methods

/// @brief Method GetLoggedInUserLocale addr 0x25bd9dc size 0xd4 virtual false final false
static ::StringW GetLoggedInUserLocale() ;

/// @brief Method Get addr 0x25bdab0 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::User> Get(uint64_t userID) ;

/// @brief Method GetAccessToken addr 0x25bdc10 size 0x158 virtual false final false
static Oculus::Platform::Request_1<::StringW> GetAccessToken() ;

/// @brief Method GetBlockedUsers addr 0x25bdd68 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> GetBlockedUsers() ;

/// @brief Method GetLoggedInUser addr 0x25bdec0 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::User> GetLoggedInUser() ;

/// @brief Method GetLoggedInUserFriends addr 0x25be018 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> GetLoggedInUserFriends() ;

/// @brief Method GetLoggedInUserFriendsAndRooms addr 0x25be170 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> GetLoggedInUserFriendsAndRooms() ;

/// @brief Method GetLoggedInUserRecentlyMetUsersAndRooms addr 0x25be2c8 size 0x174 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> GetLoggedInUserRecentlyMetUsersAndRooms(Oculus::Platform::UserOptions userOptions) ;

/// @brief Method GetOrgScopedID addr 0x25be43c size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID> GetOrgScopedID(uint64_t userID) ;

/// @brief Method GetSdkAccounts addr 0x25be59c size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList> GetSdkAccounts() ;

/// @brief Method GetUserProof addr 0x25be6f4 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof> GetUserProof() ;

/// @brief Method LaunchBlockFlow addr 0x25be84c size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchBlockFlowResult> LaunchBlockFlow(uint64_t userID) ;

/// @brief Method LaunchFriendRequestFlow addr 0x25be9ac size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult> LaunchFriendRequestFlow(uint64_t userID) ;

/// @brief Method LaunchUnblockFlow addr 0x25beb0c size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchUnblockFlowResult> LaunchUnblockFlow(uint64_t userID) ;

/// @brief Method GetNextBlockedUserListPage addr 0x25bec6c size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::BlockedUserList> GetNextBlockedUserListPage(Oculus::Platform::Models::BlockedUserList list) ;

/// @brief Method GetNextUserAndRoomListPage addr 0x25bee48 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList> GetNextUserAndRoomListPage(Oculus::Platform::Models::UserAndRoomList list) ;

/// @brief Method GetNextUserListPage addr 0x25bf024 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList> GetNextUserListPage(Oculus::Platform::Models::UserList list) ;

/// @brief Method GetNextUserCapabilityListPage addr 0x25bf200 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::UserCapabilityList> GetNextUserCapabilityListPage(Oculus::Platform::Models::UserCapabilityList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Users);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Users, "Oculus.Platform", "Users");
