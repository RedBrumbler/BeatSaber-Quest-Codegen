// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorArrayLightWithIds
  class ColorArrayLightWithIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIds*, "", "ColorArrayLightWithIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ColorArrayLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorArrayLightWithIds : public ::GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    // Nested type: ::GlobalNamespace::ColorArrayLightWithIds::ColorArrayLightWithId
    class ColorArrayLightWithId;
    public:
    // private ColorArrayLightWithIds/ColorArrayLightWithId[] _colorArrayLightWithIds
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::ColorArrayLightWithIds::ColorArrayLightWithId*> colorArrayLightWithIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ColorArrayLightWithIds::ColorArrayLightWithId*>) == 0x8);
    // [SpaceAttribute] Offset: 0x110AE24
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private System.String _colorsArrayPropertyName
    // Size: 0x8
    // Offset: 0x40
    ::StringW colorsArrayPropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _colorsPropertyId
    // Size: 0x4
    // Offset: 0x48
    int colorsPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: colorsPropertyId and: colorsArray
    char __padding3[0x4] = {};
    // private UnityEngine.Vector4[] _colorsArray
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector4> colorsArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    public:
    // Get instance field reference: private ColorArrayLightWithIds/ColorArrayLightWithId[] _colorArrayLightWithIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ColorArrayLightWithIds::ColorArrayLightWithId*>& dyn__colorArrayLightWithIds();
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private System.String _colorsArrayPropertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__colorsArrayPropertyName();
    // Get instance field reference: private System.Int32 _colorsPropertyId
    [[deprecated("Use field access instead!")]] int& dyn__colorsPropertyId();
    // Get instance field reference: private UnityEngine.Vector4[] _colorsArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__colorsArray();
    // protected System.Void OnDestroy()
    // Offset: 0x1CE5E4C
    void OnDestroy();
    // private System.Void HandleColorLightWithIdDidSetColor(System.Int32 index, UnityEngine.Color color)
    // Offset: 0x1CE5F88
    void HandleColorLightWithIdDidSetColor(int index, ::UnityEngine::Color color);
    // private System.Void SetColorDataToShader()
    // Offset: 0x1CE5F38
    void SetColorDataToShader();
    // private System.Void RegisterArrayForColorChanges()
    // Offset: 0x1CE5CDC
    void RegisterArrayForColorChanges();
    // private System.Void UnregisterArrayFromColorChanges()
    // Offset: 0x1CE5E50
    void UnregisterArrayFromColorChanges();
    // public System.Void .ctor()
    // Offset: 0x1CE6364
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorArrayLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorArrayLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorArrayLightWithIds*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1CE5CB4
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::OnEnable()
    void OnEnable();
    // protected override System.Void ProcessNewColorData()
    // Offset: 0x1CE5F34
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::ProcessNewColorData()
    void ProcessNewColorData();
    // protected override System.Collections.Generic.IEnumerable`1<LightWithIds/LightWithId> GetLightWithIds()
    // Offset: 0x1CE5F80
    // Implemented from: LightWithIds
    // Base method: System.Collections.Generic.IEnumerable`1<LightWithIds/LightWithId> LightWithIds::GetLightWithIds()
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds::LightWithId*>* GetLightWithIds();
  }; // ColorArrayLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(ColorArrayLightWithIds), 80 + sizeof(::ArrayW<::UnityEngine::Vector4>)> __GlobalNamespace_ColorArrayLightWithIdsSizeCheck;
  static_assert(sizeof(ColorArrayLightWithIds) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::HandleColorLightWithIdDidSetColor
// Il2CppName: HandleColorLightWithIdDidSetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)(int, ::UnityEngine::Color)>(&GlobalNamespace::ColorArrayLightWithIds::HandleColorLightWithIdDidSetColor)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "HandleColorLightWithIdDidSetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::SetColorDataToShader
// Il2CppName: SetColorDataToShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::SetColorDataToShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "SetColorDataToShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::RegisterArrayForColorChanges
// Il2CppName: RegisterArrayForColorChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::RegisterArrayForColorChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "RegisterArrayForColorChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::UnregisterArrayFromColorChanges
// Il2CppName: UnregisterArrayFromColorChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::UnregisterArrayFromColorChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "UnregisterArrayFromColorChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::ProcessNewColorData
// Il2CppName: ProcessNewColorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::ProcessNewColorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "ProcessNewColorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorArrayLightWithIds::GetLightWithIds
// Il2CppName: GetLightWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds::LightWithId*>* (GlobalNamespace::ColorArrayLightWithIds::*)()>(&GlobalNamespace::ColorArrayLightWithIds::GetLightWithIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorArrayLightWithIds*), "GetLightWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
