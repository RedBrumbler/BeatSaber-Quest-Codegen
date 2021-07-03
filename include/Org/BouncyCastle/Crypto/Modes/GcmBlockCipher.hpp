// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes::Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Forward declaring type: IGcmMultiplier
  class IGcmMultiplier;
  // Forward declaring type: IGcmExponentiator
  class IGcmExponentiator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
  class GcmBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier multiplier
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* multiplier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*) == 0x8);
    // private Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator exp
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x28
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x29
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialised and: macSize
    char __padding4[0x2] = {};
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x2C
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] lastKey
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* lastKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] nonce
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* nonce;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] initialAssociatedText
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* initialAssociatedText;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] H
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* H;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] J0
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* J0;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] bufBlock
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* bufBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] macBlock
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* macBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] S
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* S;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] S_at
    // Size: 0x8
    // Offset: 0x70
    ::Array<uint8_t>* S_at;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] S_atPre
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint8_t>* S_atPre;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] counter
    // Size: 0x8
    // Offset: 0x80
    ::Array<uint8_t>* counter;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32 blocksRemaining
    // Size: 0x4
    // Offset: 0x88
    uint blocksRemaining;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x8C
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64 totalLength
    // Size: 0x8
    // Offset: 0x90
    uint64_t totalLength;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Byte[] atBlock
    // Size: 0x8
    // Offset: 0x98
    ::Array<uint8_t>* atBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 atBlockPos
    // Size: 0x4
    // Offset: 0xA0
    int atBlockPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: atBlockPos and: atLength
    char __padding21[0x4] = {};
    // private System.UInt64 atLength
    // Size: 0x8
    // Offset: 0xA8
    uint64_t atLength;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 atLengthPre
    // Size: 0x8
    // Offset: 0xB0
    uint64_t atLengthPre;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: GcmBlockCipher
    GcmBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* multiplier_ = {}, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp_ = {}, bool forEncryption_ = {}, bool initialised_ = {}, int macSize_ = {}, ::Array<uint8_t>* lastKey_ = {}, ::Array<uint8_t>* nonce_ = {}, ::Array<uint8_t>* initialAssociatedText_ = {}, ::Array<uint8_t>* H_ = {}, ::Array<uint8_t>* J0_ = {}, ::Array<uint8_t>* bufBlock_ = {}, ::Array<uint8_t>* macBlock_ = {}, ::Array<uint8_t>* S_ = {}, ::Array<uint8_t>* S_at_ = {}, ::Array<uint8_t>* S_atPre_ = {}, ::Array<uint8_t>* counter_ = {}, uint blocksRemaining_ = {}, int bufOff_ = {}, uint64_t totalLength_ = {}, ::Array<uint8_t>* atBlock_ = {}, int atBlockPos_ = {}, uint64_t atLength_ = {}, uint64_t atLengthPre_ = {}) noexcept : cipher{cipher_}, multiplier{multiplier_}, exp{exp_}, forEncryption{forEncryption_}, initialised{initialised_}, macSize{macSize_}, lastKey{lastKey_}, nonce{nonce_}, initialAssociatedText{initialAssociatedText_}, H{H_}, J0{J0_}, bufBlock{bufBlock_}, macBlock{macBlock_}, S{S_}, S_at{S_at_}, S_atPre{S_atPre_}, counter{counter_}, blocksRemaining{blocksRemaining_}, bufOff{bufOff_}, totalLength{totalLength_}, atBlock{atBlock_}, atBlockPos{atBlockPos_}, atLength{atLength_}, atLengthPre{atLengthPre_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher c)
    // Offset: 0x18D1F1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GcmBlockCipher*, creationType>(c)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher c, Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier m)
    // Offset: 0x18D1F24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GcmBlockCipher*, creationType>(c, m)));
    }
    // public System.Int32 GetBlockSize()
    // Offset: 0x18D20A8
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x18D20B0
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x18D290C
    int GetOutputSize(int len);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x18D2934
    int GetUpdateOutputSize(int len);
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x18D296C
    void ProcessAadBytes(::Array<uint8_t>* inBytes, int inOff, int len);
    // private System.Void InitCipher()
    // Offset: 0x18D2AE8
    void InitCipher();
    // public System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18D2C98
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18D30B0
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18D391C
    void Reset();
    // private System.Void Reset(System.Boolean clearMac)
    // Offset: 0x18D3750
    void Reset(bool clearMac);
    // private System.Void ProcessBlock(System.Byte[] buf, System.Int32 bufOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18D2F38
    void ProcessBlock(::Array<uint8_t>* buf, int bufOff, ::Array<uint8_t>* output, int outOff);
    // private System.Void ProcessPartial(System.Byte[] buf, System.Int32 off, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18D35EC
    void ProcessPartial(::Array<uint8_t>* buf, int off, int len, ::Array<uint8_t>* output, int outOff);
    // private System.Void gHASH(System.Byte[] Y, System.Byte[] b, System.Int32 len)
    // Offset: 0x18D274C
    void gHASH(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int len);
    // private System.Void gHASHBlock(System.Byte[] Y, System.Byte[] b)
    // Offset: 0x18D2818
    void gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b);
    // private System.Void gHASHBlock(System.Byte[] Y, System.Byte[] b, System.Int32 off)
    // Offset: 0x18D3AD8
    void gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off);
    // private System.Void gHASHPartial(System.Byte[] Y, System.Byte[] b, System.Int32 off, System.Int32 len)
    // Offset: 0x18D2B8C
    void gHASHPartial(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off, int len);
    // private System.Void GetNextCtrBlock(System.Byte[] block)
    // Offset: 0x18D3924
    void GetNextCtrBlock(::Array<uint8_t>* block);
    // private System.Void CheckStatus()
    // Offset: 0x18D2A4C
    void CheckStatus();
  }; // Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(GcmBlockCipher), 176 + sizeof(uint64_t)> __Org_BouncyCastle_Crypto_Modes_GcmBlockCipherSizeCheck;
  static_assert(sizeof(GcmBlockCipher) == 0xB8);
  // Writing MetadataGetter for method: GcmBlockCipher::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(Org::BouncyCastle::Crypto::IBlockCipher*)>(&GcmBlockCipher::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IBlockCipher*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(Org::BouncyCastle::Crypto::IBlockCipher*)>(&GcmBlockCipher::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IBlockCipher*>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(Org::BouncyCastle::Crypto::IBlockCipher*, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*)>(&GcmBlockCipher::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IBlockCipher*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(Org::BouncyCastle::Crypto::IBlockCipher*, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*)>(&GcmBlockCipher::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IBlockCipher*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::GetBlockSize
  // Il2CppName: GetBlockSize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GcmBlockCipher::*)()>(&GcmBlockCipher::GetBlockSize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::Init
  // Il2CppName: Init
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&GcmBlockCipher::Init)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::GetOutputSize
  // Il2CppName: GetOutputSize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GcmBlockCipher::*)(int)>(&GcmBlockCipher::GetOutputSize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::GetUpdateOutputSize
  // Il2CppName: GetUpdateOutputSize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GcmBlockCipher::*)(int)>(&GcmBlockCipher::GetUpdateOutputSize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::ProcessAadBytes
  // Il2CppName: ProcessAadBytes
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, int, int)>(&GcmBlockCipher::ProcessAadBytes)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "ProcessAadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::InitCipher
  // Il2CppName: InitCipher
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)()>(&GcmBlockCipher::InitCipher)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "InitCipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::ProcessBytes
  // Il2CppName: ProcessBytes
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GcmBlockCipher::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&GcmBlockCipher::ProcessBytes)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::DoFinal
  // Il2CppName: DoFinal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GcmBlockCipher::*)(::Array<uint8_t>*, int)>(&GcmBlockCipher::DoFinal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::Reset
  // Il2CppName: Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)()>(&GcmBlockCipher::Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::Reset
  // Il2CppName: Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(bool)>(&GcmBlockCipher::Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::ProcessBlock
  // Il2CppName: ProcessBlock
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&GcmBlockCipher::ProcessBlock)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::ProcessPartial
  // Il2CppName: ProcessPartial
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&GcmBlockCipher::ProcessPartial)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "ProcessPartial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::gHASH
  // Il2CppName: gHASH
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, ::Array<uint8_t>*, int)>(&GcmBlockCipher::gHASH)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "gHASH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::gHASHBlock
  // Il2CppName: gHASHBlock
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&GcmBlockCipher::gHASHBlock)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "gHASHBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::gHASHBlock
  // Il2CppName: gHASHBlock
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, ::Array<uint8_t>*, int)>(&GcmBlockCipher::gHASHBlock)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "gHASHBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::gHASHPartial
  // Il2CppName: gHASHPartial
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*, ::Array<uint8_t>*, int, int)>(&GcmBlockCipher::gHASHPartial)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "gHASHPartial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::GetNextCtrBlock
  // Il2CppName: GetNextCtrBlock
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)(::Array<uint8_t>*)>(&GcmBlockCipher::GetNextCtrBlock)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "GetNextCtrBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  // Writing MetadataGetter for method: GcmBlockCipher::CheckStatus
  // Il2CppName: CheckStatus
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GcmBlockCipher::*)()>(&GcmBlockCipher::CheckStatus)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GcmBlockCipher*), "CheckStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GcmBlockCipher");
