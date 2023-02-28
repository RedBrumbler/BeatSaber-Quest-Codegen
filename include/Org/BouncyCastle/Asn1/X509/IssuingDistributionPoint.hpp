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
  // Forward declaring type: IssuingDistributionPoint
  class IssuingDistributionPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*, "Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class IssuingDistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.DistributionPointName _distributionPoint
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::DistributionPointName*) == 0x8);
    // private readonly System.Boolean _onlyContainsUserCerts
    // Size: 0x1
    // Offset: 0x18
    bool onlyContainsUserCerts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean _onlyContainsCACerts
    // Size: 0x1
    // Offset: 0x19
    bool onlyContainsCACerts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onlyContainsCACerts and: onlySomeReasons
    char __padding2[0x6] = {};
    // private readonly Org.BouncyCastle.Asn1.X509.ReasonFlags _onlySomeReasons
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::ReasonFlags*) == 0x8);
    // private readonly System.Boolean _indirectCRL
    // Size: 0x1
    // Offset: 0x28
    bool indirectCRL;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean _onlyContainsAttributeCerts
    // Size: 0x1
    // Offset: 0x29
    bool onlyContainsAttributeCerts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onlyContainsAttributeCerts and: seq
    char __padding5[0x6] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.DistributionPointName _distributionPoint
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& dyn__distributionPoint();
    // Get instance field reference: private readonly System.Boolean _onlyContainsUserCerts
    [[deprecated("Use field access instead!")]] bool& dyn__onlyContainsUserCerts();
    // Get instance field reference: private readonly System.Boolean _onlyContainsCACerts
    [[deprecated("Use field access instead!")]] bool& dyn__onlyContainsCACerts();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.ReasonFlags _onlySomeReasons
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& dyn__onlySomeReasons();
    // Get instance field reference: private readonly System.Boolean _indirectCRL
    [[deprecated("Use field access instead!")]] bool& dyn__indirectCRL();
    // Get instance field reference: private readonly System.Boolean _onlyContainsAttributeCerts
    [[deprecated("Use field access instead!")]] bool& dyn__onlyContainsAttributeCerts();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Sequence seq
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // public System.Boolean get_IsIndirectCrl()
    // Offset: 0x1FB1368
    bool get_IsIndirectCrl();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1FB10BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IssuingDistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IssuingDistributionPoint*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint GetInstance(System.Object obj)
    // Offset: 0x1FB0F3C
    static ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::Il2CppObject* obj);
    // private System.Void appendObject(System.Text.StringBuilder buf, System.String sep, System.String name, System.String val)
    // Offset: 0x1FB15B0
    void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1FB1370
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1FB1378
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
  #pragma pack(pop)
  static check_size<sizeof(IssuingDistributionPoint), 48 + sizeof(::Org::BouncyCastle::Asn1::Asn1Sequence*)> __Org_BouncyCastle_Asn1_X509_IssuingDistributionPointSizeCheck;
  static_assert(sizeof(IssuingDistributionPoint) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl
// Il2CppName: get_IsIndirectCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(&Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*), "get_IsIndirectCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject
// Il2CppName: appendObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::StringW)>(&Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* sep = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*), "appendObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, sep, name, val});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(&Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::*)()>(&Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
