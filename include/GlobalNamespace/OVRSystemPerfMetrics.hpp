// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSystemPerfMetrics
  class OVRSystemPerfMetrics : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics
    class PerfMetrics;
    // Nested type: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer
    class OVRSystemPerfMetricsTcpServer;
    // static field const value: static public System.Int32 TcpListeningPort
    static constexpr const int TcpListeningPort = 32419;
    // Get static field: static public System.Int32 TcpListeningPort
    static int _get_TcpListeningPort();
    // Set static field: static public System.Int32 TcpListeningPort
    static void _set_TcpListeningPort(int value);
    // static field const value: static public System.Int32 PayloadTypeMetrics
    static constexpr const int PayloadTypeMetrics = 100;
    // Get static field: static public System.Int32 PayloadTypeMetrics
    static int _get_PayloadTypeMetrics();
    // Set static field: static public System.Int32 PayloadTypeMetrics
    static void _set_PayloadTypeMetrics(int value);
    // static field const value: static public System.Int32 MaxBufferLength
    static constexpr const int MaxBufferLength = 65536;
    // Get static field: static public System.Int32 MaxBufferLength
    static int _get_MaxBufferLength();
    // Set static field: static public System.Int32 MaxBufferLength
    static void _set_MaxBufferLength(int value);
    // static field const value: static public System.Int32 MaxMessageLength
    static constexpr const int MaxMessageLength = 65532;
    // Get static field: static public System.Int32 MaxMessageLength
    static int _get_MaxMessageLength();
    // Set static field: static public System.Int32 MaxMessageLength
    static void _set_MaxMessageLength(int value);
    // public System.Void .ctor()
    // Offset: 0x18E50C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRSystemPerfMetrics* New_ctor();
  }; // OVRSystemPerfMetrics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics*, "", "OVRSystemPerfMetrics");
#pragma pack(pop)