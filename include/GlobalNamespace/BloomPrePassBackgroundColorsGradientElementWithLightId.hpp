// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradientElementWithLightId
  class BloomPrePassBackgroundColorsGradientElementWithLightId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientElementWithLightId
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientElementWithLightId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements
    class Elements;
    public:
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // private BloomPrePassBackgroundColorsGradientElementWithLightId/Elements[] _elements
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*> elements;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>) == 0x8);
    public:
    // Get instance field reference: private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& dyn__bloomPrePassBackgroundColorsGradient();
    // Get instance field reference: private BloomPrePassBackgroundColorsGradientElementWithLightId/Elements[] _elements
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>& dyn__elements();
    // public System.Void .ctor()
    // Offset: 0x1CD0824
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientElementWithLightId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientElementWithLightId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1CD0640
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // BloomPrePassBackgroundColorsGradientElementWithLightId
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId), 56 + sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::Elements*>)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientElementWithLightIdSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientElementWithLightId) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
