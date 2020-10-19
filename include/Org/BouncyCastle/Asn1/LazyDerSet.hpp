// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerSet
#include "Org/BouncyCastle/Asn1/DerSet.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.LazyDerSet
  class LazyDerSet : public Org::BouncyCastle::Asn1::DerSet {
    public:
    // private System.Byte[] encoded
    // Offset: 0x18
    ::Array<uint8_t>* encoded;
    // Deleting conversion operator: operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*
    constexpr operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*() const noexcept = delete;
    // System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x1403778
    static LazyDerSet* New_ctor(::Array<uint8_t>* encoded);
    // private System.Void Parse()
    // Offset: 0x1403AA0
    void Parse();
    // public override Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x1403C20
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: Org.BouncyCastle.Asn1.Asn1Encodable Asn1Set::get_Item(System.Int32 index)
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1403C50
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Collections.IEnumerator Asn1Set::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0x1403C78
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Int32 Asn1Set::get_Count()
    int get_Count();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1403CA0
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.LazyDerSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LazyDerSet*, "Org.BouncyCastle.Asn1", "LazyDerSet");
#pragma pack(pop)