// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.BerOctetString
#include "Org/BouncyCastle/Asn1/BerOctetString.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOctetString
  class DerOctetString;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator*, "Org.BouncyCastle.Asn1", "BerOctetString/ChunkEnumerator");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerOctetString/Org.BouncyCastle.Asn1.ChunkEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class BerOctetString::ChunkEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private readonly System.Byte[] octets
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> octets;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x18
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkSize and: currentChunk
    char __padding1[0x4] = {};
    // private Org.BouncyCastle.Asn1.DerOctetString currentChunk
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerOctetString* currentChunk;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerOctetString*) == 0x8);
    // private System.Int32 nextChunkPos
    // Size: 0x4
    // Offset: 0x28
    int nextChunkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private readonly System.Byte[] octets
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_octets();
    // Get instance field reference: private readonly System.Int32 chunkSize
    [[deprecated("Use field access instead!")]] int& dyn_chunkSize();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerOctetString currentChunk
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerOctetString*& dyn_currentChunk();
    // Get instance field reference: private System.Int32 nextChunkPos
    [[deprecated("Use field access instead!")]] int& dyn_nextChunkPos();
    // public System.Object get_Current()
    // Offset: 0x1CFC300
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Byte[] octets, System.Int32 chunkSize)
    // Offset: 0x1CFBF24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString::ChunkEnumerator* New_ctor(::ArrayW<uint8_t> octets, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString::ChunkEnumerator*, creationType>(octets, chunkSize)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1CFC378
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1CFC490
    void Reset();
  }; // Org.BouncyCastle.Asn1.BerOctetString/Org.BouncyCastle.Asn1.ChunkEnumerator
  #pragma pack(pop)
  static check_size<sizeof(BerOctetString::ChunkEnumerator), 40 + sizeof(int)> __Org_BouncyCastle_Asn1_BerOctetString_ChunkEnumeratorSizeCheck;
  static_assert(sizeof(BerOctetString::ChunkEnumerator) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::*)()>(&Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::*)()>(&Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::*)()>(&Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
