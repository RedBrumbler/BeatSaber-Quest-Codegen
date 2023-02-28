// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Selectable
  class Selectable;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_DefaultControls
  class TMP_DefaultControls;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_DefaultControls);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_DefaultControls*, "TMPro", "TMP_DefaultControls");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_DefaultControls
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_DefaultControls : public ::Il2CppObject {
    public:
    // Nested type: ::TMPro::TMP_DefaultControls::Resources
    struct Resources;
    // static field const value: static private System.Single kWidth
    static constexpr const float kWidth = 160;
    // Get static field: static private System.Single kWidth
    static float _get_kWidth();
    // Set static field: static private System.Single kWidth
    static void _set_kWidth(float value);
    // static field const value: static private System.Single kThickHeight
    static constexpr const float kThickHeight = 30;
    // Get static field: static private System.Single kThickHeight
    static float _get_kThickHeight();
    // Set static field: static private System.Single kThickHeight
    static void _set_kThickHeight(float value);
    // static field const value: static private System.Single kThinHeight
    static constexpr const float kThinHeight = 20;
    // Get static field: static private System.Single kThinHeight
    static float _get_kThinHeight();
    // Set static field: static private System.Single kThinHeight
    static void _set_kThinHeight(float value);
    // Get static field: static private UnityEngine.Vector2 s_ThickElementSize
    static ::UnityEngine::Vector2 _get_s_ThickElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThickElementSize
    static void _set_s_ThickElementSize(::UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 s_ThinElementSize
    static ::UnityEngine::Vector2 _get_s_ThinElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThinElementSize
    static void _set_s_ThinElementSize(::UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Color s_DefaultSelectableColor
    static ::UnityEngine::Color _get_s_DefaultSelectableColor();
    // Set static field: static private UnityEngine.Color s_DefaultSelectableColor
    static void _set_s_DefaultSelectableColor(::UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color s_TextColor
    static ::UnityEngine::Color _get_s_TextColor();
    // Set static field: static private UnityEngine.Color s_TextColor
    static void _set_s_TextColor(::UnityEngine::Color value);
    // static private System.Void .cctor()
    // Offset: 0x149F048
    static void _cctor();
    // static private UnityEngine.GameObject CreateUIElementRoot(System.String name, UnityEngine.Vector2 size)
    // Offset: 0x149D014
    static ::UnityEngine::GameObject* CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size);
    // static private UnityEngine.GameObject CreateUIObject(System.String name, UnityEngine.GameObject parent)
    // Offset: 0x149D0B8
    static ::UnityEngine::GameObject* CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent);
    // static private System.Void SetDefaultTextValues(TMPro.TMP_Text lbl)
    // Offset: 0x149D27C
    static void SetDefaultTextValues(::TMPro::TMP_Text* lbl);
    // static private System.Void SetDefaultColorTransitionValues(UnityEngine.UI.Selectable slider)
    // Offset: 0x149D314
    static void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider);
    // static private System.Void SetParentAndAlign(UnityEngine.GameObject child, UnityEngine.GameObject parent)
    // Offset: 0x149D170
    static void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent);
    // static private System.Void SetLayerRecursively(UnityEngine.GameObject go, System.Int32 layer)
    // Offset: 0x149D394
    static void SetLayerRecursively(::UnityEngine::GameObject* go, int layer);
    // static public UnityEngine.GameObject CreateScrollbar(TMPro.TMP_DefaultControls/TMPro.Resources resources)
    // Offset: 0x149D490
    static ::UnityEngine::GameObject* CreateScrollbar(::TMPro::TMP_DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateButton(TMPro.TMP_DefaultControls/TMPro.Resources resources)
    // Offset: 0x149D734
    static ::UnityEngine::GameObject* CreateButton(::TMPro::TMP_DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateText(TMPro.TMP_DefaultControls/TMPro.Resources resources)
    // Offset: 0x149D950
    static ::UnityEngine::GameObject* CreateText(::TMPro::TMP_DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateInputField(TMPro.TMP_DefaultControls/TMPro.Resources resources)
    // Offset: 0x149DA0C
    static ::UnityEngine::GameObject* CreateInputField(::TMPro::TMP_DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateDropdown(TMPro.TMP_DefaultControls/TMPro.Resources resources)
    // Offset: 0x149E0A8
    static ::UnityEngine::GameObject* CreateDropdown(::TMPro::TMP_DefaultControls::Resources resources);
  }; // TMPro.TMP_DefaultControls
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_DefaultControls::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateUIElementRoot
// Il2CppName: CreateUIElementRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::StringW, ::UnityEngine::Vector2)>(&TMPro::TMP_DefaultControls::CreateUIElementRoot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateUIElementRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, size});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateUIObject
// Il2CppName: CreateUIObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::StringW, ::UnityEngine::GameObject*)>(&TMPro::TMP_DefaultControls::CreateUIObject)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateUIObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, parent});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::SetDefaultTextValues
// Il2CppName: SetDefaultTextValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&TMPro::TMP_DefaultControls::SetDefaultTextValues)> {
  static const MethodInfo* get() {
    static auto* lbl = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "SetDefaultTextValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lbl});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues
// Il2CppName: SetDefaultColorTransitionValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Selectable*)>(&TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "SetDefaultColorTransitionValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::SetParentAndAlign
// Il2CppName: SetParentAndAlign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&TMPro::TMP_DefaultControls::SetParentAndAlign)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "SetParentAndAlign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child, parent});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::SetLayerRecursively
// Il2CppName: SetLayerRecursively
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, int)>(&TMPro::TMP_DefaultControls::SetLayerRecursively)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "SetLayerRecursively", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, layer});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateScrollbar
// Il2CppName: CreateScrollbar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::TMPro::TMP_DefaultControls::Resources)>(&TMPro::TMP_DefaultControls::CreateScrollbar)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateScrollbar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateButton
// Il2CppName: CreateButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::TMPro::TMP_DefaultControls::Resources)>(&TMPro::TMP_DefaultControls::CreateButton)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::TMPro::TMP_DefaultControls::Resources)>(&TMPro::TMP_DefaultControls::CreateText)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateInputField
// Il2CppName: CreateInputField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::TMPro::TMP_DefaultControls::Resources)>(&TMPro::TMP_DefaultControls::CreateInputField)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateInputField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_DefaultControls::CreateDropdown
// Il2CppName: CreateDropdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::TMPro::TMP_DefaultControls::Resources)>(&TMPro::TMP_DefaultControls::CreateDropdown)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_DefaultControls*), "CreateDropdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
