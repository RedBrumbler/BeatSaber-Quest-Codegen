// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainLayer
  class TerrainLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainLayer*, "UnityEngine", "TerrainLayer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TerrainLayer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10C1828
  // [UsedByNativeCodeAttribute] Offset: 10C1828
  // [NativeHeaderAttribute] Offset: 10C1828
  class TerrainLayer : public ::UnityEngine::Object {
    public:
    // public UnityEngine.Texture2D get_diffuseTexture()
    // Offset: 0x2B63A98
    ::UnityEngine::Texture2D* get_diffuseTexture();
    // public System.Void set_diffuseTexture(UnityEngine.Texture2D value)
    // Offset: 0x2B63AD8
    void set_diffuseTexture(::UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_normalMapTexture()
    // Offset: 0x2B63B28
    ::UnityEngine::Texture2D* get_normalMapTexture();
    // public System.Void set_normalMapTexture(UnityEngine.Texture2D value)
    // Offset: 0x2B63B68
    void set_normalMapTexture(::UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_maskMapTexture()
    // Offset: 0x2B63BB8
    ::UnityEngine::Texture2D* get_maskMapTexture();
    // public System.Void set_maskMapTexture(UnityEngine.Texture2D value)
    // Offset: 0x2B63BF8
    void set_maskMapTexture(::UnityEngine::Texture2D* value);
    // public UnityEngine.Vector2 get_tileSize()
    // Offset: 0x2B63C48
    ::UnityEngine::Vector2 get_tileSize();
    // public System.Void set_tileSize(UnityEngine.Vector2 value)
    // Offset: 0x2B63CF0
    void set_tileSize(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_tileOffset()
    // Offset: 0x2B63D94
    ::UnityEngine::Vector2 get_tileOffset();
    // public System.Void set_tileOffset(UnityEngine.Vector2 value)
    // Offset: 0x2B63E3C
    void set_tileOffset(::UnityEngine::Vector2 value);
    // public UnityEngine.Color get_specular()
    // Offset: 0x2B63EE0
    ::UnityEngine::Color get_specular();
    // public System.Void set_specular(UnityEngine.Color value)
    // Offset: 0x2B63F8C
    void set_specular(::UnityEngine::Color value);
    // public System.Single get_metallic()
    // Offset: 0x2B64034
    float get_metallic();
    // public System.Void set_metallic(System.Single value)
    // Offset: 0x2B64074
    void set_metallic(float value);
    // public System.Single get_smoothness()
    // Offset: 0x2B640C4
    float get_smoothness();
    // public System.Void set_smoothness(System.Single value)
    // Offset: 0x2B64104
    void set_smoothness(float value);
    // public System.Void set_normalScale(System.Single value)
    // Offset: 0x2B64154
    void set_normalScale(float value);
    // public System.Void set_diffuseRemapMin(UnityEngine.Vector4 value)
    // Offset: 0x2B641A4
    void set_diffuseRemapMin(::UnityEngine::Vector4 value);
    // public System.Void set_diffuseRemapMax(UnityEngine.Vector4 value)
    // Offset: 0x2B6424C
    void set_diffuseRemapMax(::UnityEngine::Vector4 value);
    // public System.Void set_maskMapRemapMin(UnityEngine.Vector4 value)
    // Offset: 0x2B642F4
    void set_maskMapRemapMin(::UnityEngine::Vector4 value);
    // public System.Void set_maskMapRemapMax(UnityEngine.Vector4 value)
    // Offset: 0x2B6439C
    void set_maskMapRemapMax(::UnityEngine::Vector4 value);
    // public System.Void .ctor()
    // Offset: 0x2B639C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TerrainLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainLayer*, creationType>()));
    }
    // static private System.Void Internal_Create(UnityEngine.TerrainLayer layer)
    // Offset: 0x2B63A58
    static void Internal_Create(::UnityEngine::TerrainLayer* layer);
    // private System.Void get_tileSize_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x2B63CA0
    void get_tileSize_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_tileSize_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x2B63D44
    void set_tileSize_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_tileOffset_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x2B63DEC
    void get_tileOffset_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_tileOffset_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x2B63E90
    void set_tileOffset_Injected(ByRef<::UnityEngine::Vector2> value);
    // private System.Void get_specular_Injected(out UnityEngine.Color ret)
    // Offset: 0x2B63F3C
    void get_specular_Injected(ByRef<::UnityEngine::Color> ret);
    // private System.Void set_specular_Injected(ref UnityEngine.Color value)
    // Offset: 0x2B63FE4
    void set_specular_Injected(ByRef<::UnityEngine::Color> value);
    // private System.Void set_diffuseRemapMin_Injected(ref UnityEngine.Vector4 value)
    // Offset: 0x2B641FC
    void set_diffuseRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);
    // private System.Void set_diffuseRemapMax_Injected(ref UnityEngine.Vector4 value)
    // Offset: 0x2B642A4
    void set_diffuseRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);
    // private System.Void set_maskMapRemapMin_Injected(ref UnityEngine.Vector4 value)
    // Offset: 0x2B6434C
    void set_maskMapRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);
    // private System.Void set_maskMapRemapMax_Injected(ref UnityEngine.Vector4 value)
    // Offset: 0x2B643F4
    void set_maskMapRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);
  }; // UnityEngine.TerrainLayer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_diffuseTexture
