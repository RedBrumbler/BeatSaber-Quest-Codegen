// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::SignalAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalAsset*, "UnityEngine.Timeline", "SignalAsset");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SignalAsset
  // [TokenAttribute] Offset: FFFFFFFF
  // [AssetFileNameExtensionAttribute] Offset: 10DECE0
  class SignalAsset : public ::UnityEngine::ScriptableObject {
    public:
    // Get static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* _get_OnEnableCallback();
    // Set static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static void _set_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void add_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x1E8601C
    static void add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void remove_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x1E860D0
    static void remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value);
    // public System.Void .ctor()
    // Offset: 0x1E861F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::SignalAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalAsset*, creationType>()));
    }
    // private System.Void OnEnable()
    // Offset: 0x1E86184
    void OnEnable();
  }; // UnityEngine.Timeline.SignalAsset
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalAsset::add_OnEnableCallback
// Il2CppName: add_OnEnableCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*)>(&UnityEngine::Timeline::SignalAsset::add_OnEnableCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalAsset*), "add_OnEnableCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback
// Il2CppName: remove_OnEnableCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*)>(&UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalAsset*), "remove_OnEnableCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalAsset::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalAsset::*)()>(&UnityEngine::Timeline::SignalAsset::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalAsset*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
