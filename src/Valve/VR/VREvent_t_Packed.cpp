// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.VREvent_t_Packed
#include "Valve/VR/VREvent_t_Packed.hpp"
// Including type: Valve.VR.VREvent_t
#include "Valve/VR/VREvent_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.VREvent_t_Packed..ctor
Valve::VR::VREvent_t_Packed* Valve::VR::VREvent_t_Packed::New_ctor(Valve::VR::VREvent_t unpacked) {
  return (VREvent_t_Packed*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "VREvent_t_Packed", unpacked));
}
// Autogenerated method: Valve.VR.VREvent_t_Packed.Unpack
void Valve::VR::VREvent_t_Packed::Unpack(Valve::VR::VREvent_t& unpacked) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Unpack", unpacked));
}
