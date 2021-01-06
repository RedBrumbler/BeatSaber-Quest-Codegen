// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer/PendingEncryptionStateList
#include "GlobalNamespace/PacketEncryptionLayer_PendingEncryptionStateList.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9DB4
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x10
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(int port_ = {}) noexcept : port{port_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return port;
    }
    // System.Int32 <GetSortedEncryptionStates>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,PacketEncryptionLayer/EncryptionState> kvp)
    // Offset: 0x1E50FB4
    int $GetSortedEncryptionStates$b__0(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x1E50EF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c__DisplayClass4_0").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0), 16 + sizeof(int)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateList_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
#pragma pack(pop)