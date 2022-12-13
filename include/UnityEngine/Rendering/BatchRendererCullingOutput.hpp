// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.JobHandle
#include "Unity/Jobs/JobHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchVisibility
  struct BatchVisibility;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchRendererCullingOutput
  struct BatchRendererCullingOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererCullingOutput, "UnityEngine.Rendering", "BatchRendererCullingOutput");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchRendererCullingOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 108EA44
  // [NativeHeaderAttribute] Offset: 108EA44
  struct BatchRendererCullingOutput/*, public ::System::ValueType*/ {
    public:
    public:
    // public Unity.Jobs.JobHandle cullingJobsFence
    // Size: 0xC
    // Offset: 0x0
    ::Unity::Jobs::JobHandle cullingJobsFence;
    // Field size check
    static_assert(sizeof(::Unity::Jobs::JobHandle) == 0xC);
    // Padding between fields: cullingJobsFence and: cullingPlanes
    char __padding0[0x4] = {};
    // public UnityEngine.Plane* cullingPlanes
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Plane* cullingPlanes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Plane*) == 0x8);
    // public UnityEngine.Rendering.BatchVisibility* batchVisibility
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::BatchVisibility* batchVisibility;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BatchVisibility*) == 0x8);
    // public System.Int32* visibleIndices
    // Size: 0x8
    // Offset: 0x20
    int* visibleIndices;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // public System.Int32 cullingPlanesCount
    // Size: 0x4
    // Offset: 0x28
    int cullingPlanesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 batchVisibilityCount
    // Size: 0x4
    // Offset: 0x2C
    int batchVisibilityCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleIndicesCount
    // Size: 0x4
    // Offset: 0x30
    int visibleIndicesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BatchRendererCullingOutput
    constexpr BatchRendererCullingOutput(::Unity::Jobs::JobHandle cullingJobsFence_ = {}, ::UnityEngine::Plane* cullingPlanes_ = {}, ::UnityEngine::Rendering::BatchVisibility* batchVisibility_ = {}, int* visibleIndices_ = {}, int cullingPlanesCount_ = {}, int batchVisibilityCount_ = {}, int visibleIndicesCount_ = {}) noexcept : cullingJobsFence{cullingJobsFence_}, cullingPlanes{cullingPlanes_}, batchVisibility{batchVisibility_}, visibleIndices{visibleIndices_}, cullingPlanesCount{cullingPlanesCount_}, batchVisibilityCount{batchVisibilityCount_}, visibleIndicesCount{visibleIndicesCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Unity.Jobs.JobHandle cullingJobsFence
    [[deprecated("Use field access instead!")]] ::Unity::Jobs::JobHandle& dyn_cullingJobsFence();
    // Get instance field reference: public UnityEngine.Plane* cullingPlanes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Plane*& dyn_cullingPlanes();
    // Get instance field reference: public UnityEngine.Rendering.BatchVisibility* batchVisibility
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BatchVisibility*& dyn_batchVisibility();
    // Get instance field reference: public System.Int32* visibleIndices
    [[deprecated("Use field access instead!")]] int*& dyn_visibleIndices();
    // Get instance field reference: public System.Int32 cullingPlanesCount
    [[deprecated("Use field access instead!")]] int& dyn_cullingPlanesCount();
    // Get instance field reference: public System.Int32 batchVisibilityCount
    [[deprecated("Use field access instead!")]] int& dyn_batchVisibilityCount();
    // Get instance field reference: public System.Int32 visibleIndicesCount
    [[deprecated("Use field access instead!")]] int& dyn_visibleIndicesCount();
  }; // UnityEngine.Rendering.BatchRendererCullingOutput
  #pragma pack(pop)
  static check_size<sizeof(BatchRendererCullingOutput), 48 + sizeof(int)> __UnityEngine_Rendering_BatchRendererCullingOutputSizeCheck;
  static_assert(sizeof(BatchRendererCullingOutput) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
