// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreElement
  class LocalDataStoreElement;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::LocalDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStore*, "System", "LocalDataStore");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStore
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalDataStore : public ::Il2CppObject {
    public:
    public:
    // private System.LocalDataStoreElement[] m_DataTable
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::LocalDataStoreElement*> m_DataTable;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::LocalDataStoreElement*>) == 0x8);
    // private System.LocalDataStoreMgr m_Manager
    // Size: 0x8
    // Offset: 0x18
    ::System::LocalDataStoreMgr* m_Manager;
    // Field size check
    static_assert(sizeof(::System::LocalDataStoreMgr*) == 0x8);
    public:
    // Get instance field reference: private System.LocalDataStoreElement[] m_DataTable
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::LocalDataStoreElement*>& dyn_m_DataTable();
    // Get instance field reference: private System.LocalDataStoreMgr m_Manager
    [[deprecated("Use field access instead!")]] ::System::LocalDataStoreMgr*& dyn_m_Manager();
    // public System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 InitialCapacity)
    // Offset: 0x1C59F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStore* New_ctor(::System::LocalDataStoreMgr* mgr, int InitialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::LocalDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStore*, creationType>(mgr, InitialCapacity)));
    }
    // System.Void Dispose()
    // Offset: 0x1C59FEC
    void Dispose();
    // public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1C5A0D8
    ::Il2CppObject* GetData(::System::LocalDataStoreSlot* slot);
    // public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x1C5A28C
    void SetData(::System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // System.Void FreeData(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x1C5A62C
    void FreeData(int slot, int64_t cookie);
    // private System.LocalDataStoreElement PopulateElement(System.LocalDataStoreSlot slot)
    // Offset: 0x1C5A3A0
    ::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* slot);
  }; // System.LocalDataStore
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStore), 24 + sizeof(::System::LocalDataStoreMgr*)> __System_LocalDataStoreSizeCheck;
  static_assert(sizeof(LocalDataStore) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LocalDataStore::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)()>(&System::LocalDataStore::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(&System::LocalDataStore::GetData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(::System::LocalDataStoreSlot*, ::Il2CppObject*)>(&System::LocalDataStore::SetData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, data});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::FreeData
// Il2CppName: FreeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(int, int64_t)>(&System::LocalDataStore::FreeData)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "FreeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, cookie});
  }
};
// Writing MetadataGetter for method: System::LocalDataStore::PopulateElement
// Il2CppName: PopulateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreElement* (System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(&System::LocalDataStore::PopulateElement)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStore*), "PopulateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot});
  }
};
