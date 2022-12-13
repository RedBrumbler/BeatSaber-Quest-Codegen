// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: DetailRenderMode
  struct DetailRenderMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DetailPrototype
  class DetailPrototype;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DetailPrototype*, "UnityEngine", "DetailPrototype");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.DetailPrototype
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10C1808
  class DetailPrototype : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.GameObject m_Prototype
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* m_Prototype;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // UnityEngine.Texture2D m_PrototypeTexture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* m_PrototypeTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // UnityEngine.Color m_HealthyColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color m_HealthyColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // UnityEngine.Color m_DryColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color m_DryColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // System.Single m_MinWidth
    // Size: 0x4
    // Offset: 0x40
    float m_MinWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_MaxWidth
    // Size: 0x4
    // Offset: 0x44
    float m_MaxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_MinHeight
    // Size: 0x4
    // Offset: 0x48
    float m_MinHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_MaxHeight
    // Size: 0x4
    // Offset: 0x4C
    float m_MaxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_NoiseSpread
    // Size: 0x4
    // Offset: 0x50
    float m_NoiseSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_BendFactor
    // Size: 0x4
    // Offset: 0x54
    float m_BendFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_RenderMode
    // Size: 0x4
    // Offset: 0x58
    int m_RenderMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_UsePrototypeMesh
    // Size: 0x4
    // Offset: 0x5C
    int m_UsePrototypeMesh;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: UnityEngine.GameObject m_Prototype
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_Prototype();
    // Get instance field reference: UnityEngine.Texture2D m_PrototypeTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_m_PrototypeTexture();
    // Get instance field reference: UnityEngine.Color m_HealthyColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_HealthyColor();
    // Get instance field reference: UnityEngine.Color m_DryColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_DryColor();
    // Get instance field reference: System.Single m_MinWidth
    [[deprecated("Use field access instead!")]] float& dyn_m_MinWidth();
    // Get instance field reference: System.Single m_MaxWidth
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxWidth();
    // Get instance field reference: System.Single m_MinHeight
    [[deprecated("Use field access instead!")]] float& dyn_m_MinHeight();
    // Get instance field reference: System.Single m_MaxHeight
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxHeight();
    // Get instance field reference: System.Single m_NoiseSpread
    [[deprecated("Use field access instead!")]] float& dyn_m_NoiseSpread();
    // Get instance field reference: System.Single m_BendFactor
    [[deprecated("Use field access instead!")]] float& dyn_m_BendFactor();
    // Get instance field reference: System.Int32 m_RenderMode
    [[deprecated("Use field access instead!")]] int& dyn_m_RenderMode();
    // Get instance field reference: System.Int32 m_UsePrototypeMesh
    [[deprecated("Use field access instead!")]] int& dyn_m_UsePrototypeMesh();
    // public System.Void set_prototype(UnityEngine.GameObject value)
    // Offset: 0x2B5EB0C
    void set_prototype(::UnityEngine::GameObject* value);
    // public System.Void set_prototypeTexture(UnityEngine.Texture2D value)
    // Offset: 0x2B5EB14
    void set_prototypeTexture(::UnityEngine::Texture2D* value);
    // public System.Single get_minWidth()
    // Offset: 0x2B5EB1C
    float get_minWidth();
    // public System.Void set_minWidth(System.Single value)
    // Offset: 0x2B5EB24
    void set_minWidth(float value);
    // public System.Single get_maxWidth()
    // Offset: 0x2B5EB2C
    float get_maxWidth();
    // public System.Void set_maxWidth(System.Single value)
    // Offset: 0x2B5EB34
    void set_maxWidth(float value);
    // public System.Single get_minHeight()
    // Offset: 0x2B5EB3C
    float get_minHeight();
    // public System.Void set_minHeight(System.Single value)
    // Offset: 0x2B5EB44
    void set_minHeight(float value);
    // public System.Single get_maxHeight()
    // Offset: 0x2B5EB4C
    float get_maxHeight();
    // public System.Void set_maxHeight(System.Single value)
    // Offset: 0x2B5EB54
    void set_maxHeight(float value);
    // public System.Single get_noiseSpread()
    // Offset: 0x2B5EB5C
    float get_noiseSpread();
    // public System.Void set_noiseSpread(System.Single value)
    // Offset: 0x2B5EB64
    void set_noiseSpread(float value);
    // public System.Single get_bendFactor()
    // Offset: 0x2B5EB6C
    float get_bendFactor();
    // public System.Void set_bendFactor(System.Single value)
    // Offset: 0x2B5EB74
    void set_bendFactor(float value);
    // public UnityEngine.Color get_healthyColor()
    // Offset: 0x2B5EB7C
    ::UnityEngine::Color get_healthyColor();
    // public System.Void set_healthyColor(UnityEngine.Color value)
    // Offset: 0x2B5EB88
    void set_healthyColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_dryColor()
    // Offset: 0x2B5EB94
    ::UnityEngine::Color get_dryColor();
    // public System.Void set_dryColor(UnityEngine.Color value)
    // Offset: 0x2B5EBA0
    void set_dryColor(::UnityEngine::Color value);
    // public UnityEngine.DetailRenderMode get_renderMode()
    // Offset: 0x2B5EBAC
    ::UnityEngine::DetailRenderMode get_renderMode();
    // public System.Void set_renderMode(UnityEngine.DetailRenderMode value)
    // Offset: 0x2B5EBB4
    void set_renderMode(::UnityEngine::DetailRenderMode value);
    // public System.Void set_usePrototypeMesh(System.Boolean value)
    // Offset: 0x2B5EBBC
    void set_usePrototypeMesh(bool value);
    // public System.Void .ctor()
    // Offset: 0x2B5EBD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DetailPrototype* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::DetailPrototype::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DetailPrototype*, creationType>()));
    }
    // private System.Boolean Equals(UnityEngine.DetailPrototype other)
    // Offset: 0x2B5ED1C
    bool Equals(::UnityEngine::DetailPrototype* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B5ECA8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B5EED8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.DetailPrototype
  #pragma pack(pop)
  static check_size<sizeof(DetailPrototype), 92 + sizeof(int)> __UnityEngine_DetailPrototypeSizeCheck;
  static_assert(sizeof(DetailPrototype) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_prototype
// Il2CppName: set_prototype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(::UnityEngine::GameObject*)>(&UnityEngine::DetailPrototype::set_prototype)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_prototype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_prototypeTexture
// Il2CppName: set_prototypeTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(::UnityEngine::Texture2D*)>(&UnityEngine::DetailPrototype::set_prototypeTexture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_prototypeTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_minWidth
// Il2CppName: get_minWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_minWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_minWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_minWidth
// Il2CppName: set_minWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_minWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_minWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_maxWidth
// Il2CppName: get_maxWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_maxWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_maxWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_maxWidth
// Il2CppName: set_maxWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_maxWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_maxWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_minHeight
// Il2CppName: get_minHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_minHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_minHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_minHeight
// Il2CppName: set_minHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_minHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_minHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_maxHeight
// Il2CppName: get_maxHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_maxHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_maxHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_maxHeight
// Il2CppName: set_maxHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_maxHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_maxHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_noiseSpread
// Il2CppName: get_noiseSpread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_noiseSpread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_noiseSpread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_noiseSpread
// Il2CppName: set_noiseSpread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_noiseSpread)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_noiseSpread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_bendFactor
// Il2CppName: get_bendFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_bendFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_bendFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_bendFactor
// Il2CppName: set_bendFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(float)>(&UnityEngine::DetailPrototype::set_bendFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_bendFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_healthyColor
// Il2CppName: get_healthyColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_healthyColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_healthyColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_healthyColor
// Il2CppName: set_healthyColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(::UnityEngine::Color)>(&UnityEngine::DetailPrototype::set_healthyColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_healthyColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_dryColor
// Il2CppName: get_dryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_dryColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_dryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_dryColor
// Il2CppName: set_dryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(::UnityEngine::Color)>(&UnityEngine::DetailPrototype::set_dryColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_dryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::get_renderMode
// Il2CppName: get_renderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DetailRenderMode (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::get_renderMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "get_renderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_renderMode
// Il2CppName: set_renderMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(::UnityEngine::DetailRenderMode)>(&UnityEngine::DetailPrototype::set_renderMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "DetailRenderMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_renderMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::set_usePrototypeMesh
// Il2CppName: set_usePrototypeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DetailPrototype::*)(bool)>(&UnityEngine::DetailPrototype::set_usePrototypeMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "set_usePrototypeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::DetailPrototype::*)(::UnityEngine::DetailPrototype*)>(&UnityEngine::DetailPrototype::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "DetailPrototype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::DetailPrototype::*)(::Il2CppObject*)>(&UnityEngine::DetailPrototype::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::DetailPrototype::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::DetailPrototype::*)()>(&UnityEngine::DetailPrototype::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DetailPrototype*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
