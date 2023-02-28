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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: GeneralName
  class GeneralName;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: GeneralNames
  class GeneralNames;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralNames);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralNames*, "Org.BouncyCastle.Asn1.X509", "GeneralNames");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.GeneralNames
  // [TokenAttribute] Offset: FFFFFFFF
  class GeneralNames : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.GeneralName[] names
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names;
    // Field size check
    static_assert(sizeof(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>
    constexpr operator ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>() const noexcept {
      return names;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.GeneralName[] names
    [[deprecated("Use field access instead!")]] ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>& dyn_names();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1FB0338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::GeneralNames::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeneralNames*, creationType>(seq)));
    }
    // static private Org.BouncyCastle.Asn1.X509.GeneralName[] Copy(Org.BouncyCastle.Asn1.X509.GeneralName[] names)
    // Offset: 0x1FB02B8
    static ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names);
    // static public Org.BouncyCastle.Asn1.X509.GeneralNames GetInstance(System.Object obj)
    // Offset: 0x1FABECC
    static ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.X509.GeneralNames GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1FAEF80
    static ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // public Org.BouncyCastle.Asn1.X509.GeneralName[] GetNames()
    // Offset: 0x1FB0468
    ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> GetNames();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1FB0470
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1FB04D8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.GeneralNames
  #pragma pack(pop)
  static check_size<sizeof(GeneralNames), 16 + sizeof(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>)> __Org_BouncyCastle_Asn1_X509_GeneralNamesSizeCheck;
  static_assert(sizeof(GeneralNames) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>)>(&Org::BouncyCastle::Asn1::X509::GeneralNames::Copy)> {
  static const MethodInfo* get() {
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "GeneralName"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{names});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::GeneralNames::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::GeneralNames::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> (Org::BouncyCastle::Asn1::X509::GeneralNames::*)()>(&Org::BouncyCastle::Asn1::X509::GeneralNames::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::GeneralNames::*)()>(&Org::BouncyCastle::Asn1::X509::GeneralNames::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::GeneralNames::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::GeneralNames::*)()>(&Org::BouncyCastle::Asn1::X509::GeneralNames::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::GeneralNames*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
