// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/GetUserFriendsUserIdsResult
  struct PlatformUserModelSO::GetUserFriendsUserIdsResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public PlatformUserModelSO/GetUserFriendsUserIdsResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformUserModelSO/GetUserFriendsUserIdsResult OK
    static GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult _get_OK();
    // Set static field: static public PlatformUserModelSO/GetUserFriendsUserIdsResult OK
    static void _set_OK(GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult value);
    // static field const value: static public PlatformUserModelSO/GetUserFriendsUserIdsResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformUserModelSO/GetUserFriendsUserIdsResult Failed
    static GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult _get_Failed();
    // Set static field: static public PlatformUserModelSO/GetUserFriendsUserIdsResult Failed
    static void _set_Failed(GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult value);
    // Creating value type constructor for type: GetUserFriendsUserIdsResult
    GetUserFriendsUserIdsResult(int value_ = {}) : value{value_} {}
  }; // PlatformUserModelSO/GetUserFriendsUserIdsResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult, "", "PlatformUserModelSO/GetUserFriendsUserIdsResult");
#pragma pack(pop)