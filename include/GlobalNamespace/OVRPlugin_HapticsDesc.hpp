// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/HapticsDesc
  struct OVRPlugin::HapticsDesc : public System::ValueType {
    public:
    // public System.Int32 SampleRateHz
    // Offset: 0x0
    int SampleRateHz;
    // public System.Int32 SampleSizeInBytes
    // Offset: 0x4
    int SampleSizeInBytes;
    // public System.Int32 MinimumSafeSamplesQueued
    // Offset: 0x8
    int MinimumSafeSamplesQueued;
    // public System.Int32 MinimumBufferSamplesCount
    // Offset: 0xC
    int MinimumBufferSamplesCount;
    // public System.Int32 OptimalBufferSamplesCount
    // Offset: 0x10
    int OptimalBufferSamplesCount;
    // public System.Int32 MaximumBufferSamplesCount
    // Offset: 0x14
    int MaximumBufferSamplesCount;
    // Creating value type constructor for type: HapticsDesc
    HapticsDesc(int SampleRateHz_ = {}, int SampleSizeInBytes_ = {}, int MinimumSafeSamplesQueued_ = {}, int MinimumBufferSamplesCount_ = {}, int OptimalBufferSamplesCount_ = {}, int MaximumBufferSamplesCount_ = {}) : SampleRateHz{SampleRateHz_}, SampleSizeInBytes{SampleSizeInBytes_}, MinimumSafeSamplesQueued{MinimumSafeSamplesQueued_}, MinimumBufferSamplesCount{MinimumBufferSamplesCount_}, OptimalBufferSamplesCount{OptimalBufferSamplesCount_}, MaximumBufferSamplesCount{MaximumBufferSamplesCount_} {}
  }; // OVRPlugin/HapticsDesc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::HapticsDesc, "", "OVRPlugin/HapticsDesc");
#pragma pack(pop)