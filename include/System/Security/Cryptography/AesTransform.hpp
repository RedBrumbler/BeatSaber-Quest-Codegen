// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Aes
  class Aes;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AesTransform
  class AesTransform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.UInt32[] expandedKey
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint>* expandedKey;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32 Nk
    // Size: 0x4
    // Offset: 0x60
    int Nk;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 Nr
    // Size: 0x4
    // Offset: 0x64
    int Nr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AesTransform
    AesTransform(::Array<uint>* expandedKey_ = {}, int Nk_ = {}, int Nr_ = {}) noexcept : expandedKey{expandedKey_}, Nk{Nk_}, Nr{Nr_} {}
    // Get static field: static private readonly System.UInt32[] Rcon
    static ::Array<uint>* _get_Rcon();
    // Set static field: static private readonly System.UInt32[] Rcon
    static void _set_Rcon(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[] SBox
    static ::Array<uint8_t>* _get_SBox();
    // Set static field: static private readonly System.Byte[] SBox
    static void _set_SBox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] iSBox
    static ::Array<uint8_t>* _get_iSBox();
    // Set static field: static private readonly System.Byte[] iSBox
    static void _set_iSBox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] T0
    static ::Array<uint>* _get_T0();
    // Set static field: static private readonly System.UInt32[] T0
    static void _set_T0(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] T1
    static ::Array<uint>* _get_T1();
    // Set static field: static private readonly System.UInt32[] T1
    static void _set_T1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] T2
    static ::Array<uint>* _get_T2();
    // Set static field: static private readonly System.UInt32[] T2
    static void _set_T2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] T3
    static ::Array<uint>* _get_T3();
    // Set static field: static private readonly System.UInt32[] T3
    static void _set_T3(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] iT0
    static ::Array<uint>* _get_iT0();
    // Set static field: static private readonly System.UInt32[] iT0
    static void _set_iT0(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] iT1
    static ::Array<uint>* _get_iT1();
    // Set static field: static private readonly System.UInt32[] iT1
    static void _set_iT1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] iT2
    static ::Array<uint>* _get_iT2();
    // Set static field: static private readonly System.UInt32[] iT2
    static void _set_iT2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] iT3
    static ::Array<uint>* _get_iT3();
    // Set static field: static private readonly System.UInt32[] iT3
    static void _set_iT3(::Array<uint>* value);
    // public System.Void .ctor(System.Security.Cryptography.Aes algo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x2390AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AesTransform* New_ctor(System::Security::Cryptography::Aes* algo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AesTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AesTransform*, creationType>(algo, encryption, key, iv)));
    }
    // private System.UInt32 SubByte(System.UInt32 a)
    // Offset: 0x2391BA4
    uint SubByte(uint a);
    // private System.Void Encrypt128(System.Byte[] indata, System.Byte[] outdata, System.UInt32[] ekey)
    // Offset: 0x2391C94
    void Encrypt128(::Array<uint8_t>* indata, ::Array<uint8_t>* outdata, ::Array<uint>* ekey);
    // private System.Void Decrypt128(System.Byte[] indata, System.Byte[] outdata, System.UInt32[] ekey)
    // Offset: 0x2393AAC
    void Decrypt128(::Array<uint8_t>* indata, ::Array<uint8_t>* outdata, ::Array<uint>* ekey);
    // static private System.Void .cctor()
    // Offset: 0x23958BC
    static void _cctor();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x2391C80
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.AesTransform
  #pragma pack(pop)
  static check_size<sizeof(AesTransform), 100 + sizeof(int)> __System_Security_Cryptography_AesTransformSizeCheck;
  static_assert(sizeof(AesTransform) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesTransform*, "System.Security.Cryptography", "AesTransform");
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::SubByte
// Il2CppName: SubByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Security::Cryptography::AesTransform::*)(uint)>(&System::Security::Cryptography::AesTransform::SubByte)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesTransform*), "SubByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::Encrypt128
// Il2CppName: Encrypt128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint>*)>(&System::Security::Cryptography::AesTransform::Encrypt128)> {
  const MethodInfo* get() {
    static auto* indata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outdata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ekey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesTransform*), "Encrypt128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indata, outdata, ekey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::Decrypt128
// Il2CppName: Decrypt128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint>*)>(&System::Security::Cryptography::AesTransform::Decrypt128)> {
  const MethodInfo* get() {
    static auto* indata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outdata = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ekey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesTransform*), "Decrypt128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indata, outdata, ekey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::AesTransform::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::AesTransform::ECB)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
