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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomTimelineTween
  class CustomTimelineTween;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomTimelineTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTimelineTween*, "", "CustomTimelineTween");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CustomTimelineTween
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomTimelineTween : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform[] transforms
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.Vector3[] startPositions
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> startPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform[] transforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_transforms();
    // Get instance field reference: public UnityEngine.Vector3[] startPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_startPositions();
    // public System.Void .ctor()
    // Offset: 0x1442CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTimelineTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomTimelineTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTimelineTween*, creationType>()));
    }
    // private System.Void OnValidate()
    // Offset: 0x1442BF4
    void OnValidate();
  }; // CustomTimelineTween
  #pragma pack(pop)
  static check_size<sizeof(CustomTimelineTween), 32 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __GlobalNamespace_CustomTimelineTweenSizeCheck;
  static_assert(sizeof(CustomTimelineTween) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomTimelineTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomTimelineTween::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTimelineTween::*)()>(&GlobalNamespace::CustomTimelineTween::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTimelineTween*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
