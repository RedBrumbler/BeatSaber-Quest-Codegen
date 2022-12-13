// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Set
#include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
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
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerSet
  class DerSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSet*, "Org.BouncyCastle.Asn1", "DerSet");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerSet
  // [TokenAttribute] Offset: FFFFFFFF
  class DerSet : public ::Org::BouncyCastle::Asn1::Asn1Set {
    public:
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
    static ::Org::BouncyCastle::Asn1::DerSet* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
    static void _set_Empty(::Org::BouncyCastle::Asn1::DerSet* value);
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x1CE8190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(elementVector, needsSorting)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CF628C
    static void _cctor();
    // static Org.BouncyCastle.Asn1.DerSet FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x1CE4428
    static ::Org::BouncyCastle::Asn1::DerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);
    // public System.Void .ctor()
    // Offset: 0x1CEB5D4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x1CE818C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(element)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x1CF6268
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(elementVector)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1CEB994
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.DerSet
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DerSet::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSet*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::FromVector
// Il2CppName: FromVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerSet* (*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*, bool)>(&Org::BouncyCastle::Asn1::DerSet::FromVector)> {
  static const MethodInfo* get() {
    static auto* elementVector = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1EncodableVector")->byval_arg;
    static auto* needsSorting = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSet*), "FromVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementVector, needsSorting});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSet::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerSet::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerSet::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSet*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
