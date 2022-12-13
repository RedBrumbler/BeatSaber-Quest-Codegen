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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecT283Field
  class SecT283Field;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283Field");
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT283Field
  // [TokenAttribute] Offset: FFFFFFFF
  class SecT283Field : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.UInt64[] ROOT_Z
    static ::ArrayW<uint64_t> _get_ROOT_Z();
    // Set static field: static private readonly System.UInt64[] ROOT_Z
    static void _set_ROOT_Z(::ArrayW<uint64_t> value);
    // static private System.Void .cctor()
    // Offset: 0x250BAF4
    static void _cctor();
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x250A2A8
    static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x250A3BC
    static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250A590
    static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250A644
    static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x250A71C
    static ::ArrayW<uint64_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250A72C
    static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250AA3C
    static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x250ACF0
    static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x250B440
    static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x250A8E4
    static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250B4DC
    static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250AC5C
    static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x250B6A8
    static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x250AD88
    static void SquareN(::ArrayW<uint64_t> x, int n, ::ArrayW<uint64_t> z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x250B740
    static uint Trace(::ArrayW<uint64_t> x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x250B784
    static void ImplCompactExt(::ArrayW<uint64_t> zz);
    // static protected System.Void ImplExpand(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250B86C
    static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x250AE74
    static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz);
    // static protected System.Void ImplMulw(System.UInt64 x, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x250B924
    static void ImplMulw(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x250A80C
    static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT283Field
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddExt
// Il2CppName: AddExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddExt)> {
  static const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* yy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "AddExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, yy, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddOne)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::AddTo)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::HalfTrace)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Invert)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::MultiplyAddToExt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Reduce)> {
  static const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Sqrt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Square)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::SquareAddToExt
// Il2CppName: SquareAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::SquareAddToExt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "SquareAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, int, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::SquareN)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::Trace)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplCompactExt
// Il2CppName: ImplCompactExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplCompactExt)> {
  static const MethodInfo* get() {
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "ImplCompactExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplExpand
// Il2CppName: ImplExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplExpand)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "ImplExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplMultiply
// Il2CppName: ImplMultiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplMultiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "ImplMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplMulw
// Il2CppName: ImplMulw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ::ArrayW<uint64_t>, int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplMulw)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "ImplMulw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplSquare
// Il2CppName: ImplSquare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field::ImplSquare)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*), "ImplSquare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
