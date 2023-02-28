// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelAnalytics
  class StandardLevelAnalytics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelAnalytics*, "", "StandardLevelAnalytics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelAnalytics
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelAnalytics : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x111CC94
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnalyticsModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelScenesTransitionSetupData();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // public System.Void .ctor()
    // Offset: 0x1423EAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelAnalytics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelAnalytics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelAnalytics*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14237C0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1423854
    void OnDestroy();
    // private System.Void HandleStandardLevelDidFinishEvent(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0x14238E8
    void HandleStandardLevelDidFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
  }; // StandardLevelAnalytics
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelAnalytics), 32 + sizeof(::GlobalNamespace::IAnalyticsModel*)> __GlobalNamespace_StandardLevelAnalyticsSizeCheck;
  static_assert(sizeof(StandardLevelAnalytics) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelAnalytics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelAnalytics::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)()>(&GlobalNamespace::StandardLevelAnalytics::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelAnalytics*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelAnalytics::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)()>(&GlobalNamespace::StandardLevelAnalytics::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelAnalytics*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent
// Il2CppName: HandleStandardLevelDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelAnalytics::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* standardLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelAnalytics*), "HandleStandardLevelDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standardLevelScenesTransitionSetupData, levelCompletionResults});
  }
};
