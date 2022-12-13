// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphPackingMode
  struct GlyphPackingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPackingMode, "UnityEngine.TextCore.LowLevel", "GlyphPackingMode");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphPackingMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10C3444
  struct GlyphPackingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GlyphPackingMode
    constexpr GlyphPackingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static constexpr const int BestShortSideFit = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestShortSideFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestShortSideFit
    static void _set_BestShortSideFit(::UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static constexpr const int BestLongSideFit = 1;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestLongSideFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestLongSideFit
    static void _set_BestLongSideFit(::UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static constexpr const int BestAreaFit = 2;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BestAreaFit();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BestAreaFit
    static void _set_BestAreaFit(::UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static constexpr const int BottomLeftRule = 3;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_BottomLeftRule();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode BottomLeftRule
    static void _set_BottomLeftRule(::UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static constexpr const int ContactPointRule = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode _get_ContactPointRule();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphPackingMode ContactPointRule
    static void _set_ContactPointRule(::UnityEngine::TextCore::LowLevel::GlyphPackingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.LowLevel.GlyphPackingMode
  #pragma pack(pop)
  static check_size<sizeof(GlyphPackingMode), 0 + sizeof(int)> __UnityEngine_TextCore_LowLevel_GlyphPackingModeSizeCheck;
  static_assert(sizeof(GlyphPackingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
