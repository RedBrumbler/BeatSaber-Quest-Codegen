// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: AnimationTriggers
  class AnimationTriggers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::AnimationTriggers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AnimationTriggers*, "UnityEngine.UI", "AnimationTriggers");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.AnimationTriggers
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimationTriggers : public ::Il2CppObject {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0x10C69BC
    // private System.String m_NormalTrigger
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_NormalTrigger;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10C6A08
    // private System.String m_HighlightedTrigger
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_HighlightedTrigger;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10C6A54
    // private System.String m_PressedTrigger
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_PressedTrigger;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10C6AA0
    // private System.String m_SelectedTrigger
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_SelectedTrigger;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10C6AEC
    // private System.String m_DisabledTrigger
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_DisabledTrigger;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // static field const value: static private System.String kDefaultNormalAnimName
    static constexpr const char* kDefaultNormalAnimName = "Normal";
    // Get static field: static private System.String kDefaultNormalAnimName
    static ::StringW _get_kDefaultNormalAnimName();
    // Set static field: static private System.String kDefaultNormalAnimName
    static void _set_kDefaultNormalAnimName(::StringW value);
    // static field const value: static private System.String kDefaultHighlightedAnimName
    static constexpr const char* kDefaultHighlightedAnimName = "Highlighted";
    // Get static field: static private System.String kDefaultHighlightedAnimName
    static ::StringW _get_kDefaultHighlightedAnimName();
    // Set static field: static private System.String kDefaultHighlightedAnimName
    static void _set_kDefaultHighlightedAnimName(::StringW value);
    // static field const value: static private System.String kDefaultPressedAnimName
    static constexpr const char* kDefaultPressedAnimName = "Pressed";
    // Get static field: static private System.String kDefaultPressedAnimName
    static ::StringW _get_kDefaultPressedAnimName();
    // Set static field: static private System.String kDefaultPressedAnimName
    static void _set_kDefaultPressedAnimName(::StringW value);
    // static field const value: static private System.String kDefaultSelectedAnimName
    static constexpr const char* kDefaultSelectedAnimName = "Selected";
    // Get static field: static private System.String kDefaultSelectedAnimName
    static ::StringW _get_kDefaultSelectedAnimName();
    // Set static field: static private System.String kDefaultSelectedAnimName
    static void _set_kDefaultSelectedAnimName(::StringW value);
    // static field const value: static private System.String kDefaultDisabledAnimName
    static constexpr const char* kDefaultDisabledAnimName = "Disabled";
    // Get static field: static private System.String kDefaultDisabledAnimName
    static ::StringW _get_kDefaultDisabledAnimName();
    // Set static field: static private System.String kDefaultDisabledAnimName
    static void _set_kDefaultDisabledAnimName(::StringW value);
    // Get instance field reference: private System.String m_NormalTrigger
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_NormalTrigger();
    // Get instance field reference: private System.String m_HighlightedTrigger
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_HighlightedTrigger();
    // Get instance field reference: private System.String m_PressedTrigger
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_PressedTrigger();
    // Get instance field reference: private System.String m_SelectedTrigger
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_SelectedTrigger();
    // Get instance field reference: private System.String m_DisabledTrigger
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_DisabledTrigger();
    // public System.String get_normalTrigger()
    // Offset: 0x197E840
    ::StringW get_normalTrigger();
    // public System.Void set_normalTrigger(System.String value)
    // Offset: 0x197E848
    void set_normalTrigger(::StringW value);
    // public System.String get_highlightedTrigger()
    // Offset: 0x197E850
    ::StringW get_highlightedTrigger();
    // public System.Void set_highlightedTrigger(System.String value)
    // Offset: 0x197E858
    void set_highlightedTrigger(::StringW value);
    // public System.String get_pressedTrigger()
    // Offset: 0x197E860
    ::StringW get_pressedTrigger();
    // public System.Void set_pressedTrigger(System.String value)
    // Offset: 0x197E868
    void set_pressedTrigger(::StringW value);
    // public System.String get_selectedTrigger()
    // Offset: 0x197E870
    ::StringW get_selectedTrigger();
    // public System.Void set_selectedTrigger(System.String value)
    // Offset: 0x197E878
    void set_selectedTrigger(::StringW value);
    // public System.String get_disabledTrigger()
    // Offset: 0x197E880
    ::StringW get_disabledTrigger();
    // public System.Void set_disabledTrigger(System.String value)
    // Offset: 0x197E888
    void set_disabledTrigger(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x197E890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationTriggers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::AnimationTriggers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationTriggers*, creationType>()));
    }
  }; // UnityEngine.UI.AnimationTriggers
  #pragma pack(pop)
  static check_size<sizeof(AnimationTriggers), 48 + sizeof(::StringW)> __UnityEngine_UI_AnimationTriggersSizeCheck;
  static_assert(sizeof(AnimationTriggers) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_normalTrigger
// Il2CppName: get_normalTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_normalTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_normalTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_normalTrigger
// Il2CppName: set_normalTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::StringW)>(&UnityEngine::UI::AnimationTriggers::set_normalTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_normalTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_highlightedTrigger
// Il2CppName: get_highlightedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_highlightedTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_highlightedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_highlightedTrigger
// Il2CppName: set_highlightedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::StringW)>(&UnityEngine::UI::AnimationTriggers::set_highlightedTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_highlightedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_pressedTrigger
// Il2CppName: get_pressedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_pressedTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_pressedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_pressedTrigger
// Il2CppName: set_pressedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::StringW)>(&UnityEngine::UI::AnimationTriggers::set_pressedTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_pressedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_selectedTrigger
// Il2CppName: get_selectedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_selectedTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_selectedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_selectedTrigger
// Il2CppName: set_selectedTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::StringW)>(&UnityEngine::UI::AnimationTriggers::set_selectedTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_selectedTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::get_disabledTrigger
// Il2CppName: get_disabledTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::AnimationTriggers::*)()>(&UnityEngine::UI::AnimationTriggers::get_disabledTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "get_disabledTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::set_disabledTrigger
// Il2CppName: set_disabledTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AnimationTriggers::*)(::StringW)>(&UnityEngine::UI::AnimationTriggers::set_disabledTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AnimationTriggers*), "set_disabledTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AnimationTriggers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
