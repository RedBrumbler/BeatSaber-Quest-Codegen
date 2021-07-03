// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ColorTransitionSO
  class ColorTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private ColorSO _normalColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* normalColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightedColor
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _pressedColor
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* pressedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _disabledColor
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSO* disabledColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedColor
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorSO* selectedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _selectedAndHighlightedColor
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorSO* selectedAndHighlightedColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // Creating value type constructor for type: ColorTransitionSO
    ColorTransitionSO(GlobalNamespace::ColorSO* normalColor_ = {}, GlobalNamespace::ColorSO* highlightedColor_ = {}, GlobalNamespace::ColorSO* pressedColor_ = {}, GlobalNamespace::ColorSO* disabledColor_ = {}, GlobalNamespace::ColorSO* selectedColor_ = {}, GlobalNamespace::ColorSO* selectedAndHighlightedColor_ = {}) noexcept : normalColor{normalColor_}, highlightedColor{highlightedColor_}, pressedColor{pressedColor_}, disabledColor{disabledColor_}, selectedColor{selectedColor_}, selectedAndHighlightedColor{selectedAndHighlightedColor_} {}
    // public UnityEngine.Color get_normalColor()
    // Offset: 0x1190370
    UnityEngine::Color get_normalColor();
    // public UnityEngine.Color get_highlightedColor()
    // Offset: 0x11905D4
    UnityEngine::Color get_highlightedColor();
    // public UnityEngine.Color get_pressedColor()
    // Offset: 0x1190618
    UnityEngine::Color get_pressedColor();
    // public UnityEngine.Color get_disabledColor()
    // Offset: 0x119065C
    UnityEngine::Color get_disabledColor();
    // public UnityEngine.Color get_selectedColor()
    // Offset: 0x11906A0
    UnityEngine::Color get_selectedColor();
    // public UnityEngine.Color get_selectedAndHighlightedColor()
    // Offset: 0x11906E4
    UnityEngine::Color get_selectedAndHighlightedColor();
    // public System.Void .ctor()
    // Offset: 0x1194400
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTransitionSO*, creationType>()));
    }
  }; // ColorTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(ColorTransitionSO), 72 + sizeof(GlobalNamespace::ColorSO*)> __GlobalNamespace_ColorTransitionSOSizeCheck;
  static_assert(sizeof(ColorTransitionSO) == 0x50);
  // Writing MetadataGetter for method: ColorTransitionSO::get_normalColor
  // Il2CppName: get_normalColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_normalColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_normalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::get_highlightedColor
  // Il2CppName: get_highlightedColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_highlightedColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_highlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::get_pressedColor
  // Il2CppName: get_pressedColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_pressedColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_pressedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::get_disabledColor
  // Il2CppName: get_disabledColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_disabledColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_disabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::get_selectedColor
  // Il2CppName: get_selectedColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_selectedColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_selectedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::get_selectedAndHighlightedColor
  // Il2CppName: get_selectedAndHighlightedColor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (ColorTransitionSO::*)()>(&ColorTransitionSO::get_selectedAndHighlightedColor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), "get_selectedAndHighlightedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ColorTransitionSO::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ColorTransitionSO::*)()>(&ColorTransitionSO::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ColorTransitionSO::*)()>(&ColorTransitionSO::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorTransitionSO*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorTransitionSO*, "", "ColorTransitionSO");
