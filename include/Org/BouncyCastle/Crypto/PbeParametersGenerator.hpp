// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.PbeParametersGenerator
  class PbeParametersGenerator : public ::Il2CppObject {
    public:
    // protected System.Byte[] mPassword
    // Offset: 0x10
    ::Array<uint8_t>* mPassword;
    // protected System.Byte[] mSalt
    // Offset: 0x18
    ::Array<uint8_t>* mSalt;
    // protected System.Int32 mIterationCount
    // Offset: 0x20
    int mIterationCount;
    // public System.Void Init(System.Byte[] password, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0xF4EBB0
    void Init(::Array<uint8_t>* password, ::Array<uint8_t>* salt, int iterationCount);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize, int ivSize);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
    // static public System.Byte[] Pkcs5PasswordToBytes(System.Char[] password)
    // Offset: 0xF4ECC8
    static ::Array<uint8_t>* Pkcs5PasswordToBytes(::Array<::Il2CppChar>* password);
    // static public System.Byte[] Pkcs12PasswordToBytes(System.Char[] password, System.Boolean wrongPkcs12Zero)
    // Offset: 0xF4ED30
    static ::Array<uint8_t>* Pkcs12PasswordToBytes(::Array<::Il2CppChar>* password, bool wrongPkcs12Zero);
    // protected System.Void .ctor()
    // Offset: 0xF4EBA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PbeParametersGenerator* New_ctor();
  }; // Org.BouncyCastle.Crypto.PbeParametersGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::PbeParametersGenerator*, "Org.BouncyCastle.Crypto", "PbeParametersGenerator");
#pragma pack(pop)