// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Playables.INotificationReceiver
#include "UnityEngine/Playables/INotificationReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: INotification
  class INotification;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TimelinePauseReceiver
  class TimelinePauseReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TimelinePauseReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseReceiver*, "", "TimelinePauseReceiver");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TimelinePauseReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelinePauseReceiver : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::Playables::INotificationReceiver*/ {
    public:
    public:
    // private System.Action timelinePauseEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* timelinePauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Playables::INotificationReceiver
    operator ::UnityEngine::Playables::INotificationReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::INotificationReceiver*>(this);
    }
    // Creating interface conversion operator: i_INotificationReceiver
    inline ::UnityEngine::Playables::INotificationReceiver* i_INotificationReceiver() noexcept {
      return reinterpret_cast<::UnityEngine::Playables::INotificationReceiver*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action timelinePauseEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_timelinePauseEvent();
    // public System.Void add_timelinePauseEvent(System.Action value)
    // Offset: 0x2AE9590
    void add_timelinePauseEvent(::System::Action* value);
    // public System.Void remove_timelinePauseEvent(System.Action value)
    // Offset: 0x2AE9634
    void remove_timelinePauseEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x2AE9778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelinePauseReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TimelinePauseReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelinePauseReceiver*, creationType>()));
    }
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x2AE96D8
    void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
  }; // TimelinePauseReceiver
  #pragma pack(pop)
  static check_size<sizeof(TimelinePauseReceiver), 24 + sizeof(::System::Action*)> __GlobalNamespace_TimelinePauseReceiverSizeCheck;
  static_assert(sizeof(TimelinePauseReceiver) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent
// Il2CppName: add_timelinePauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimelinePauseReceiver*), "add_timelinePauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent
// Il2CppName: remove_timelinePauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimelinePauseReceiver*), "remove_timelinePauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TimelinePauseReceiver::OnNotify
// Il2CppName: OnNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimelinePauseReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&GlobalNamespace::TimelinePauseReceiver::OnNotify)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimelinePauseReceiver*), "OnNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, notification, context});
  }
};
