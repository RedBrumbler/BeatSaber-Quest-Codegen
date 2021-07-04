// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.BufferedCipherBase
#include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IStreamCipher
  class IStreamCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedStreamCipher
  class BufferedStreamCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    // private readonly Org.BouncyCastle.Crypto.IStreamCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IStreamCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IStreamCipher*) == 0x8);
    // Creating value type constructor for type: BufferedStreamCipher
    BufferedStreamCipher(Org::BouncyCastle::Crypto::IStreamCipher* cipher_ = {}) noexcept : cipher{cipher_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher*
    constexpr operator Org::BouncyCastle::Crypto::IStreamCipher*() const noexcept {
      return cipher;
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IStreamCipher cipher)
    // Offset: 0x1CCD8FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedStreamCipher* New_ctor(Org::BouncyCastle::Crypto::IStreamCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::BufferedStreamCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedStreamCipher*, creationType>(cipher)));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1CCD9B8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1CCDABC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 GetOutputSize(System.Int32 inputLen)
    // Offset: 0x1CCDAC4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize(System.Int32 inputLen)
    int GetOutputSize(int inputLen);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 inputLen)
    // Offset: 0x1CCDACC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize(System.Int32 inputLen)
    int GetUpdateOutputSize(int inputLen);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1CCDAD4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* ProcessBytes(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CCDBE8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1CCDCF4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal()
    ::Array<uint8_t>* DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1CCDD74
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Void Reset()
    // Offset: 0x1CCDE40
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedStreamCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedStreamCipher), 16 + sizeof(Org::BouncyCastle::Crypto::IStreamCipher*)> __Org_BouncyCastle_Crypto_BufferedStreamCipherSizeCheck;
  static_assert(sizeof(BufferedStreamCipher) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedStreamCipher*, "Org.BouncyCastle.Crypto", "BufferedStreamCipher");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::Init)> {
  const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::GetBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::GetOutputSize)> {
  const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::GetUpdateOutputSize)> {
  const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedStreamCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedStreamCipher::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedStreamCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
