// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Buffer
  // [ComVisibleAttribute] Offset: D7A404
  class Buffer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Buffer
    Buffer() noexcept {}
    // static System.Boolean InternalBlockCopy(System.Array src, System.Int32 srcOffsetBytes, System.Array dst, System.Int32 dstOffsetBytes, System.Int32 byteCount)
    // Offset: 0x177D8E0
    static bool InternalBlockCopy(System::Array* src, int srcOffsetBytes, System::Array* dst, int dstOffsetBytes, int byteCount);
    // static System.Int32 IndexOfByte(System.Byte* src, System.Byte value, System.Int32 index, System.Int32 count)
    // Offset: 0x177D8E4
    static int IndexOfByte(uint8_t* src, uint8_t value, int index, int count);
    // static private System.Int32 _ByteLength(System.Array array)
    // Offset: 0x177DA00
    static int _ByteLength(System::Array* array);
    // static System.Void ZeroMemory(System.Byte* src, System.Int64 len)
    // Offset: 0x177DA04
    static void ZeroMemory(uint8_t* src, int64_t len);
    // static System.Void Memcpy(System.Byte[] dest, System.Int32 destIndex, System.Byte* src, System.Int32 srcIndex, System.Int32 len)
    // Offset: 0x177DA28
    static void Memcpy(::Array<uint8_t>* dest, int destIndex, uint8_t* src, int srcIndex, int len);
    // static System.Void Memcpy(System.Byte* pDest, System.Int32 destIndex, System.Byte[] src, System.Int32 srcIndex, System.Int32 len)
    // Offset: 0x177DAB4
    static void Memcpy(uint8_t* pDest, int destIndex, ::Array<uint8_t>* src, int srcIndex, int len);
    // static public System.Int32 ByteLength(System.Array array)
    // Offset: 0x177DAE4
    static int ByteLength(System::Array* array);
    // static public System.Void BlockCopy(System.Array src, System.Int32 srcOffset, System.Array dst, System.Int32 dstOffset, System.Int32 count)
    // Offset: 0x177DBB8
    static void BlockCopy(System::Array* src, int srcOffset, System::Array* dst, int dstOffset, int count);
    // static System.Void memcpy4(System.Byte* dest, System.Byte* src, System.Int32 size)
    // Offset: 0x177DDC8
    static void memcpy4(uint8_t* dest, uint8_t* src, int size);
    // static System.Void memcpy2(System.Byte* dest, System.Byte* src, System.Int32 size)
    // Offset: 0x177DE54
    static void memcpy2(uint8_t* dest, uint8_t* src, int size);
    // static private System.Void memcpy1(System.Byte* dest, System.Byte* src, System.Int32 size)
    // Offset: 0x177DED0
    static void memcpy1(uint8_t* dest, uint8_t* src, int size);
    // static System.Void Memcpy(System.Byte* dest, System.Byte* src, System.Int32 size)
    // Offset: 0x177DA58
    static void Memcpy(uint8_t* dest, uint8_t* src, int size);
  }; // System.Buffer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Buffer*, "System", "Buffer");
// Writing MetadataGetter for method: System::Buffer::InternalBlockCopy
// Il2CppName: InternalBlockCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Array*, int, System::Array*, int, int)>(&System::Buffer::InternalBlockCopy)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* srcOffsetBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* dstOffsetBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "InternalBlockCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcOffsetBytes, dst, dstOffsetBytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Buffer::IndexOfByte
// Il2CppName: IndexOfByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, uint8_t, int, int)>(&System::Buffer::IndexOfByte)> {
  const MethodInfo* get() {
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "IndexOfByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, value, index, count});
  }
};
// Writing MetadataGetter for method: System::Buffer::_ByteLength
// Il2CppName: _ByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Array*)>(&System::Buffer::_ByteLength)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "_ByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::Buffer::ZeroMemory
// Il2CppName: ZeroMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int64_t)>(&System::Buffer::ZeroMemory)> {
  const MethodInfo* get() {
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "ZeroMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, len});
  }
};
// Writing MetadataGetter for method: System::Buffer::Memcpy
// Il2CppName: Memcpy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, uint8_t*, int, int)>(&System::Buffer::Memcpy)> {
  const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* destIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "Memcpy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, destIndex, src, srcIndex, len});
  }
};
// Writing MetadataGetter for method: System::Buffer::Memcpy
// Il2CppName: Memcpy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int, ::Array<uint8_t>*, int, int)>(&System::Buffer::Memcpy)> {
  const MethodInfo* get() {
    static auto* pDest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* destIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "Memcpy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pDest, destIndex, src, srcIndex, len});
  }
};
// Writing MetadataGetter for method: System::Buffer::ByteLength
// Il2CppName: ByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Array*)>(&System::Buffer::ByteLength)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "ByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::Buffer::BlockCopy
// Il2CppName: BlockCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Array*, int, System::Array*, int, int)>(&System::Buffer::BlockCopy)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* srcOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* dstOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "BlockCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcOffset, dst, dstOffset, count});
  }
};
// Writing MetadataGetter for method: System::Buffer::memcpy4
// Il2CppName: memcpy4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int)>(&System::Buffer::memcpy4)> {
  const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "memcpy4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, size});
  }
};
// Writing MetadataGetter for method: System::Buffer::memcpy2
// Il2CppName: memcpy2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int)>(&System::Buffer::memcpy2)> {
  const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "memcpy2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, size});
  }
};
// Writing MetadataGetter for method: System::Buffer::memcpy1
// Il2CppName: memcpy1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int)>(&System::Buffer::memcpy1)> {
  const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "memcpy1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, size});
  }
};
// Writing MetadataGetter for method: System::Buffer::Memcpy
// Il2CppName: Memcpy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, uint8_t*, int)>(&System::Buffer::Memcpy)> {
  const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Buffer*), "Memcpy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, src, size});
  }
};
