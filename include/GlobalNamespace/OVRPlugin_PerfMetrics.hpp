// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/PerfMetrics
  struct OVRPlugin::PerfMetrics : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/PerfMetrics App_CpuTime_Float
    static constexpr const int App_CpuTime_Float = 0;
    // Get static field: static public OVRPlugin/PerfMetrics App_CpuTime_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_App_CpuTime_Float();
    // Set static field: static public OVRPlugin/PerfMetrics App_CpuTime_Float
    static void _set_App_CpuTime_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics App_GpuTime_Float
    static constexpr const int App_GpuTime_Float = 1;
    // Get static field: static public OVRPlugin/PerfMetrics App_GpuTime_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_App_GpuTime_Float();
    // Set static field: static public OVRPlugin/PerfMetrics App_GpuTime_Float
    static void _set_App_GpuTime_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Compositor_CpuTime_Float
    static constexpr const int Compositor_CpuTime_Float = 3;
    // Get static field: static public OVRPlugin/PerfMetrics Compositor_CpuTime_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Compositor_CpuTime_Float();
    // Set static field: static public OVRPlugin/PerfMetrics Compositor_CpuTime_Float
    static void _set_Compositor_CpuTime_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Compositor_GpuTime_Float
    static constexpr const int Compositor_GpuTime_Float = 4;
    // Get static field: static public OVRPlugin/PerfMetrics Compositor_GpuTime_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Compositor_GpuTime_Float();
    // Set static field: static public OVRPlugin/PerfMetrics Compositor_GpuTime_Float
    static void _set_Compositor_GpuTime_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Compositor_DroppedFrameCount_Int
    static constexpr const int Compositor_DroppedFrameCount_Int = 5;
    // Get static field: static public OVRPlugin/PerfMetrics Compositor_DroppedFrameCount_Int
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Compositor_DroppedFrameCount_Int();
    // Set static field: static public OVRPlugin/PerfMetrics Compositor_DroppedFrameCount_Int
    static void _set_Compositor_DroppedFrameCount_Int(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics System_GpuUtilPercentage_Float
    static constexpr const int System_GpuUtilPercentage_Float = 7;
    // Get static field: static public OVRPlugin/PerfMetrics System_GpuUtilPercentage_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_System_GpuUtilPercentage_Float();
    // Set static field: static public OVRPlugin/PerfMetrics System_GpuUtilPercentage_Float
    static void _set_System_GpuUtilPercentage_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics System_CpuUtilAveragePercentage_Float
    static constexpr const int System_CpuUtilAveragePercentage_Float = 8;
    // Get static field: static public OVRPlugin/PerfMetrics System_CpuUtilAveragePercentage_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_System_CpuUtilAveragePercentage_Float();
    // Set static field: static public OVRPlugin/PerfMetrics System_CpuUtilAveragePercentage_Float
    static void _set_System_CpuUtilAveragePercentage_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics System_CpuUtilWorstPercentage_Float
    static constexpr const int System_CpuUtilWorstPercentage_Float = 9;
    // Get static field: static public OVRPlugin/PerfMetrics System_CpuUtilWorstPercentage_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_System_CpuUtilWorstPercentage_Float();
    // Set static field: static public OVRPlugin/PerfMetrics System_CpuUtilWorstPercentage_Float
    static void _set_System_CpuUtilWorstPercentage_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Device_CpuClockFrequencyInMHz_Float
    static constexpr const int Device_CpuClockFrequencyInMHz_Float = 10;
    // Get static field: static public OVRPlugin/PerfMetrics Device_CpuClockFrequencyInMHz_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Device_CpuClockFrequencyInMHz_Float();
    // Set static field: static public OVRPlugin/PerfMetrics Device_CpuClockFrequencyInMHz_Float
    static void _set_Device_CpuClockFrequencyInMHz_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Device_GpuClockFrequencyInMHz_Float
    static constexpr const int Device_GpuClockFrequencyInMHz_Float = 11;
    // Get static field: static public OVRPlugin/PerfMetrics Device_GpuClockFrequencyInMHz_Float
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Device_GpuClockFrequencyInMHz_Float();
    // Set static field: static public OVRPlugin/PerfMetrics Device_GpuClockFrequencyInMHz_Float
    static void _set_Device_GpuClockFrequencyInMHz_Float(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Device_CpuClockLevel_Int
    static constexpr const int Device_CpuClockLevel_Int = 12;
    // Get static field: static public OVRPlugin/PerfMetrics Device_CpuClockLevel_Int
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Device_CpuClockLevel_Int();
    // Set static field: static public OVRPlugin/PerfMetrics Device_CpuClockLevel_Int
    static void _set_Device_CpuClockLevel_Int(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Device_GpuClockLevel_Int
    static constexpr const int Device_GpuClockLevel_Int = 13;
    // Get static field: static public OVRPlugin/PerfMetrics Device_GpuClockLevel_Int
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Device_GpuClockLevel_Int();
    // Set static field: static public OVRPlugin/PerfMetrics Device_GpuClockLevel_Int
    static void _set_Device_GpuClockLevel_Int(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics Count
    static constexpr const int Count = 14;
    // Get static field: static public OVRPlugin/PerfMetrics Count
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_Count();
    // Set static field: static public OVRPlugin/PerfMetrics Count
    static void _set_Count(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // static field const value: static public OVRPlugin/PerfMetrics EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/PerfMetrics EnumSize
    static GlobalNamespace::OVRPlugin::PerfMetrics _get_EnumSize();
    // Set static field: static public OVRPlugin/PerfMetrics EnumSize
    static void _set_EnumSize(GlobalNamespace::OVRPlugin::PerfMetrics value);
    // Creating value type constructor for type: PerfMetrics
    PerfMetrics(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/PerfMetrics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::PerfMetrics, "", "OVRPlugin/PerfMetrics");
#pragma pack(pop)