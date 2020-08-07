// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: ShaderVariantsSO/ShaderVariant
#include "GlobalNamespace/ShaderVariantsSO_ShaderVariant.hpp"
// Including type: UnityEngine.Rendering.PassType
#include "UnityEngine/Rendering/PassType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderVariantsSO/ShaderVariant/Variant
  class ShaderVariantsSO::ShaderVariant::Variant : public ::Il2CppObject {
    public:
    // private UnityEngine.Rendering.PassType _passType
    // Offset: 0x10
    UnityEngine::Rendering::PassType passType;
    // private System.String _keywords
    // Offset: 0x18
    ::Il2CppString* keywords;
    // public UnityEngine.Rendering.PassType get_passType()
    // Offset: 0x18FB898
    UnityEngine::Rendering::PassType get_passType();
    // public System.String get_keywords()
    // Offset: 0x18FB8A0
    ::Il2CppString* get_keywords();
    // public System.Void .ctor(UnityEngine.Rendering.PassType passType, System.String keywords)
    // Offset: 0x18FB8A8
    static ShaderVariantsSO::ShaderVariant::Variant* New_ctor(UnityEngine::Rendering::PassType passType, ::Il2CppString* keywords);
  }; // ShaderVariantsSO/ShaderVariant/Variant
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*, "", "ShaderVariantsSO/ShaderVariant/Variant");
#pragma pack(pop)