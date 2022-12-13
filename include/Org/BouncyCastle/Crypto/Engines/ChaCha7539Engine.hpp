// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
#include "Org/BouncyCastle/Crypto/Engines/Salsa20Engine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ChaCha7539Engine
  class ChaCha7539Engine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*, "Org.BouncyCastle.Crypto.Engines", "ChaCha7539Engine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaCha7539Engine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
    public:
    // public override System.String get_AlgorithmName()
    // Offset: 0x2401F18
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.String Salsa20Engine::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // protected override System.Int32 get_NonceSize()
    // Offset: 0x2401F60
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Int32 Salsa20Engine::get_NonceSize()
    int get_NonceSize();
    // public System.Void .ctor()
    // Offset: 0x2401EB0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaCha7539Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaCha7539Engine*, creationType>()));
    }
    // protected override System.Void AdvanceCounter()
    // Offset: 0x2401F68
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::AdvanceCounter()
    void AdvanceCounter();
    // protected override System.Void ResetCounter()
    // Offset: 0x2402018
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::ResetCounter()
    void ResetCounter();
    // protected override System.Void SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x2402050
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::SetKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes);
    // protected override System.Void GenerateKeyStream(System.Byte[] output)
    // Offset: 0x2402168
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
    // Base method: System.Void Salsa20Engine::GenerateKeyStream(System.Byte[] output)
    void GenerateKeyStream(::ArrayW<uint8_t> output);
  }; // Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_NonceSize
// Il2CppName: get_NonceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_NonceSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "get_NonceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::AdvanceCounter
// Il2CppName: AdvanceCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::AdvanceCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "AdvanceCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::ResetCounter
// Il2CppName: ResetCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::ResetCounter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "ResetCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::SetKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::GenerateKeyStream
// Il2CppName: GenerateKeyStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::GenerateKeyStream)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*), "GenerateKeyStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
