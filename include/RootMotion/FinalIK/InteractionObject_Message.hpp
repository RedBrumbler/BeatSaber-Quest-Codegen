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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionObject::Message);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionObject::Message*, "RootMotion.FinalIK", "InteractionObject/Message");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Message
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionObject::Message : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1149B38
    // public System.String function
    // Size: 0x8
    // Offset: 0x10
    ::StringW function;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x1149B70
    // public UnityEngine.GameObject recipient
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* recipient;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // static field const value: static private System.String empty
    static constexpr const char* empty = "";
    // Get static field: static private System.String empty
    static ::StringW _get_empty();
    // Set static field: static private System.String empty
    static void _set_empty(::StringW value);
    // Get instance field reference: public System.String function
    [[deprecated("Use field access instead!")]] ::StringW& dyn_function();
    // Get instance field reference: public UnityEngine.GameObject recipient
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_recipient();
    // public System.Void .ctor()
    // Offset: 0x245E9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::Message* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionObject::Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::Message*, creationType>()));
    }
    // public System.Void Send(UnityEngine.Transform t)
    // Offset: 0x245E8AC
    void Send(::UnityEngine::Transform* t);
  }; // RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.Message
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::Message), 24 + sizeof(::UnityEngine::GameObject*)> __RootMotion_FinalIK_InteractionObject_MessageSizeCheck;
  static_assert(sizeof(InteractionObject::Message) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionObject::Message::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionObject::Message::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::InteractionObject::Message::Send)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionObject::Message*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
