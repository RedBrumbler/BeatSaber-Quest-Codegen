// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_34_0
  class OVRPlugin::OVRP_1_34_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_EnqueueSubmitLayer2(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.Int32 layerId, System.Int32 frameIndex, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale, System.Int32 layerIndex, OVRPlugin/Bool overrideTextureRectMatrix, OVRPlugin/TextureRectMatrixf textureRectMatrix, OVRPlugin/Bool overridePerLayerColorScaleAndOffset, UnityEngine.Vector4 colorScale, UnityEngine.Vector4 colorOffset)
    // Offset: 0xF30FC4
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSubmitLayer2(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, int layerId, int frameIndex, GlobalNamespace::OVRPlugin::Posef& pose, GlobalNamespace::OVRPlugin::Vector3f& scale, int layerIndex, GlobalNamespace::OVRPlugin::Bool overrideTextureRectMatrix, GlobalNamespace::OVRPlugin::TextureRectMatrixf& textureRectMatrix, GlobalNamespace::OVRPlugin::Bool overridePerLayerColorScaleAndOffset, UnityEngine::Vector4& colorScale, UnityEngine::Vector4& colorOffset);
    // static private System.Void .cctor()
    // Offset: 0xF310C4
    static void _cctor();
  }; // OVRPlugin/OVRP_1_34_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_34_0*, "", "OVRPlugin/OVRP_1_34_0");
#pragma pack(pop)