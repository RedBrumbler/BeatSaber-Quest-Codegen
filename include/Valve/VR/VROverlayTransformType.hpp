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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VROverlayTransformType
  struct VROverlayTransformType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static constexpr const int VROverlayTransform_Absolute = 0;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static Valve::VR::VROverlayTransformType _get_VROverlayTransform_Absolute();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_Absolute
    static void _set_VROverlayTransform_Absolute(Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static constexpr const int VROverlayTransform_TrackedDeviceRelative = 1;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static Valve::VR::VROverlayTransformType _get_VROverlayTransform_TrackedDeviceRelative();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static void _set_VROverlayTransform_TrackedDeviceRelative(Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static constexpr const int VROverlayTransform_SystemOverlay = 2;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static Valve::VR::VROverlayTransformType _get_VROverlayTransform_SystemOverlay();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static void _set_VROverlayTransform_SystemOverlay(Valve::VR::VROverlayTransformType value);
    // static field const value: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static constexpr const int VROverlayTransform_TrackedComponent = 3;
    // Get static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static Valve::VR::VROverlayTransformType _get_VROverlayTransform_TrackedComponent();
    // Set static field: static public Valve.VR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static void _set_VROverlayTransform_TrackedComponent(Valve::VR::VROverlayTransformType value);
    // Creating value type constructor for type: VROverlayTransformType
    VROverlayTransformType(int value_ = {}) : value{value_} {}
  }; // Valve.VR.VROverlayTransformType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VROverlayTransformType, "Valve.VR", "VROverlayTransformType");
#pragma pack(pop)