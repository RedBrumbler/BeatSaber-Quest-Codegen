// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SetSaberBladeParams
#include "GlobalNamespace/SetSaberBladeParams.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*, "", "SetSaberBladeParams/PropertyTintColorPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberBladeParams/PropertyTintColorPair
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSaberBladeParams::PropertyTintColorPair : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color tintColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.String property
    // Size: 0x8
    // Offset: 0x20
    ::StringW property;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Color tintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_tintColor();
    // Get instance field reference: public System.String property
    [[deprecated("Use field access instead!")]] ::StringW& dyn_property();
    // public System.Void .ctor()
    // Offset: 0x141C11C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberBladeParams::PropertyTintColorPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberBladeParams::PropertyTintColorPair*, creationType>()));
    }
  }; // SetSaberBladeParams/PropertyTintColorPair
  #pragma pack(pop)
  static check_size<sizeof(SetSaberBladeParams::PropertyTintColorPair), 32 + sizeof(::StringW)> __GlobalNamespace_SetSaberBladeParams_PropertyTintColorPairSizeCheck;
  static_assert(sizeof(SetSaberBladeParams::PropertyTintColorPair) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
