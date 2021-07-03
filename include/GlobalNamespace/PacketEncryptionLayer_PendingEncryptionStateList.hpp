// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList
  class PacketEncryptionLayer::PendingEncryptionStateList : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c
    class $$c;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,EncryptionUtility/IEncryptionState> _pendingStatesByPort
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>* pendingStatesByPort;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*) == 0x8);
    // Creating value type constructor for type: PendingEncryptionStateList
    PendingEncryptionStateList(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>* pendingStatesByPort_ = {}) noexcept : pendingStatesByPort{pendingStatesByPort_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*
    constexpr operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*() const noexcept {
      return pendingStatesByPort;
    }
    // public System.Boolean get_isEmpty()
    // Offset: 0x15065A0
    bool get_isEmpty();
    // public System.Void Dispose()
    // Offset: 0x1507D64
    void Dispose();
    // public EncryptionUtility/IEncryptionState[] GetSortedEncryptionStates(System.Int32 port)
    // Offset: 0x1506DDC
    ::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>* GetSortedEncryptionStates(int port);
    // public System.Boolean TryGetEncryptionState(System.Int32 port, out EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x1506B2C
    bool TryGetEncryptionState(int port, GlobalNamespace::EncryptionUtility::IEncryptionState*& encryptionState);
    // public System.Void Add(System.Int32 port, EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x1507B88
    void Add(int port, GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState);
    // public System.Boolean Remove(System.Int32 port)
    // Offset: 0x1506538
    bool Remove(int port);
    // public System.Boolean Remove(System.Int32 port, EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x15071B8
    bool Remove(int port, GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState);
    // public System.Void .ctor()
    // Offset: 0x1507B18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList), 16 + sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateListSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList) == 0x18);
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::get_isEmpty
  // Il2CppName: get_isEmpty
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&PacketEncryptionLayer::PendingEncryptionStateList::get_isEmpty)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::Dispose
  // Il2CppName: Dispose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&PacketEncryptionLayer::PendingEncryptionStateList::Dispose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::GetSortedEncryptionStates
  // Il2CppName: GetSortedEncryptionStates
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>* (PacketEncryptionLayer::PendingEncryptionStateList::*)(int)>(&PacketEncryptionLayer::PendingEncryptionStateList::GetSortedEncryptionStates)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "GetSortedEncryptionStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::TryGetEncryptionState
  // Il2CppName: TryGetEncryptionState
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PacketEncryptionLayer::PendingEncryptionStateList::*)(int, GlobalNamespace::EncryptionUtility::IEncryptionState*&)>(&PacketEncryptionLayer::PendingEncryptionStateList::TryGetEncryptionState)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "TryGetEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::EncryptionUtility::IEncryptionState*&>()});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::Add
  // Il2CppName: Add
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PacketEncryptionLayer::PendingEncryptionStateList::*)(int, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&PacketEncryptionLayer::PendingEncryptionStateList::Add)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::EncryptionUtility::IEncryptionState*>()});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::Remove
  // Il2CppName: Remove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PacketEncryptionLayer::PendingEncryptionStateList::*)(int)>(&PacketEncryptionLayer::PendingEncryptionStateList::Remove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::Remove
  // Il2CppName: Remove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PacketEncryptionLayer::PendingEncryptionStateList::*)(int, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&PacketEncryptionLayer::PendingEncryptionStateList::Remove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::EncryptionUtility::IEncryptionState*>()});
    }
  };
  // Writing MetadataGetter for method: PacketEncryptionLayer::PendingEncryptionStateList::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&PacketEncryptionLayer::PendingEncryptionStateList::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&PacketEncryptionLayer::PendingEncryptionStateList::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PacketEncryptionLayer::PendingEncryptionStateList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