// Il2CppName: get_diffuseTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_diffuseTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_diffuseTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_diffuseTexture
// Il2CppName: set_diffuseTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Texture2D*)>(&UnityEngine::TerrainLayer::set_diffuseTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_diffuseTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_normalMapTexture
// Il2CppName: get_normalMapTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_normalMapTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_normalMapTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_normalMapTexture
// Il2CppName: set_normalMapTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Texture2D*)>(&UnityEngine::TerrainLayer::set_normalMapTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_normalMapTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_maskMapTexture
// Il2CppName: get_maskMapTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_maskMapTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_maskMapTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_maskMapTexture
// Il2CppName: set_maskMapTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Texture2D*)>(&UnityEngine::TerrainLayer::set_maskMapTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_maskMapTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_tileSize
// Il2CppName: get_tileSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_tileSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_tileSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_tileSize
// Il2CppName: set_tileSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector2)>(&UnityEngine::TerrainLayer::set_tileSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_tileSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_tileOffset
// Il2CppName: get_tileOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_tileOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_tileOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_tileOffset
// Il2CppName: set_tileOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector2)>(&UnityEngine::TerrainLayer::set_tileOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_tileOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_specular
// Il2CppName: get_specular
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_specular)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_specular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_specular
// Il2CppName: set_specular
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Color)>(&UnityEngine::TerrainLayer::set_specular)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_specular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_metallic
// Il2CppName: get_metallic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_metallic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_metallic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_metallic
// Il2CppName: set_metallic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(float)>(&UnityEngine::TerrainLayer::set_metallic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_metallic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_smoothness
// Il2CppName: get_smoothness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TerrainLayer::*)()>(&UnityEngine::TerrainLayer::get_smoothness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_smoothness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_smoothness
// Il2CppName: set_smoothness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(float)>(&UnityEngine::TerrainLayer::set_smoothness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_smoothness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_normalScale
// Il2CppName: set_normalScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(float)>(&UnityEngine::TerrainLayer::set_normalScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_normalScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_diffuseRemapMin
// Il2CppName: set_diffuseRemapMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector4)>(&UnityEngine::TerrainLayer::set_diffuseRemapMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_diffuseRemapMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_diffuseRemapMax
// Il2CppName: set_diffuseRemapMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector4)>(&UnityEngine::TerrainLayer::set_diffuseRemapMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_diffuseRemapMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_maskMapRemapMin
// Il2CppName: set_maskMapRemapMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector4)>(&UnityEngine::TerrainLayer::set_maskMapRemapMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_maskMapRemapMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_maskMapRemapMax
// Il2CppName: set_maskMapRemapMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(::UnityEngine::Vector4)>(&UnityEngine::TerrainLayer::set_maskMapRemapMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_maskMapRemapMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainLayer*)>(&UnityEngine::TerrainLayer::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_tileSize_Injected
// Il2CppName: get_tileSize_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::TerrainLayer::get_tileSize_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_tileSize_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_tileSize_Injected
// Il2CppName: set_tileSize_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::TerrainLayer::set_tileSize_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_tileSize_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_tileOffset_Injected
// Il2CppName: get_tileOffset_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::TerrainLayer::get_tileOffset_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_tileOffset_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_tileOffset_Injected
// Il2CppName: set_tileOffset_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::TerrainLayer::set_tileOffset_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_tileOffset_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::get_specular_Injected
// Il2CppName: get_specular_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::TerrainLayer::get_specular_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "get_specular_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_specular_Injected
// Il2CppName: set_specular_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::TerrainLayer::set_specular_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_specular_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_diffuseRemapMin_Injected
// Il2CppName: set_diffuseRemapMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::TerrainLayer::set_diffuseRemapMin_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_diffuseRemapMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_diffuseRemapMax_Injected
// Il2CppName: set_diffuseRemapMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::TerrainLayer::set_diffuseRemapMax_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_diffuseRemapMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_maskMapRemapMin_Injected
// Il2CppName: set_maskMapRemapMin_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::TerrainLayer::set_maskMapRemapMin_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_maskMapRemapMin_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainLayer::set_maskMapRemapMax_Injected
// Il2CppName: set_maskMapRemapMax_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainLayer::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::TerrainLayer::set_maskMapRemapMax_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainLayer*), "set_maskMapRemapMax_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
