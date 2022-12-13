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
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: MainAudioEffects
  class MainAudioEffects;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HeadObstacleLowPassAudioEffect
  class HeadObstacleLowPassAudioEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HeadObstacleLowPassAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadObstacleLowPassAudioEffect*, "", "HeadObstacleLowPassAudioEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HeadObstacleLowPassAudioEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class HeadObstacleLowPassAudioEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x111F78C
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0x111F79C
    // private MainAudioEffects _mainAudioEffects
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MainAudioEffects* mainAudioEffects;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainAudioEffects*) == 0x8);
    // private System.Boolean _headWasInObstacle
    // Size: 0x1
    // Offset: 0x28
    bool headWasInObstacle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private MainAudioEffects _mainAudioEffects
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainAudioEffects*& dyn__mainAudioEffects();
    // Get instance field reference: private System.Boolean _headWasInObstacle
    [[deprecated("Use field access instead!")]] bool& dyn__headWasInObstacle();
    // public System.Void .ctor()
    // Offset: 0x13D1228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeadObstacleLowPassAudioEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HeadObstacleLowPassAudioEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeadObstacleLowPassAudioEffect*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x13D11BC
    void Update();
  }; // HeadObstacleLowPassAudioEffect
  #pragma pack(pop)
  static check_size<sizeof(HeadObstacleLowPassAudioEffect), 40 + sizeof(bool)> __GlobalNamespace_HeadObstacleLowPassAudioEffectSizeCheck;
  static_assert(sizeof(HeadObstacleLowPassAudioEffect) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HeadObstacleLowPassAudioEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HeadObstacleLowPassAudioEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(&GlobalNamespace::HeadObstacleLowPassAudioEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HeadObstacleLowPassAudioEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
