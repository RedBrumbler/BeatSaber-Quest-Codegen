// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.LocalDataStoreHolder
  class LocalDataStoreHolder : public ::Il2CppObject {
    public:
    // private System.LocalDataStore m_Store
    // Offset: 0x10
    System::LocalDataStore* m_Store;
    // public System.Void .ctor(System.LocalDataStore store)
    // Offset: 0xFFEEF8
    static LocalDataStoreHolder* New_ctor(System::LocalDataStore* store);
    // public System.LocalDataStore get_Store()
    // Offset: 0xFFEF9C
    System::LocalDataStore* get_Store();
    // protected override System.Void Finalize()
    // Offset: 0xFFEF2C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.LocalDataStoreHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
#pragma pack(pop)