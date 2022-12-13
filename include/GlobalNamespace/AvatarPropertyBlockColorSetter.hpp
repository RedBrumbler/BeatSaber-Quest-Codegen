// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPropertyBlockColorSetter
  class AvatarPropertyBlockColorSetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPropertyBlockColorSetter*, "", "AvatarPropertyBlockColorSetter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPropertyBlockColorSetter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class AvatarPropertyBlockColorSetter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color _defaultColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color defaultColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _darkerColorMultiplier
    // Size: 0x4
    // Offset: 0x28
    float darkerColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _whiteBoost
    // Size: 0x4
    // Offset: 0x2C
    float whiteBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _editInPlayMode
    // Size: 0x1
    // Offset: 0x30
    bool editInPlayMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: editInPlayMode and: renderer
    char __padding3[0x7] = {};
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _rimLightColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color rimLightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _mainColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color mainColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _boostColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color boostColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x70
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1119230
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static ::UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private UnityEngine.Color _defaultColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__defaultColor();
    // Get instance field reference: private System.Single _darkerColorMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__darkerColorMultiplier();
    // Get instance field reference: private System.Single _whiteBoost
    [[deprecated("Use field access instead!")]] float& dyn__whiteBoost();
    // Get instance field reference: private System.Boolean _editInPlayMode
    [[deprecated("Use field access instead!")]] bool& dyn__editInPlayMode();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Color _rimLightColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__rimLightColor();
    // Get instance field reference: private UnityEngine.Color _mainColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__mainColor();
    // Get instance field reference: private UnityEngine.Color _boostColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__boostColor();
    // Get instance field reference: private System.Boolean _highlighted
    [[deprecated("Use field access instead!")]] bool& dyn__highlighted();
    // public System.Void .ctor()
    // Offset: 0x154CDA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPropertyBlockColorSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPropertyBlockColorSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPropertyBlockColorSetter*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x154CA78
    void Awake();
    // protected System.Void OnValidate()
    // Offset: 0x154CAB0
    void OnValidate();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x154CB80
    void SetColor(::UnityEngine::Color color);
    // private System.Void SetColors(UnityEngine.Color mainColor, UnityEngine.Color rimLightColor)
    // Offset: 0x154CC20
    void SetColors(::UnityEngine::Color mainColor, ::UnityEngine::Color rimLightColor);
    // public System.Void SetHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x154CD98
    void SetHighlight(bool highlighted, int uvSegment);
    // private System.Void UpdateRenderer()
    // Offset: 0x154CC34
    void UpdateRenderer();
  }; // AvatarPropertyBlockColorSetter
  #pragma pack(pop)
  static check_size<sizeof(AvatarPropertyBlockColorSetter), 112 + sizeof(bool)> __GlobalNamespace_AvatarPropertyBlockColorSetterSizeCheck;
  static_assert(sizeof(AvatarPropertyBlockColorSetter) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)()>(&GlobalNamespace::AvatarPropertyBlockColorSetter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)()>(&GlobalNamespace::AvatarPropertyBlockColorSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)(::UnityEngine::Color)>(&GlobalNamespace::AvatarPropertyBlockColorSetter::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&GlobalNamespace::AvatarPropertyBlockColorSetter::SetColors)> {
  static const MethodInfo* get() {
    static auto* mainColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* rimLightColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainColor, rimLightColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::SetHighlight
// Il2CppName: SetHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)(bool, int)>(&GlobalNamespace::AvatarPropertyBlockColorSetter::SetHighlight)> {
  static const MethodInfo* get() {
    static auto* highlighted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uvSegment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "SetHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlighted, uvSegment});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPropertyBlockColorSetter::UpdateRenderer
// Il2CppName: UpdateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPropertyBlockColorSetter::*)()>(&GlobalNamespace::AvatarPropertyBlockColorSetter::UpdateRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPropertyBlockColorSetter*), "UpdateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
