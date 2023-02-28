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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLightWithId
  class TubeBloomPrePassLightWithId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightWithId*, "", "TubeBloomPrePassLightWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: TubeBloomPrePassLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class TubeBloomPrePassLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private System.Boolean _setOnlyOnce
    // Size: 0x1
    // Offset: 0x38
    bool setOnlyOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x39
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private TubeBloomPrePassLight _tubeBloomPrePassLight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TubeBloomPrePassLight*& dyn__tubeBloomPrePassLight();
    // Get instance field reference: private System.Boolean _setOnlyOnce
    [[deprecated("Use field access instead!")]] bool& dyn__setOnlyOnce();
    // Get instance field reference: private System.Boolean _setColorOnly
    [[deprecated("Use field access instead!")]] bool& dyn__setColorOnly();
    // public UnityEngine.Color get_color()
    // Offset: 0x2BB566C
    ::UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x2BB56F4
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeBloomPrePassLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TubeBloomPrePassLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeBloomPrePassLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x2BB568C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // TubeBloomPrePassLightWithId
  #pragma pack(pop)
  static check_size<sizeof(TubeBloomPrePassLightWithId), 57 + sizeof(bool)> __GlobalNamespace_TubeBloomPrePassLightWithIdSizeCheck;
  static_assert(sizeof(TubeBloomPrePassLightWithId) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::TubeBloomPrePassLightWithId::*)()>(&GlobalNamespace::TubeBloomPrePassLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLightWithId::*)(::UnityEngine::Color)>(&GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
