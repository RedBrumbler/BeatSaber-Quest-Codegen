// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpPoint
#include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Point
  class SecP224R1Point : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
    public:
    // Creating value type constructor for type: SecP224R1Point
    SecP224R1Point() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x1D62F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP224R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP224R1Point*, creationType>(curve, x, y)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1D63204
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP224R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP224R1Point*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1D63368
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP224R1Point* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP224R1Point*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1D65F50
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Add(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x1D66618
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x1D66AD8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x1D66BA8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ThreeTimes()
    Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x1D66C28
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Point
  #pragma pack(pop)
  // Writing MetadataGetter for method: SecP224R1Point::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>()});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*, bool)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*, bool)>(&SecP224R1Point::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECCurve*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::il2cpp_utils::ExtractIndependentType<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::Add
  // Il2CppName: Add
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&SecP224R1Point::Add)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>()});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::Twice
  // Il2CppName: Twice
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP224R1Point::*)()>(&SecP224R1Point::Twice)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::TwicePlus
  // Il2CppName: TwicePlus
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP224R1Point::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&SecP224R1Point::TwicePlus)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), "TwicePlus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::ECPoint*>()});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::ThreeTimes
  // Il2CppName: ThreeTimes
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP224R1Point::*)()>(&SecP224R1Point::ThreeTimes)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), "ThreeTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecP224R1Point::Negate
  // Il2CppName: Negate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP224R1Point::*)()>(&SecP224R1Point::Negate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP224R1Point*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1Point");
