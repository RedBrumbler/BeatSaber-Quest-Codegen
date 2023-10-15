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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: ImplicitUseKindFlags
  struct ImplicitUseKindFlags_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseKindFlags_, "JetBrains.Annotations", "ImplicitUseKindFlags");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ImplicitUseKindFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ImplicitUseKindFlags_/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ImplicitUseKindFlags_
    constexpr ImplicitUseKindFlags_(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public JetBrains.Annotations.ImplicitUseKindFlags Default
    static constexpr const int Default = 7;
    // Get static field: static public JetBrains.Annotations.ImplicitUseKindFlags Default
    static ::JetBrains::Annotations::ImplicitUseKindFlags_ _get_Default();
    // Set static field: static public JetBrains.Annotations.ImplicitUseKindFlags Default
    static void _set_Default(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseKindFlags Access
    static constexpr const int Access = 1;
    // Get static field: static public JetBrains.Annotations.ImplicitUseKindFlags Access
    static ::JetBrains::Annotations::ImplicitUseKindFlags_ _get_Access();
    // Set static field: static public JetBrains.Annotations.ImplicitUseKindFlags Access
    static void _set_Access(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseKindFlags Assign
    static constexpr const int Assign = 2;
    // Get static field: static public JetBrains.Annotations.ImplicitUseKindFlags Assign
    static ::JetBrains::Annotations::ImplicitUseKindFlags_ _get_Assign();
    // Set static field: static public JetBrains.Annotations.ImplicitUseKindFlags Assign
    static void _set_Assign(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedWithFixedConstructorSignature
    static constexpr const int InstantiatedWithFixedConstructorSignature = 4;
    // Get static field: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedWithFixedConstructorSignature
    static ::JetBrains::Annotations::ImplicitUseKindFlags_ _get_InstantiatedWithFixedConstructorSignature();
    // Set static field: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedWithFixedConstructorSignature
    static void _set_InstantiatedWithFixedConstructorSignature(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedNoFixedConstructorSignature
    static constexpr const int InstantiatedNoFixedConstructorSignature = 8;
    // Get static field: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedNoFixedConstructorSignature
    static ::JetBrains::Annotations::ImplicitUseKindFlags_ _get_InstantiatedNoFixedConstructorSignature();
    // Set static field: static public JetBrains.Annotations.ImplicitUseKindFlags InstantiatedNoFixedConstructorSignature
    static void _set_InstantiatedNoFixedConstructorSignature(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // JetBrains.Annotations.ImplicitUseKindFlags
  #pragma pack(pop)
  static check_size<sizeof(ImplicitUseKindFlags_), 0 + sizeof(int)> __JetBrains_Annotations_ImplicitUseKindFlags_SizeCheck;
  static_assert(sizeof(ImplicitUseKindFlags_) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"