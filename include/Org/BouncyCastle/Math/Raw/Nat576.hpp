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
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Forward declaring type: Nat576
  class Nat576;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat576);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat576*, "Org.BouncyCastle.Math.Raw", "Nat576");
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat576
  // [TokenAttribute] Offset: FFFFFFFF
  class Nat576 : public ::Il2CppObject {
    public:
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x17F6C14
    static void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x17F6D34
    static void Copy64(::ArrayW<uint64_t> x, int xOff, ::ArrayW<uint64_t> z, int zOff);
    // static public System.UInt64[] Create64()
    // Offset: 0x17F6F04
    static ::ArrayW<uint64_t> Create64();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x17F6F50
    static ::ArrayW<uint64_t> CreateExt64();
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x17F6F9C
    static bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x17F700C
    static bool IsOne64(::ArrayW<uint64_t> x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x17F7078
    static bool IsZero64(::ArrayW<uint64_t> x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x17F70D8
    static ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t> x);
  }; // Org.BouncyCastle.Math.Raw.Nat576
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::Raw::Nat576::Copy64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, int, ::ArrayW<uint64_t>, int)>(&Org::BouncyCastle::Math::Raw::Nat576::Copy64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Create64
// Il2CppName: Create64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t> (*)()>(&Org::BouncyCastle::Math::Raw::Nat576::Create64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Create64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::CreateExt64
// Il2CppName: CreateExt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t> (*)()>(&Org::BouncyCastle::Math::Raw::Nat576::CreateExt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "CreateExt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Eq64
// Il2CppName: Eq64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::Raw::Nat576::Eq64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Eq64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::IsOne64
// Il2CppName: IsOne64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::Raw::Nat576::IsOne64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "IsOne64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::IsZero64
// Il2CppName: IsZero64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::Raw::Nat576::IsZero64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "IsZero64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::ToBigInteger64
// Il2CppName: ToBigInteger64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::Raw::Nat576::ToBigInteger64)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "ToBigInteger64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
