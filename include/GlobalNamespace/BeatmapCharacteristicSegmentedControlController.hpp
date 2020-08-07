// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicSegmentedControlController
  class BeatmapCharacteristicSegmentedControlController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c
    class $$c;
    // private HMUI.IconSegmentedControl _segmentedControl
    // Offset: 0x18
    HMUI::IconSegmentedControl* segmentedControl;
    // private System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Offset: 0x20
    System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;
    // private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _beatmapCharacteristics
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x197688C
    void add_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x1976930
    void remove_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x19769D4
    GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // protected System.Void Awake()
    // Offset: 0x19769DC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1976A70
    void OnDestroy();
    // public System.Void SetData(IDifficultyBeatmapSet[] difficultyBeatmapSets, BeatmapCharacteristicSO selectedBeatmapCharacteristic)
    // Offset: 0x1976B4C
    void SetData(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets, GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic);
    // private System.Void HandleDifficultySegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x1976EC0
    void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void .ctor()
    // Offset: 0x1976F74
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicSegmentedControlController* New_ctor();
  }; // BeatmapCharacteristicSegmentedControlController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
#pragma pack(pop)