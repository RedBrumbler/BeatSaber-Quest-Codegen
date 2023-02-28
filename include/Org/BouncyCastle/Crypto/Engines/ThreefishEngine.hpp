// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Engines
namespace Org::BouncyCastle::Crypto::Engines {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ThreefishEngine
  class ThreefishEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreefishEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // Nested type: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher
    class ThreefishCipher;
    // Nested type: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish256Cipher
    class Threefish256Cipher;
    // Nested type: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher
    class Threefish512Cipher;
    // Nested type: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish1024Cipher
    class Threefish1024Cipher;
    public:
    // private readonly System.Int32 blocksizeBytes
    // Size: 0x4
    // Offset: 0x10
    int blocksizeBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 blocksizeWords
    // Size: 0x4
    // Offset: 0x14
    int blocksizeWords;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.UInt64[] currentBlock
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint64_t> currentBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private readonly System.UInt64[] t
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint64_t> t;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private readonly System.UInt64[] kw
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint64_t> kw;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher cipher
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x38
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32[] MOD9
    static ::ArrayW<int> _get_MOD9();
    // Set static field: static private readonly System.Int32[] MOD9
    static void _set_MOD9(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] MOD17
    static ::ArrayW<int> _get_MOD17();
    // Set static field: static private readonly System.Int32[] MOD17
    static void _set_MOD17(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] MOD5
    static ::ArrayW<int> _get_MOD5();
    // Set static field: static private readonly System.Int32[] MOD5
    static void _set_MOD5(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] MOD3
    static ::ArrayW<int> _get_MOD3();
    // Set static field: static private readonly System.Int32[] MOD3
    static void _set_MOD3(::ArrayW<int> value);
    // Get instance field reference: private readonly System.Int32 blocksizeBytes
    [[deprecated("Use field access instead!")]] int& dyn_blocksizeBytes();
    // Get instance field reference: private readonly System.Int32 blocksizeWords
    [[deprecated("Use field access instead!")]] int& dyn_blocksizeWords();
    // Get instance field reference: private readonly System.UInt64[] currentBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_currentBlock();
    // Get instance field reference: private readonly System.UInt64[] t
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_t();
    // Get instance field reference: private readonly System.UInt64[] kw
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_kw();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*& dyn_cipher();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // public System.String get_AlgorithmName()
    // Offset: 0x24C4488
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x24C450C
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x24C386C
    static void _cctor();
    // public System.Void .ctor(System.Int32 blocksizeBits)
    // Offset: 0x24C3A78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreefishEngine* New_ctor(int blocksizeBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreefishEngine*, creationType>(blocksizeBits)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x24C3C74
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // System.Void Init(System.Boolean forEncryption, System.UInt64[] key, System.UInt64[] tweak)
    // Offset: 0x24C40F0
    void Init(bool forEncryption, ::ArrayW<uint64_t> key, ::ArrayW<uint64_t> tweak);
    // private System.Void SetKey(System.UInt64[] key)
    // Offset: 0x24C4140
    void SetKey(::ArrayW<uint64_t> key);
    // private System.Void SetTweak(System.UInt64[] tweak)
    // Offset: 0x24C42EC
    void SetTweak(::ArrayW<uint64_t> tweak);
    // public System.Int32 GetBlockSize()
    // Offset: 0x24C4514
    int GetBlockSize();
    // public System.Void Reset()
    // Offset: 0x24C451C
    void Reset();
    // public System.Int32 ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x24C4520
    int ProcessBlock(::ArrayW<uint8_t> inBytes, int inOff, ::ArrayW<uint8_t> outBytes, int outOff);
    // System.Int32 ProcessBlock(System.UInt64[] inWords, System.UInt64[] outWords)
    // Offset: 0x24C4708
    int ProcessBlock(::ArrayW<uint64_t> inWords, ::ArrayW<uint64_t> outWords);
    // static System.UInt64 BytesToWord(System.Byte[] bytes, System.Int32 off)
    // Offset: 0x24C3FB4
    static uint64_t BytesToWord(::ArrayW<uint8_t> bytes, int off);
    // static System.Void WordToBytes(System.UInt64 word, System.Byte[] bytes, System.Int32 off)
    // Offset: 0x24C4860
    static void WordToBytes(uint64_t word, ::ArrayW<uint8_t> bytes, int off);
    // static private System.UInt64 RotlXor(System.UInt64 x, System.Int32 n, System.UInt64 xor)
    // Offset: 0x24C49D8
    static uint64_t RotlXor(uint64_t x, int n, uint64_t _xor);
    // static private System.UInt64 XorRotr(System.UInt64 x, System.Int32 n, System.UInt64 xor)
    // Offset: 0x24C49E8
    static uint64_t XorRotr(uint64_t x, int n, uint64_t _xor);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine
  #pragma pack(pop)
  static check_size<sizeof(ThreefishEngine), 56 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_ThreefishEngineSizeCheck;
  static_assert(sizeof(ThreefishEngine) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(bool, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* tweak = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, key, tweak});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetTweak
// Il2CppName: SetTweak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetTweak)> {
  static const MethodInfo* get() {
    static auto* tweak = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "SetTweak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tweak});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* outWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inWords, outWords});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::BytesToWord
// Il2CppName: BytesToWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::BytesToWord)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "BytesToWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::WordToBytes
// Il2CppName: WordToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::WordToBytes)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "WordToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, bytes, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::RotlXor
// Il2CppName: RotlXor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int, uint64_t)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::RotlXor)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* _xor = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "RotlXor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, _xor});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::XorRotr
// Il2CppName: XorRotr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int, uint64_t)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::XorRotr)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* _xor = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine*), "XorRotr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, _xor});
  }
};
