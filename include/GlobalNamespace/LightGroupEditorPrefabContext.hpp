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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightGroupEditorPrefabContext
  class LightGroupEditorPrefabContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightGroupEditorPrefabContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupEditorPrefabContext*, "", "LightGroupEditorPrefabContext");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LightGroupEditorPrefabContext
  // [TokenAttribute] Offset: FFFFFFFF
  class LightGroupEditorPrefabContext : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Collections.Generic.List`1<LightGroupSO> lightGroups
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* lightGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<LightGroupSO> lightGroups
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& dyn_lightGroups();
    // public System.Void .ctor()
    // Offset: 0x1CE8F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightGroupEditorPrefabContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightGroupEditorPrefabContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightGroupEditorPrefabContext*, creationType>()));
    }
  }; // LightGroupEditorPrefabContext
  #pragma pack(pop)
  static check_size<sizeof(LightGroupEditorPrefabContext), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*)> __GlobalNamespace_LightGroupEditorPrefabContextSizeCheck;
  static_assert(sizeof(LightGroupEditorPrefabContext) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightGroupEditorPrefabContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!