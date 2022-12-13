// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Position
  struct Position;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Position, "System.Xml.Schema", "Position");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Schema.Position
  // [TokenAttribute] Offset: FFFFFFFF
  struct Position/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 symbol
    // Size: 0x4
    // Offset: 0x0
    int symbol;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: symbol and: particle
    char __padding0[0x4] = {};
    // public System.Object particle
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* particle;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: Position
    constexpr Position(int symbol_ = {}, ::Il2CppObject* particle_ = {}) noexcept : symbol{symbol_}, particle{particle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 symbol
    [[deprecated("Use field access instead!")]] int& dyn_symbol();
    // Get instance field reference: public System.Object particle
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_particle();
    // public System.Void .ctor(System.Int32 symbol, System.Object particle)
    // Offset: 0x1D20168
    // ABORTED: conflicts with another method.  Position(int symbol, ::Il2CppObject* particle);
  }; // System.Xml.Schema.Position
  #pragma pack(pop)
  static check_size<sizeof(Position), 8 + sizeof(::Il2CppObject*)> __System_Xml_Schema_PositionSizeCheck;
  static_assert(sizeof(Position) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Position::Position
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
