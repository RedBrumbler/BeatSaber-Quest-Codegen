// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
#include "Org/BouncyCastle/Math/EC/AbstractF2mCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Custom::Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecT283R1Point
  class SecT283R1Point;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT283R1Curve
  class SecT283R1Curve : public Org::BouncyCastle::Math::EC::AbstractF2mCurve {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve::SecT283R1LookupTable
    class SecT283R1LookupTable;
    // protected readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT283R1Point m_infinity
    // Size: 0x8
    // Offset: 0x58
    Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* m_infinity;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*) == 0x8);
    // Creating value type constructor for type: SecT283R1Curve
    SecT283R1Curve(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* m_infinity_ = {}) noexcept : m_infinity{m_infinity_} {}
    // Deleting conversion operator: operator ::Array<Org::BouncyCastle::Math::BigInteger*>*
    constexpr operator ::Array<Org::BouncyCastle::Math::BigInteger*>*() const noexcept = delete;
    // Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT283R1_AFFINE_ZS
    static ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* _get_SECT283R1_AFFINE_ZS();
    // Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT283R1_AFFINE_ZS
    static void _set_SECT283R1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1EAB064
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1EAAA08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecT283R1Curve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecT283R1Curve*, creationType>()));
    }
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x1EAABA4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x1EAABFC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x1EAAC08
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1EAAC10
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1EAAC18
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1EAAC78
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1EAADD0
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override System.Boolean get_IsKoblitz()
    // Offset: 0x1EAAE70
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mCurve
    // Base method: System.Boolean AbstractF2mCurve::get_IsKoblitz()
    bool get_IsKoblitz();
    // public override Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x1EAAE78
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECLookupTable ECCurve::CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT283R1Curve
  #pragma pack(pop)
  static check_size<sizeof(SecT283R1Curve), 88 + sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecT283R1CurveSizeCheck;
  static_assert(sizeof(SecT283R1Curve) == 0x60);
  // Writing MetadataGetter for method: SecT283R1Curve::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&SecT283R1Curve::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecT283R1Curve::*)()>(&SecT283R1Curve::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecT283R1Curve::*)()>(&SecT283R1Curve::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::CloneCurve
  // Il2CppName: CloneCurve
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (SecT283R1Curve::*)()>(&SecT283R1Curve::CloneCurve)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "CloneCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::SupportsCoordinateSystem
  // Il2CppName: SupportsCoordinateSystem
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SecT283R1Curve::*)(int)>(&SecT283R1Curve::SupportsCoordinateSystem)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "SupportsCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::get_Infinity
  // Il2CppName: get_Infinity
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecT283R1Curve::*)()>(&SecT283R1Curve::get_Infinity)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "get_Infinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::get_FieldSize
  // Il2CppName: get_FieldSize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (SecT283R1Curve::*)()>(&SecT283R1Curve::get_FieldSize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::FromBigInteger
  // Il2CppName: FromBigInteger
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (SecT283R1Curve::*)(Org::BouncyCastle::Math::BigInteger*)>(&SecT283R1Curve::FromBigInteger)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::CreateRawPoint
  // Il2CppName: CreateRawPoint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecT283R1Curve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&SecT283R1Curve::CreateRawPoint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::CreateRawPoint
  // Il2CppName: CreateRawPoint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecT283R1Curve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*, bool)>(&SecT283R1Curve::CreateRawPoint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::get_IsKoblitz
  // Il2CppName: get_IsKoblitz
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SecT283R1Curve::*)()>(&SecT283R1Curve::get_IsKoblitz)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "get_IsKoblitz", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecT283R1Curve::CreateCacheSafeLookupTable
  // Il2CppName: CreateCacheSafeLookupTable
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECLookupTable* (SecT283R1Curve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int, int)>(&SecT283R1Curve::CreateCacheSafeLookupTable)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283R1Curve*), "CreateCacheSafeLookupTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<Org::BouncyCastle::Math::EC::ECPoint*>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Curve");
