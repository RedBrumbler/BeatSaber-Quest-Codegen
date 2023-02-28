// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mCurve
  class AbstractF2mCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*, "Org.BouncyCastle.Math.EC", "AbstractF2mCurve");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractF2mCurve : public ::Org::BouncyCastle::Math::EC::ECCurve {
    public:
    public:
    // private Org.BouncyCastle.Math.BigInteger[] si
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> si;
    // Field size check
    static_assert(sizeof(::ArrayW<::Org::BouncyCastle::Math::BigInteger*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>
    constexpr operator ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>() const noexcept {
      return si;
    }
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger[] si
    [[deprecated("Use field access instead!")]] ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>& dyn_si();
    // public System.Boolean get_IsKoblitz()
    // Offset: 0x23712D8
    bool get_IsKoblitz();
    // protected System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x2370A4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractF2mCurve* New_ctor(int m, int k1, int k2, int k3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::AbstractF2mCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractF2mCurve*, creationType>(m, k1, k2, k3)));
    }
    // static private Org.BouncyCastle.Math.Field.IFiniteField BuildField(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x2370880
    static ::Org::BouncyCastle::Math::Field::IFiniteField* BuildField(int m, int k1, int k2, int k3);
    // Org.BouncyCastle.Math.EC.ECFieldElement SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement beta)
    // Offset: 0x2370F18
    ::Org::BouncyCastle::Math::EC::ECFieldElement* SolveQuadraticEquation(::Org::BouncyCastle::Math::EC::ECFieldElement* beta);
    // Org.BouncyCastle.Math.BigInteger[] GetSi()
    // Offset: 0x2371208
    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> GetSi();
    // static private Org.BouncyCastle.Math.BigInteger ImplRandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r, System.Int32 m)
    // Offset: 0x2370CAC
    static ::Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r, int m);
    // public override Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    // Offset: 0x2370A8C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x2370C14
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);
    // protected override Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0x2370CF0
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);
  }; // Org.BouncyCastle.Math.EC.AbstractF2mCurve
  #pragma pack(pop)
  static check_size<sizeof(AbstractF2mCurve), 80 + sizeof(::ArrayW<::Org::BouncyCastle::Math::BigInteger*>)> __Org_BouncyCastle_Math_EC_AbstractF2mCurveSizeCheck;
  static_assert(sizeof(AbstractF2mCurve) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz
// Il2CppName: get_IsKoblitz
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "get_IsKoblitz", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField
// Il2CppName: BuildField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (*)(int, int, int, int)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "BuildField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, k1, k2, k3});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation
// Il2CppName: SolveQuadraticEquation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation)> {
  static const MethodInfo* get() {
    static auto* beta = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "SolveQuadraticEquation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beta});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi
// Il2CppName: GetSi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "GetSi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult
// Il2CppName: ImplRandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Security::SecureRandom*, int)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "ImplRandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, m});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, bool)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult
// Il2CppName: RandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "RandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint
// Il2CppName: DecompressPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(int, ::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint)> {
  static const MethodInfo* get() {
    static auto* yTilde = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* X1 = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractF2mCurve*), "DecompressPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yTilde, X1});
  }
};
