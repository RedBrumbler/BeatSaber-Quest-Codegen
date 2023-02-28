// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystemDescriptor
  class XRDisplaySubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystem
  class XRDisplaySubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem*, "UnityEngine.XR", "XRDisplaySubsystem");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: 10BAA88
  // [NativeHeaderAttribute] Offset: 10BAA88
  // [NativeConditionalAttribute] Offset: 10BAA88
  // [UsedByNativeCodeAttribute] Offset: 10BAA88
  class XRDisplaySubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*> {
    public:
    // Nested type: ::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass
    struct XRRenderPass;
    // Nested type: ::UnityEngine::XR::XRDisplaySubsystem::XRMirrorViewBlitDesc
    struct XRMirrorViewBlitDesc;
    // [DebuggerBrowsableAttribute] Offset: 0x10BB150
    // Get static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static ::System::Action_1<bool>* _get_displayFocusChanged();
    // Set static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static void _set_displayFocusChanged(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x2B9CF4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDisplaySubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::XRDisplaySubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDisplaySubsystem*, creationType>()));
    }
    // static private System.Void InvokeDisplayFocusChanged(System.Boolean focus)
    // Offset: 0x2B9CED8
    static void InvokeDisplayFocusChanged(bool focus);
  }; // UnityEngine.XR.XRDisplaySubsystem
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged
// Il2CppName: InvokeDisplayFocusChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged)> {
  static const MethodInfo* get() {
    static auto* focus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem*), "InvokeDisplayFocusChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focus});
  }
};
