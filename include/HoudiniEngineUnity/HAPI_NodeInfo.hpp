// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_NodeType
#include "HoudiniEngineUnity/HAPI_NodeType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_NodeInfo
  struct HAPI_NodeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeInfo, "HoudiniEngineUnity", "HAPI_NodeInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x42
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_NodeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_NodeInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x0
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parentId
    // Size: 0x4
    // Offset: 0x4
    int parentId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x8
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_NodeType type
    // Size: 0x4
    // Offset: 0xC
    ::HoudiniEngineUnity::HAPI_NodeType type;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_NodeType) == 0x4);
    // public System.Boolean isValid
    // Size: 0x1
    // Offset: 0x10
    bool isValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isValid and: totalCookCount
    char __padding4[0x3] = {};
    // public System.Int32 totalCookCount
    // Size: 0x4
    // Offset: 0x14
    int totalCookCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 uniqueHoudiniNodeId
    // Size: 0x4
    // Offset: 0x18
    int uniqueHoudiniNodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 internalNodePathSH
    // Size: 0x4
    // Offset: 0x1C
    int internalNodePathSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parmCount
    // Size: 0x4
    // Offset: 0x20
    int parmCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parmIntValueCount
    // Size: 0x4
    // Offset: 0x24
    int parmIntValueCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parmFloatValueCount
    // Size: 0x4
    // Offset: 0x28
    int parmFloatValueCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parmStringValueCount
    // Size: 0x4
    // Offset: 0x2C
    int parmStringValueCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 parmChoiceCount
    // Size: 0x4
    // Offset: 0x30
    int parmChoiceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 childNodeCount
    // Size: 0x4
    // Offset: 0x34
    int childNodeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 inputCount
    // Size: 0x4
    // Offset: 0x38
    int inputCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 outputCount
    // Size: 0x4
    // Offset: 0x3C
    int outputCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean createdPostAssetLoad
    // Size: 0x1
    // Offset: 0x40
    bool createdPostAssetLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isTimeDependent
    // Size: 0x1
    // Offset: 0x41
    bool isTimeDependent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HAPI_NodeInfo
    constexpr HAPI_NodeInfo(int id_ = {}, int parentId_ = {}, int nameSH_ = {}, ::HoudiniEngineUnity::HAPI_NodeType type_ = {}, bool isValid_ = {}, int totalCookCount_ = {}, int uniqueHoudiniNodeId_ = {}, int internalNodePathSH_ = {}, int parmCount_ = {}, int parmIntValueCount_ = {}, int parmFloatValueCount_ = {}, int parmStringValueCount_ = {}, int parmChoiceCount_ = {}, int childNodeCount_ = {}, int inputCount_ = {}, int outputCount_ = {}, bool createdPostAssetLoad_ = {}, bool isTimeDependent_ = {}) noexcept : id{id_}, parentId{parentId_}, nameSH{nameSH_}, type{type_}, isValid{isValid_}, totalCookCount{totalCookCount_}, uniqueHoudiniNodeId{uniqueHoudiniNodeId_}, internalNodePathSH{internalNodePathSH_}, parmCount{parmCount_}, parmIntValueCount{parmIntValueCount_}, parmFloatValueCount{parmFloatValueCount_}, parmStringValueCount{parmStringValueCount_}, parmChoiceCount{parmChoiceCount_}, childNodeCount{childNodeCount_}, inputCount{inputCount_}, outputCount{outputCount_}, createdPostAssetLoad{createdPostAssetLoad_}, isTimeDependent{isTimeDependent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public System.Int32 parentId
    [[deprecated("Use field access instead!")]] int& dyn_parentId();
    // Get instance field reference: public System.Int32 nameSH
    [[deprecated("Use field access instead!")]] int& dyn_nameSH();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_NodeType type
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_NodeType& dyn_type();
    // Get instance field reference: public System.Boolean isValid
    [[deprecated("Use field access instead!")]] bool& dyn_isValid();
    // Get instance field reference: public System.Int32 totalCookCount
    [[deprecated("Use field access instead!")]] int& dyn_totalCookCount();
    // Get instance field reference: public System.Int32 uniqueHoudiniNodeId
    [[deprecated("Use field access instead!")]] int& dyn_uniqueHoudiniNodeId();
    // Get instance field reference: public System.Int32 internalNodePathSH
    [[deprecated("Use field access instead!")]] int& dyn_internalNodePathSH();
    // Get instance field reference: public System.Int32 parmCount
    [[deprecated("Use field access instead!")]] int& dyn_parmCount();
    // Get instance field reference: public System.Int32 parmIntValueCount
    [[deprecated("Use field access instead!")]] int& dyn_parmIntValueCount();
    // Get instance field reference: public System.Int32 parmFloatValueCount
    [[deprecated("Use field access instead!")]] int& dyn_parmFloatValueCount();
    // Get instance field reference: public System.Int32 parmStringValueCount
    [[deprecated("Use field access instead!")]] int& dyn_parmStringValueCount();
    // Get instance field reference: public System.Int32 parmChoiceCount
    [[deprecated("Use field access instead!")]] int& dyn_parmChoiceCount();
    // Get instance field reference: public System.Int32 childNodeCount
    [[deprecated("Use field access instead!")]] int& dyn_childNodeCount();
    // Get instance field reference: public System.Int32 inputCount
    [[deprecated("Use field access instead!")]] int& dyn_inputCount();
    // Get instance field reference: public System.Int32 outputCount
    [[deprecated("Use field access instead!")]] int& dyn_outputCount();
    // Get instance field reference: public System.Boolean createdPostAssetLoad
    [[deprecated("Use field access instead!")]] bool& dyn_createdPostAssetLoad();
    // Get instance field reference: public System.Boolean isTimeDependent
    [[deprecated("Use field access instead!")]] bool& dyn_isTimeDependent();
  }; // HoudiniEngineUnity.HAPI_NodeInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_NodeInfo), 65 + sizeof(bool)> __HoudiniEngineUnity_HAPI_NodeInfoSizeCheck;
  static_assert(sizeof(HAPI_NodeInfo) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"