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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AlwaysVisibleQuad
  class AlwaysVisibleQuad;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AlwaysVisibleQuad);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysVisibleQuad*, "", "AlwaysVisibleQuad");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AlwaysVisibleQuad
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class AlwaysVisibleQuad : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Mesh _mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__mesh();
    // public System.Void .ctor()
    // Offset: 0x2AF7210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlwaysVisibleQuad* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AlwaysVisibleQuad::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlwaysVisibleQuad*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x2AF6F38
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x2AF7204
    void OnDisable();
  }; // AlwaysVisibleQuad
  #pragma pack(pop)
  static check_size<sizeof(AlwaysVisibleQuad), 24 + sizeof(::UnityEngine::Mesh*)> __GlobalNamespace_AlwaysVisibleQuadSizeCheck;
  static_assert(sizeof(AlwaysVisibleQuad) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlwaysVisibleQuad::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AlwaysVisibleQuad::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AlwaysVisibleQuad::*)()>(&GlobalNamespace::AlwaysVisibleQuad::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysVisibleQuad*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlwaysVisibleQuad::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AlwaysVisibleQuad::*)()>(&GlobalNamespace::AlwaysVisibleQuad::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysVisibleQuad*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
