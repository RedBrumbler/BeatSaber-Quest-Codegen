// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9IntegerConverter
  class X9IntegerConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*, "Org.BouncyCastle.Asn1.X9", "X9IntegerConverter");
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9IntegerConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class X9IntegerConverter : public ::Il2CppObject {
    public:
    // static public System.Int32 GetByteLength(Org.BouncyCastle.Math.EC.ECFieldElement fe)
    // Offset: 0x1FADA78
    static int GetByteLength(::Org::BouncyCastle::Math::EC::ECFieldElement* fe);
    // static public System.Byte[] IntegerToBytes(Org.BouncyCastle.Math.BigInteger s, System.Int32 qLength)
    // Offset: 0x1FADAB0
    static ::ArrayW<uint8_t> IntegerToBytes(::Org::BouncyCastle::Math::BigInteger* s, int qLength);
  }; // Org.BouncyCastle.Asn1.X9.X9IntegerConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength)> {
  static const MethodInfo* get() {
    static auto* fe = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9IntegerConverter*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fe});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9IntegerConverter::IntegerToBytes
// Il2CppName: IntegerToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger*, int)>(&Org::BouncyCastle::Asn1::X9::X9IntegerConverter::IntegerToBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* qLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9IntegerConverter*), "IntegerToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, qLength});
  }
};
