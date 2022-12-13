// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.GrounderFBBIK
#include "RootMotion/FinalIK/GrounderFBBIK.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::GrounderFBBIK::SpineEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderFBBIK::SpineEffector*, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderFBBIK/RootMotion.FinalIK.SpineEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class GrounderFBBIK::SpineEffector : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x11481EC
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0x1148224
    // public System.Single horizontalWeight
    // Size: 0x4
    // Offset: 0x14
    float horizontalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114825C
    // public System.Single verticalWeight
    // Size: 0x4
    // Offset: 0x18
    float verticalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_effectorType();
    // Get instance field reference: public System.Single horizontalWeight
    [[deprecated("Use field access instead!")]] float& dyn_horizontalWeight();
    // Get instance field reference: public System.Single verticalWeight
    [[deprecated("Use field access instead!")]] float& dyn_verticalWeight();
    // public System.Void .ctor()
    // Offset: 0x22D7CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK::SpineEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::GrounderFBBIK::SpineEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK::SpineEffector*, creationType>()));
    }
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType, System.Single horizontalWeight, System.Single verticalWeight)
    // Offset: 0x22D7D04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK::SpineEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, float horizontalWeight, float verticalWeight) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::GrounderFBBIK::SpineEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK::SpineEffector*, creationType>(effectorType, horizontalWeight, verticalWeight)));
    }
  }; // RootMotion.FinalIK.GrounderFBBIK/RootMotion.FinalIK.SpineEffector
  #pragma pack(pop)
  static check_size<sizeof(GrounderFBBIK::SpineEffector), 24 + sizeof(float)> __RootMotion_FinalIK_GrounderFBBIK_SpineEffectorSizeCheck;
  static_assert(sizeof(GrounderFBBIK::SpineEffector) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::SpineEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::SpineEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
