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
  // Size: 0x18
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9DD4
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public PacketEncryptionLayer/EncryptionState encryptionState
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PacketEncryptionLayer::EncryptionState* encryptionState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketEncryptionLayer::EncryptionState*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(GlobalNamespace::PacketEncryptionLayer::EncryptionState* encryptionState_ = {}) noexcept : encryptionState{encryptionState_} {}
    // Creating conversion operator: operator GlobalNamespace::PacketEncryptionLayer::EncryptionState*
    constexpr operator GlobalNamespace::PacketEncryptionLayer::EncryptionState*() const noexcept {
      return encryptionState;
    }
    // System.Boolean <Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,PacketEncryptionLayer/EncryptionState> kvp)
    // Offset: 0x1E5102C
    bool $Remove$b__0(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x1E50EF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c__DisplayClass8_0").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0), 16 + sizeof(GlobalNamespace::PacketEncryptionLayer::EncryptionState*)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateList_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
#pragma pack(pop)