// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
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
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelRestartController
  class StandardLevelRestartController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelRestartController
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelRestartController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ILevelRestartController*/ {
    public:
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x1122310
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILevelRestartController
    operator ::GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILevelRestartController*>(this);
    }
    // Creating interface conversion operator: i_ILevelRestartController
    inline ::GlobalNamespace::ILevelRestartController* i_ILevelRestartController() noexcept {
      return reinterpret_cast<::GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelSceneSetupData();
    // Get instance field reference: private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // public System.Void .ctor()
    // Offset: 0x13BB094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelRestartController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelRestartController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelRestartController*, creationType>()));
    }
    // public System.Void RestartLevel()
    // Offset: 0x13BAFD4
    void RestartLevel();
  }; // StandardLevelRestartController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelRestartController), 32 + sizeof(::GlobalNamespace::PrepareLevelCompletionResults*)> __GlobalNamespace_StandardLevelRestartControllerSizeCheck;
  static_assert(sizeof(StandardLevelRestartController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelRestartController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelRestartController::RestartLevel
// Il2CppName: RestartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelRestartController::*)()>(&GlobalNamespace::StandardLevelRestartController::RestartLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelRestartController*), "RestartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
