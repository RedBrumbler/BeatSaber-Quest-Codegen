// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP160R2Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Curve/SecP160R2LookupTable
  class SecP160R2Curve::SecP160R2LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Curve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*) == 0x8);
    // private readonly System.UInt32[] m_table
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* m_table;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private readonly System.Int32 m_size
    // Size: 0x4
    // Offset: 0x20
    int m_size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecP160R2LookupTable
    SecP160R2LookupTable(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* m_outer_ = {}, ::Array<uint>* m_table_ = {}, int m_size_ = {}) noexcept : m_outer{m_outer_}, m_table{m_table_}, m_size{m_size_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Curve outer, System.UInt32[] table, System.Int32 size)
    // Offset: 0x1D555D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP160R2Curve::SecP160R2LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* outer, ::Array<uint>* table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::SecP160R2LookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP160R2Curve::SecP160R2LookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1D559CC
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint>* x, ::Array<uint>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1D55898
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1D558A0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1D55AB0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Curve/SecP160R2LookupTable
  #pragma pack(pop)
  static check_size<sizeof(SecP160R2Curve::SecP160R2LookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP160R2Curve_SecP160R2LookupTableSizeCheck;
  static_assert(sizeof(SecP160R2Curve::SecP160R2LookupTable) == 0x24);
  // Writing MetadataGetter for method: SecP160R2Curve::SecP160R2LookupTable::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP160R2Curve::SecP160R2LookupTable::*)(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*, ::Array<uint>*, int)>(&SecP160R2Curve::SecP160R2LookupTable::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SecP160R2Curve::SecP160R2LookupTable::*)(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*, ::Array<uint>*, int)>(&SecP160R2Curve::SecP160R2LookupTable::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SecP160R2Curve::SecP160R2LookupTable::CreatePoint
  // Il2CppName: CreatePoint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP160R2Curve::SecP160R2LookupTable::*)(::Array<uint>*, ::Array<uint>*)>(&SecP160R2Curve::SecP160R2LookupTable::CreatePoint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
    }
  };
  // Writing MetadataGetter for method: SecP160R2Curve::SecP160R2LookupTable::get_Size
  // Il2CppName: get_Size
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (SecP160R2Curve::SecP160R2LookupTable::*)()>(&SecP160R2Curve::SecP160R2LookupTable::get_Size)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SecP160R2Curve::SecP160R2LookupTable::Lookup
  // Il2CppName: Lookup
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP160R2Curve::SecP160R2LookupTable::*)(int)>(&SecP160R2Curve::SecP160R2LookupTable::Lookup)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SecP160R2Curve::SecP160R2LookupTable::LookupVar
  // Il2CppName: LookupVar
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (SecP160R2Curve::SecP160R2LookupTable::*)(int)>(&SecP160R2Curve::SecP160R2LookupTable::LookupVar)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecP160R2Curve::SecP160R2LookupTable*), "LookupVar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::SecP160R2LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Curve/SecP160R2LookupTable");
