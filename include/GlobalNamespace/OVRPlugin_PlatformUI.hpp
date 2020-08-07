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
  // Autogenerated type: OVRPlugin/PlatformUI
  struct OVRPlugin::PlatformUI : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/PlatformUI None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/PlatformUI None
    static GlobalNamespace::OVRPlugin::PlatformUI _get_None();
    // Set static field: static public OVRPlugin/PlatformUI None
    static void _set_None(GlobalNamespace::OVRPlugin::PlatformUI value);
    // static field const value: static public OVRPlugin/PlatformUI ConfirmQuit
    static constexpr const int ConfirmQuit = 1;
    // Get static field: static public OVRPlugin/PlatformUI ConfirmQuit
    static GlobalNamespace::OVRPlugin::PlatformUI _get_ConfirmQuit();
    // Set static field: static public OVRPlugin/PlatformUI ConfirmQuit
    static void _set_ConfirmQuit(GlobalNamespace::OVRPlugin::PlatformUI value);
    // static field const value: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static constexpr const int GlobalMenuTutorial = 2;
    // Get static field: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static GlobalNamespace::OVRPlugin::PlatformUI _get_GlobalMenuTutorial();
    // Set static field: static public OVRPlugin/PlatformUI GlobalMenuTutorial
    static void _set_GlobalMenuTutorial(GlobalNamespace::OVRPlugin::PlatformUI value);
    // Creating value type constructor for type: PlatformUI
    PlatformUI(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/PlatformUI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::PlatformUI, "", "OVRPlugin/PlatformUI");
#pragma pack(pop)