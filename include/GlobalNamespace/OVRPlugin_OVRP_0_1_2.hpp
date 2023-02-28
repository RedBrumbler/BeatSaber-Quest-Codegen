// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_0_1_2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_0_1_2*, "", "OVRPlugin/OVRP_0_1_2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_0_1_2
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_0_1_2 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1B96B38
    static void _cctor();
    // static public OVRPlugin/Posef ovrp_GetNodePose(OVRPlugin/Node nodeId)
    // Offset: 0x1B96A10
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodePose(::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_SetControllerVibration(System.UInt32 controllerMask, System.Single frequency, System.Single amplitude)
    // Offset: 0x1B96AA0
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetControllerVibration(uint controllerMask, float frequency, float amplitude);
  }; // OVRPlugin/OVRP_0_1_2
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_0_1_2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_2::ovrp_GetNodePose
// Il2CppName: ovrp_GetNodePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_0_1_2::ovrp_GetNodePose)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_2*), "ovrp_GetNodePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_0_1_2::ovrp_SetControllerVibration
// Il2CppName: ovrp_SetControllerVibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(uint, float, float)>(&GlobalNamespace::OVRPlugin::OVRP_0_1_2::ovrp_SetControllerVibration)> {
  static const MethodInfo* get() {
    static auto* controllerMask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_0_1_2*), "ovrp_SetControllerVibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerMask, frequency, amplitude});
  }
};
