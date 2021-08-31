// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelBar
#include "GlobalNamespace/LevelBar.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LevelBar/<Setup>d__17
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LevelBar::$Setup$d__17/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public LevelBar <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LevelBar* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // public BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x48
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1;
    // Creating value type constructor for type: $Setup$d__17
    constexpr $Setup$d__17(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LevelBar* $$4__this_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, beatmapCharacteristic{beatmapCharacteristic_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value);
    // Get instance field: public LevelBar <>4__this
    GlobalNamespace::LevelBar* _get_$$4__this();
    // Set instance field: public LevelBar <>4__this
    void _set_$$4__this(GlobalNamespace::LevelBar* value);
    // Get instance field: public IPreviewBeatmapLevel previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel* _get_previewBeatmapLevel();
    // Set instance field: public IPreviewBeatmapLevel previewBeatmapLevel
    void _set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // Get instance field: public BeatmapDifficulty beatmapDifficulty
    GlobalNamespace::BeatmapDifficulty _get_beatmapDifficulty();
    // Set instance field: public BeatmapDifficulty beatmapDifficulty
    void _set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // Get instance field: public BeatmapCharacteristicSO beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO* _get_beatmapCharacteristic();
    // Set instance field: public BeatmapCharacteristicSO beatmapCharacteristic
    void _set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // Get instance field: private System.Threading.CancellationToken <cancellationToken>5__2
    System::Threading::CancellationToken _get_$cancellationToken$5__2();
    // Set instance field: private System.Threading.CancellationToken <cancellationToken>5__2
    void _set_$cancellationToken$5__2(System::Threading::CancellationToken value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> value);
    // private System.Void MoveNext()
    // Offset: 0x1149F08
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x114A830
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LevelBar/<Setup>d__17
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelBar::$Setup$d__17, "", "LevelBar/<Setup>d__17");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::$Setup$d__17::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::$Setup$d__17::*)()>(&GlobalNamespace::LevelBar::$Setup$d__17::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar::$Setup$d__17), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::$Setup$d__17::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::$Setup$d__17::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LevelBar::$Setup$d__17::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar::$Setup$d__17), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};