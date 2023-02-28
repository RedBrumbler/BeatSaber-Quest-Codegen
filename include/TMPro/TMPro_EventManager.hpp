// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: FastAction`2<A, B>
  template<typename A, typename B>
  class FastAction_2;
  // Forward declaring type: Compute_DT_EventArgs
  class Compute_DT_EventArgs;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: FastAction`3<A, B, C>
  template<typename A, typename B, typename C>
  class FastAction_3;
  // Forward declaring type: FastAction`1<A>
  template<typename A>
  class FastAction_1;
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
  // Forward declaring type: FastAction
  class FastAction;
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMPro_EventManager
  class TMPro_EventManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMPro_EventManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMPro_EventManager*, "TMPro", "TMPro_EventManager");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMPro_EventManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TMPro_EventManager : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> COMPUTE_DT_EVENT
    static ::TMPro::FastAction_2<::Il2CppObject*, ::TMPro::Compute_DT_EventArgs*>* _get_COMPUTE_DT_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> COMPUTE_DT_EVENT
    static void _set_COMPUTE_DT_EVENT(::TMPro::FastAction_2<::Il2CppObject*, ::TMPro::Compute_DT_EventArgs*>* value);
    // Get static field: static public readonly TMPro.FastAction`2<System.Boolean,UnityEngine.Material> MATERIAL_PROPERTY_EVENT
    static ::TMPro::FastAction_2<bool, ::UnityEngine::Material*>* _get_MATERIAL_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Boolean,UnityEngine.Material> MATERIAL_PROPERTY_EVENT
    static void _set_MATERIAL_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityEngine::Material*>* value);
    // Get static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TMP_FontAsset> FONT_PROPERTY_EVENT
    static ::TMPro::FastAction_2<bool, ::TMPro::TMP_FontAsset*>* _get_FONT_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TMP_FontAsset> FONT_PROPERTY_EVENT
    static void _set_FONT_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::TMPro::TMP_FontAsset*>* value);
    // Get static field: static public readonly TMPro.FastAction`2<System.Boolean,UnityEngine.Object> SPRITE_ASSET_PROPERTY_EVENT
    static ::TMPro::FastAction_2<bool, ::UnityEngine::Object*>* _get_SPRITE_ASSET_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Boolean,UnityEngine.Object> SPRITE_ASSET_PROPERTY_EVENT
    static void _set_SPRITE_ASSET_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityEngine::Object*>* value);
    // Get static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TextMeshPro> TEXTMESHPRO_PROPERTY_EVENT
    static ::TMPro::FastAction_2<bool, ::TMPro::TextMeshPro*>* _get_TEXTMESHPRO_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TextMeshPro> TEXTMESHPRO_PROPERTY_EVENT
    static void _set_TEXTMESHPRO_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::TMPro::TextMeshPro*>* value);
    // Get static field: static public readonly TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> DRAG_AND_DROP_MATERIAL_EVENT
    static ::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>* _get_DRAG_AND_DROP_MATERIAL_EVENT();
    // Set static field: static public readonly TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> DRAG_AND_DROP_MATERIAL_EVENT
    static void _set_DRAG_AND_DROP_MATERIAL_EVENT(::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>* value);
    // Get static field: static public readonly TMPro.FastAction`1<System.Boolean> TEXT_STYLE_PROPERTY_EVENT
    static ::TMPro::FastAction_1<bool>* _get_TEXT_STYLE_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`1<System.Boolean> TEXT_STYLE_PROPERTY_EVENT
    static void _set_TEXT_STYLE_PROPERTY_EVENT(::TMPro::FastAction_1<bool>* value);
    // Get static field: static public readonly TMPro.FastAction`1<TMPro.TMP_ColorGradient> COLOR_GRADIENT_PROPERTY_EVENT
    static ::TMPro::FastAction_1<::TMPro::TMP_ColorGradient*>* _get_COLOR_GRADIENT_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`1<TMPro.TMP_ColorGradient> COLOR_GRADIENT_PROPERTY_EVENT
    static void _set_COLOR_GRADIENT_PROPERTY_EVENT(::TMPro::FastAction_1<::TMPro::TMP_ColorGradient*>* value);
    // Get static field: static public readonly TMPro.FastAction TMP_SETTINGS_PROPERTY_EVENT
    static ::TMPro::FastAction* _get_TMP_SETTINGS_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction TMP_SETTINGS_PROPERTY_EVENT
    static void _set_TMP_SETTINGS_PROPERTY_EVENT(::TMPro::FastAction* value);
    // Get static field: static public readonly TMPro.FastAction RESOURCE_LOAD_EVENT
    static ::TMPro::FastAction* _get_RESOURCE_LOAD_EVENT();
    // Set static field: static public readonly TMPro.FastAction RESOURCE_LOAD_EVENT
    static void _set_RESOURCE_LOAD_EVENT(::TMPro::FastAction* value);
    // Get static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TextMeshProUGUI> TEXTMESHPRO_UGUI_PROPERTY_EVENT
    static ::TMPro::FastAction_2<bool, ::TMPro::TextMeshProUGUI*>* _get_TEXTMESHPRO_UGUI_PROPERTY_EVENT();
    // Set static field: static public readonly TMPro.FastAction`2<System.Boolean,TMPro.TextMeshProUGUI> TEXTMESHPRO_UGUI_PROPERTY_EVENT
    static void _set_TEXTMESHPRO_UGUI_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::TMPro::TextMeshProUGUI*>* value);
    // Get static field: static public readonly TMPro.FastAction OnPreRenderObject_Event
    static ::TMPro::FastAction* _get_OnPreRenderObject_Event();
    // Set static field: static public readonly TMPro.FastAction OnPreRenderObject_Event
    static void _set_OnPreRenderObject_Event(::TMPro::FastAction* value);
    // Get static field: static public readonly TMPro.FastAction`1<UnityEngine.Object> TEXT_CHANGED_EVENT
    static ::TMPro::FastAction_1<::UnityEngine::Object*>* _get_TEXT_CHANGED_EVENT();
    // Set static field: static public readonly TMPro.FastAction`1<UnityEngine.Object> TEXT_CHANGED_EVENT
    static void _set_TEXT_CHANGED_EVENT(::TMPro::FastAction_1<::UnityEngine::Object*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1959D38
    static void _cctor();
    // static public System.Void ON_PRE_RENDER_OBJECT_CHANGED()
    // Offset: 0x195963C
    static void ON_PRE_RENDER_OBJECT_CHANGED();
    // static public System.Void ON_MATERIAL_PROPERTY_CHANGED(System.Boolean isChanged, UnityEngine.Material mat)
    // Offset: 0x19596B0
    static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Material* mat);
    // static public System.Void ON_FONT_PROPERTY_CHANGED(System.Boolean isChanged, TMPro.TMP_FontAsset font)
    // Offset: 0x1959744
    static void ON_FONT_PROPERTY_CHANGED(bool isChanged, ::TMPro::TMP_FontAsset* font);
    // static public System.Void ON_SPRITE_ASSET_PROPERTY_CHANGED(System.Boolean isChanged, UnityEngine.Object obj)
    // Offset: 0x19597D8
    static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* obj);
    // static public System.Void ON_TEXTMESHPRO_PROPERTY_CHANGED(System.Boolean isChanged, TMPro.TextMeshPro obj)
    // Offset: 0x195986C
    static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, ::TMPro::TextMeshPro* obj);
    // static public System.Void ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine.GameObject sender, UnityEngine.Material currentMaterial, UnityEngine.Material newMaterial)
    // Offset: 0x1959900
    static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(::UnityEngine::GameObject* sender, ::UnityEngine::Material* currentMaterial, ::UnityEngine::Material* newMaterial);
    // static public System.Void ON_TEXT_STYLE_PROPERTY_CHANGED(System.Boolean isChanged)
    // Offset: 0x195999C
    static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged);
    // static public System.Void ON_COLOR_GRAIDENT_PROPERTY_CHANGED(TMPro.TMP_ColorGradient gradient)
    // Offset: 0x1959A20
    static void ON_COLOR_GRAIDENT_PROPERTY_CHANGED(::TMPro::TMP_ColorGradient* gradient);
    // static public System.Void ON_TEXT_CHANGED(UnityEngine.Object obj)
    // Offset: 0x1959AA4
    static void ON_TEXT_CHANGED(::UnityEngine::Object* obj);
    // static public System.Void ON_TMP_SETTINGS_CHANGED()
    // Offset: 0x1959B28
    static void ON_TMP_SETTINGS_CHANGED();
    // static public System.Void ON_RESOURCES_LOADED()
    // Offset: 0x1959B9C
    static void ON_RESOURCES_LOADED();
    // static public System.Void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(System.Boolean isChanged, TMPro.TextMeshProUGUI obj)
    // Offset: 0x1959C10
    static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, ::TMPro::TextMeshProUGUI* obj);
    // static public System.Void ON_COMPUTE_DT_EVENT(System.Object Sender, TMPro.Compute_DT_EventArgs e)
    // Offset: 0x1959CA4
    static void ON_COMPUTE_DT_EVENT(::Il2CppObject* Sender, ::TMPro::Compute_DT_EventArgs* e);
  }; // TMPro.TMPro_EventManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMPro_EventManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_PRE_RENDER_OBJECT_CHANGED
