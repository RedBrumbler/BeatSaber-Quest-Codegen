// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: KeccakDigest
  class KeccakDigest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::KeccakDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::KeccakDigest*, "Org.BouncyCastle.Crypto.Digests", "KeccakDigest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.KeccakDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class KeccakDigest : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDigest, public ::Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    public:
    // private System.UInt64[] state
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint64_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // protected System.Byte[] dataQueue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> dataQueue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Int32 rate
    // Size: 0x4
    // Offset: 0x20
    int rate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 bitsInQueue
    // Size: 0x4
    // Offset: 0x24
    int bitsInQueue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 fixedOutputLength
    // Size: 0x4
    // Offset: 0x28
    int fixedOutputLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean squeezing
    // Size: 0x1
    // Offset: 0x2C
    bool squeezing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IDigest
    operator ::Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: i_IDigest
    inline ::Org::BouncyCastle::Crypto::IDigest* i_IDigest() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Utilities::IMemoable
    operator ::Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Creating interface conversion operator: i_IMemoable
    inline ::Org::BouncyCastle::Utilities::IMemoable* i_IMemoable() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.UInt64[] KeccakRoundConstants
    static ::ArrayW<uint64_t> _get_KeccakRoundConstants();
    // Set static field: static private readonly System.UInt64[] KeccakRoundConstants
    static void _set_KeccakRoundConstants(::ArrayW<uint64_t> value);
    // Get instance field reference: private System.UInt64[] state
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_state();
    // Get instance field reference: protected System.Byte[] dataQueue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_dataQueue();
    // Get instance field reference: protected System.Int32 rate
    [[deprecated("Use field access instead!")]] int& dyn_rate();
    // Get instance field reference: protected System.Int32 bitsInQueue
    [[deprecated("Use field access instead!")]] int& dyn_bitsInQueue();
    // Get instance field reference: protected System.Int32 fixedOutputLength
    [[deprecated("Use field access instead!")]] int& dyn_fixedOutputLength();
    // Get instance field reference: protected System.Boolean squeezing
    [[deprecated("Use field access instead!")]] bool& dyn_squeezing();
    // public System.String get_AlgorithmName()
    // Offset: 0x2353620
    ::StringW get_AlgorithmName();
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x235339C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeccakDigest* New_ctor(int bitLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::KeccakDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeccakDigest*, creationType>(bitLength)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.KeccakDigest source)
    // Offset: 0x2353508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeccakDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::KeccakDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeccakDigest*, creationType>(source)));
    }
    // static private System.Void .cctor()
    // Offset: 0x23546C0
    static void _cctor();
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.KeccakDigest source)
    // Offset: 0x2353598
    void CopyIn(::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);
    // public System.Int32 GetDigestSize()
    // Offset: 0x23536A0
    int GetDigestSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x23536AC
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x23537C0
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2353950
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x2353AE4
    void Reset();
    // public System.Int32 GetByteLength()
    // Offset: 0x2353AEC
    int GetByteLength();
    // private System.Void Init(System.Int32 bitLength)
    // Offset: 0x235342C
    void Init(int bitLength);
    // private System.Void InitSponge(System.Int32 rate)
    // Offset: 0x2353AF8
    void InitSponge(int rate);
    // protected System.Void Absorb(System.Byte data)
    // Offset: 0x23536B0
    void Absorb(uint8_t data);
    // protected System.Void Absorb(System.Byte[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x23537C4
    void Absorb(::ArrayW<uint8_t> data, int off, int len);
    // protected System.Void AbsorbBits(System.Int32 data, System.Int32 bits)
    // Offset: 0x2353CB4
    void AbsorbBits(int data, int bits);
    // private System.Void PadAndSwitchToSqueezingPhase()
    // Offset: 0x2353DFC
    void PadAndSwitchToSqueezingPhase();
    // protected System.Void Squeeze(System.Byte[] output, System.Int32 offset, System.Int64 outputLength)
    // Offset: 0x2353998
    void Squeeze(::ArrayW<uint8_t> output, int offset, int64_t outputLength);
    // private System.Void KeccakAbsorb(System.Byte[] data, System.Int32 off)
    // Offset: 0x2353BFC
    void KeccakAbsorb(::ArrayW<uint8_t> data, int off);
    // private System.Void KeccakExtract()
    // Offset: 0x2353FA4
    void KeccakExtract();
    // private System.Void KeccakPermutation()
    // Offset: 0x2353FE8
    void KeccakPermutation();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x23545CC
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x235462C
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.KeccakDigest
  #pragma pack(pop)
  static check_size<sizeof(KeccakDigest), 44 + sizeof(bool)> __Org_BouncyCastle_Crypto_Digests_KeccakDigestSizeCheck;
  static_assert(sizeof(KeccakDigest) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::Org::BouncyCastle::Crypto::Digests::KeccakDigest*)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "KeccakDigest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Init)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::InitSponge
// Il2CppName: InitSponge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::InitSponge)> {
  static const MethodInfo* get() {
    static auto* rate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "InitSponge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rate});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb
// Il2CppName: Absorb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Absorb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb
// Il2CppName: Absorb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Absorb)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Absorb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::AbsorbBits
// Il2CppName: AbsorbBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(int, int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::AbsorbBits)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "AbsorbBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::PadAndSwitchToSqueezingPhase
// Il2CppName: PadAndSwitchToSqueezingPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::PadAndSwitchToSqueezingPhase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "PadAndSwitchToSqueezingPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Squeeze
// Il2CppName: Squeeze
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::ArrayW<uint8_t>, int, int64_t)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Squeeze)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Squeeze", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, offset, outputLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakAbsorb
// Il2CppName: KeccakAbsorb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakAbsorb)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "KeccakAbsorb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakExtract
// Il2CppName: KeccakExtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakExtract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "KeccakExtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakPermutation
// Il2CppName: KeccakPermutation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::KeccakPermutation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "KeccakPermutation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::KeccakDigest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::KeccakDigest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::KeccakDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
