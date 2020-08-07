// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.HmdQuad_t
  struct HmdQuad_t : public System::ValueType {
    public:
    // public Valve.VR.HmdVector3_t vCorners0
    // Offset: 0x0
    Valve::VR::HmdVector3_t vCorners0;
    // public Valve.VR.HmdVector3_t vCorners1
    // Offset: 0xC
    Valve::VR::HmdVector3_t vCorners1;
    // public Valve.VR.HmdVector3_t vCorners2
    // Offset: 0x18
    Valve::VR::HmdVector3_t vCorners2;
    // public Valve.VR.HmdVector3_t vCorners3
    // Offset: 0x24
    Valve::VR::HmdVector3_t vCorners3;
    // Creating value type constructor for type: HmdQuad_t
    HmdQuad_t(Valve::VR::HmdVector3_t vCorners0_ = {}, Valve::VR::HmdVector3_t vCorners1_ = {}, Valve::VR::HmdVector3_t vCorners2_ = {}, Valve::VR::HmdVector3_t vCorners3_ = {}) : vCorners0{vCorners0_}, vCorners1{vCorners1_}, vCorners2{vCorners2_}, vCorners3{vCorners3_} {}
  }; // Valve.VR.HmdQuad_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdQuad_t, "Valve.VR", "HmdQuad_t");
#pragma pack(pop)