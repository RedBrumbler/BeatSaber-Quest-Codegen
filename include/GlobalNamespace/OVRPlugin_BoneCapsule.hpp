// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/BoneCapsule
  struct OVRPlugin::BoneCapsule : public System::ValueType {
    public:
    // public System.Int16 BoneIndex
    // Offset: 0x0
    int16_t BoneIndex;
    // public OVRPlugin/Vector3f[] Points
    // Offset: 0x8
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points;
    // public System.Single Radius
    // Offset: 0x10
    float Radius;
    // Creating value type constructor for type: BoneCapsule
    BoneCapsule(int16_t BoneIndex_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points_ = {}, float Radius_ = {}) : BoneIndex{BoneIndex_}, Points{Points_}, Radius{Radius_} {}
  }; // OVRPlugin/BoneCapsule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BoneCapsule, "", "OVRPlugin/BoneCapsule");
#pragma pack(pop)