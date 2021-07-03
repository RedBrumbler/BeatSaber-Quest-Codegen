// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT283Field
  class SecT283Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecT283Field
    SecT283Field() noexcept {}
    // Get static field: static private readonly System.UInt64[] ROOT_Z
    static ::Array<uint64_t>* _get_ROOT_Z();
    // Set static field: static private readonly System.UInt64[] ROOT_Z
    static void _set_ROOT_Z(::Array<uint64_t>* value);
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1EA6848
    static void Add(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x1EA695C
    static void AddExt(::Array<uint64_t>* xx, ::Array<uint64_t>* yy, ::Array<uint64_t>* zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA6B30
    static void AddOne(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA6BE4
    static void AddTo(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1EA6CBC
    static ::Array<uint64_t>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA6CCC
    static void HalfTrace(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA6FDC
    static void Invert(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1EA7290
    static void Multiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1EA79E0
    static void MultiplyAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x1EA6E84
    static void Reduce(::Array<uint64_t>* xx, ::Array<uint64_t>* z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA7A7C
    static void Sqrt(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA71FC
    static void Square(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1EA7C48
    static void SquareAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x1EA7328
    static void SquareN(::Array<uint64_t>* x, int n, ::Array<uint64_t>* z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x1EA7CE0
    static uint Trace(::Array<uint64_t>* x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x1EA7D24
    static void ImplCompactExt(::Array<uint64_t>* zz);
    // static protected System.Void ImplExpand(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1EA7E0C
    static void ImplExpand(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1EA7414
    static void ImplMultiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static protected System.Void ImplMulw(System.UInt64 x, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1EA7EC4
    static void ImplMulw(uint64_t x, uint64_t y, ::Array<uint64_t>* z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1EA6DAC
    static void ImplSquare(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static private System.Void .cctor()
    // Offset: 0x1EA8094
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT283Field
  #pragma pack(pop)
  // Writing MetadataGetter for method: SecT283Field::Add
  // Il2CppName: Add
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Add)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::AddExt
  // Il2CppName: AddExt
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::AddExt)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "AddExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::AddOne
  // Il2CppName: AddOne
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::AddOne)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::AddTo
  // Il2CppName: AddTo
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::AddTo)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::FromBigInteger
  // Il2CppName: FromBigInteger
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&SecT283Field::FromBigInteger)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::HalfTrace
  // Il2CppName: HalfTrace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::HalfTrace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Invert
  // Il2CppName: Invert
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Invert)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Multiply
  // Il2CppName: Multiply
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Multiply)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::MultiplyAddToExt
  // Il2CppName: MultiplyAddToExt
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::MultiplyAddToExt)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Reduce
  // Il2CppName: Reduce
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Reduce)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Sqrt
  // Il2CppName: Sqrt
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Sqrt)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Square
  // Il2CppName: Square
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::Square)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::SquareAddToExt
  // Il2CppName: SquareAddToExt
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::SquareAddToExt)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "SquareAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::SquareN
  // Il2CppName: SquareN
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*)>(&SecT283Field::SquareN)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::Trace
  // Il2CppName: Trace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint64_t>*)>(&SecT283Field::Trace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::ImplCompactExt
  // Il2CppName: ImplCompactExt
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*)>(&SecT283Field::ImplCompactExt)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "ImplCompactExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::ImplExpand
  // Il2CppName: ImplExpand
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::ImplExpand)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "ImplExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::ImplMultiply
  // Il2CppName: ImplMultiply
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::ImplMultiply)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "ImplMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::ImplMulw
  // Il2CppName: ImplMulw
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ::Array<uint64_t>*, int)>(&SecT283Field::ImplMulw)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "ImplMulw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::ImplSquare
  // Il2CppName: ImplSquare
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&SecT283Field::ImplSquare)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), "ImplSquare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
    }
  };
  // Writing MetadataGetter for method: SecT283Field::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&SecT283Field::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SecT283Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283Field");
