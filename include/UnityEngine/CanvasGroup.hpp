// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CanvasGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10B8C9C
  // [NativeClassAttribute] Offset: 10B8C9C
  class CanvasGroup : public ::UnityEngine::Behaviour/*, public ::UnityEngine::ICanvasRaycastFilter*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ICanvasRaycastFilter
    operator ::UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Creating interface conversion operator: i_ICanvasRaycastFilter
    inline ::UnityEngine::ICanvasRaycastFilter* i_ICanvasRaycastFilter() noexcept {
      return reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // public System.Single get_alpha()
    // Offset: 0x2B9E278
    float get_alpha();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x2B9E2B8
    void set_alpha(float value);
    // public System.Boolean get_interactable()
    // Offset: 0x2B9E308
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x2B9E348
    void set_interactable(bool value);
    // public System.Boolean get_blocksRaycasts()
    // Offset: 0x2B9E398
    bool get_blocksRaycasts();
    // public System.Void set_blocksRaycasts(System.Boolean value)
    // Offset: 0x2B9E3D8
    void set_blocksRaycasts(bool value);
    // public System.Boolean get_ignoreParentGroups()
    // Offset: 0x2B9E428
    bool get_ignoreParentGroups();
    // public System.Void set_ignoreParentGroups(System.Boolean value)
    // Offset: 0x2B9E468
    void set_ignoreParentGroups(bool value);
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x2B9E4B8
    bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);
  }; // UnityEngine.CanvasGroup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_alpha
// Il2CppName: get_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_alpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasGroup::*)(float)>(&UnityEngine::CanvasGroup::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasGroup::*)(bool)>(&UnityEngine::CanvasGroup::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_blocksRaycasts
// Il2CppName: get_blocksRaycasts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_blocksRaycasts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_blocksRaycasts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_blocksRaycasts
// Il2CppName: set_blocksRaycasts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasGroup::*)(bool)>(&UnityEngine::CanvasGroup::set_blocksRaycasts)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "set_blocksRaycasts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_ignoreParentGroups
// Il2CppName: get_ignoreParentGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_ignoreParentGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_ignoreParentGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_ignoreParentGroups
// Il2CppName: set_ignoreParentGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasGroup::*)(bool)>(&UnityEngine::CanvasGroup::set_ignoreParentGroups)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "set_ignoreParentGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&UnityEngine::CanvasGroup::IsRaycastLocationValid)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
