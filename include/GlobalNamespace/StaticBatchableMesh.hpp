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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticBatchableMesh
  class StaticBatchableMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticBatchableMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatchableMesh*, "", "StaticBatchableMesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StaticBatchableMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1153328
  // [RequireComponent] Offset: 1153328
  class StaticBatchableMesh : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x2BA74A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticBatchableMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticBatchableMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticBatchableMesh*, creationType>()));
    }
  }; // StaticBatchableMesh
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticBatchableMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
