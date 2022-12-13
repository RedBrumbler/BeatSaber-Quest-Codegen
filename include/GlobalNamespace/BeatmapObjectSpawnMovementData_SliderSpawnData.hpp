// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData, "", "BeatmapObjectSpawnMovementData/SliderSpawnData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BeatmapObjectSpawnMovementData/SliderSpawnData
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BeatmapObjectSpawnMovementData::SliderSpawnData/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.Vector3 headMoveStartPos
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 headMoveStartPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 headJumpStartPos
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 headJumpStartPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 headJumpEndPos
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 headJumpEndPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly System.Single headJumpGravity
    // Size: 0x4
    // Offset: 0x24
    float headJumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly UnityEngine.Vector3 tailMoveStartPos
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 tailMoveStartPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 tailJumpStartPos
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 tailJumpStartPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 tailJumpEndPos
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 tailJumpEndPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly System.Single tailJumpGravity
    // Size: 0x4
    // Offset: 0x4C
    float tailJumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single moveDuration
    // Size: 0x4
    // Offset: 0x50
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single jumpDuration
    // Size: 0x4
    // Offset: 0x54
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SliderSpawnData
    constexpr SliderSpawnData(::UnityEngine::Vector3 headMoveStartPos_ = {}, ::UnityEngine::Vector3 headJumpStartPos_ = {}, ::UnityEngine::Vector3 headJumpEndPos_ = {}, float headJumpGravity_ = {}, ::UnityEngine::Vector3 tailMoveStartPos_ = {}, ::UnityEngine::Vector3 tailJumpStartPos_ = {}, ::UnityEngine::Vector3 tailJumpEndPos_ = {}, float tailJumpGravity_ = {}, float moveDuration_ = {}, float jumpDuration_ = {}) noexcept : headMoveStartPos{headMoveStartPos_}, headJumpStartPos{headJumpStartPos_}, headJumpEndPos{headJumpEndPos_}, headJumpGravity{headJumpGravity_}, tailMoveStartPos{tailMoveStartPos_}, tailJumpStartPos{tailJumpStartPos_}, tailJumpEndPos{tailJumpEndPos_}, tailJumpGravity{tailJumpGravity_}, moveDuration{moveDuration_}, jumpDuration{jumpDuration_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.Vector3 headMoveStartPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headMoveStartPos();
    // Get instance field reference: public readonly UnityEngine.Vector3 headJumpStartPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headJumpStartPos();
    // Get instance field reference: public readonly UnityEngine.Vector3 headJumpEndPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headJumpEndPos();
    // Get instance field reference: public readonly System.Single headJumpGravity
    [[deprecated("Use field access instead!")]] float& dyn_headJumpGravity();
    // Get instance field reference: public readonly UnityEngine.Vector3 tailMoveStartPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tailMoveStartPos();
    // Get instance field reference: public readonly UnityEngine.Vector3 tailJumpStartPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tailJumpStartPos();
    // Get instance field reference: public readonly UnityEngine.Vector3 tailJumpEndPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tailJumpEndPos();
    // Get instance field reference: public readonly System.Single tailJumpGravity
    [[deprecated("Use field access instead!")]] float& dyn_tailJumpGravity();
    // Get instance field reference: public readonly System.Single moveDuration
    [[deprecated("Use field access instead!")]] float& dyn_moveDuration();
    // Get instance field reference: public readonly System.Single jumpDuration
    [[deprecated("Use field access instead!")]] float& dyn_jumpDuration();
    // public System.Void .ctor(UnityEngine.Vector3 headMoveStartPos, UnityEngine.Vector3 headJumpStartPos, UnityEngine.Vector3 headJumpEndPos, System.Single headJumpGravity, UnityEngine.Vector3 tailMoveStartPos, UnityEngine.Vector3 tailJumpStartPos, UnityEngine.Vector3 tailJumpEndPos, System.Single tailJumpGravity, System.Single moveDuration, System.Single jumpDuration)
    // Offset: 0x13F9AA0
    // ABORTED: conflicts with another method.  SliderSpawnData(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float tailJumpGravity, float moveDuration, float jumpDuration);
  }; // BeatmapObjectSpawnMovementData/SliderSpawnData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnMovementData::SliderSpawnData), 84 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnMovementData_SliderSpawnDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnMovementData::SliderSpawnData) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData::SliderSpawnData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
