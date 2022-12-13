// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger_;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: DSAManaged
  class DSAManaged;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::DSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::DSAManaged*, "Mono.Security.Cryptography", "DSAManaged");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.DSAManaged
  // [TokenAttribute] Offset: FFFFFFFF
  class DSAManaged : public ::System::Security::Cryptography::DSA {
    public:
    // Nested type: ::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler
    class KeyGeneratedEventHandler;
    public:
    // private System.Boolean keypairGenerated
    // Size: 0x1
    // Offset: 0x20
    bool keypairGenerated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x21
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: p
    char __padding1[0x6] = {};
    // private Mono.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Math::BigInteger_* p;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Math::BigInteger_* q;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger g
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Math::BigInteger_* g;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x40
    ::Mono::Math::BigInteger_* x;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x48
    ::Mono::Math::BigInteger_* y;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger j
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Math::BigInteger_* j;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger seed
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Math::BigInteger_* seed;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private System.Int32 counter
    // Size: 0x4
    // Offset: 0x60
    int counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean j_missing
    // Size: 0x1
    // Offset: 0x64
    bool j_missing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: j_missing and: rng
    char __padding10[0x3] = {};
    // private System.Security.Cryptography.RandomNumberGenerator rng
    // Size: 0x8
    // Offset: 0x68
    ::System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0x107A558
    // private Mono.Security.Cryptography.DSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    // Size: 0x8
    // Offset: 0x70
    ::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* KeyGenerated;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean keypairGenerated
    [[deprecated("Use field access instead!")]] bool& dyn_keypairGenerated();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // Get instance field reference: private Mono.Math.BigInteger p
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_p();
    // Get instance field reference: private Mono.Math.BigInteger q
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_q();
    // Get instance field reference: private Mono.Math.BigInteger g
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_g();
    // Get instance field reference: private Mono.Math.BigInteger x
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_x();
    // Get instance field reference: private Mono.Math.BigInteger y
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_y();
    // Get instance field reference: private Mono.Math.BigInteger j
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_j();
    // Get instance field reference: private Mono.Math.BigInteger seed
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_seed();
    // Get instance field reference: private System.Int32 counter
    [[deprecated("Use field access instead!")]] int& dyn_counter();
    // Get instance field reference: private System.Boolean j_missing
    [[deprecated("Use field access instead!")]] bool& dyn_j_missing();
    // Get instance field reference: private System.Security.Cryptography.RandomNumberGenerator rng
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RandomNumberGenerator*& dyn_rng();
    // Get instance field reference: private Mono.Security.Cryptography.DSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler KeyGenerated
    [[deprecated("Use field access instead!")]] ::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*& dyn_KeyGenerated();
    // private System.Security.Cryptography.RandomNumberGenerator get_Random()
    // Offset: 0x1FE2358
    ::System::Security::Cryptography::RandomNumberGenerator* get_Random();
    // public System.Boolean get_PublicOnly()
    // Offset: 0x1FE23B0
    bool get_PublicOnly();
    // public System.Void add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler value)
    // Offset: 0x1FE3188
    void add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value);
    // public System.Void remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler value)
    // Offset: 0x1FE322C
    void remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value);
    // public System.Void .ctor(System.Int32 dwKeySize)
    // Offset: 0x1FE163C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSAManaged* New_ctor(int dwKeySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::DSAManaged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSAManaged*, creationType>(dwKeySize)));
    }
    // private System.Void Generate()
    // Offset: 0x1FE1794
    void Generate();
    // private System.Void GenerateKeyPair()
    // Offset: 0x1FE1DA8
    void GenerateKeyPair();
    // private System.Void add(System.Byte[] a, System.Byte[] b, System.Int32 value)
    // Offset: 0x1FE22A4
    void add(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b, int value);
    // private System.Void GenerateParams(System.Int32 keyLength)
    // Offset: 0x1FE17E4
    void GenerateParams(int keyLength);
    // private System.Byte[] NormalizeArray(System.Byte[] array)
    // Offset: 0x1FE2438
    ::ArrayW<uint8_t> NormalizeArray(::ArrayW<uint8_t> array);
    // public override System.Int32 get_KeySize()
    // Offset: 0x1FE2384
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Int32 AsymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // protected override System.Void Finalize()
    // Offset: 0x1FE1720
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Security.Cryptography.DSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0x1FE24EC
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Security.Cryptography.DSAParameters DSA::ExportParameters(System.Boolean includePrivateParameters)
    ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    // Offset: 0x1FE2794
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Void DSA::ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x1FE2A68
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Boolean DSA::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1FE2F40
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // Mono.Security.Cryptography.DSAManaged
  #pragma pack(pop)
  static check_size<sizeof(DSAManaged), 112 + sizeof(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*)> __Mono_Security_Cryptography_DSAManagedSizeCheck;
  static_assert(sizeof(DSAManaged) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::get_Random
// Il2CppName: get_Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::get_Random)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "get_Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::get_PublicOnly
// Il2CppName: get_PublicOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::get_PublicOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "get_PublicOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::add_KeyGenerated
// Il2CppName: add_KeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*)>(&Mono::Security::Cryptography::DSAManaged::add_KeyGenerated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Cryptography", "DSAManaged/KeyGeneratedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "add_KeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated
// Il2CppName: remove_KeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(::Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*)>(&Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Cryptography", "DSAManaged/KeyGeneratedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "remove_KeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::Generate
// Il2CppName: Generate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::Generate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "Generate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::GenerateKeyPair
// Il2CppName: GenerateKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::GenerateKeyPair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "GenerateKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::add
// Il2CppName: add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::DSAManaged::add)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::GenerateParams
// Il2CppName: GenerateParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(int)>(&Mono::Security::Cryptography::DSAManaged::GenerateParams)> {
  static const MethodInfo* get() {
    static auto* keyLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "GenerateParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::NormalizeArray
// Il2CppName: NormalizeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::DSAManaged::NormalizeArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "NormalizeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)()>(&Mono::Security::Cryptography::DSAManaged::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (Mono::Security::Cryptography::DSAManaged::*)(bool)>(&Mono::Security::Cryptography::DSAManaged::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(::System::Security::Cryptography::DSAParameters)>(&Mono::Security::Cryptography::DSAManaged::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::DSAManaged::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash, rgbSignature});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::DSAManaged::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::DSAManaged::*)(bool)>(&Mono::Security::Cryptography::DSAManaged::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::DSAManaged*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
