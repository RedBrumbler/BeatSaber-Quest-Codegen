// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_RSTOrder
#include "HoudiniEngineUnity/HAPI_RSTOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_Transform
  struct HAPI_Transform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Transform, "HoudiniEngineUnity", "HAPI_Transform");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_Transform
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_Transform/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single[] position
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> position;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] rotationQuaternion
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> rotationQuaternion;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] scale
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> scale;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] shear
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> shear;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public HoudiniEngineUnity.HAPI_RSTOrder rstOrder
    // Size: 0x4
    // Offset: 0x20
    ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_RSTOrder) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_Transform
    constexpr HAPI_Transform(::ArrayW<float> position_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> rotationQuaternion_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> scale_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> shear_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder_ = {}) noexcept : position{position_}, rotationQuaternion{rotationQuaternion_}, scale{scale_}, shear{shear_}, rstOrder{rstOrder_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single[] position
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_position();
    // Get instance field reference: public System.Single[] rotationQuaternion
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_rotationQuaternion();
    // Get instance field reference: public System.Single[] scale
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_scale();
    // Get instance field reference: public System.Single[] shear
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_shear();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_RSTOrder rstOrder
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_RSTOrder& dyn_rstOrder();
    // public System.Void .ctor(System.Boolean initializeFields)
    // Offset: 0x174344C
    HAPI_Transform(bool initializeFields);
    // public System.Void Init()
    // Offset: 0x1743500
    void Init();
  }; // HoudiniEngineUnity.HAPI_Transform
  #pragma pack(pop)
  static check_size<sizeof(HAPI_Transform), 32 + sizeof(::HoudiniEngineUnity::HAPI_RSTOrder)> __HoudiniEngineUnity_HAPI_TransformSizeCheck;
  static_assert(sizeof(HAPI_Transform) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_Transform::HAPI_Transform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_Transform::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Transform::*)()>(&HoudiniEngineUnity::HAPI_Transform::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_Transform), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
