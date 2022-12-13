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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterMaterialSwitcher
  class BTSCharacterMaterialSwitcher;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSCharacter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacter
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1114498
  // [RequireComponent] Offset: 1114498
  class BTSCharacter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String _characterName
    // Size: 0x8
    // Offset: 0x18
    ::StringW characterName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [SpaceAttribute] Offset: 0x1116B14
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private BTSCharacterMaterialSwitcher _btsCharacterMaterialSwitcher
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BTSCharacterMaterialSwitcher* btsCharacterMaterialSwitcher;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BTSCharacterMaterialSwitcher*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _characterName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__characterName();
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private BTSCharacterMaterialSwitcher _btsCharacterMaterialSwitcher
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BTSCharacterMaterialSwitcher*& dyn__btsCharacterMaterialSwitcher();
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private UnityEngine.Transform _headTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__headTransform();
    // public System.String get_characterName()
    // Offset: 0x154FAC8
    ::StringW get_characterName();
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x154FAD0
    ::GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public UnityEngine.Animator get_animator()
    // Offset: 0x154FAD8
    ::UnityEngine::Animator* get_animator();
    // public UnityEngine.Transform get_headTransform()
    // Offset: 0x154FAE0
    ::UnityEngine::Transform* get_headTransform();
    // public System.Void .ctor()
    // Offset: 0x154FEB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacter*, creationType>()));
    }
    // public System.Void SetAlternativeAnimationAndMaterial(UnityEngine.AnimationClip animation, System.Boolean alternativeMaterialOn)
    // Offset: 0x154FAE8
    void SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);
  }; // BTSCharacter
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacter), 56 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_BTSCharacterSizeCheck;
  static_assert(sizeof(BTSCharacter) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_characterName
// Il2CppName: get_characterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_characterName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_characterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_materialPropertyBlockController
// Il2CppName: get_materialPropertyBlockController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MaterialPropertyBlockController* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_materialPropertyBlockController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_materialPropertyBlockController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_animator
// Il2CppName: get_animator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animator* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_animator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_animator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_headTransform
// Il2CppName: get_headTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_headTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_headTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial
// Il2CppName: SetAlternativeAnimationAndMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacter::*)(::UnityEngine::AnimationClip*, bool)>(&GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* alternativeMaterialOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "SetAlternativeAnimationAndMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, alternativeMaterialOn});
  }
};
