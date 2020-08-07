// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSkeletonRenderer/SkeletonRendererData
  struct OVRSkeletonRenderer::SkeletonRendererData : public System::ValueType {
    public:
    // private System.Single <RootScale>k__BackingField
    // Offset: 0x0
    float RootScale;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x4
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x5
    bool IsDataHighConfidence;
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Offset: 0x6
    bool ShouldUseSystemGestureMaterial;
    // Creating value type constructor for type: SkeletonRendererData
    SkeletonRendererData(float RootScale_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) : RootScale{RootScale_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // public System.Single get_RootScale()
    // Offset: 0xA53FA8
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0xA53FB0
    void set_RootScale(float value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0xA53FB8
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xA53FC0
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xA53FCC
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xA53FD4
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0xA53FE0
    bool get_ShouldUseSystemGestureMaterial();
    // public System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0xA53FE8
    void set_ShouldUseSystemGestureMaterial(bool value);
  }; // OVRSkeletonRenderer/SkeletonRendererData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
#pragma pack(pop)