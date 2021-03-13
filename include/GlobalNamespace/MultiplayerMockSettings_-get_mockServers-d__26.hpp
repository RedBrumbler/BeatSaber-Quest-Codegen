// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerMockSettings
#include "GlobalNamespace/MultiplayerMockSettings.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockServer
  class MockServer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerMockSettings/<get_mockServers>d__26
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C404
  class MultiplayerMockSettings::$get_mockServers$d__26 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private MockServer <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockServer* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public MultiplayerMockSettings <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerMockSettings* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // Creating value type constructor for type: $get_mockServers$d__26
    $get_mockServers$d__26(int $$1__state_ = {}, GlobalNamespace::MockServer* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::MultiplayerMockSettings* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF52A2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerMockSettings::$get_mockServers$d__26* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerMockSettings::$get_mockServers$d__26::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerMockSettings::$get_mockServers$d__26*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF53220
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0xF53224
    bool MoveNext_NEW();
    // private MockServer System.Collections.Generic.IEnumerator<MockServer>.get_Current()
    // Offset: 0xF53278
    GlobalNamespace::MockServer* System_Collections_Generic_IEnumerator$MockServer$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF53280
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF532E0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
    // private System.Collections.Generic.IEnumerator`1<MockServer> System.Collections.Generic.IEnumerable<MockServer>.GetEnumerator()
    // Offset: 0xF532E8
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>* System_Collections_Generic_IEnumerable$MockServer$_GetEnumerator_NEW();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xF53394
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW();
  }; // MultiplayerMockSettings/<get_mockServers>d__26
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerMockSettings::$get_mockServers$d__26), 40 + sizeof(GlobalNamespace::MultiplayerMockSettings*)> __GlobalNamespace_MultiplayerMockSettings_$get_mockServers$d__26SizeCheck;
  static_assert(sizeof(MultiplayerMockSettings::$get_mockServers$d__26) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMockSettings::$get_mockServers$d__26*, "", "MultiplayerMockSettings/<get_mockServers>d__26");