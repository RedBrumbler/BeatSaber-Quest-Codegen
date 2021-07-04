// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP192K1Curve.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve/SecP192K1LookupTable
  class SecP192K1Curve::SecP192K1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve m_outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve* m_outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve*) == 0x8);
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
    // Creating value type constructor for type: SecP192K1LookupTable
    SecP192K1LookupTable(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve* m_outer_ = {}, ::Array<uint>* m_table_ = {}, int m_size_ = {}) noexcept : m_outer{m_outer_}, m_table{m_table_}, m_size{m_size_} {}
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve outer, System.UInt32[] table, System.Int32 size)
    // Offset: 0x1D58D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP192K1Curve::SecP192K1LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve* outer, ::Array<uint>* table, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP192K1Curve::SecP192K1LookupTable*, creationType>(outer, table, size)));
    }
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1D59148
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint>* x, ::Array<uint>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1D59014
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1D5901C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1D5922C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve/SecP192K1LookupTable
  #pragma pack(pop)
  static check_size<sizeof(SecP192K1Curve::SecP192K1LookupTable), 32 + sizeof(int)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP192K1Curve_SecP192K1LookupTableSizeCheck;
  static_assert(sizeof(SecP192K1Curve::SecP192K1LookupTable) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Curve/SecP192K1LookupTable");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::CreatePoint)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::get_Size)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::Lookup)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::LookupVar
// Il2CppName: LookupVar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable::LookupVar)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Curve::SecP192K1LookupTable*), "LookupVar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
