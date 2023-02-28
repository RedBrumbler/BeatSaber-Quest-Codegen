// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkeletonBone
  struct SkeletonBone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkeletonBone, "UnityEngine", "SkeletonBone");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SkeletonBone
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10ACE2C
  // [NativeTypeAttribute] Offset: 10ACE2C
  // [RequiredByNativeCodeAttribute] Offset: 10ACE2C
  struct SkeletonBone/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x10ADEBC
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NativeNameAttribute] Offset: 0x10ADEF4
    // System.String parentName
    // Size: 0x8
    // Offset: 0x8
    ::StringW parentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NativeNameAttribute] Offset: 0x10ADF2C
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0x10ADF64
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // [NativeNameAttribute] Offset: 0x10ADF9C
    // public UnityEngine.Vector3 scale
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: SkeletonBone
    constexpr SkeletonBone(::StringW name_ = {}, ::StringW parentName_ = {}, ::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion rotation_ = {}, ::UnityEngine::Vector3 scale_ = {}) noexcept : name{name_}, parentName{parentName_}, position{position_}, rotation{rotation_}, scale{scale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: System.String parentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_parentName();
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 scale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_scale();
  }; // UnityEngine.SkeletonBone
  #pragma pack(pop)
  static check_size<sizeof(SkeletonBone), 44 + sizeof(::UnityEngine::Vector3)> __UnityEngine_SkeletonBoneSizeCheck;
  static_assert(sizeof(SkeletonBone) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
