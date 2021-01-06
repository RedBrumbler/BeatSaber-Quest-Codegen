// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseResultsEnvironmentController
#include "GlobalNamespace/BaseResultsEnvironmentController.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterDataModel
  class BTSCharacterDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: BtsResultsEnvironmentController
  // [] Offset: FFFFFFFF
  class BtsResultsEnvironmentController : public GlobalNamespace::BaseResultsEnvironmentController {
    public:
    // Nested type: GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation
    class BTSResultCharacterPlaceWithAnimation;
    // Nested type: GlobalNamespace::BtsResultsEnvironmentController::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: GlobalNamespace::BtsResultsEnvironmentController::$DestroyCharactersDelayed$d__8
    class $DestroyCharactersDelayed$d__8;
    // private BTSCharacterDataModel _btsCharacterDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BTSCharacterDataModel* btsCharacterDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterDataModel*) == 0x8);
    // private UnityEngine.Playables.PlayableDirector _btsCharactersResultsAppearPlayableDirector
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Playables::PlayableDirector* btsCharactersResultsAppearPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC03FC
    // private BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation[] _resultPlacesWithAnimations
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>* resultPlacesWithAnimations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>*) == 0x8);
    // Creating value type constructor for type: BtsResultsEnvironmentController
    BtsResultsEnvironmentController(GlobalNamespace::BTSCharacterDataModel* btsCharacterDataModel_ = {}, UnityEngine::Playables::PlayableDirector* btsCharactersResultsAppearPlayableDirector_ = {}, ::Array<GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>* resultPlacesWithAnimations_ = {}) noexcept : btsCharacterDataModel{btsCharacterDataModel_}, btsCharactersResultsAppearPlayableDirector{btsCharactersResultsAppearPlayableDirector_}, resultPlacesWithAnimations{resultPlacesWithAnimations_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private BeatmapEventType kCharacterDisplayEventType
    static constexpr const int kCharacterDisplayEventType = 40;
    // Get static field: static private BeatmapEventType kCharacterDisplayEventType
    static GlobalNamespace::BeatmapEventType _get_kCharacterDisplayEventType();
    // Set static field: static private BeatmapEventType kCharacterDisplayEventType
    static void _set_kCharacterDisplayEventType(GlobalNamespace::BeatmapEventType value);
    // private System.Collections.IEnumerator DestroyCharactersDelayed()
    // Offset: 0x1A3240C
    System::Collections::IEnumerator* DestroyCharactersDelayed();
    // private System.Void DestroyCharactersAndStopAnimations()
    // Offset: 0x1A3237C
    void DestroyCharactersAndStopAnimations();
    // public override System.Void Setup(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1A31BF8
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Setup(IDifficultyBeatmap difficultyBeatmap)
    void Setup(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public override System.Void Activate(System.Boolean immediately)
    // Offset: 0x1A32228
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Activate(System.Boolean immediately)
    void Activate(bool immediately);
    // public override System.Void Deactivate(System.Boolean immediately)
    // Offset: 0x1A322D8
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Deactivate(System.Boolean immediately)
    void Deactivate(bool immediately);
    // public System.Void .ctor()
    // Offset: 0x1A325A4
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BtsResultsEnvironmentController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BtsResultsEnvironmentController").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BtsResultsEnvironmentController*, creationType>()));
    }
  }; // BtsResultsEnvironmentController
  static check_size<sizeof(BtsResultsEnvironmentController), 40 + sizeof(::Array<GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>*)> __GlobalNamespace_BtsResultsEnvironmentControllerSizeCheck;
  static_assert(sizeof(BtsResultsEnvironmentController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BtsResultsEnvironmentController*, "", "BtsResultsEnvironmentController");
#pragma pack(pop)