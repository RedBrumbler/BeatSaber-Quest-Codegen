// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSO*, "", "ColorSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ColorSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // public UnityEngine.Color get_color()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Color get_color();
    // protected System.Void .ctor()
    // Offset: 0x2B9E25C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSO*, creationType>()));
    }
  }; // ColorSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSO::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorSO::*)()>(&GlobalNamespace::ColorSO::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSO*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
