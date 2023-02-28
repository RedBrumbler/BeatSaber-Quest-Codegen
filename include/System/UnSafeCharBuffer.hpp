// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: UnSafeCharBuffer
  struct UnSafeCharBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UnSafeCharBuffer, "System", "UnSafeCharBuffer");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.UnSafeCharBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnSafeCharBuffer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Char* m_buffer
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppChar* m_buffer;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Int32 m_totalSize
    // Size: 0x4
    // Offset: 0x8
    int m_totalSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_length
    // Size: 0x4
    // Offset: 0xC
    int m_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnSafeCharBuffer
    constexpr UnSafeCharBuffer(::Il2CppChar* m_buffer_ = {}, int m_totalSize_ = {}, int m_length_ = {}) noexcept : m_buffer{m_buffer_}, m_totalSize{m_totalSize_}, m_length{m_length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Char* m_buffer
    [[deprecated("Use field access instead!")]] ::Il2CppChar*& dyn_m_buffer();
    // Get instance field reference: private System.Int32 m_totalSize
    [[deprecated("Use field access instead!")]] int& dyn_m_totalSize();
    // Get instance field reference: private System.Int32 m_length
    [[deprecated("Use field access instead!")]] int& dyn_m_length();
    // public System.Void .ctor(System.Char* buffer, System.Int32 bufferSize)
    // Offset: 0x224EFE0
    UnSafeCharBuffer(::Il2CppChar* buffer, int bufferSize);
    // public System.Void AppendString(System.String stringToAppend)
    // Offset: 0x224EFEC
    void AppendString(::StringW stringToAppend);
  }; // System.UnSafeCharBuffer
  #pragma pack(pop)
  static check_size<sizeof(UnSafeCharBuffer), 12 + sizeof(int)> __System_UnSafeCharBufferSizeCheck;
  static_assert(sizeof(UnSafeCharBuffer) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UnSafeCharBuffer::UnSafeCharBuffer
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UnSafeCharBuffer::AppendString
// Il2CppName: AppendString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnSafeCharBuffer::*)(::StringW)>(&System::UnSafeCharBuffer::AppendString)> {
  static const MethodInfo* get() {
    static auto* stringToAppend = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnSafeCharBuffer), "AppendString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringToAppend});
  }
};
