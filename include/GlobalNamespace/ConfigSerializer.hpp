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
  // Autogenerated type: ConfigSerializer
  class ConfigSerializer : public ::Il2CppObject {
    public:
    // static public System.Void SaveConfig(System.Object config, System.String filePath)
    // Offset: 0xC98D34
    static void SaveConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // static public System.Boolean LoadConfig(System.Object config, System.String filePath)
    // Offset: 0xC991A4
    static bool LoadConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // public System.Void .ctor()
    // Offset: 0xC9976C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConfigSerializer* New_ctor();
  }; // ConfigSerializer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
#pragma pack(pop)