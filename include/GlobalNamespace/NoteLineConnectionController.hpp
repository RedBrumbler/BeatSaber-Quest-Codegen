// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteLineConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLineConnectionController*, "", "NoteLineConnectionController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7D
  #pragma pack(push, 1)
  // Autogenerated type: NoteLineConnectionController
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteLineConnectionController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NoteLineConnectionController::Pool
    class Pool;
    public:
    // private UnityEngine.LineRenderer _lineRenderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0x111D9AC
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x111D9BC
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0x111D9CC
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // private System.Action`1<NoteLineConnectionController> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*) == 0x8);
    // private NoteController _noteController0
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::NoteController* noteController0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteController*) == 0x8);
    // private NoteController _noteController1
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::NoteController* noteController1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteController*) == 0x8);
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _fadeOutStartDistance
    // Size: 0x4
    // Offset: 0x70
    float fadeOutStartDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutEndDistance
    // Size: 0x4
    // Offset: 0x74
    float fadeOutEndDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteTime
    // Size: 0x4
    // Offset: 0x78
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _didFinish
    // Size: 0x1
    // Offset: 0x7C
    bool didFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.LineRenderer _lineRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn__lineRenderer();
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private System.Action`1<NoteLineConnectionController> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*& dyn_didFinishEvent();
    // Get instance field reference: private NoteController _noteController0
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteController*& dyn__noteController0();
    // Get instance field reference: private NoteController _noteController1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteController*& dyn__noteController1();
    // Get instance field reference: private UnityEngine.Color _color0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color0();
    // Get instance field reference: private UnityEngine.Color _color1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color1();
    // Get instance field reference: private System.Single _fadeOutStartDistance
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutStartDistance();
    // Get instance field reference: private System.Single _fadeOutEndDistance
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutEndDistance();
    // Get instance field reference: private System.Single _noteTime
    [[deprecated("Use field access instead!")]] float& dyn__noteTime();
    // Get instance field reference: private System.Boolean _didFinish
    [[deprecated("Use field access instead!")]] bool& dyn__didFinish();
    // public System.Void add_didFinishEvent(System.Action`1<NoteLineConnectionController> value)
    // Offset: 0x1551F44
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<NoteLineConnectionController> value)
    // Offset: 0x1551FE8
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* value);
    // public System.Void .ctor()
    // Offset: 0x15523B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteLineConnectionController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteLineConnectionController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteLineConnectionController*, creationType>()));
    }
    // public System.Void Setup(NoteController noteController0, NoteController noteController1, System.Single fadeOutStartDistance, System.Single fadeOutEndDistance, System.Single noteTime)
    // Offset: 0x155208C
    void Setup(::GlobalNamespace::NoteController* noteController0, ::GlobalNamespace::NoteController* noteController1, float fadeOutStartDistance, float fadeOutEndDistance, float noteTime);
    // protected System.Void Update()
    // Offset: 0x1552320
    void Update();
    // private System.Void UpdatePositionsAndColors()
    // Offset: 0x1552134
    void UpdatePositionsAndColors();
  }; // NoteLineConnectionController
  #pragma pack(pop)
  static check_size<sizeof(NoteLineConnectionController), 124 + sizeof(bool)> __GlobalNamespace_NoteLineConnectionControllerSizeCheck;
  static_assert(sizeof(NoteLineConnectionController) == 0x7D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*)>(&GlobalNamespace::NoteLineConnectionController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteLineConnectionController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*)>(&GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteLineConnectionController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)(::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteController*, float, float, float)>(&GlobalNamespace::NoteLineConnectionController::Setup)> {
  static const MethodInfo* get() {
    static auto* noteController0 = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteController1 = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* fadeOutStartDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOutEndDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController0, noteController1, fadeOutStartDistance, fadeOutEndDistance, noteTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)()>(&GlobalNamespace::NoteLineConnectionController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors
// Il2CppName: UpdatePositionsAndColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteLineConnectionController::*)()>(&GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteLineConnectionController*), "UpdatePositionsAndColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
