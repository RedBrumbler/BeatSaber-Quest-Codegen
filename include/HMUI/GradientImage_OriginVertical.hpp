// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: HMUI.GradientImage
#include "HMUI/GradientImage.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.GradientImage/OriginVertical
  struct GradientImage::OriginVertical : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public HMUI.GradientImage/OriginVertical Bottom
    static constexpr const int Bottom = 0;
    // Get static field: static public HMUI.GradientImage/OriginVertical Bottom
    static HMUI::GradientImage::OriginVertical _get_Bottom();
    // Set static field: static public HMUI.GradientImage/OriginVertical Bottom
    static void _set_Bottom(HMUI::GradientImage::OriginVertical value);
    // static field const value: static public HMUI.GradientImage/OriginVertical Top
    static constexpr const int Top = 1;
    // Get static field: static public HMUI.GradientImage/OriginVertical Top
    static HMUI::GradientImage::OriginVertical _get_Top();
    // Set static field: static public HMUI.GradientImage/OriginVertical Top
    static void _set_Top(HMUI::GradientImage::OriginVertical value);
    // Creating value type constructor for type: OriginVertical
    OriginVertical(int value_ = {}) : value{value_} {}
  }; // HMUI.GradientImage/OriginVertical
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::OriginVertical, "HMUI", "GradientImage/OriginVertical");
#pragma pack(pop)