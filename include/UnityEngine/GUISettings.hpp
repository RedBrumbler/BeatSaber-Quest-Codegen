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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUISettings
  class GUISettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUISettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUISettings*, "UnityEngine", "GUISettings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUISettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10AAD50
  class GUISettings : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean m_DoubleClickSelectsWord
    // Size: 0x1
    // Offset: 0x10
    bool m_DoubleClickSelectsWord;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_TripleClickSelectsLine
    // Size: 0x1
    // Offset: 0x11
    bool m_TripleClickSelectsLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_TripleClickSelectsLine and: m_CursorColor
    char __padding1[0x2] = {};
    // private UnityEngine.Color m_CursorColor
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Color m_CursorColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_CursorFlashSpeed
    // Size: 0x4
    // Offset: 0x24
    float m_CursorFlashSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_SelectionColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color m_SelectionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private System.Boolean m_DoubleClickSelectsWord
    [[deprecated("Use field access instead!")]] bool& dyn_m_DoubleClickSelectsWord();
    // Get instance field reference: private System.Boolean m_TripleClickSelectsLine
    [[deprecated("Use field access instead!")]] bool& dyn_m_TripleClickSelectsLine();
    // Get instance field reference: private UnityEngine.Color m_CursorColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_CursorColor();
    // Get instance field reference: private System.Single m_CursorFlashSpeed
    [[deprecated("Use field access instead!")]] float& dyn_m_CursorFlashSpeed();
    // Get instance field reference: private UnityEngine.Color m_SelectionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_SelectionColor();
    // public System.Boolean get_doubleClickSelectsWord()
    // Offset: 0x20ABE20
    bool get_doubleClickSelectsWord();
    // public System.Boolean get_tripleClickSelectsLine()
    // Offset: 0x20ABEE4
    bool get_tripleClickSelectsLine();
    // public UnityEngine.Color get_cursorColor()
    // Offset: 0x20B8E60
    ::UnityEngine::Color get_cursorColor();
    // public System.Single get_cursorFlashSpeed()
    // Offset: 0x20B8E6C
    float get_cursorFlashSpeed();
    // public UnityEngine.Color get_selectionColor()
    // Offset: 0x20B8EB0
    ::UnityEngine::Color get_selectionColor();
    // public System.Void .ctor()
    // Offset: 0x20B8EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUISettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUISettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUISettings*, creationType>()));
    }
    // static private System.Single Internal_GetCursorFlashSpeed()
    // Offset: 0x20B8E2C
    static float Internal_GetCursorFlashSpeed();
  }; // UnityEngine.GUISettings
  #pragma pack(pop)
  static check_size<sizeof(GUISettings), 40 + sizeof(::UnityEngine::Color)> __UnityEngine_GUISettingsSizeCheck;
  static_assert(sizeof(GUISettings) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_doubleClickSelectsWord
// Il2CppName: get_doubleClickSelectsWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_doubleClickSelectsWord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_doubleClickSelectsWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_tripleClickSelectsLine
// Il2CppName: get_tripleClickSelectsLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_tripleClickSelectsLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_tripleClickSelectsLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_cursorColor
// Il2CppName: get_cursorColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_cursorColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_cursorColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_cursorFlashSpeed
// Il2CppName: get_cursorFlashSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_cursorFlashSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_cursorFlashSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::get_selectionColor
// Il2CppName: get_selectionColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::GUISettings::*)()>(&UnityEngine::GUISettings::get_selectionColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "get_selectionColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUISettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUISettings::Internal_GetCursorFlashSpeed
// Il2CppName: Internal_GetCursorFlashSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::GUISettings::Internal_GetCursorFlashSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUISettings*), "Internal_GetCursorFlashSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
