// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeadPlayerProvider
  class MultiplayerLeadPlayerProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeadPlayerProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeadPlayerProvider*, "", "MultiplayerLeadPlayerProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeadPlayerProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLeadPlayerProvider : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _timeToGainFirstLead
    // Size: 0x4
    // Offset: 0x18
    float timeToGainFirstLead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeToLooseLead
    // Size: 0x4
    // Offset: 0x1C
    float timeToLooseLead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x112892C
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x112893C
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerController*) == 0x8);
    // private System.Action`1<System.String> newLeaderWasSelectedEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::StringW>* newLeaderWasSelectedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // private System.Single _currentLeadingPlayerStartTime
    // Size: 0x4
    // Offset: 0x38
    float currentLeadingPlayerStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentLeadingPlayerStartTime and: currentlyDisplayedUser
    char __padding5[0x4] = {};
    // private MultiplayerScoreProvider/RankedPlayer _currentlyDisplayedUser
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyDisplayedUser;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    // private MultiplayerScoreProvider/RankedPlayer _currentlyLeadingUser
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyLeadingUser;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _timeToGainFirstLead
    [[deprecated("Use field access instead!")]] float& dyn__timeToGainFirstLead();
    // Get instance field reference: private System.Single _timeToLooseLead
    [[deprecated("Use field access instead!")]] float& dyn__timeToLooseLead();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private System.Action`1<System.String> newLeaderWasSelectedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_newLeaderWasSelectedEvent();
    // Get instance field reference: private System.Single _currentLeadingPlayerStartTime
    [[deprecated("Use field access instead!")]] float& dyn__currentLeadingPlayerStartTime();
    // Get instance field reference: private MultiplayerScoreProvider/RankedPlayer _currentlyDisplayedUser
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& dyn__currentlyDisplayedUser();
    // Get instance field reference: private MultiplayerScoreProvider/RankedPlayer _currentlyLeadingUser
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& dyn__currentlyLeadingUser();
    // public System.Void add_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x14D73A4
    void add_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);
    // public System.Void remove_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x14D7300
    void remove_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);
    // public System.Void .ctor()
    // Offset: 0x14DA914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeadPlayerProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLeadPlayerProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeadPlayerProvider*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14DA3BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14DA488
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x14DA5DC
    void Update();
    // private System.Void StopProviding()
    // Offset: 0x14DA69C
    void StopProviding();
    // private System.Void StartProviding()
    // Offset: 0x14DA740
    void StartProviding();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x14DA478
    void HandleStateChanged(::GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer firstPlayer)
    // Offset: 0x14DA7E8
    void HandleFirstPlayerDidChange(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer);
  }; // MultiplayerLeadPlayerProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeadPlayerProvider), 72 + sizeof(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)> __GlobalNamespace_MultiplayerLeadPlayerProviderSizeCheck;
  static_assert(sizeof(MultiplayerLeadPlayerProvider) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::add_newLeaderWasSelectedEvent
// Il2CppName: add_newLeaderWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::add_newLeaderWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "add_newLeaderWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::remove_newLeaderWasSelectedEvent
// Il2CppName: remove_newLeaderWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::remove_newLeaderWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "remove_newLeaderWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::StopProviding
// Il2CppName: StopProviding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::StopProviding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "StopProviding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::StartProviding
// Il2CppName: StartProviding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::StartProviding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "StartProviding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(::GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::HandleFirstPlayerDidChange
// Il2CppName: HandleFirstPlayerDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::HandleFirstPlayerDidChange)> {
  static const MethodInfo* get() {
    static auto* firstPlayer = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "HandleFirstPlayerDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstPlayer});
  }
};
