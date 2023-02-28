// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPlatformUserModel
#include "GlobalNamespace/IPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
  // Forward declaring type: PlatformUserAuthTokenData
  class PlatformUserAuthTokenData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusPlatformUserModel
  class OculusPlatformUserModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusPlatformUserModel : public ::Il2CppObject/*, public ::GlobalNamespace::IPlatformUserModel*/ {
    public:
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2
    struct $GetUserInfo$d__2;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$GetUserFriendsUserIds$d__3
    struct $GetUserFriendsUserIds$d__3;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$GetUserAuthToken$d__4
    struct $GetUserAuthToken$d__4;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: ::GlobalNamespace::OculusPlatformUserModel::$GetUserNamesForUserIds$d__5
    struct $GetUserNamesForUserIds$d__5;
    public:
    // private System.String[] _friendsUserIds
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> friendsUserIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private UserInfo _userInfo
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::UserInfo* userInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UserInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPlatformUserModel
    operator ::GlobalNamespace::IPlatformUserModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPlatformUserModel*>(this);
    }
    // Creating interface conversion operator: i_IPlatformUserModel
    inline ::GlobalNamespace::IPlatformUserModel* i_IPlatformUserModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPlatformUserModel*>(this);
    }
    // Get instance field reference: private System.String[] _friendsUserIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__friendsUserIds();
    // Get instance field reference: private UserInfo _userInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UserInfo*& dyn__userInfo();
    // public System.Void .ctor()
    // Offset: 0x1383C80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformUserModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<UserInfo> GetUserInfo()
    // Offset: 0x1383854
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserFriendsUserIds(System.Boolean cached)
    // Offset: 0x1383954
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);
    // public System.Threading.Tasks.Task`1<PlatformUserAuthTokenData> GetUserAuthToken()
    // Offset: 0x1383A80
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserNamesForUserIds(System.Collections.Generic.IReadOnlyList`1<System.String> userIds)
    // Offset: 0x1383B80
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);
  }; // OculusPlatformUserModel
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel), 24 + sizeof(::GlobalNamespace::UserInfo*)> __GlobalNamespace_OculusPlatformUserModelSizeCheck;
  static_assert(sizeof(OculusPlatformUserModel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::GetUserInfo
// Il2CppName: GetUserInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::GetUserInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel*), "GetUserInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (GlobalNamespace::OculusPlatformUserModel::*)(bool)>(&GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds)> {
  static const MethodInfo* get() {
    static auto* cached = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel*), "GetUserFriendsUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cached});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken
// Il2CppName: GetUserAuthToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* (GlobalNamespace::OculusPlatformUserModel::*)()>(&GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel*), "GetUserAuthToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds
// Il2CppName: GetUserNamesForUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (GlobalNamespace::OculusPlatformUserModel::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds)> {
  static const MethodInfo* get() {
    static auto* userIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel*), "GetUserNamesForUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userIds});
  }
};
