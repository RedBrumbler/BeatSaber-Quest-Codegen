// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Cache
  // [StaticAccessorAttribute] Offset: D8DFD8
  // [NativeHeaderAttribute] Offset: D8DFD8
  struct Cache/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Cache>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Cache
    constexpr Cache(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Cache>
    operator System::IEquatable_1<UnityEngine::Cache>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Cache>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // System.Int32 get_handle()
    // Offset: 0xF07668
    int get_handle();
    // public System.Boolean Equals(UnityEngine.Cache other)
    // Offset: 0xF07680
    bool Equals(UnityEngine::Cache other);
    // public System.Boolean get_valid()
    // Offset: 0xF07690
    bool get_valid();
    // static System.Boolean Cache_IsValid(System.Int32 handle)
    // Offset: 0x1B8D19C
    static bool Cache_IsValid(int handle);
    // public System.String get_path()
    // Offset: 0xF076D0
    ::Il2CppString* get_path();
    // static System.String Cache_GetPath(System.Int32 handle)
    // Offset: 0x1B8D21C
    static ::Il2CppString* Cache_GetPath(int handle);
    // public System.Void set_maximumAvailableStorageSpace(System.Int64 value)
    // Offset: 0xF07710
    void set_maximumAvailableStorageSpace(int64_t value);
    // static System.Void Cache_SetMaximumDiskSpaceAvailable(System.Int32 handle, System.Int64 value)
    // Offset: 0x1B8D2AC
    static void Cache_SetMaximumDiskSpaceAvailable(int handle, int64_t value);
    // public System.Void set_expirationDelay(System.Int32 value)
    // Offset: 0xF07760
    void set_expirationDelay(int value);
    // static System.Void Cache_SetExpirationDelay(System.Int32 handle, System.Int32 value)
    // Offset: 0x1B8D34C
    static void Cache_SetExpirationDelay(int handle, int value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF07670
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF07678
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Cache
  #pragma pack(pop)
  static check_size<sizeof(Cache), 0 + sizeof(int)> __UnityEngine_CacheSizeCheck;
  static_assert(sizeof(Cache) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cache, "UnityEngine", "Cache");
// Writing MetadataGetter for method: UnityEngine::Cache::get_handle
// Il2CppName: get_handle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::get_valid
// Il2CppName: get_valid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_IsValid
// Il2CppName: Cache_IsValid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::get_path
// Il2CppName: get_path
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_GetPath
// Il2CppName: Cache_GetPath
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::set_maximumAvailableStorageSpace
// Il2CppName: set_maximumAvailableStorageSpace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_SetMaximumDiskSpaceAvailable
// Il2CppName: Cache_SetMaximumDiskSpaceAvailable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::set_expirationDelay
// Il2CppName: set_expirationDelay
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_SetExpirationDelay
// Il2CppName: Cache_SetExpirationDelay
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Cache::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!