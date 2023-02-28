// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingSpriteSpawner
  class FlyingSpriteSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BadNoteCutEffectSpawner
  class BadNoteCutEffectSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BadNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadNoteCutEffectSpawner*, "", "BadNoteCutEffectSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BadNoteCutEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class BadNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private FlyingSpriteSpawner _failFlyingSpriteSpawner
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FlyingSpriteSpawner* failFlyingSpriteSpawner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingSpriteSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0x112314C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x112315C
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0x112316C
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FlyingSpriteSpawner _failFlyingSpriteSpawner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingSpriteSpawner*& dyn__failFlyingSpriteSpawner();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly CoreGameHUDController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CoreGameHUDController::InitData*& dyn__initData();
    // public System.Void .ctor()
    // Offset: 0x13D55A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadNoteCutEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BadNoteCutEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadNoteCutEffectSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13D532C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13D53E4
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x13D547C
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
  }; // BadNoteCutEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(BadNoteCutEffectSpawner), 48 + sizeof(::GlobalNamespace::CoreGameHUDController::InitData*)> __GlobalNamespace_BadNoteCutEffectSpawnerSizeCheck;
  static_assert(sizeof(BadNoteCutEffectSpawner) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BadNoteCutEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BadNoteCutEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&GlobalNamespace::BadNoteCutEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadNoteCutEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadNoteCutEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BadNoteCutEffectSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
