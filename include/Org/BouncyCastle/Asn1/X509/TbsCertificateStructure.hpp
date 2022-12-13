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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: TbsCertificateStructure
  class TbsCertificateStructure;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateStructure");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
  // [TokenAttribute] Offset: FFFFFFFF
  class TbsCertificateStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger serialNumber
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name issuer
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time startDate
    // Size: 0x8
    // Offset: 0x38
    ::Org::BouncyCastle::Asn1::X509::Time* startDate;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time endDate
    // Size: 0x8
    // Offset: 0x40
    ::Org::BouncyCastle::Asn1::X509::Time* endDate;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name subject
    // Size: 0x8
    // Offset: 0x48
    ::Org::BouncyCastle::Asn1::X509::X509Name* subject;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPublicKeyInfo
    // Size: 0x8
    // Offset: 0x50
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*) == 0x8);
    // Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    // Size: 0x8
    // Offset: 0x58
    ::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Org.BouncyCastle.Asn1.DerBitString subjectUniqueID
    // Size: 0x8
    // Offset: 0x60
    ::Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    // Size: 0x8
    // Offset: 0x68
    ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509Extensions*) == 0x8);
    public:
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1Sequence seq
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger version
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_version();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger serialNumber
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_serialNumber();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_signature();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Name issuer
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::X509Name*& dyn_issuer();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.Time startDate
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::Time*& dyn_startDate();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.Time endDate
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::Time*& dyn_endDate();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Name subject
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::X509Name*& dyn_subject();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPublicKeyInfo
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& dyn_subjectPublicKeyInfo();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerBitString*& dyn_issuerUniqueID();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerBitString subjectUniqueID
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerBitString*& dyn_subjectUniqueID();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::X509Extensions*& dyn_extensions();
    // public System.Int32 get_Version()
    // Offset: 0x1FA1DC0
    int get_Version();
    // public Org.BouncyCastle.Asn1.DerInteger get_SerialNumber()
    // Offset: 0x1FA1DE8
    ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x1FA1DF0
    ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_StartDate()
    // Offset: 0x1FA1DF8
    ::Org::BouncyCastle::Asn1::X509::Time* get_StartDate();
    // public Org.BouncyCastle.Asn1.X509.Time get_EndDate()
    // Offset: 0x1FA1E00
    ::Org::BouncyCastle::Asn1::X509::Time* get_EndDate();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Subject()
    // Offset: 0x1FA1E08
    ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();
    // public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo get_SubjectPublicKeyInfo()
    // Offset: 0x1FA1E10
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x1FA1E18
    ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1FA17D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateStructure*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.TbsCertificateStructure GetInstance(System.Object obj)
    // Offset: 0x1FA1730
    static ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1FA1E20
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateStructure), 104 + sizeof(::Org::BouncyCastle::Asn1::X509::X509Extensions*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateStructureSizeCheck;
  static_assert(sizeof(TbsCertificateStructure) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_StartDate
// Il2CppName: get_StartDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_StartDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_StartDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_EndDate
// Il2CppName: get_EndDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_EndDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_EndDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Subject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_SubjectPublicKeyInfo
// Il2CppName: get_SubjectPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_SubjectPublicKeyInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_SubjectPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
