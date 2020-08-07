// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Xft.XWeaponTrail
#include "Xft/XWeaponTrail.hpp"
// Completed includes
// Type namespace: Xft
namespace Xft {
  // Autogenerated type: Xft.XWeaponTrail/Element
  class XWeaponTrail::Element : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 pointStart
    // Offset: 0x10
    UnityEngine::Vector3 pointStart;
    // public UnityEngine.Vector3 pointEnd
    // Offset: 0x1C
    UnityEngine::Vector3 pointEnd;
    // public UnityEngine.Vector3 get_pos()
    // Offset: 0xC444AC
    UnityEngine::Vector3 get_pos();
    // public System.Void .ctor(UnityEngine.Vector3 start, UnityEngine.Vector3 end)
    // Offset: 0xC43988
    static XWeaponTrail::Element* New_ctor(UnityEngine::Vector3 start, UnityEngine::Vector3 end);
    // public System.Void .ctor()
    // Offset: 0xC44784
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XWeaponTrail::Element* New_ctor();
  }; // Xft.XWeaponTrail/Element
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Xft::XWeaponTrail::Element*, "Xft", "XWeaponTrail/Element");
#pragma pack(pop)