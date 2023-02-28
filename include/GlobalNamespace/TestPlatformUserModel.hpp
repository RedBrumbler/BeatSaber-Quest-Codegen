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
  // Forward declaring type: TestPlatformUserModel
  class TestPlatformUserModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TestPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformUserModel*, "", "TestPlatformUserModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TestPlatformUserModel
  // [TokenAttribute] Offset: FFFFFFFF
  class TestPlatformUserModel : public ::Il2CppObject/*, public ::GlobalNamespace::IPlatformUserModel*/ {
    public:
    // Nested type: ::GlobalNamespace::TestPlatformUserModel::$GetUserInfo$d__0
    struct $GetUserInfo$d__0;
    // Nested type: ::GlobalNamespace::TestPlatformUserModel::$GetUserFriendsUserIds$d__1
    struct $GetUserFriendsUserIds$d__1;
    // Nested type: ::GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2
    struct $GetUserAuthToken$d__2;
    // Nested type: ::GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3
    struct $GetUserNamesForUserIds$d__3;
    // Creating interface conversion operator: operator ::GlobalNamespace::IPlatformUserModel
    operator ::GlobalNamespace::IPlatformUserModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPlatformUserModel*>(this);
    }
    // Creating interface conversion operator: i_IPlatformUserModel
    inline ::GlobalNamespace::IPlatformUserModel* i_IPlatformUserModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPlatformUserModel*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x139F8EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestPlatformUserModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TestPlatformUserModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestPlatformUserModel*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<UserInfo> GetUserInfo()
    // Offset: 0x139F4EC
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserFriendsUserIds(System.Boolean cached)
    // Offset: 0x139F5EC
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);
    // public System.Threading.Tasks.Task`1<PlatformUserAuthTokenData> GetUserAuthToken()
    // Offset: 0x139F6EC
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();
    // public System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<System.String>> GetUserNamesForUserIds(System.Collections.Generic.IReadOnlyList`1<System.String> userIds)
    // Offset: 0x139F7EC
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);
  }; // TestPlatformUserModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::GetUserInfo
// Il2CppName: GetUserInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (GlobalNamespace::TestPlatformUserModel::*)()>(&GlobalNamespace::TestPlatformUserModel::GetUserInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel*), "GetUserInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (GlobalNamespace::TestPlatformUserModel::*)(bool)>(&GlobalNamespace::TestPlatformUserModel::GetUserFriendsUserIds)> {
  static const MethodInfo* get() {
    static auto* cached = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel*), "GetUserFriendsUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cached});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::GetUserAuthToken
// Il2CppName: GetUserAuthToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* (GlobalNamespace::TestPlatformUserModel::*)()>(&GlobalNamespace::TestPlatformUserModel::GetUserAuthToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel*), "GetUserAuthToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::GetUserNamesForUserIds
// Il2CppName: GetUserNamesForUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (GlobalNamespace::TestPlatformUserModel::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&GlobalNamespace::TestPlatformUserModel::GetUserNamesForUserIds)> {
  static const MethodInfo* get() {
    static auto* userIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel*), "GetUserNamesForUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userIds});
  }
};
