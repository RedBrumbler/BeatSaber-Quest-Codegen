// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Forward declaring type: GcmUtilities
  class GcmUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*, "Org.BouncyCastle.Crypto.Modes.Gcm", "GcmUtilities");
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class GcmUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.UInt32[] LOOKUP
    static ::ArrayW<uint> _get_LOOKUP();
    // Set static field: static private readonly System.UInt32[] LOOKUP
    static void _set_LOOKUP(::ArrayW<uint> value);
    // static private System.Void .cctor()
    // Offset: 0x1ED5F54
    static void _cctor();
    // static private System.UInt32[] GenerateLookup()
    // Offset: 0x1ED5448
    static ::ArrayW<uint> GenerateLookup();
    // static System.UInt32[] OneAsUints()
    // Offset: 0x1ED5538
    static ::ArrayW<uint> OneAsUints();
    // static System.Void AsBytes(System.UInt32[] x, System.Byte[] z)
    // Offset: 0x1ED55AC
    static void AsBytes(::ArrayW<uint> x, ::ArrayW<uint8_t> z);
    // static System.UInt32[] AsUints(System.Byte[] bs)
    // Offset: 0x1ED55B8
    static ::ArrayW<uint> AsUints(::ArrayW<uint8_t> bs);
    // static System.Void Multiply(System.Byte[] x, System.Byte[] y)
    // Offset: 0x1ED5628
    static void Multiply(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y);
    // static System.Void Multiply(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1ED56C4
    static void Multiply(::ArrayW<uint> x, ::ArrayW<uint> y);
    // static System.Void MultiplyP(System.UInt32[] x)
    // Offset: 0x1ED579C
    static void MultiplyP(::ArrayW<uint> x);
    // static System.Void MultiplyP8(System.UInt32[] x)
    // Offset: 0x1ED58B4
    static void MultiplyP8(::ArrayW<uint> x);
    // static System.UInt32 ShiftRight(System.UInt32[] x)
    // Offset: 0x1ED5838
    static uint ShiftRight(::ArrayW<uint> x);
    // static System.UInt32 ShiftRightN(System.UInt32[] x, System.Int32 n)
    // Offset: 0x1ED5970
    static uint ShiftRightN(::ArrayW<uint> x, int n);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y)
    // Offset: 0x1ED5A10
    static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff)
    // Offset: 0x1ED5B08
    static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y, int yOff);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x1ED5C20
    static void Xor(::ArrayW<uint8_t> x, int xOff, ::ArrayW<uint8_t> y, int yOff, ::ArrayW<uint8_t> z, int zOff);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff, System.Int32 yLen)
    // Offset: 0x1ED5DBC
    static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y, int yOff, int yLen);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Int32 len)
    // Offset: 0x1ED5E30
    static void Xor(::ArrayW<uint8_t> x, int xOff, ::ArrayW<uint8_t> y, int yOff, int len);
    // static System.Void Xor(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1ED5EA0
    static void Xor(::ArrayW<uint> x, ::ArrayW<uint> y);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::GenerateLookup
// Il2CppName: GenerateLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::GenerateLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "GenerateLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::OneAsUints
// Il2CppName: OneAsUints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::OneAsUints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "OneAsUints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsBytes
// Il2CppName: AsBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsBytes)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "AsBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsUints
// Il2CppName: AsUints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsUints)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "AsUints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP
// Il2CppName: MultiplyP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "MultiplyP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP8
// Il2CppName: MultiplyP8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP8)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "MultiplyP8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRight
// Il2CppName: ShiftRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRight)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "ShiftRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRightN
// Il2CppName: ShiftRightN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRightN)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "ShiftRightN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, yOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, yOff, yLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
