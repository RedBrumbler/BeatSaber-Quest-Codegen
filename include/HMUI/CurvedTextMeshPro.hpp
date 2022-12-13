// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: IComponentRefresher
#include "GlobalNamespace/IComponentRefresher.hpp"
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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedTextMeshPro
  class CurvedTextMeshPro;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::CurvedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.CurvedTextMeshPro
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class CurvedTextMeshPro : public ::TMPro::TextMeshProUGUI/*, public ::GlobalNamespace::IComponentRefresher*/ {
    public:
    public:
    // private System.Boolean _useScriptableObjectColors
    // Size: 0x1
    // Offset: 0xBDD
    bool useScriptableObjectColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NullAllowed] Offset: 0x1108980
    // private ColorSO _colorSo
    // Size: 0x8
    // Offset: 0xBE0
    ::GlobalNamespace::ColorSO* colorSo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0xBE8
    ::HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(::HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IComponentRefresher
    operator ::GlobalNamespace::IComponentRefresher() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IComponentRefresher*>(this);
    }
    // Creating interface conversion operator: i_IComponentRefresher
    inline ::GlobalNamespace::IComponentRefresher* i_IComponentRefresher() noexcept {
      return reinterpret_cast<::GlobalNamespace::IComponentRefresher*>(this);
    }
    // Get instance field reference: private System.Boolean _useScriptableObjectColors
    [[deprecated("Use field access instead!")]] bool& dyn__useScriptableObjectColors();
    // Get instance field reference: private ColorSO _colorSo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__colorSo();
    // Get instance field reference: private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    [[deprecated("Use field access instead!")]] ::HMUI::CurvedCanvasSettingsHelper*& dyn__curvedCanvasSettingsHelper();
    // public System.Boolean get_useScriptableObjectColors()
    // Offset: 0x1762C48
    bool get_useScriptableObjectColors();
    // public System.Void set_useScriptableObjectColors(System.Boolean value)
    // Offset: 0x1762C50
    void set_useScriptableObjectColors(bool value);
    // public System.Void .ctor()
    // Offset: 0x1763154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::CurvedTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedTextMeshPro*, creationType>()));
    }
    // public System.Void __Refresh()
    // Offset: 0x1763144
    void __Refresh();
    // public override UnityEngine.Color get_color()
    // Offset: 0x1762C5C
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Color TMP_Text::get_color()
    ::UnityEngine::Color get_color();
    // public override System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1762CFC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::set_color(UnityEngine.Color value)
    void set_color(::UnityEngine::Color value);
    // protected override System.Void OnEnable()
    // Offset: 0x1762D04
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::OnEnable()
    void OnEnable();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0x1762D44
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::GenerateTextMesh()
    void GenerateTextMesh();
  }; // HMUI.CurvedTextMeshPro
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::get_useScriptableObjectColors
// Il2CppName: get_useScriptableObjectColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::get_useScriptableObjectColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "get_useScriptableObjectColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::set_useScriptableObjectColors
// Il2CppName: set_useScriptableObjectColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)(bool)>(&HMUI::CurvedTextMeshPro::set_useScriptableObjectColors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "set_useScriptableObjectColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::__Refresh
// Il2CppName: __Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::__Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "__Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)(::UnityEngine::Color)>(&HMUI::CurvedTextMeshPro::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::GenerateTextMesh
// Il2CppName: GenerateTextMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::GenerateTextMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "GenerateTextMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
