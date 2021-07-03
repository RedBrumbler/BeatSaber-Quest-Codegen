// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeView
  class ColorSchemeView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _saberAColorImage
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Image* saberAColorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _saberBColorImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* saberBColorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environment0ColorImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Image* environment0ColorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _environment1ColorImage
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Image* environment1ColorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _obstacleColorImage
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* obstacleColorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: ColorSchemeView
    ColorSchemeView(UnityEngine::UI::Image* saberAColorImage_ = {}, UnityEngine::UI::Image* saberBColorImage_ = {}, UnityEngine::UI::Image* environment0ColorImage_ = {}, UnityEngine::UI::Image* environment1ColorImage_ = {}, UnityEngine::UI::Image* obstacleColorImage_ = {}) noexcept : saberAColorImage{saberAColorImage_}, saberBColorImage{saberBColorImage_}, environment0ColorImage{environment0ColorImage_}, environment1ColorImage{environment1ColorImage_}, obstacleColorImage{obstacleColorImage_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetColors(UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environment0Color, UnityEngine.Color environment1Color, UnityEngine.Color obstacleColor)
    // Offset: 0x1193144
    void SetColors(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environment0Color, UnityEngine::Color environment1Color, UnityEngine::Color obstacleColor);
    // public System.Void .ctor()
    // Offset: 0x119330C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeView*, creationType>()));
    }
  }; // ColorSchemeView
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeView), 56 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_ColorSchemeViewSizeCheck;
  static_assert(sizeof(ColorSchemeView) == 0x40);
  // Writing MetadataGetter for method: ColorSchemeView::SetColors
  // Il2CppName: SetColors
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ColorSchemeView::*)(UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(&ColorSchemeView::SetColors)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorSchemeView*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
    }
  };
  // Writing MetadataGetter for method: ColorSchemeView::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ColorSchemeView::*)()>(&ColorSchemeView::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorSchemeView*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ColorSchemeView::*)()>(&ColorSchemeView::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ColorSchemeView*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeView*, "", "ColorSchemeView");
