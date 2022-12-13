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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRing
  class TrackLaneRing;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TrackLaneRing _trackLaneRingPrefab
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TrackLaneRing* trackLaneRingPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TrackLaneRing*) == 0x8);
    // private System.Int32 _ringCount
    // Size: 0x4
    // Offset: 0x20
    int ringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _ringPositionStep
    // Size: 0x4
    // Offset: 0x24
    float ringPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _spawnAsChildren
    // Size: 0x1
    // Offset: 0x28
    bool spawnAsChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: spawnAsChildren and: container
    char __padding3[0x7] = {};
    // [InjectAttribute] Offset: 0x1120F84
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private TrackLaneRing[] _rings
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::TrackLaneRing*> rings;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TrackLaneRing*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TrackLaneRing _trackLaneRingPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TrackLaneRing*& dyn__trackLaneRingPrefab();
    // Get instance field reference: private System.Int32 _ringCount
    [[deprecated("Use field access instead!")]] int& dyn__ringCount();
    // Get instance field reference: private System.Single _ringPositionStep
    [[deprecated("Use field access instead!")]] float& dyn__ringPositionStep();
    // Get instance field reference: private System.Boolean _spawnAsChildren
    [[deprecated("Use field access instead!")]] bool& dyn__spawnAsChildren();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private TrackLaneRing[] _rings
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TrackLaneRing*>& dyn__rings();
    // public System.Single get_ringPositionStep()
    // Offset: 0x13C3B88
    float get_ringPositionStep();
    // public TrackLaneRing[] get_Rings()
    // Offset: 0x13C3B90
    ::ArrayW<::GlobalNamespace::TrackLaneRing*> get_Rings();
    // public System.Void .ctor()
    // Offset: 0x13C4374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrackLaneRingsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13C3B98
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x13C3ECC
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x13C3F78
    void LateUpdate();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x13C4024
    void OnDrawGizmosSelected();
  }; // TrackLaneRingsManager
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsManager), 56 + sizeof(::ArrayW<::GlobalNamespace::TrackLaneRing*>)> __GlobalNamespace_TrackLaneRingsManagerSizeCheck;
  static_assert(sizeof(TrackLaneRingsManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep
// Il2CppName: get_ringPositionStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "get_ringPositionStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::get_Rings
// Il2CppName: get_Rings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::TrackLaneRing*> (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::get_Rings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "get_Rings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
