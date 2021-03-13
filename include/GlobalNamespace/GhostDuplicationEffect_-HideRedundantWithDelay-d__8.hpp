// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GhostDuplicationEffect
#include "GlobalNamespace/GhostDuplicationEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GhostDuplicationEffect/<HideRedundantWithDelay>d__8
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C284
  class GhostDuplicationEffect::$HideRedundantWithDelay$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public GhostDuplicationEffect <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GhostDuplicationEffect* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect*) == 0x8);
    // Creating value type constructor for type: $HideRedundantWithDelay$d__8
    $HideRedundantWithDelay$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float delay_ = {}, GlobalNamespace::GhostDuplicationEffect* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, delay{delay_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFE9E6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GhostDuplicationEffect::$HideRedundantWithDelay$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GhostDuplicationEffect::$HideRedundantWithDelay$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GhostDuplicationEffect::$HideRedundantWithDelay$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFEA2BC
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0xFEA2C0
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xFEA3C8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFEA3D0
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFEA430
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // GhostDuplicationEffect/<HideRedundantWithDelay>d__8
  #pragma pack(pop)
  static check_size<sizeof(GhostDuplicationEffect::$HideRedundantWithDelay$d__8), 40 + sizeof(GlobalNamespace::GhostDuplicationEffect*)> __GlobalNamespace_GhostDuplicationEffect_$HideRedundantWithDelay$d__8SizeCheck;
  static_assert(sizeof(GhostDuplicationEffect::$HideRedundantWithDelay$d__8) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect::$HideRedundantWithDelay$d__8*, "", "GhostDuplicationEffect/<HideRedundantWithDelay>d__8");