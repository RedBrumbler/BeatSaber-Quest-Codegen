// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PlayerLoop.PreLateUpdate
#include "UnityEngine/PlayerLoop/PreLateUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreLateUpdate::UNetUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/UNetUpdate");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PreLateUpdate/UnityEngine.PlayerLoop.UNetUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 1094EC4
  struct PreLateUpdate::UNetUpdate/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: UNetUpdate
    constexpr UNetUpdate() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PreLateUpdate/UnityEngine.PlayerLoop.UNetUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
