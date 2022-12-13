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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: ZTauElement
  class ZTauElement;
  // Forward declaring type: SimpleBigDecimal
  class SimpleBigDecimal;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mCurve
  class AbstractF2mCurve;
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: Tnaf
  class Tnaf;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::Tnaf*, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.Tnaf
  // [TokenAttribute] Offset: FFFFFFFF
  class Tnaf : public ::Il2CppObject {
    public:
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusOne
    static ::Org::BouncyCastle::Math::BigInteger* _get_MinusOne();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusOne
    static void _set_MinusOne(::Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusTwo
    static ::Org::BouncyCastle::Math::BigInteger* _get_MinusTwo();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusTwo
    static void _set_MinusTwo(::Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusThree
    static ::Org::BouncyCastle::Math::BigInteger* _get_MinusThree();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusThree
    static void _set_MinusThree(::Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Four
    static ::Org::BouncyCastle::Math::BigInteger* _get_Four();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Four
    static void _set_Four(::Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha0
    static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> _get_Alpha0();
    // Set static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha0
    static void _set_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> value);
    // Get static field: static public readonly System.SByte[][] Alpha0Tnaf
    static ::ArrayW<::ArrayW<int8_t>> _get_Alpha0Tnaf();
    // Set static field: static public readonly System.SByte[][] Alpha0Tnaf
    static void _set_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t>> value);
    // Get static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha1
    static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> _get_Alpha1();
    // Set static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha1
    static void _set_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> value);
    // Get static field: static public readonly System.SByte[][] Alpha1Tnaf
    static ::ArrayW<::ArrayW<int8_t>> _get_Alpha1Tnaf();
    // Set static field: static public readonly System.SByte[][] Alpha1Tnaf
    static void _set_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t>> value);
    // static private System.Void .cctor()
    // Offset: 0x235E9A8
    static void _cctor();
    // static public Org.BouncyCastle.Math.BigInteger Norm(System.SByte mu, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda)
    // Offset: 0x235D120
    static ::Org::BouncyCastle::Math::BigInteger* Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);
    // static public Org.BouncyCastle.Math.EC.Abc.ZTauElement Round(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal lambda0, Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal lambda1, System.SByte mu)
    // Offset: 0x235D25C
    static ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1, int8_t mu);
    // static public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal ApproximateDivisionByN(Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.BigInteger s, Org.BouncyCastle.Math.BigInteger vm, System.SByte a, System.Int32 m, System.Int32 c)
    // Offset: 0x235D660
    static ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* s, ::Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int m, int c);
    // static public System.SByte GetMu(System.Int32 curveA)
    // Offset: 0x235D7E0
    static int8_t GetMu(int curveA);
    // static public Org.BouncyCastle.Math.BigInteger[] GetLucas(System.SByte mu, System.Int32 k, System.Boolean doV)
    // Offset: 0x235D7F0
    static ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> GetLucas(int8_t mu, int k, bool doV);
    // static public Org.BouncyCastle.Math.BigInteger GetTw(System.SByte mu, System.Int32 w)
    // Offset: 0x235D9F4
    static ::Org::BouncyCastle::Math::BigInteger* GetTw(int8_t mu, int w);
    // static public Org.BouncyCastle.Math.BigInteger[] GetSi(Org.BouncyCastle.Math.EC.AbstractF2mCurve curve)
    // Offset: 0x235DB94
    static ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);
    // static protected System.Int32 GetShiftsForCofactor(Org.BouncyCastle.Math.BigInteger h)
    // Offset: 0x235DE9C
    static int GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger* h);
    // static public Org.BouncyCastle.Math.EC.Abc.ZTauElement PartModReduction(Org.BouncyCastle.Math.BigInteger k, System.Int32 m, System.SByte a, Org.BouncyCastle.Math.BigInteger[] s, System.SByte mu, System.SByte c)
    // Offset: 0x235DF58
    static ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(::Org::BouncyCastle::Math::BigInteger* k, int m, int8_t a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> s, int8_t mu, int8_t c);
    // static public Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyFromTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte[] u)
    // Offset: 0x235E1F0
    static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t> u);
    // static public System.SByte[] TauAdicWNaf(System.SByte mu, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda, System.SByte width, Org.BouncyCastle.Math.BigInteger pow2w, Org.BouncyCastle.Math.BigInteger tw, Org.BouncyCastle.Math.EC.Abc.ZTauElement[] alpha)
    // Offset: 0x235E40C
    static ::ArrayW<int8_t> TauAdicWNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width, ::Org::BouncyCastle::Math::BigInteger* pow2w, ::Org::BouncyCastle::Math::BigInteger* tw, ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> alpha);
    // static public Org.BouncyCastle.Math.EC.AbstractF2mPoint[] GetPreComp(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte a)
    // Offset: 0x235E7CC
    static ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);
  }; // Org.BouncyCastle.Math.EC.Abc.Tnaf
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm
// Il2CppName: Norm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm)> {
  static const MethodInfo* get() {
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* lambda = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "ZTauElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "Norm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mu, lambda});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::Round
// Il2CppName: Round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Abc::ZTauElement* (*)(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, int8_t)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::Round)> {
  static const MethodInfo* get() {
    static auto* lambda0 = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal")->byval_arg;
    static auto* lambda1 = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal")->byval_arg;
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "Round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lambda0, lambda1, mu});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::ApproximateDivisionByN
// Il2CppName: ApproximateDivisionByN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int8_t, int, int)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::ApproximateDivisionByN)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* vm = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "ApproximateDivisionByN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, s, vm, a, m, c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu
// Il2CppName: GetMu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(int)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu)> {
  static const MethodInfo* get() {
    static auto* curveA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetMu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curveA});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetLucas
// Il2CppName: GetLucas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(int8_t, int, bool)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetLucas)> {
  static const MethodInfo* get() {
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* doV = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetLucas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mu, k, doV});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetTw
// Il2CppName: GetTw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int8_t, int)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetTw)> {
  static const MethodInfo* get() {
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetTw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mu, w});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi
// Il2CppName: GetSi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "AbstractF2mCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetSi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetShiftsForCofactor
// Il2CppName: GetShiftsForCofactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetShiftsForCofactor)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetShiftsForCofactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::PartModReduction
// Il2CppName: PartModReduction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Abc::ZTauElement* (*)(::Org::BouncyCastle::Math::BigInteger*, int, int8_t, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, int8_t, int8_t)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::PartModReduction)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger"), 1)->byval_arg;
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "PartModReduction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, m, a, s, mu, c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyFromTnaf
// Il2CppName: MultiplyFromTnaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::ArrayW<int8_t>)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyFromTnaf)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "AbstractF2mPoint")->byval_arg;
    static auto* u = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "SByte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "MultiplyFromTnaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, u});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicWNaf
// Il2CppName: TauAdicWNaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t> (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, int8_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicWNaf)> {
  static const MethodInfo* get() {
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* lambda = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "ZTauElement")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* pow2w = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* tw = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* alpha = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "ZTauElement"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "TauAdicWNaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mu, lambda, width, pow2w, tw, alpha});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::Tnaf::GetPreComp
// Il2CppName: GetPreComp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, int8_t)>(&Org::BouncyCastle::Math::EC::Abc::Tnaf::GetPreComp)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "AbstractF2mPoint")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::Tnaf*), "GetPreComp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, a});
  }
};
