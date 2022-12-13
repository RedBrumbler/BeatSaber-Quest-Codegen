// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: DrivenTransformProperties
  struct DrivenTransformProperties;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DrivenRectTransformTracker
  struct DrivenRectTransformTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.DrivenRectTransformTracker
  // [TokenAttribute] Offset: FFFFFFFF
  struct DrivenRectTransformTracker/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: DrivenRectTransformTracker
    constexpr DrivenRectTransformTracker() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // public System.Void Add(UnityEngine.Object driver, UnityEngine.RectTransform rectTransform, UnityEngine.DrivenTransformProperties drivenProperties)
    // Offset: 0x2008374
    void Add(::UnityEngine::Object* driver, ::UnityEngine::RectTransform* rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties);
    // public System.Void Clear()
    // Offset: 0x2008378
    void Clear();
  }; // UnityEngine.DrivenRectTransformTracker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::DrivenRectTransformTracker::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DrivenRectTransformTracker::*)(::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::DrivenTransformProperties)>(&UnityEngine::DrivenRectTransformTracker::Add)> {
  static const MethodInfo* get() {
    static auto* driver = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* rectTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* drivenProperties = &::il2cpp_utils::GetClassFromName("UnityEngine", "DrivenTransformProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DrivenRectTransformTracker), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{driver, rectTransform, drivenProperties});
  }
};
// Writing MetadataGetter for method: UnityEngine::DrivenRectTransformTracker::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DrivenRectTransformTracker::*)()>(&UnityEngine::DrivenRectTransformTracker::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DrivenRectTransformTracker), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
