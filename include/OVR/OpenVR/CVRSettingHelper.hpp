// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSettingHelper
  struct CVRSettingHelper : public System::ValueType {
    public:
    // public System.IntPtr m_pSettings
    // Offset: 0x0
    System::IntPtr m_pSettings;
    // Creating value type constructor for type: CVRSettingHelper
    CVRSettingHelper(System::IntPtr m_pSettings_ = {}) : m_pSettings{m_pSettings_} {}
  }; // OVR.OpenVR.CVRSettingHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSettingHelper, "OVR.OpenVR", "CVRSettingHelper");
#pragma pack(pop)