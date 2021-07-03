// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: OVRCustomSkeleton
  // [DefaultExecutionOrder] Offset: DCCB90
  class OVRCustomSkeleton : public GlobalNamespace::OVRSkeleton {
    public:
    // private System.Boolean _applyBoneTranslations
    // Size: 0x1
    // Offset: 0xB4
    bool applyBoneTranslations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyBoneTranslations and: customBones_V2
    char __padding0[0x3] = {};
    // [HideInInspector] Offset: 0xDCFBC8
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones_V2
    // Size: 0x8
    // Offset: 0xB8
    System::Collections::Generic::List_1<UnityEngine::Transform*>* customBones_V2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Transform*>*) == 0x8);
    // Creating value type constructor for type: OVRCustomSkeleton
    OVRCustomSkeleton(bool applyBoneTranslations_ = {}, System::Collections::Generic::List_1<UnityEngine::Transform*>* customBones_V2_ = {}) noexcept : applyBoneTranslations{applyBoneTranslations_}, customBones_V2{customBones_V2_} {}
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_CustomBones()
    // Offset: 0x1283E34
    System::Collections::Generic::List_1<UnityEngine::Transform*>* get_CustomBones();
    // protected override System.Void InitializeBones()
    // Offset: 0x1283E3C
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::InitializeBones()
    void InitializeBones();
    // public System.Void .ctor()
    // Offset: 0x12840E0
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCustomSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCustomSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCustomSkeleton*, creationType>()));
    }
  }; // OVRCustomSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRCustomSkeleton), 184 + sizeof(System::Collections::Generic::List_1<UnityEngine::Transform*>*)> __GlobalNamespace_OVRCustomSkeletonSizeCheck;
  static_assert(sizeof(OVRCustomSkeleton) == 0xC0);
  // Writing MetadataGetter for method: OVRCustomSkeleton::get_CustomBones
  // Il2CppName: get_CustomBones
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Transform*>* (OVRCustomSkeleton::*)()>(&OVRCustomSkeleton::get_CustomBones)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRCustomSkeleton*), "get_CustomBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRCustomSkeleton::InitializeBones
  // Il2CppName: InitializeBones
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRCustomSkeleton::*)()>(&OVRCustomSkeleton::InitializeBones)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRCustomSkeleton*), "InitializeBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRCustomSkeleton::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRCustomSkeleton::*)()>(&OVRCustomSkeleton::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRCustomSkeleton*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRCustomSkeleton::*)()>(&OVRCustomSkeleton::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRCustomSkeleton*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
