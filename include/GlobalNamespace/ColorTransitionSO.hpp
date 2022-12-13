// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorTransitionSO
  class ColorTransitionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTransitionSO*, "", "ColorTransitionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ColorTransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
    public:
    public:
    // private ColorSO _normalColor
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorSO* normalColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightedColor
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ColorSO* highlightedColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _pressedColor
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorSO* pressedColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _disabledColor
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ColorSO* disabledColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedColor
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ColorSO* selectedColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedAndHighlightedColor
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ColorSO* selectedAndHighlightedColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    public:
    // Get instance field reference: private ColorSO _normalColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__normalColor();
    // Get instance field reference: private ColorSO _highlightedColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__highlightedColor();
    // Get instance field reference: private ColorSO _pressedColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__pressedColor();
    // Get instance field reference: private ColorSO _disabledColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__disabledColor();
    // Get instance field reference: private ColorSO _selectedColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__selectedColor();
    // Get instance field reference: private ColorSO _selectedAndHighlightedColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn__selectedAndHighlightedColor();
    // public UnityEngine.Color get_normalColor()
    // Offset: 0x143A64C
    ::UnityEngine::Color get_normalColor();
    // public UnityEngine.Color get_highlightedColor()
    // Offset: 0x143A8B4
    ::UnityEngine::Color get_highlightedColor();
    // public UnityEngine.Color get_pressedColor()
    // Offset: 0x143A8F8
    ::UnityEngine::Color get_pressedColor();
    // public UnityEngine.Color get_disabledColor()
    // Offset: 0x143A93C
    ::UnityEngine::Color get_disabledColor();
    // public UnityEngine.Color get_selectedColor()
    // Offset: 0x143A980
    ::UnityEngine::Color get_selectedColor();
    // public UnityEngine.Color get_selectedAndHighlightedColor()
    // Offset: 0x143A9C4
    ::UnityEngine::Color get_selectedAndHighlightedColor();
    // public System.Void .ctor()
    // Offset: 0x143AC80
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTransitionSO*, creationType>()));
    }
  }; // ColorTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(ColorTransitionSO), 72 + sizeof(::GlobalNamespace::ColorSO*)> __GlobalNamespace_ColorTransitionSOSizeCheck;
  static_assert(sizeof(ColorTransitionSO) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_normalColor
// Il2CppName: get_normalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_normalColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_normalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_highlightedColor
// Il2CppName: get_highlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_highlightedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_highlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_pressedColor
// Il2CppName: get_pressedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_pressedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_pressedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_disabledColor
// Il2CppName: get_disabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_disabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_disabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_selectedColor
// Il2CppName: get_selectedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_selectedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_selectedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor
// Il2CppName: get_selectedAndHighlightedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::ColorTransitionSO::*)()>(&GlobalNamespace::ColorTransitionSO::get_selectedAndHighlightedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTransitionSO*), "get_selectedAndHighlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorTransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
