// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ComputeBuffer
  class ComputeBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ComputeBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1093E38
  // [UsedByNativeCodeAttribute] Offset: 1093E38
  // [NativeHeaderAttribute] Offset: 1093E38
  class ComputeBuffer : public ::Il2CppObject {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
  }; // UnityEngine.ComputeBuffer
  #pragma pack(pop)
  static check_size<sizeof(ComputeBuffer), 16 + sizeof(::System::IntPtr)> __UnityEngine_ComputeBufferSizeCheck;
  static_assert(sizeof(ComputeBuffer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
