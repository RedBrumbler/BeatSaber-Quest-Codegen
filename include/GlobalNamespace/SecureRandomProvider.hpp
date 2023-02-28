// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SecureRandomProvider
  class SecureRandomProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SecureRandomProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SecureRandomProvider*, "", "SecureRandomProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SecureRandomProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class SecureRandomProvider : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::SecureRandomProvider::SecureRandomState
    class SecureRandomState;
    // Get static field: static private SecureRandomProvider/SecureRandomState _secureRandomState
    static ::GlobalNamespace::SecureRandomProvider::SecureRandomState* _get__secureRandomState();
    // Set static field: static private SecureRandomProvider/SecureRandomState _secureRandomState
    static void _set__secureRandomState(::GlobalNamespace::SecureRandomProvider::SecureRandomState* value);
    // static private System.Void .cctor()
    // Offset: 0x26B6480
    static void _cctor();
    // static public System.Byte[] GetBytes(System.Int32 length)
    // Offset: 0x26B60D8
    static ::ArrayW<uint8_t> GetBytes(int length);
    // static public System.Byte GetByte()
    // Offset: 0x26B6248
    static uint8_t GetByte();
    // static public System.Void GetBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x26B636C
    static void GetBytes(::ArrayW<uint8_t> buffer, int offset, int length);
    // static public System.Void GetBytes(System.Byte[] buffer)
    // Offset: 0x26B63FC
    static void GetBytes(::ArrayW<uint8_t> buffer);
  }; // SecureRandomProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SecureRandomProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)()>(&GlobalNamespace::SecureRandomProvider::GetByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
