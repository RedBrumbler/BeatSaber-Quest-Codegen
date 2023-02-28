// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SmallBufferPool
  class SmallBufferPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SmallBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmallBufferPool*, "", "SmallBufferPool");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SmallBufferPool
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallBufferPool : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheSmall
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* cacheSmall;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMedium
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* cacheMedium;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheLarge
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* cacheLarge;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMax
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* cacheMax;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    public:
    // static field const value: static private System.Int32 kCacheSmallSize
    static constexpr const int kCacheSmallSize = 512;
    // Get static field: static private System.Int32 kCacheSmallSize
    static int _get_kCacheSmallSize();
    // Set static field: static private System.Int32 kCacheSmallSize
    static void _set_kCacheSmallSize(int value);
    // static field const value: static private System.Int32 kCacheMediumSize
    static constexpr const int kCacheMediumSize = 1024;
    // Get static field: static private System.Int32 kCacheMediumSize
    static int _get_kCacheMediumSize();
    // Set static field: static private System.Int32 kCacheMediumSize
    static void _set_kCacheMediumSize(int value);
    // static field const value: static private System.Int32 kCacheLargeSize
    static constexpr const int kCacheLargeSize = 2048;
    // Get static field: static private System.Int32 kCacheLargeSize
    static int _get_kCacheLargeSize();
    // Set static field: static private System.Int32 kCacheLargeSize
    static void _set_kCacheLargeSize(int value);
    // static field const value: static private System.Int32 kCacheMaxSize
    static constexpr const int kCacheMaxSize = 4096;
    // Get static field: static private System.Int32 kCacheMaxSize
    static int _get_kCacheMaxSize();
    // Set static field: static private System.Int32 kCacheMaxSize
    static void _set_kCacheMaxSize(int value);
    // static field const value: static private System.Int32 kCacheSmallMaxCapacity
    static constexpr const int kCacheSmallMaxCapacity = 128;
    // Get static field: static private System.Int32 kCacheSmallMaxCapacity
    static int _get_kCacheSmallMaxCapacity();
    // Set static field: static private System.Int32 kCacheSmallMaxCapacity
    static void _set_kCacheSmallMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheMediumMaxCapacity
    static constexpr const int kCacheMediumMaxCapacity = 32;
    // Get static field: static private System.Int32 kCacheMediumMaxCapacity
    static int _get_kCacheMediumMaxCapacity();
    // Set static field: static private System.Int32 kCacheMediumMaxCapacity
    static void _set_kCacheMediumMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheLargeMaxCapacity
    static constexpr const int kCacheLargeMaxCapacity = 16;
    // Get static field: static private System.Int32 kCacheLargeMaxCapacity
    static int _get_kCacheLargeMaxCapacity();
    // Set static field: static private System.Int32 kCacheLargeMaxCapacity
    static void _set_kCacheLargeMaxCapacity(int value);
    // static field const value: static private System.Int32 kCacheMaxMaxCapacity
    static constexpr const int kCacheMaxMaxCapacity = 8;
    // Get static field: static private System.Int32 kCacheMaxMaxCapacity
    static int _get_kCacheMaxMaxCapacity();
    // Set static field: static private System.Int32 kCacheMaxMaxCapacity
    static void _set_kCacheMaxMaxCapacity(int value);
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheSmall
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn__cacheSmall();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMedium
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn__cacheMedium();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheLarge
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn__cacheLarge();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Byte[]> _cacheMax
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn__cacheMax();
    // public System.Void .ctor()
    // Offset: 0x26B697C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallBufferPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SmallBufferPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallBufferPool*, creationType>()));
    }
    // public System.Byte[] GetBuffer(System.Int32 length)
    // Offset: 0x26B666C
    ::ArrayW<uint8_t> GetBuffer(int length);
    // public System.Void ReleaseBuffer(System.Byte[] buffer)
    // Offset: 0x26B683C
    void ReleaseBuffer(::ArrayW<uint8_t> buffer);
  }; // SmallBufferPool
  #pragma pack(pop)
  static check_size<sizeof(SmallBufferPool), 40 + sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*)> __GlobalNamespace_SmallBufferPoolSizeCheck;
  static_assert(sizeof(SmallBufferPool) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SmallBufferPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SmallBufferPool::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::SmallBufferPool::*)(int)>(&GlobalNamespace::SmallBufferPool::GetBuffer)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmallBufferPool*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmallBufferPool::ReleaseBuffer
// Il2CppName: ReleaseBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmallBufferPool*), "ReleaseBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
