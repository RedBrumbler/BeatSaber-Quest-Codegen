// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSignal
  class FloatSignal;
  // Forward declaring type: FloatUnityEvent
  class FloatUnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FloatSignalListener
  class FloatSignalListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FloatSignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatSignalListener*, "", "FloatSignalListener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FloatSignalListener
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatSignalListener : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private FloatSignal _floatSignal
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FloatSignal* floatSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSignal*) == 0x8);
    // private FloatUnityEvent _unityEvent
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::FloatUnityEvent* unityEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatUnityEvent*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FloatSignal _floatSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSignal*& dyn__floatSignal();
    // Get instance field reference: private FloatUnityEvent _unityEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatUnityEvent*& dyn__unityEvent();
    // public System.Void .ctor()
    // Offset: 0x16224AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatSignalListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FloatSignalListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatSignalListener*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x162230C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x16223A8
    void OnDisable();
    // private System.Void HandleEvent(System.Single f)
    // Offset: 0x1622444
    void HandleEvent(float f);
  }; // FloatSignalListener
  #pragma pack(pop)
  static check_size<sizeof(FloatSignalListener), 32 + sizeof(::GlobalNamespace::FloatUnityEvent*)> __GlobalNamespace_FloatSignalListenerSizeCheck;
  static_assert(sizeof(FloatSignalListener) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)()>(&GlobalNamespace::FloatSignalListener::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloatSignalListener::HandleEvent
// Il2CppName: HandleEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatSignalListener::*)(float)>(&GlobalNamespace::FloatSignalListener::HandleEvent)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloatSignalListener*), "HandleEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
