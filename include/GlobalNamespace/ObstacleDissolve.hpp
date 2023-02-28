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
  // Forward declaring type: ObstacleControllerBase
  class ObstacleControllerBase;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObstacleDissolve
  class ObstacleDissolve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObstacleDissolve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleDissolve*, "", "ObstacleDissolve");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleDissolve
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleDissolve : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private ObstacleControllerBase _obstacleController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ObstacleControllerBase* obstacleController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObstacleControllerBase*) == 0x8);
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ObstacleControllerBase _obstacleController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ObstacleControllerBase*& dyn__obstacleController();
    // Get instance field reference: private CutoutAnimateEffect _cutoutAnimateEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CutoutAnimateEffect*& dyn__cutoutAnimateEffect();
    // public System.Void .ctor()
    // Offset: 0x15B5BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleDissolve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleDissolve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleDissolve*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x15B59B8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x15B5A90
    void OnDestroy();
    // private System.Void HandleObstacleDidInitEvent(ObstacleControllerBase obstacleController)
    // Offset: 0x15B5BAC
    void HandleObstacleDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController);
    // private System.Void HandleObcstacleDidStartDissolvingEvent(ObstacleControllerBase obstacleController, System.Single duration)
    // Offset: 0x15B5BC8
    void HandleObcstacleDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float duration);
  }; // ObstacleDissolve
  #pragma pack(pop)
  static check_size<sizeof(ObstacleDissolve), 32 + sizeof(::GlobalNamespace::CutoutAnimateEffect*)> __GlobalNamespace_ObstacleDissolveSizeCheck;
  static_assert(sizeof(ObstacleDissolve) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent
// Il2CppName: HandleObstacleDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(::GlobalNamespace::ObstacleControllerBase*)>(&GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "HandleObstacleDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent
// Il2CppName: HandleObcstacleDidStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(::GlobalNamespace::ObstacleControllerBase*, float)>(&GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleDissolve*), "HandleObcstacleDidStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController, duration});
  }
};
