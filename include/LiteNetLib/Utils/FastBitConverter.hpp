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
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: FastBitConverter
  class FastBitConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::FastBitConverter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::FastBitConverter*, "LiteNetLib.Utils", "FastBitConverter");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.FastBitConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class FastBitConverter : public ::Il2CppObject {
    public:
    // Nested type: ::LiteNetLib::Utils::FastBitConverter::ConverterHelperDouble
    struct ConverterHelperDouble;
    // Nested type: ::LiteNetLib::Utils::FastBitConverter::ConverterHelperFloat
    struct ConverterHelperFloat;
    // static private System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.UInt64 data)
    // Offset: 0x2226464
    static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int offset, uint64_t data);
    // static private System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.Int32 data)
    // Offset: 0x2226560
    static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int offset, int data);
    // static public System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.Int16 data)
    // Offset: 0x22265EC
    static void WriteLittleEndian(::ArrayW<uint8_t> buffer, int offset, int16_t data);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Double value)
    // Offset: 0x2226640
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, double value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Single value)
    // Offset: 0x2226648
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, float value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int16 value)
    // Offset: 0x2226650
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, int16_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt16 value)
    // Offset: 0x2220F78
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, uint16_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int32 value)
    // Offset: 0x221A7D4
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, int value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt32 value)
    // Offset: 0x2218AFC
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, uint value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int64 value)
    // Offset: 0x221A394
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, int64_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt64 value)
    // Offset: 0x2226654
    static void GetBytes(::ArrayW<uint8_t> bytes, int startIndex, uint64_t value);
  }; // LiteNetLib.Utils.FastBitConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::WriteLittleEndian
// Il2CppName: WriteLittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, uint64_t)>(&LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "WriteLittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::WriteLittleEndian
// Il2CppName: WriteLittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "WriteLittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::WriteLittleEndian
// Il2CppName: WriteLittleEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int16_t)>(&LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "WriteLittleEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, data});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, double)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, float)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int16_t)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, uint16_t)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, uint)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int64_t)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::FastBitConverter::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, uint64_t)>(&LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::FastBitConverter*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, startIndex, value});
  }
};
