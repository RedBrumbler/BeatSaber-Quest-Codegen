// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUILayoutOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption*, "UnityEngine", "GUILayoutOption");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutOption
  // [TokenAttribute] Offset: FFFFFFFF
  class GUILayoutOption : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::GUILayoutOption::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.GUILayoutOption/UnityEngine.Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedWidth
      static constexpr const int fixedWidth = 0;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedWidth
      static ::UnityEngine::GUILayoutOption::Type _get_fixedWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedWidth
      static void _set_fixedWidth(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedHeight
      static constexpr const int fixedHeight = 1;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedHeight
      static ::UnityEngine::GUILayoutOption::Type _get_fixedHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type fixedHeight
      static void _set_fixedHeight(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type minWidth
      static constexpr const int minWidth = 2;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type minWidth
      static ::UnityEngine::GUILayoutOption::Type _get_minWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type minWidth
      static void _set_minWidth(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxWidth
      static constexpr const int maxWidth = 3;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxWidth
      static ::UnityEngine::GUILayoutOption::Type _get_maxWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxWidth
      static void _set_maxWidth(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type minHeight
      static constexpr const int minHeight = 4;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type minHeight
      static ::UnityEngine::GUILayoutOption::Type _get_minHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type minHeight
      static void _set_minHeight(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxHeight
      static constexpr const int maxHeight = 5;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxHeight
      static ::UnityEngine::GUILayoutOption::Type _get_maxHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type maxHeight
      static void _set_maxHeight(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchWidth
      static constexpr const int stretchWidth = 6;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchWidth
      static ::UnityEngine::GUILayoutOption::Type _get_stretchWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchWidth
      static void _set_stretchWidth(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchHeight
      static constexpr const int stretchHeight = 7;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchHeight
      static ::UnityEngine::GUILayoutOption::Type _get_stretchHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type stretchHeight
      static void _set_stretchHeight(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignStart
      static constexpr const int alignStart = 8;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignStart
      static ::UnityEngine::GUILayoutOption::Type _get_alignStart();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignStart
      static void _set_alignStart(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignMiddle
      static constexpr const int alignMiddle = 9;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignMiddle
      static ::UnityEngine::GUILayoutOption::Type _get_alignMiddle();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignMiddle
      static void _set_alignMiddle(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignEnd
      static constexpr const int alignEnd = 10;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignEnd
      static ::UnityEngine::GUILayoutOption::Type _get_alignEnd();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignEnd
      static void _set_alignEnd(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignJustify
      static constexpr const int alignJustify = 11;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignJustify
      static ::UnityEngine::GUILayoutOption::Type _get_alignJustify();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type alignJustify
      static void _set_alignJustify(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type equalSize
      static constexpr const int equalSize = 12;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type equalSize
      static ::UnityEngine::GUILayoutOption::Type _get_equalSize();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type equalSize
      static void _set_equalSize(::UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/UnityEngine.Type spacing
      static constexpr const int spacing = 13;
      // Get static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type spacing
      static ::UnityEngine::GUILayoutOption::Type _get_spacing();
      // Set static field: static public UnityEngine.GUILayoutOption/UnityEngine.Type spacing
      static void _set_spacing(::UnityEngine::GUILayoutOption::Type value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.GUILayoutOption/UnityEngine.Type
    #pragma pack(pop)
    static check_size<sizeof(GUILayoutOption::Type), 0 + sizeof(int)> __UnityEngine_GUILayoutOption_TypeSizeCheck;
    static_assert(sizeof(GUILayoutOption::Type) == 0x4);
    public:
    // UnityEngine.GUILayoutOption/UnityEngine.Type type
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::GUILayoutOption::Type type;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUILayoutOption::Type) == 0x4);
    // Padding between fields: type and: value
    char __padding0[0x4] = {};
    // System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.GUILayoutOption/UnityEngine.Type type
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUILayoutOption::Type& dyn_type();
    // Get instance field reference: System.Object value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_value();
    // System.Void .ctor(UnityEngine.GUILayoutOption/UnityEngine.Type type, System.Object value)
    // Offset: 0x20C740C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutOption* New_ctor(::UnityEngine::GUILayoutOption::Type type, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUILayoutOption::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutOption*, creationType>(type, value)));
    }
  }; // UnityEngine.GUILayoutOption
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutOption), 24 + sizeof(::Il2CppObject*)> __UnityEngine_GUILayoutOptionSizeCheck;
  static_assert(sizeof(GUILayoutOption) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption::Type, "UnityEngine", "GUILayoutOption/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutOption::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
