// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RNGCryptoServiceProvider
  class RNGCryptoServiceProvider;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Utils
  class Utils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.Utils
  // [TokenAttribute] Offset: FFFFFFFF
  class Utils : public ::Il2CppObject {
    public:
    // Get static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
    static ::System::Security::Cryptography::RNGCryptoServiceProvider* _get__rng();
    // Set static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
    static void _set__rng(::System::Security::Cryptography::RNGCryptoServiceProvider* value);
    // static System.Security.Cryptography.RNGCryptoServiceProvider get_StaticRandomNumberGenerator()
    // Offset: 0x1C324D0
    static ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();
    // static System.Byte[] GenerateRandom(System.Int32 keySize)
    // Offset: 0x1C327E4
    static ::ArrayW<uint8_t> GenerateRandom(int keySize);
    // static System.Boolean HasAlgorithm(System.Int32 dwCalg, System.Int32 dwKeySize)
    // Offset: 0x1C31EC4
    static bool HasAlgorithm(int dwCalg, int dwKeySize);
    // static System.String DiscardWhiteSpaces(System.String inputBuffer)
    // Offset: 0x1C3285C
    static ::StringW DiscardWhiteSpaces(::StringW inputBuffer);
    // static System.String DiscardWhiteSpaces(System.String inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1C32878
    static ::StringW DiscardWhiteSpaces(::StringW inputBuffer, int inputOffset, int inputCount);
    // static System.Int32 ConvertByteArrayToInt(System.Byte[] input)
    // Offset: 0x1C32AAC
    static int ConvertByteArrayToInt(::ArrayW<uint8_t> input);
    // static System.Byte[] ConvertIntToByteArray(System.Int32 dwInput)
    // Offset: 0x1C32B18
    static ::ArrayW<uint8_t> ConvertIntToByteArray(int dwInput);
    // static System.Byte[] FixupKeyParity(System.Byte[] key)
    // Offset: 0x1C31AB8
    static ::ArrayW<uint8_t> FixupKeyParity(::ArrayW<uint8_t> key);
    // static System.Void DWORDFromLittleEndian(System.UInt32* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1C32C48
    static void DWORDFromLittleEndian(uint* x, int digits, uint8_t* block);
    // static System.Void DWORDToLittleEndian(System.Byte[] block, System.UInt32[] x, System.Int32 digits)
    // Offset: 0x1C32C94
    static void DWORDToLittleEndian(::ArrayW<uint8_t> block, ::ArrayW<uint> x, int digits);
    // static System.Void DWORDFromBigEndian(System.UInt32* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1C32D94
    static void DWORDFromBigEndian(uint* x, int digits, uint8_t* block);
    // static System.Void DWORDToBigEndian(System.Byte[] block, System.UInt32[] x, System.Int32 digits)
    // Offset: 0x1C32DE4
    static void DWORDToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint> x, int digits);
    // static System.Void QuadWordFromBigEndian(System.UInt64* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1C32EE4
    static void QuadWordFromBigEndian(uint64_t* x, int digits, uint8_t* block);
    // static System.Void QuadWordToBigEndian(System.Byte[] block, System.UInt64[] x, System.Int32 digits)
    // Offset: 0x1C32F64
    static void QuadWordToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint64_t> x, int digits);
    // static System.Boolean _ProduceLegacyHmacValues()
    // Offset: 0x1C33128
    static bool _ProduceLegacyHmacValues();
  }; // System.Security.Cryptography.Utils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator
// Il2CppName: get_StaticRandomNumberGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RNGCryptoServiceProvider* (*)()>(&System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "get_StaticRandomNumberGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::GenerateRandom
// Il2CppName: GenerateRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&System::Security::Cryptography::Utils::GenerateRandom)> {
  static const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "GenerateRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::HasAlgorithm
// Il2CppName: HasAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&System::Security::Cryptography::Utils::HasAlgorithm)> {
  static const MethodInfo* get() {
    static auto* dwCalg = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dwKeySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "HasAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dwCalg, dwKeySize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DiscardWhiteSpaces
// Il2CppName: DiscardWhiteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DiscardWhiteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DiscardWhiteSpaces
// Il2CppName: DiscardWhiteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int)>(&System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DiscardWhiteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::ConvertByteArrayToInt
// Il2CppName: ConvertByteArrayToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::Utils::ConvertByteArrayToInt)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "ConvertByteArrayToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::ConvertIntToByteArray
// Il2CppName: ConvertIntToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&System::Security::Cryptography::Utils::ConvertIntToByteArray)> {
  static const MethodInfo* get() {
    static auto* dwInput = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "ConvertIntToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dwInput});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::FixupKeyParity
// Il2CppName: FixupKeyParity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::Utils::FixupKeyParity)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "FixupKeyParity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDFromLittleEndian
// Il2CppName: DWORDFromLittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*, int, uint8_t*)>(&System::Security::Cryptography::Utils::DWORDFromLittleEndian)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DWORDFromLittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, digits, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDToLittleEndian
// Il2CppName: DWORDToLittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint>, int)>(&System::Security::Cryptography::Utils::DWORDToLittleEndian)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DWORDToLittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, x, digits});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDFromBigEndian
// Il2CppName: DWORDFromBigEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*, int, uint8_t*)>(&System::Security::Cryptography::Utils::DWORDFromBigEndian)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DWORDFromBigEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, digits, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDToBigEndian
// Il2CppName: DWORDToBigEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint>, int)>(&System::Security::Cryptography::Utils::DWORDToBigEndian)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "DWORDToBigEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, x, digits});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::QuadWordFromBigEndian
// Il2CppName: QuadWordFromBigEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, int, uint8_t*)>(&System::Security::Cryptography::Utils::QuadWordFromBigEndian)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "QuadWordFromBigEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, digits, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::QuadWordToBigEndian
// Il2CppName: QuadWordToBigEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint64_t>, int)>(&System::Security::Cryptography::Utils::QuadWordToBigEndian)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "QuadWordToBigEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, x, digits});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::_ProduceLegacyHmacValues
// Il2CppName: _ProduceLegacyHmacValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Cryptography::Utils::_ProduceLegacyHmacValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::Utils*), "_ProduceLegacyHmacValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
