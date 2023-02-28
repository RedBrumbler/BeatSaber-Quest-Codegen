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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightGroupElementsSpawner
  class LightGroupElementsSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightGroupElementsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupElementsSpawner*, "", "LightGroupElementsSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightGroupElementsSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 11195D8
  class LightGroupElementsSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LightGroup _lightGroup
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LightGroup* lightGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroup*) == 0x8);
    // private UnityEngine.GameObject _lightPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* lightPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _useAlternatePrefab
    // Size: 0x1
    // Offset: 0x28
    bool useAlternatePrefab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAlternatePrefab and: alternateLightPrefab
    char __padding2[0x7] = {};
    // [NullAllowed] Offset: 0x11247B8
    // [DrawIfAttribute] Offset: 0x11247B8
    // private UnityEngine.GameObject _alternateLightPrefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* alternateLightPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LightGroup _lightGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroup*& dyn__lightGroup();
    // Get instance field reference: private UnityEngine.GameObject _lightPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__lightPrefab();
    // Get instance field reference: private System.Boolean _useAlternatePrefab
    [[deprecated("Use field access instead!")]] bool& dyn__useAlternatePrefab();
    // Get instance field reference: private UnityEngine.GameObject _alternateLightPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__alternateLightPrefab();
    // public System.Void .ctor()
    // Offset: 0x1553AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightGroupElementsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightGroupElementsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightGroupElementsSpawner*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x1553A50
    void OnEnable();
  }; // LightGroupElementsSpawner
  #pragma pack(pop)
  static check_size<sizeof(LightGroupElementsSpawner), 48 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_LightGroupElementsSpawnerSizeCheck;
  static_assert(sizeof(LightGroupElementsSpawner) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightGroupElementsSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightGroupElementsSpawner::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroupElementsSpawner::*)()>(&GlobalNamespace::LightGroupElementsSpawner::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroupElementsSpawner*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
