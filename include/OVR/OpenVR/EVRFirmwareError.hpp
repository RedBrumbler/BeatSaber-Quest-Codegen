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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRFirmwareError
  struct EVRFirmwareError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRFirmwareError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError None
    static OVR::OpenVR::EVRFirmwareError _get_None();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError None
    static void _set_None(OVR::OpenVR::EVRFirmwareError value);
    // static field const value: static public OVR.OpenVR.EVRFirmwareError Success
    static constexpr const int Success = 1;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError Success
    static OVR::OpenVR::EVRFirmwareError _get_Success();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError Success
    static void _set_Success(OVR::OpenVR::EVRFirmwareError value);
    // static field const value: static public OVR.OpenVR.EVRFirmwareError Fail
    static constexpr const int Fail = 2;
    // Get static field: static public OVR.OpenVR.EVRFirmwareError Fail
    static OVR::OpenVR::EVRFirmwareError _get_Fail();
    // Set static field: static public OVR.OpenVR.EVRFirmwareError Fail
    static void _set_Fail(OVR::OpenVR::EVRFirmwareError value);
    // Creating value type constructor for type: EVRFirmwareError
    EVRFirmwareError(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRFirmwareError
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRFirmwareError, "OVR.OpenVR", "EVRFirmwareError");
#pragma pack(pop)