// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PlayerLoop.EarlyUpdate
#include "UnityEngine/PlayerLoop/EarlyUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate::ExecuteMainThreadJobs, "UnityEngine.PlayerLoop", "EarlyUpdate/ExecuteMainThreadJobs");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.EarlyUpdate/UnityEngine.PlayerLoop.ExecuteMainThreadJobs
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 108DE60
  struct EarlyUpdate::ExecuteMainThreadJobs/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ExecuteMainThreadJobs
    constexpr ExecuteMainThreadJobs() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.EarlyUpdate/UnityEngine.PlayerLoop.ExecuteMainThreadJobs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
