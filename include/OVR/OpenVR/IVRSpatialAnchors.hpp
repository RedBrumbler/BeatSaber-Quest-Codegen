// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors
  struct IVRSpatialAnchors : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor
    class _CreateSpatialAnchorFromDescriptor;
    // Nested type: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose
    class _CreateSpatialAnchorFromPose;
    // Nested type: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose
    class _GetSpatialAnchorPose;
    // Nested type: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor
    class _GetSpatialAnchorDescriptor;
    // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor CreateSpatialAnchorFromDescriptor
    // Offset: 0x0
    OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor;
    // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose CreateSpatialAnchorFromPose
    // Offset: 0x8
    OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose;
    // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose GetSpatialAnchorPose
    // Offset: 0x10
    OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose* GetSpatialAnchorPose;
    // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor GetSpatialAnchorDescriptor
    // Offset: 0x18
    OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor;
    // Creating value type constructor for type: IVRSpatialAnchors
    IVRSpatialAnchors(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor_ = {}, OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose_ = {}, OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose* GetSpatialAnchorPose_ = {}, OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor_ = {}) : CreateSpatialAnchorFromDescriptor{CreateSpatialAnchorFromDescriptor_}, CreateSpatialAnchorFromPose{CreateSpatialAnchorFromPose_}, GetSpatialAnchorPose{GetSpatialAnchorPose_}, GetSpatialAnchorDescriptor{GetSpatialAnchorDescriptor_} {}
  }; // OVR.OpenVR.IVRSpatialAnchors
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
#pragma pack(pop)