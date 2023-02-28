// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PbeParameter
  class PbeParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*, "Org.BouncyCastle.Asn1.Pkcs", "PbeParameter");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.PbeParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class PbeParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString salt
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::Asn1OctetString* salt;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* iterationCount;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString salt
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_salt();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_iterationCount();
    // public Org.BouncyCastle.Math.BigInteger get_IterationCount()
    // Offset: 0x1D9727C
    ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1D9715C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PbeParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PbeParameter*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.PbeParameter GetInstance(System.Object obj)
    // Offset: 0x1D96FDC
    static ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* GetInstance(::Il2CppObject* obj);
    // public System.Byte[] GetSalt()
    // Offset: 0x1D9725C
    ::ArrayW<uint8_t> GetSalt();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1D97298
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.PbeParameter
  #pragma pack(pop)
  static check_size<sizeof(PbeParameter), 24 + sizeof(::Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_Pkcs_PbeParameterSizeCheck;
  static_assert(sizeof(PbeParameter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeParameter::get_IterationCount
// Il2CppName: get_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeParameter::get_IterationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeParameter*), "get_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeParameter*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetSalt
// Il2CppName: GetSalt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetSalt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeParameter*), "GetSalt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PbeParameter::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PbeParameter::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PbeParameter*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
