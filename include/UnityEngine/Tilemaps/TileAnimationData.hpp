// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TileAnimationData
  struct TileAnimationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationData, "UnityEngine.Tilemaps", "TileAnimationData");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Tilemaps.TileAnimationData
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10E2980
  // [NativeTypeAttribute] Offset: 10E2980
  struct TileAnimationData/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Sprite[] m_AnimatedSprites
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::UnityEngine::Sprite*> m_AnimatedSprites;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Sprite*>) == 0x8);
    // private System.Single m_AnimationSpeed
    // Size: 0x4
    // Offset: 0x8
    float m_AnimationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_AnimationStartTime
    // Size: 0x4
    // Offset: 0xC
    float m_AnimationStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: TileAnimationData
    constexpr TileAnimationData(::ArrayW<::UnityEngine::Sprite*> m_AnimatedSprites_ = ::ArrayW<::UnityEngine::Sprite*>(static_cast<void*>(nullptr)), float m_AnimationSpeed_ = {}, float m_AnimationStartTime_ = {}) noexcept : m_AnimatedSprites{m_AnimatedSprites_}, m_AnimationSpeed{m_AnimationSpeed_}, m_AnimationStartTime{m_AnimationStartTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Sprite[] m_AnimatedSprites
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Sprite*>& dyn_m_AnimatedSprites();
    // Get instance field reference: private System.Single m_AnimationSpeed
    [[deprecated("Use field access instead!")]] float& dyn_m_AnimationSpeed();
    // Get instance field reference: private System.Single m_AnimationStartTime
    [[deprecated("Use field access instead!")]] float& dyn_m_AnimationStartTime();
  }; // UnityEngine.Tilemaps.TileAnimationData
  #pragma pack(pop)
  static check_size<sizeof(TileAnimationData), 12 + sizeof(float)> __UnityEngine_Tilemaps_TileAnimationDataSizeCheck;
  static_assert(sizeof(TileAnimationData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
