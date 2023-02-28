// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelReturnToMenuController
  class MissionLevelReturnToMenuController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelReturnToMenuController*, "", "MissionLevelReturnToMenuController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelReturnToMenuController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelReturnToMenuController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IReturnToMenuController*/ {
    public:
    public:
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IReturnToMenuController
    operator ::GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Creating interface conversion operator: i_IReturnToMenuController
    inline ::GlobalNamespace::IReturnToMenuController* i_IReturnToMenuController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelSceneSetupData();
    // Get instance field reference: private PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // public System.Void .ctor()
    // Offset: 0x14B6A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelReturnToMenuController*, creationType>()));
    }
    // public System.Void ReturnToMenu()
    // Offset: 0x14B69C0
    void ReturnToMenu();
  }; // MissionLevelReturnToMenuController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelReturnToMenuController), 40 + sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*)> __GlobalNamespace_MissionLevelReturnToMenuControllerSizeCheck;
  static_assert(sizeof(MissionLevelReturnToMenuController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelReturnToMenuController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu
// Il2CppName: ReturnToMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelReturnToMenuController::*)()>(&GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelReturnToMenuController*), "ReturnToMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
