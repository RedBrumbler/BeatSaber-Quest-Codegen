// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Deeplink
  class Deeplink : public ::Il2CppObject {
    public:
    // public System.String Destination
    // Offset: 0x10
    ::Il2CppString* Destination;
    // public System.String LevelID
    // Offset: 0x18
    ::Il2CppString* LevelID;
    // public System.String PackID
    // Offset: 0x20
    ::Il2CppString* PackID;
    // public System.String Difficulty
    // Offset: 0x28
    ::Il2CppString* Difficulty;
    // public System.String Characteristic
    // Offset: 0x30
    ::Il2CppString* Characteristic;
    // public System.Void .ctor()
    // Offset: 0xBD07F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Deeplink* New_ctor();
  }; // Deeplink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Deeplink*, "", "Deeplink");
#pragma pack(pop)