// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Asset
  class TMP_Asset : public UnityEngine::ScriptableObject {
    public:
    // public System.Int32 hashCode
    // Offset: 0x18
    int hashCode;
    // public UnityEngine.Material material
    // Offset: 0x20
    UnityEngine::Material* material;
    // public System.Int32 materialHashCode
    // Offset: 0x28
    int materialHashCode;
    // public System.Void .ctor()
    // Offset: 0xB69678
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_Asset* New_ctor();
  }; // TMPro.TMP_Asset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
#pragma pack(pop)