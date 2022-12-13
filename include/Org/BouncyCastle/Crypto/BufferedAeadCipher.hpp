// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.BufferedCipherBase
#include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: IAeadCipher
  class IAeadCipher;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: BufferedAeadCipher
  class BufferedAeadCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAeadCipher*, "Org.BouncyCastle.Crypto", "BufferedAeadCipher");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedAeadCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferedAeadCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.Modes.IAeadCipher cipher
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*) == 0x8);
    public:
    // Creating conversion operator: operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*
    constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() const noexcept {
      return cipher;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Modes.IAeadCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*& dyn_cipher();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Modes.IAeadCipher cipher)
    // Offset: 0x1FB0294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Modes::IAeadCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::BufferedAeadCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedAeadCipher*, creationType>(cipher)));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1FB0350
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1FB0454
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x1FB045C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x1FB0520
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1FB05E4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1FB0744
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length, ::ArrayW<uint8_t> output, int outOff);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1FB0838
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal()
    ::ArrayW<uint8_t> DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1FB0918
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int inOff, int inLen);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1FB0A84
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1FB0B50
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedAeadCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedAeadCipher), 16 + sizeof(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*)> __Org_BouncyCastle_Crypto_BufferedAeadCipherSizeCheck;
  static_assert(sizeof(BufferedAeadCipher) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAeadCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedAeadCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAeadCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAeadCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
