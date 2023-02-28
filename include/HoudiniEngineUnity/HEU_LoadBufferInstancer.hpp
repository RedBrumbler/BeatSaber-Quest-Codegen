// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_LoadBufferBase
#include "HoudiniEngineUnity/HEU_LoadBufferBase.hpp"
// Including type: HoudiniEngineUnity.HAPI_Transform
#include "HoudiniEngineUnity/HAPI_Transform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_LoadBufferInstancer
  class HEU_LoadBufferInstancer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferInstancer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferInstancer*, "HoudiniEngineUnity", "HEU_LoadBufferInstancer");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_LoadBufferInstancer
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_LoadBufferInstancer : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_Transform[] _instanceTransforms
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::HoudiniEngineUnity::HAPI_Transform> instanceTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::HoudiniEngineUnity::HAPI_Transform>) == 0x8);
    // public System.String[] _instancePrefixes
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> instancePrefixes;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Int32[] _instanceNodeIDs
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> instanceNodeIDs;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.String[] _assetPaths
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> assetPaths;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] _collisionAssetPaths
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> collisionAssetPaths;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HAPI_Transform[] _instanceTransforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::HoudiniEngineUnity::HAPI_Transform>& dyn__instanceTransforms();
    // Get instance field reference: public System.String[] _instancePrefixes
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__instancePrefixes();
    // Get instance field reference: public System.Int32[] _instanceNodeIDs
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__instanceNodeIDs();
    // Get instance field reference: public System.String[] _assetPaths
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__assetPaths();
    // Get instance field reference: public System.String[] _collisionAssetPaths
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__collisionAssetPaths();
    // public System.Void .ctor()
    // Offset: 0x18DA2EC
    // Implemented from: HoudiniEngineUnity.HEU_LoadBufferBase
    // Base method: System.Void HEU_LoadBufferBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_LoadBufferInstancer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_LoadBufferInstancer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_LoadBufferInstancer*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_LoadBufferInstancer
  #pragma pack(pop)
  static check_size<sizeof(HEU_LoadBufferInstancer), 80 + sizeof(::ArrayW<::StringW>)> __HoudiniEngineUnity_HEU_LoadBufferInstancerSizeCheck;
  static_assert(sizeof(HEU_LoadBufferInstancer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_LoadBufferInstancer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
