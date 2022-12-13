// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionObject::AnimatorEvent);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionObject::AnimatorEvent*, "RootMotion.FinalIK", "InteractionObject/AnimatorEvent");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.AnimatorEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionObject::AnimatorEvent : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1149BA8
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // [TooltipAttribute] Offset: 0x1149BE0
    // public UnityEngine.Animation animation
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animation*) == 0x8);
    // [TooltipAttribute] Offset: 0x1149C18
    // public System.String animationState
    // Size: 0x8
    // Offset: 0x20
    ::StringW animationState;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x1149C50
    // public System.Single crossfadeTime
    // Size: 0x4
    // Offset: 0x28
    float crossfadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1149C88
    // public System.Int32 layer
    // Size: 0x4
    // Offset: 0x2C
    int layer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0x1149CC0
    // public System.Boolean resetNormalizedTime
    // Size: 0x1
    // Offset: 0x30
    bool resetNormalizedTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.String empty
    static constexpr const char* empty = "";
    // Get static field: static private System.String empty
    static ::StringW _get_empty();
    // Set static field: static private System.String empty
    static void _set_empty(::StringW value);
    // Get instance field reference: public UnityEngine.Animator animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: public UnityEngine.Animation animation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animation*& dyn_animation();
    // Get instance field reference: public System.String animationState
    [[deprecated("Use field access instead!")]] ::StringW& dyn_animationState();
    // Get instance field reference: public System.Single crossfadeTime
    [[deprecated("Use field access instead!")]] float& dyn_crossfadeTime();
    // Get instance field reference: public System.Int32 layer
    [[deprecated("Use field access instead!")]] int& dyn_layer();
    // Get instance field reference: public System.Boolean resetNormalizedTime
    [[deprecated("Use field access instead!")]] bool& dyn_resetNormalizedTime();
    // public System.Void .ctor()
    // Offset: 0x245E898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::AnimatorEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionObject::AnimatorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::AnimatorEvent*, creationType>()));
    }
    // public System.Void Activate(System.Boolean pickUp)
    // Offset: 0x245E60C
    void Activate(bool pickUp);
    // private System.Void Activate(UnityEngine.Animator animator)
    // Offset: 0x245E700
    void Activate(::UnityEngine::Animator* animator);
    // private System.Void Activate(UnityEngine.Animation animation)
    // Offset: 0x245E7B8
    void Activate(::UnityEngine::Animation* animation);
  }; // RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.AnimatorEvent
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::AnimatorEvent), 48 + sizeof(bool)> __RootMotion_FinalIK_InteractionObject_AnimatorEventSizeCheck;
  static_assert(sizeof(InteractionObject::AnimatorEvent) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::AnimatorEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionObject::AnimatorEvent::*)(bool)>(&RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate)> {
  static const MethodInfo* get() {
    static auto* pickUp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::AnimatorEvent*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pickUp});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionObject::AnimatorEvent::*)(::UnityEngine::Animator*)>(&RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::AnimatorEvent*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionObject::AnimatorEvent::*)(::UnityEngine::Animation*)>(&RootMotion::FinalIK::InteractionObject::AnimatorEvent::Activate)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::AnimatorEvent*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation});
  }
};
