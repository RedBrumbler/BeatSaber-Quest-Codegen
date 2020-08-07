// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: HebrewNumberParsingState
  struct HebrewNumberParsingState;
  // Forward declaring type: HebrewNumberParsingContext
  struct HebrewNumberParsingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.HebrewNumber
  class HebrewNumber : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::HebrewNumber::HebrewToken
    struct HebrewToken;
    // Nested type: System::Globalization::HebrewNumber::HebrewValue
    class HebrewValue;
    // Nested type: System::Globalization::HebrewNumber::HS
    struct HS;
    // Get static field: static private System.Globalization.HebrewNumber/HebrewValue[] HebrewValues
    static ::Array<System::Globalization::HebrewNumber::HebrewValue*>* _get_HebrewValues();
    // Set static field: static private System.Globalization.HebrewNumber/HebrewValue[] HebrewValues
    static void _set_HebrewValues(::Array<System::Globalization::HebrewNumber::HebrewValue*>* value);
    // Get static field: static private System.Char maxHebrewNumberCh
    static ::Il2CppChar _get_maxHebrewNumberCh();
    // Set static field: static private System.Char maxHebrewNumberCh
    static void _set_maxHebrewNumberCh(::Il2CppChar value);
    // Get static field: static private readonly System.Globalization.HebrewNumber/HS[][] NumberPasingState
    static ::Array<::Array<System::Globalization::HebrewNumber::HS>*>* _get_NumberPasingState();
    // Set static field: static private readonly System.Globalization.HebrewNumber/HS[][] NumberPasingState
    static void _set_NumberPasingState(::Array<::Array<System::Globalization::HebrewNumber::HS>*>* value);
    // static System.String ToString(System.Int32 Number)
    // Offset: 0x12B49B8
    static ::Il2CppString* ToString(int Number);
    // static System.Globalization.HebrewNumberParsingState ParseByChar(System.Char ch, System.Globalization.HebrewNumberParsingContext context)
    // Offset: 0x12A7970
    static System::Globalization::HebrewNumberParsingState ParseByChar(::Il2CppChar ch, System::Globalization::HebrewNumberParsingContext& context);
    // static System.Boolean IsDigit(System.Char ch)
    // Offset: 0x12A7868
    static bool IsDigit(::Il2CppChar ch);
    // static private System.Void .cctor()
    // Offset: 0x12B4C24
    static void _cctor();
  }; // System.Globalization.HebrewNumber
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumber*, "System.Globalization", "HebrewNumber");
#pragma pack(pop)