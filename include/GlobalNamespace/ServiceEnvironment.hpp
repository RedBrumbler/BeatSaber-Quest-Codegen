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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ServiceEnvironment
  struct ServiceEnvironment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServiceEnvironment, "", "ServiceEnvironment");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ServiceEnvironment
  // [TokenAttribute] Offset: FFFFFFFF
  struct ServiceEnvironment/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ServiceEnvironment
    constexpr ServiceEnvironment(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public ServiceEnvironment Production
    static constexpr const int Production = 0;
    // Get static field: static public ServiceEnvironment Production
    static ::GlobalNamespace::ServiceEnvironment _get_Production();
    // Set static field: static public ServiceEnvironment Production
    static void _set_Production(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment ReleaseCandidate
    static constexpr const int ReleaseCandidate = 1;
    // Get static field: static public ServiceEnvironment ReleaseCandidate
    static ::GlobalNamespace::ServiceEnvironment _get_ReleaseCandidate();
    // Set static field: static public ServiceEnvironment ReleaseCandidate
    static void _set_ReleaseCandidate(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment InternalPlayTest
    static constexpr const int InternalPlayTest = 2;
    // Get static field: static public ServiceEnvironment InternalPlayTest
    static ::GlobalNamespace::ServiceEnvironment _get_InternalPlayTest();
    // Set static field: static public ServiceEnvironment InternalPlayTest
    static void _set_InternalPlayTest(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment QATesting
    static constexpr const int QATesting = 3;
    // Get static field: static public ServiceEnvironment QATesting
    static ::GlobalNamespace::ServiceEnvironment _get_QATesting();
    // Set static field: static public ServiceEnvironment QATesting
    static void _set_QATesting(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment Development
    static constexpr const int Development = 4;
    // Get static field: static public ServiceEnvironment Development
    static ::GlobalNamespace::ServiceEnvironment _get_Development();
    // Set static field: static public ServiceEnvironment Development
    static void _set_Development(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment ProductionA
    static constexpr const int ProductionA = 5;
    // Get static field: static public ServiceEnvironment ProductionA
    static ::GlobalNamespace::ServiceEnvironment _get_ProductionA();
    // Set static field: static public ServiceEnvironment ProductionA
    static void _set_ProductionA(::GlobalNamespace::ServiceEnvironment value);
    // static field const value: static public ServiceEnvironment ProductionB
    static constexpr const int ProductionB = 6;
    // Get static field: static public ServiceEnvironment ProductionB
    static ::GlobalNamespace::ServiceEnvironment _get_ProductionB();
    // Set static field: static public ServiceEnvironment ProductionB
    static void _set_ProductionB(::GlobalNamespace::ServiceEnvironment value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ServiceEnvironment
  #pragma pack(pop)
  static check_size<sizeof(ServiceEnvironment), 0 + sizeof(int)> __GlobalNamespace_ServiceEnvironmentSizeCheck;
  static_assert(sizeof(ServiceEnvironment) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"