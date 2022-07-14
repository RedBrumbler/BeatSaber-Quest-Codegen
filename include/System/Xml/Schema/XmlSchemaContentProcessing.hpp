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
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaContentProcessing
  struct XmlSchemaContentProcessing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentProcessing, "System.Xml.Schema", "XmlSchemaContentProcessing");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaContentProcessing
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaContentProcessing/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaContentProcessing
    constexpr XmlSchemaContentProcessing(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Xml.Schema.XmlSchemaContentProcessing None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentProcessing None
    static ::System::Xml::Schema::XmlSchemaContentProcessing _get_None();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentProcessing None
    static void _set_None(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // [XmlEnumAttribute] Offset: 0x1046464
    // static field const value: static public System.Xml.Schema.XmlSchemaContentProcessing Skip
    static constexpr const int Skip = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentProcessing Skip
    static ::System::Xml::Schema::XmlSchemaContentProcessing _get_Skip();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentProcessing Skip
    static void _set_Skip(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // [XmlEnumAttribute] Offset: 0x104649C
    // static field const value: static public System.Xml.Schema.XmlSchemaContentProcessing Lax
    static constexpr const int Lax = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentProcessing Lax
    static ::System::Xml::Schema::XmlSchemaContentProcessing _get_Lax();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentProcessing Lax
    static void _set_Lax(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // [XmlEnumAttribute] Offset: 0x10464D4
    // static field const value: static public System.Xml.Schema.XmlSchemaContentProcessing Strict
    static constexpr const int Strict = 3;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentProcessing Strict
    static ::System::Xml::Schema::XmlSchemaContentProcessing _get_Strict();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentProcessing Strict
    static void _set_Strict(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaContentProcessing
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaContentProcessing), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaContentProcessingSizeCheck;
  static_assert(sizeof(XmlSchemaContentProcessing) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"