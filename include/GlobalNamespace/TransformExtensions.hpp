// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TransformExtensions
  class TransformExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformExtensions*, "", "TransformExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TransformExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TransformExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Quaternion InverseTransformRotation(UnityEngine.Transform trans, UnityEngine.Quaternion worldRotation)
    // Offset: 0x2AE9780
    static ::UnityEngine::Quaternion InverseTransformRotation(::UnityEngine::Transform* trans, ::UnityEngine::Quaternion worldRotation);
  }; // TransformExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransformExtensions::InverseTransformRotation
// Il2CppName: InverseTransformRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&GlobalNamespace::TransformExtensions::InverseTransformRotation)> {
  static const MethodInfo* get() {
    static auto* trans = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformExtensions*), "InverseTransformRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trans, worldRotation});
  }
};
