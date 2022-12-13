// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuLightsPresetSO::LightIdColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*, "", "MenuLightsPresetSO/LightIdColorPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MenuLightsPresetSO/LightIdColorPair
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuLightsPresetSO::LightIdColorPair : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lightId and: baseColor
    char __padding0[0x4] = {};
    // public ColorSO baseColor
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSO* baseColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // [RangeAttribute] Offset: 0x1130C60
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x20
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 lightId
    [[deprecated("Use field access instead!")]] int& dyn_lightId();
    // Get instance field reference: public ColorSO baseColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn_baseColor();
    // Get instance field reference: public System.Single intensity
    [[deprecated("Use field access instead!")]] float& dyn_intensity();
    // public UnityEngine.Color get_lightColor()
    // Offset: 0x134D4DC
    ::UnityEngine::Color get_lightColor();
    // public System.Void .ctor()
    // Offset: 0x134D81C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuLightsPresetSO::LightIdColorPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuLightsPresetSO::LightIdColorPair*, creationType>()));
    }
  }; // MenuLightsPresetSO/LightIdColorPair
  #pragma pack(pop)
  static check_size<sizeof(MenuLightsPresetSO::LightIdColorPair), 32 + sizeof(float)> __GlobalNamespace_MenuLightsPresetSO_LightIdColorPairSizeCheck;
  static_assert(sizeof(MenuLightsPresetSO::LightIdColorPair) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::get_lightColor
// Il2CppName: get_lightColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::*)()>(&GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::get_lightColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*), "get_lightColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::LightIdColorPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
