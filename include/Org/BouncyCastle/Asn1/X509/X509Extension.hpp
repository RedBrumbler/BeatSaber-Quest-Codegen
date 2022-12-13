// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Extension
  class X509Extension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extension*, "Org.BouncyCastle.Asn1.X509", "X509Extension");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509Extension
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Extension : public ::Il2CppObject {
    public:
    public:
    // System.Boolean critical
    // Size: 0x1
    // Offset: 0x10
    bool critical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: critical and: value
    char __padding0[0x7] = {};
    // Org.BouncyCastle.Asn1.Asn1OctetString value
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::Asn1OctetString* value;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    public:
    // Get instance field reference: System.Boolean critical
    [[deprecated("Use field access instead!")]] bool& dyn_critical();
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1OctetString value
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_value();
    // public System.Boolean get_IsCritical()
    // Offset: 0x1FA29AC
    bool get_IsCritical();
    // public Org.BouncyCastle.Asn1.Asn1OctetString get_Value()
    // Offset: 0x1FA29B4
    ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Value();
    // public System.Void .ctor(System.Boolean critical, Org.BouncyCastle.Asn1.Asn1OctetString value)
    // Offset: 0x1FA296C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor(bool critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>(critical, value)));
    }
    // static public Org.BouncyCastle.Asn1.Asn1Object ConvertValueToObject(Org.BouncyCastle.Asn1.X509.X509Extension ext)
    // Offset: 0x1F9BB24
    static ::Org::BouncyCastle::Asn1::Asn1Object* ConvertValueToObject(::Org::BouncyCastle::Asn1::X509::X509Extension* ext);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1FA29BC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1FA29F8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Asn1.X509.X509Extension
  #pragma pack(pop)
  static check_size<sizeof(X509Extension), 24 + sizeof(::Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_X509_X509ExtensionSizeCheck;
  static_assert(sizeof(X509Extension) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::get_IsCritical
// Il2CppName: get_IsCritical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(&Org::BouncyCastle::Asn1::X509::X509Extension::get_IsCritical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extension*), "get_IsCritical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(&Org::BouncyCastle::Asn1::X509::X509Extension::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extension*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::ConvertValueToObject
// Il2CppName: ConvertValueToObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::Asn1::X509::X509Extension*)>(&Org::BouncyCastle::Asn1::X509::X509Extension::ConvertValueToObject)> {
  static const MethodInfo* get() {
    static auto* ext = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "X509Extension")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extension*), "ConvertValueToObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ext});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(&Org::BouncyCastle::Asn1::X509::X509Extension::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extension*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Extension::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X509::X509Extension::*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::X509Extension::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Extension*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
