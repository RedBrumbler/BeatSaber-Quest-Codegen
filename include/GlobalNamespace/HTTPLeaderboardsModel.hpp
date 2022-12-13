// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
  // Forward declaring type: IApiLeaderboardsModel
  class IApiLeaderboardsModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HTTPLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HTTPLeaderboardsModel*, "", "HTTPLeaderboardsModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HTTPLeaderboardsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPLeaderboardsModel : public ::Il2CppObject/*, public ::OnlineServices::ILeaderboardsModel*/ {
    public:
    // Nested type: ::GlobalNamespace::HTTPLeaderboardsModel::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10
    struct $GetLeaderboardEntriesAsync$d__10;
    // Nested type: ::GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11
    struct $SendLevelScoreResultAsync$d__11;
    public:
    // [InjectAttribute] Offset: 0x111C228
    // private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Size: 0x8
    // Offset: 0x10
    ::OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::IUserLoginDtoDataSource*) == 0x8);
    // [InjectAttribute] Offset: 0x111C238
    // private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    ::OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::IApiLeaderboardsModel*) == 0x8);
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::StringW>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // private readonly System.String _guid
    // Size: 0x8
    // Offset: 0x28
    ::StringW guid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] _friendsUserIds
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> friendsUserIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String _platformUserId
    // Size: 0x8
    // Offset: 0x38
    ::StringW platformUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::OnlineServices::ILeaderboardsModel
    operator ::OnlineServices::ILeaderboardsModel() noexcept {
      return *reinterpret_cast<::OnlineServices::ILeaderboardsModel*>(this);
    }
    // Creating interface conversion operator: i_ILeaderboardsModel
    inline ::OnlineServices::ILeaderboardsModel* i_ILeaderboardsModel() noexcept {
      return reinterpret_cast<::OnlineServices::ILeaderboardsModel*>(this);
    }
    // Get instance field reference: private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    [[deprecated("Use field access instead!")]] ::OnlineServices::API::IUserLoginDtoDataSource*& dyn__userLoginDataSource();
    // Get instance field reference: private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    [[deprecated("Use field access instead!")]] ::OnlineServices::API::IApiLeaderboardsModel*& dyn__apiLeaderboardsModel();
    // Get instance field reference: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_scoreForLeaderboardDidUploadEvent();
    // Get instance field reference: private readonly System.String _guid
    [[deprecated("Use field access instead!")]] ::StringW& dyn__guid();
    // Get instance field reference: private System.String[] _friendsUserIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__friendsUserIds();
    // Get instance field reference: private System.String _platformUserId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__platformUserId();
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x13CF9E8
    void add_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x13CFA8C
    void remove_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void .ctor()
    // Offset: 0x13D012C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HTTPLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsModel*, creationType>()));
    }
    // public System.Void LogoutAsync()
    // Offset: 0x13CFB30
    void LogoutAsync();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x13CFBE4
    ::StringW GetLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13CFEC4
    ::System::Threading::Tasks::Task_1<::OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(::OnlineServices::GetLeaderboardFilterData leaderboardFilterData, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13CFFF4
    ::System::Threading::Tasks::Task_1<::OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(::OnlineServices::LevelScoreResultsData levelResultsData, ::System::Threading::CancellationToken cancellationToken);
  }; // HTTPLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsModel), 56 + sizeof(::StringW)> __GlobalNamespace_HTTPLeaderboardsModelSizeCheck;
  static_assert(sizeof(HTTPLeaderboardsModel) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::HTTPLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::HTTPLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)()>(&GlobalNamespace::HTTPLeaderboardsModel::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardId
// Il2CppName: GetLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::HTTPLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardId)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "GetLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OnlineServices::GetLeaderboardEntriesResult>* (GlobalNamespace::HTTPLeaderboardsModel::*)(::OnlineServices::GetLeaderboardFilterData, ::System::Threading::CancellationToken)>(&GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardFilterData = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardFilterData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardFilterData, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OnlineServices::SendLeaderboardEntryResult>* (GlobalNamespace::HTTPLeaderboardsModel::*)(::OnlineServices::LevelScoreResultsData, ::System::Threading::CancellationToken)>(&GlobalNamespace::HTTPLeaderboardsModel::SendLevelScoreResultAsync)> {
  static const MethodInfo* get() {
    static auto* levelResultsData = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelResultsData, cancellationToken});
  }
};
