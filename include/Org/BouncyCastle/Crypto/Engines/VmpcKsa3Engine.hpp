// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.VmpcEngine
#include "Org/BouncyCastle/Crypto/Engines/VmpcEngine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: VmpcKsa3Engine
  class VmpcKsa3Engine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*, "Org.BouncyCastle.Crypto.Engines", "VmpcKsa3Engine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class VmpcKsa3Engine : public ::Org::BouncyCastle::Crypto::Engines::VmpcEngine {
    public:
    // public System.Void .ctor()
    // Offset: 0x1EB26C4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.VmpcEngine
    // Base method: System.Void VmpcEngine::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcKsa3Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcKsa3Engine*, creationType>()));
    }
    // protected override System.Void InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x1EB23E0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.VmpcEngine
    // Base method: System.Void VmpcEngine::InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    void InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes);
  }; // Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey
// Il2CppName: InitKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*), "InitKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
