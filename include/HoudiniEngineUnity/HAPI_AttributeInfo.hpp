// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_AttributeOwner
#include "HoudiniEngineUnity/HAPI_AttributeOwner.hpp"
// Including type: HoudiniEngineUnity.HAPI_StorageType
#include "HoudiniEngineUnity/HAPI_StorageType.hpp"
// Including type: HoudiniEngineUnity.HAPI_AttributeTypeInfo
#include "HoudiniEngineUnity/HAPI_AttributeTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_AttributeInfo
  struct HAPI_AttributeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeInfo, "HoudiniEngineUnity", "HAPI_AttributeInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_AttributeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_AttributeInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean exists
    // Size: 0x1
    // Offset: 0x0
    bool exists;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: exists and: owner
    char __padding0[0x3] = {};
    // public HoudiniEngineUnity.HAPI_AttributeOwner owner
    // Size: 0x4
    // Offset: 0x4
    ::HoudiniEngineUnity::HAPI_AttributeOwner owner;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_AttributeOwner) == 0x4);
    // public HoudiniEngineUnity.HAPI_StorageType storage
    // Size: 0x4
    // Offset: 0x8
    ::HoudiniEngineUnity::HAPI_StorageType storage;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_StorageType) == 0x4);
    // public HoudiniEngineUnity.HAPI_AttributeOwner originalOwner
    // Size: 0x4
    // Offset: 0xC
    ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_AttributeOwner) == 0x4);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x10
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 tupleSize
    // Size: 0x4
    // Offset: 0x14
    int tupleSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int64 totalArrayElements
    // Size: 0x8
    // Offset: 0x18
    int64_t totalArrayElements;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public HoudiniEngineUnity.HAPI_AttributeTypeInfo typeInfo
    // Size: 0x4
    // Offset: 0x20
    ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_AttributeTypeInfo) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_AttributeInfo
    constexpr HAPI_AttributeInfo(bool exists_ = {}, ::HoudiniEngineUnity::HAPI_AttributeOwner owner_ = {}, ::HoudiniEngineUnity::HAPI_StorageType storage_ = {}, ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner_ = {}, int count_ = {}, int tupleSize_ = {}, int64_t totalArrayElements_ = {}, ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo_ = {}) noexcept : exists{exists_}, owner{owner_}, storage{storage_}, originalOwner{originalOwner_}, count{count_}, tupleSize{tupleSize_}, totalArrayElements{totalArrayElements_}, typeInfo{typeInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean exists
    [[deprecated("Use field access instead!")]] bool& dyn_exists();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AttributeOwner owner
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_AttributeOwner& dyn_owner();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_StorageType storage
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_StorageType& dyn_storage();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AttributeOwner originalOwner
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_AttributeOwner& dyn_originalOwner();
    // Get instance field reference: public System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: public System.Int32 tupleSize
    [[deprecated("Use field access instead!")]] int& dyn_tupleSize();
    // Get instance field reference: public System.Int64 totalArrayElements
    [[deprecated("Use field access instead!")]] int64_t& dyn_totalArrayElements();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AttributeTypeInfo typeInfo
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_AttributeTypeInfo& dyn_typeInfo();
    // public System.Void .ctor(System.String ignored)
    // Offset: 0x1743080
    HAPI_AttributeInfo(::StringW ignored);
  }; // HoudiniEngineUnity.HAPI_AttributeInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_AttributeInfo), 32 + sizeof(::HoudiniEngineUnity::HAPI_AttributeTypeInfo)> __HoudiniEngineUnity_HAPI_AttributeInfoSizeCheck;
  static_assert(sizeof(HAPI_AttributeInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_AttributeInfo::HAPI_AttributeInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!