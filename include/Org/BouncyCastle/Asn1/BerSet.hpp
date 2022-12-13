// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerSet
#include "Org/BouncyCastle/Asn1/DerSet.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: BerSet
  class BerSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSet*, "Org.BouncyCastle.Asn1", "BerSet");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerSet
  // [TokenAttribute] Offset: FFFFFFFF
  class BerSet : public ::Org::BouncyCastle::Asn1::DerSet {
    public:
    // Get static field: static public readonly Org.BouncyCastle.Asn1.BerSet Empty
    static ::Org::BouncyCastle::Asn1::BerSet* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.BerSet Empty
    static void _set_Empty(::Org::BouncyCastle::Asn1::BerSet* value);
    // public System.Void .ctor()
    // Offset: 0x1CEB570
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.ctor()
    // Base method: System.Void Asn1Set::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSet*, creationType>()));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x1CEB5D8
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSet*, creationType>(elementVector, needsSorting)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CEBC90
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.cctor()
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1CEB66C
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerSet
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSet::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::BerSet::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerSet*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSet::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerSet::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::BerSet::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerSet*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
