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
// Type namespace: MidiParser
namespace MidiParser {
  // Forward declaring type: MetaEventType
  struct MetaEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MetaEventType, "MidiParser", "MetaEventType");
// Type namespace: MidiParser
namespace MidiParser {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: MidiParser.MetaEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MetaEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: MetaEventType
    constexpr MetaEventType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public MidiParser.MetaEventType Tempo
    static constexpr const uint8_t Tempo = 81u;
    // Get static field: static public MidiParser.MetaEventType Tempo
    static ::MidiParser::MetaEventType _get_Tempo();
    // Set static field: static public MidiParser.MetaEventType Tempo
    static void _set_Tempo(::MidiParser::MetaEventType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // MidiParser.MetaEventType
  #pragma pack(pop)
  static check_size<sizeof(MetaEventType), 0 + sizeof(uint8_t)> __MidiParser_MetaEventTypeSizeCheck;
  static_assert(sizeof(MetaEventType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
