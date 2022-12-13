// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
#include "Org/BouncyCastle/Math/EC/AbstractF2mCurve.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: F2mPoint
  class F2mPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: F2mCurve
  class F2mCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mCurve*, "Org.BouncyCastle.Math.EC", "F2mCurve");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.F2mCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class F2mCurve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
    public:
    // Nested type: ::Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable
    class DefaultF2mLookupTable;
    public:
    // private readonly System.Int32 m
    // Size: 0x4
    // Offset: 0x58
    int m;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 k1
    // Size: 0x4
    // Offset: 0x5C
    int k1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 k2
    // Size: 0x4
    // Offset: 0x60
    int k2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 k3
    // Size: 0x4
    // Offset: 0x64
    int k3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected readonly Org.BouncyCastle.Math.EC.F2mPoint m_infinity
    // Size: 0x8
    // Offset: 0x68
    ::Org::BouncyCastle::Math::EC::F2mPoint* m_infinity;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::F2mPoint*) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>
    constexpr operator ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>() const noexcept = delete;
    // Get instance field reference: private readonly System.Int32 m
    [[deprecated("Use field access instead!")]] int& dyn_m();
    // Get instance field reference: private readonly System.Int32 k1
    [[deprecated("Use field access instead!")]] int& dyn_k1();
    // Get instance field reference: private readonly System.Int32 k2
    [[deprecated("Use field access instead!")]] int& dyn_k2();
    // Get instance field reference: private readonly System.Int32 k3
    [[deprecated("Use field access instead!")]] int& dyn_k3();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.EC.F2mPoint m_infinity
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::F2mPoint*& dyn_m_infinity();
    // public System.Void .ctor(System.Int32 m, System.Int32 k, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x2843FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mCurve* New_ctor(int m, int k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::F2mCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mCurve*, creationType>(m, k, a, b, order, cofactor)));
    }
    // public System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x2843FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mCurve* New_ctor(int m, int k1, int k2, int k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::F2mCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mCurve*, creationType>(m, k1, k2, k3, a, b, order, cofactor)));
    }
    // protected System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3, Org.BouncyCastle.Math.EC.ECFieldElement a, Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x28442C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static F2mCurve* New_ctor(int m, int k1, int k2, int k3, ::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::F2mCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<F2mCurve*, creationType>(m, k1, k2, k3, a, b, order, cofactor)));
    }
    // public System.Boolean IsTrinomial()
    // Offset: 0x28448B4
    bool IsTrinomial();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x2844500
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x28448AC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x28443A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x284445C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // protected override Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateDefaultMultiplier()
    // Offset: 0x2844478
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier ECCurve::CreateDefaultMultiplier()
    ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x2844508
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x2844784
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x284480C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x28448D4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECLookupTable ECCurve::CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int off, int len);
  }; // Org.BouncyCastle.Math.EC.F2mCurve
  #pragma pack(pop)
  static check_size<sizeof(F2mCurve), 104 + sizeof(::Org::BouncyCastle::Math::EC::F2mPoint*)> __Org_BouncyCastle_Math_EC_F2mCurveSizeCheck;
  static_assert(sizeof(F2mCurve) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::IsTrinomial
// Il2CppName: IsTrinomial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::IsTrinomial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "IsTrinomial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::get_Infinity
// Il2CppName: get_Infinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::get_Infinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "get_Infinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::CloneCurve
// Il2CppName: CloneCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::CloneCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "CloneCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::SupportsCoordinateSystem
// Il2CppName: SupportsCoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::F2mCurve::*)(int)>(&Org::BouncyCastle::Math::EC::F2mCurve::SupportsCoordinateSystem)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "SupportsCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::CreateDefaultMultiplier
// Il2CppName: CreateDefaultMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&Org::BouncyCastle::Math::EC::F2mCurve::CreateDefaultMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "CreateDefaultMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::F2mCurve::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, bool)>(&Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* zs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement"), 1)->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zs, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::F2mCurve::CreateCacheSafeLookupTable
// Il2CppName: CreateCacheSafeLookupTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (Org::BouncyCastle::Math::EC::F2mCurve::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int, int)>(&Org::BouncyCastle::Math::EC::F2mCurve::CreateCacheSafeLookupTable)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::F2mCurve*), "CreateCacheSafeLookupTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, off, len});
  }
};
