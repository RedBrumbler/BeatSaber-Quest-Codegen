// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IExposedPropertyTable
  class IExposedPropertyTable {
    public:
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, System.Boolean idValid)
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* GetReferenceValue(UnityEngine::PropertyName id, bool& idValid);
  }; // UnityEngine.IExposedPropertyTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
#pragma pack(pop)