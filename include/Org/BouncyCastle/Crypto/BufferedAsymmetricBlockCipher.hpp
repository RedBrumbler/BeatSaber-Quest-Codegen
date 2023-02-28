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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: BufferedAsymmetricBlockCipher
  class BufferedAsymmetricBlockCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*, "Org.BouncyCastle.Crypto", "BufferedAsymmetricBlockCipher");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferedAsymmetricBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x20
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_cipher();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher)
    // Offset: 0x1FC23A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedAsymmetricBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedAsymmetricBlockCipher*, creationType>(cipher)));
    }
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1FC2420
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x1FC24D4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x1FC2588
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1FC2590
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1FC270C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int inOff, int length);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1FC2820
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal()
    ::ArrayW<uint8_t> DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1FC2948
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int inOff, int length);
    // public override System.Void Reset()
    // Offset: 0x1FC297C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedAsymmetricBlockCipher), 32 + sizeof(int)> __Org_BouncyCastle_Crypto_BufferedAsymmetricBlockCipherSizeCheck;
  static_assert(sizeof(BufferedAsymmetricBlockCipher) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
