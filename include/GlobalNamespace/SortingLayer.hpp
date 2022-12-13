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
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SortingLayer
  class SortingLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortingLayer*, "", "SortingLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SortingLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class SortingLayer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x2AD77A8
    ::UnityEngine::Renderer* get_renderer();
    // public System.Void .ctor()
    // Offset: 0x2AD7808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortingLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SortingLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortingLayer*, creationType>()));
    }
    // private System.Void Reset()
    // Offset: 0x2AD77B0
    void Reset();
  }; // SortingLayer
  #pragma pack(pop)
  static check_size<sizeof(SortingLayer), 24 + sizeof(::UnityEngine::Renderer*)> __GlobalNamespace_SortingLayerSizeCheck;
  static_assert(sizeof(SortingLayer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SortingLayer::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (GlobalNamespace::SortingLayer::*)()>(&GlobalNamespace::SortingLayer::get_renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SortingLayer*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SortingLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SortingLayer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SortingLayer::*)()>(&GlobalNamespace::SortingLayer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SortingLayer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
