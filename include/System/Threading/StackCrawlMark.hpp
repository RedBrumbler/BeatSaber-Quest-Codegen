// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.StackCrawlMark
  struct StackCrawlMark : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Threading.StackCrawlMark LookForMe
    static constexpr const int LookForMe = 0;
    // Get static field: static public System.Threading.StackCrawlMark LookForMe
    static System::Threading::StackCrawlMark _get_LookForMe();
    // Set static field: static public System.Threading.StackCrawlMark LookForMe
    static void _set_LookForMe(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForMyCaller
    static constexpr const int LookForMyCaller = 1;
    // Get static field: static public System.Threading.StackCrawlMark LookForMyCaller
    static System::Threading::StackCrawlMark _get_LookForMyCaller();
    // Set static field: static public System.Threading.StackCrawlMark LookForMyCaller
    static void _set_LookForMyCaller(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static constexpr const int LookForMyCallersCaller = 2;
    // Get static field: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static System::Threading::StackCrawlMark _get_LookForMyCallersCaller();
    // Set static field: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static void _set_LookForMyCallersCaller(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForThread
    static constexpr const int LookForThread = 3;
    // Get static field: static public System.Threading.StackCrawlMark LookForThread
    static System::Threading::StackCrawlMark _get_LookForThread();
    // Set static field: static public System.Threading.StackCrawlMark LookForThread
    static void _set_LookForThread(System::Threading::StackCrawlMark value);
    // Creating value type constructor for type: StackCrawlMark
    StackCrawlMark(int value_ = {}) : value{value_} {}
  }; // System.Threading.StackCrawlMark
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::StackCrawlMark, "System.Threading", "StackCrawlMark");
#pragma pack(pop)