// Il2CppName: ON_PRE_RENDER_OBJECT_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMPro_EventManager::ON_PRE_RENDER_OBJECT_CHANGED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_PRE_RENDER_OBJECT_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_MATERIAL_PROPERTY_CHANGED
// Il2CppName: ON_MATERIAL_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::UnityEngine::Material*)>(&TMPro::TMPro_EventManager::ON_MATERIAL_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_MATERIAL_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged, mat});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_FONT_PROPERTY_CHANGED
// Il2CppName: ON_FONT_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::TMPro::TMP_FontAsset*)>(&TMPro::TMPro_EventManager::ON_FONT_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* font = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_FONT_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged, font});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_SPRITE_ASSET_PROPERTY_CHANGED
// Il2CppName: ON_SPRITE_ASSET_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::UnityEngine::Object*)>(&TMPro::TMPro_EventManager::ON_SPRITE_ASSET_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_SPRITE_ASSET_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged, obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_TEXTMESHPRO_PROPERTY_CHANGED
// Il2CppName: ON_TEXTMESHPRO_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::TMPro::TextMeshPro*)>(&TMPro::TMPro_EventManager::ON_TEXTMESHPRO_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_TEXTMESHPRO_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged, obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_DRAG_AND_DROP_MATERIAL_CHANGED
// Il2CppName: ON_DRAG_AND_DROP_MATERIAL_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*)>(&TMPro::TMPro_EventManager::ON_DRAG_AND_DROP_MATERIAL_CHANGED)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* currentMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* newMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_DRAG_AND_DROP_MATERIAL_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, currentMaterial, newMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_TEXT_STYLE_PROPERTY_CHANGED
// Il2CppName: ON_TEXT_STYLE_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&TMPro::TMPro_EventManager::ON_TEXT_STYLE_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_TEXT_STYLE_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_COLOR_GRAIDENT_PROPERTY_CHANGED
// Il2CppName: ON_COLOR_GRAIDENT_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_ColorGradient*)>(&TMPro::TMPro_EventManager::ON_COLOR_GRAIDENT_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* gradient = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_ColorGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_COLOR_GRAIDENT_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gradient});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_TEXT_CHANGED
// Il2CppName: ON_TEXT_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&TMPro::TMPro_EventManager::ON_TEXT_CHANGED)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_TEXT_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_TMP_SETTINGS_CHANGED
// Il2CppName: ON_TMP_SETTINGS_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMPro_EventManager::ON_TMP_SETTINGS_CHANGED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_TMP_SETTINGS_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_RESOURCES_LOADED
// Il2CppName: ON_RESOURCES_LOADED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMPro_EventManager::ON_RESOURCES_LOADED)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_RESOURCES_LOADED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED
// Il2CppName: ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::TMPro::TextMeshProUGUI*)>(&TMPro::TMPro_EventManager::ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED)> {
  static const MethodInfo* get() {
    static auto* isChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshProUGUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isChanged, obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_EventManager::ON_COMPUTE_DT_EVENT
// Il2CppName: ON_COMPUTE_DT_EVENT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::TMPro::Compute_DT_EventArgs*)>(&TMPro::TMPro_EventManager::ON_COMPUTE_DT_EVENT)> {
  static const MethodInfo* get() {
    static auto* Sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("TMPro", "Compute_DT_EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_EventManager*), "ON_COMPUTE_DT_EVENT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Sender, e});
  }
};
