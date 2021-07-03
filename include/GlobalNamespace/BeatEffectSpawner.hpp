// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBeatEffectDidFinishEvent
#include "GlobalNamespace/IBeatEffectDidFinishEvent.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: BeatEffect
#include "GlobalNamespace/BeatEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: SongController
  class SongController;
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffectSpawner
  class BeatEffectSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IBeatEffectDidFinishEvent*/ {
    public:
    // Nested type: GlobalNamespace::BeatEffectSpawner::InitData
    class InitData;
    // private System.Single _effectDuration
    // Size: 0x4
    // Offset: 0x18
    float effectDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _bombColorEffect
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Color bombColorEffect;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: bombColorEffect and: colorManager
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0xE19C74
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE19C84
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE19C94
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE19CA4
    // private readonly BeatEffectSpawner/InitData _initData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatEffectSpawner::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatEffectSpawner::InitData*) == 0x8);
    // private SongController _songController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SongController* songController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongController*) == 0x8);
    // private MemoryPoolContainer`1<BeatEffect> _beatEffectPoolContainer
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>* beatEffectPoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>*) == 0x8);
    // Creating value type constructor for type: BeatEffectSpawner
    BeatEffectSpawner(float effectDuration_ = {}, UnityEngine::Color bombColorEffect_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::BeatEffectSpawner::InitData* initData_ = {}, GlobalNamespace::SongController* songController_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>* beatEffectPoolContainer_ = {}) noexcept : effectDuration{effectDuration_}, bombColorEffect{bombColorEffect_}, colorManager{colorManager_}, beatmapObjectManager{beatmapObjectManager_}, audioTimeSyncController{audioTimeSyncController_}, initData{initData_}, songController{songController_}, beatEffectPoolContainer{beatEffectPoolContainer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatEffectDidFinishEvent
    operator GlobalNamespace::IBeatEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Init(BeatEffect/Pool beatEffectPool)
    // Offset: 0x11BB348
    void Init(GlobalNamespace::BeatEffect::Pool* beatEffectPool);
    // protected System.Void Start()
    // Offset: 0x11BB3C0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11BB454
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11BB4F4
    void Update();
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0x11BB614
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // public System.Void HandleBeatEffectDidFinish(BeatEffect beatEffect)
    // Offset: 0x11BB94C
    void HandleBeatEffectDidFinish(GlobalNamespace::BeatEffect* beatEffect);
    // public System.Void .ctor()
    // Offset: 0x11BBA30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffectSpawner*, creationType>()));
    }
  }; // BeatEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(BeatEffectSpawner), 88 + sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>*)> __GlobalNamespace_BeatEffectSpawnerSizeCheck;
  static_assert(sizeof(BeatEffectSpawner) == 0x60);
  // Writing MetadataGetter for method: BeatEffectSpawner::Init
  // Il2CppName: Init
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)(GlobalNamespace::BeatEffect::Pool*)>(&BeatEffectSpawner::Init)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatEffect::Pool*>()});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)()>(&BeatEffectSpawner::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)()>(&BeatEffectSpawner::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::Update
  // Il2CppName: Update
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)()>(&BeatEffectSpawner::Update)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::HandleNoteDidStartJump
  // Il2CppName: HandleNoteDidStartJump
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)(GlobalNamespace::NoteController*)>(&BeatEffectSpawner::HandleNoteDidStartJump)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "HandleNoteDidStartJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteController*>()});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::HandleBeatEffectDidFinish
  // Il2CppName: HandleBeatEffectDidFinish
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)(GlobalNamespace::BeatEffect*)>(&BeatEffectSpawner::HandleBeatEffectDidFinish)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), "HandleBeatEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatEffect*>()});
    }
  };
  // Writing MetadataGetter for method: BeatEffectSpawner::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)()>(&BeatEffectSpawner::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatEffectSpawner::*)()>(&BeatEffectSpawner::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatEffectSpawner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
