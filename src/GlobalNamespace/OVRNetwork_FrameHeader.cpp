// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork/FrameHeader
#include "GlobalNamespace/OVRNetwork_FrameHeader.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Int32 StructSize
int GlobalNamespace::OVRNetwork::FrameHeader::_get_StructSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "OVRNetwork/FrameHeader", "StructSize"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 StructSize
void GlobalNamespace::OVRNetwork::FrameHeader::_set_StructSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRNetwork/FrameHeader", "StructSize", value));
}
// Autogenerated method: OVRNetwork/FrameHeader.ToBytes
::Array<uint8_t>* GlobalNamespace::OVRNetwork::FrameHeader::ToBytes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(*this, "ToBytes"));
}
// Autogenerated method: OVRNetwork/FrameHeader.FromBytes
GlobalNamespace::OVRNetwork::FrameHeader GlobalNamespace::OVRNetwork::FrameHeader::FromBytes(::Array<uint8_t>* arr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRNetwork::FrameHeader>("", "OVRNetwork/FrameHeader", "FromBytes", arr));
}