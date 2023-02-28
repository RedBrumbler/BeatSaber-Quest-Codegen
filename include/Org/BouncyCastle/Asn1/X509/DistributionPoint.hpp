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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: DistributionPointName
  class DistributionPointName;
  // Forward declaring type: ReasonFlags
  class ReasonFlags;
  // Forward declaring type: GeneralNames
  class GeneralNames;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: DistributionPoint
  class DistributionPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, "Org.BouncyCastle.Asn1.X509", "DistributionPoint");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DistributionPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class DistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // readonly Org.BouncyCastle.Asn1.X509.DistributionPointName distributionPoint
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::DistributionPointName*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.ReasonFlags reasons
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::ReasonFlags*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.GeneralNames cRLIssuer
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::X509::GeneralNames* cRLIssuer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::GeneralNames*) == 0x8);
    public:
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.X509.DistributionPointName distributionPoint
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& dyn_distributionPoint();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.X509.ReasonFlags reasons
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& dyn_reasons();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.X509.GeneralNames cRLIssuer
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::GeneralNames*& dyn_cRLIssuer();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1FAED48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::DistributionPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistributionPoint*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.DistributionPoint GetInstance(System.Object obj)
    // Offset: 0x1FAE0C4
    static ::Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::Il2CppObject* obj);
    // private System.Void appendObject(System.Text.StringBuilder buf, System.String sep, System.String name, System.String val)
    // Offset: 0x1FAF1EC
    void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1FAEF9C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1FAF06C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.DistributionPoint
  #pragma pack(pop)
  static check_size<sizeof(DistributionPoint), 32 + sizeof(::Org::BouncyCastle::Asn1::X509::GeneralNames*)> __Org_BouncyCastle_Asn1_X509_DistributionPointSizeCheck;
  static_assert(sizeof(DistributionPoint) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::DistributionPoint* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::DistributionPoint::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPoint*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPoint::appendObject
// Il2CppName: appendObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::DistributionPoint::*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::StringW)>(&Org::BouncyCastle::Asn1::X509::DistributionPoint::appendObject)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* sep = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPoint*), "appendObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, sep, name, val});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPoint::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(&Org::BouncyCastle::Asn1::X509::DistributionPoint::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPoint*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::DistributionPoint::*)()>(&Org::BouncyCastle::Asn1::X509::DistributionPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
