// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStore
  class LocalDataStore : public ::Il2CppObject {
    public:
    // private System.LocalDataStoreElement[] m_DataTable
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::LocalDataStoreElement*>* m_DataTable;
    // Field size check
    static_assert(sizeof(::Array<System::LocalDataStoreElement*>*) == 0x8);
    // private System.LocalDataStoreMgr m_Manager
    // Size: 0x8
    // Offset: 0x18
    System::LocalDataStoreMgr* m_Manager;
    // Field size check
    static_assert(sizeof(System::LocalDataStoreMgr*) == 0x8);
    // Creating value type constructor for type: LocalDataStore
    LocalDataStore(::Array<System::LocalDataStoreElement*>* m_DataTable_ = {}, System::LocalDataStoreMgr* m_Manager_ = {}) noexcept : m_DataTable{m_DataTable_}, m_Manager{m_Manager_} {}
    // public System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 InitialCapacity)
    // Offset: 0x1820610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStore* New_ctor(System::LocalDataStoreMgr* mgr, int InitialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStore*, creationType>(mgr, InitialCapacity)));
    }
    // System.Void Dispose()
    // Offset: 0x1820688
    void Dispose();
    // public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1820774
    ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x1820928
    void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // System.Void FreeData(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x1820CC8
    void FreeData(int slot, int64_t cookie);
    // private System.LocalDataStoreElement PopulateElement(System.LocalDataStoreSlot slot)
    // Offset: 0x1820A3C
    System::LocalDataStoreElement* PopulateElement(System::LocalDataStoreSlot* slot);
  }; // System.LocalDataStore
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStore), 24 + sizeof(System::LocalDataStoreMgr*)> __System_LocalDataStoreSizeCheck;
  static_assert(sizeof(LocalDataStore) == 0x20);
  // Writing MetadataGetter for method: LocalDataStore::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LocalDataStore::*)(System::LocalDataStoreMgr*, int)>(&LocalDataStore::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::LocalDataStoreMgr*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LocalDataStore::*)(System::LocalDataStoreMgr*, int)>(&LocalDataStore::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::LocalDataStoreMgr*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: LocalDataStore::Dispose
  // Il2CppName: Dispose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LocalDataStore::*)()>(&LocalDataStore::Dispose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LocalDataStore::GetData
  // Il2CppName: GetData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (LocalDataStore::*)(System::LocalDataStoreSlot*)>(&LocalDataStore::GetData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::LocalDataStoreSlot*>()});
    }
  };
  // Writing MetadataGetter for method: LocalDataStore::SetData
  // Il2CppName: SetData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LocalDataStore::*)(System::LocalDataStoreSlot*, ::Il2CppObject*)>(&LocalDataStore::SetData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::LocalDataStoreSlot*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: LocalDataStore::FreeData
  // Il2CppName: FreeData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LocalDataStore::*)(int, int64_t)>(&LocalDataStore::FreeData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), "FreeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
    }
  };
  // Writing MetadataGetter for method: LocalDataStore::PopulateElement
  // Il2CppName: PopulateElement
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreElement* (LocalDataStore::*)(System::LocalDataStoreSlot*)>(&LocalDataStore::PopulateElement)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LocalDataStore*), "PopulateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::LocalDataStoreSlot*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStore*, "System", "LocalDataStore");
