// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: Boundary
  class Boundary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::Boundary*, "UnityEngine.Experimental.XR", "Boundary");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.XR.Boundary
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: 10CB1A8
  class Boundary : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::XR::Boundary::Type
    struct Type;
    // static public System.Boolean get_visible()
    // Offset: 0x2B9C5C0
    static bool get_visible();
    // static public System.Void set_visible(System.Boolean value)
    // Offset: 0x2B9C5F4
    static void set_visible(bool value);
    // static public System.Boolean get_configured()
    // Offset: 0x2B9C634
    static bool get_configured();
    // static public System.Boolean TryGetDimensions(out UnityEngine.Vector3 dimensionsOut, UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type boundaryType)
    // Offset: 0x2B9C520
    static bool TryGetDimensions(ByRef<::UnityEngine::Vector3> dimensionsOut, ::UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static private System.Boolean TryGetDimensionsInternal(out UnityEngine.Vector3 dimensionsOut, UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type boundaryType)
    // Offset: 0x2B9C570
    static bool TryGetDimensionsInternal(ByRef<::UnityEngine::Vector3> dimensionsOut, ::UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static public System.Boolean TryGetGeometry(System.Collections.Generic.List`1<UnityEngine.Vector3> geometry, UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type boundaryType)
    // Offset: 0x2B9C668
    static bool TryGetGeometry(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* geometry, ::UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static private System.Boolean TryGetGeometryScriptingInternal(System.Collections.Generic.List`1<UnityEngine.Vector3> geometry, UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type boundaryType)
    // Offset: 0x2B9C730
    static bool TryGetGeometryScriptingInternal(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* geometry, ::UnityEngine::Experimental::XR::Boundary::Type boundaryType);
  }; // UnityEngine.Experimental.XR.Boundary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::get_visible
// Il2CppName: get_visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Experimental::XR::Boundary::get_visible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "get_visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::set_visible
// Il2CppName: set_visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Experimental::XR::Boundary::set_visible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "set_visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::get_configured
// Il2CppName: get_configured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Experimental::XR::Boundary::get_configured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "get_configured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::TryGetDimensions
// Il2CppName: TryGetDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ::UnityEngine::Experimental::XR::Boundary::Type)>(&UnityEngine::Experimental::XR::Boundary::TryGetDimensions)> {
  static const MethodInfo* get() {
    static auto* dimensionsOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "Boundary/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "TryGetDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimensionsOut, boundaryType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::TryGetDimensionsInternal
// Il2CppName: TryGetDimensionsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Vector3>, ::UnityEngine::Experimental::XR::Boundary::Type)>(&UnityEngine::Experimental::XR::Boundary::TryGetDimensionsInternal)> {
  static const MethodInfo* get() {
    static auto* dimensionsOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "Boundary/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "TryGetDimensionsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimensionsOut, boundaryType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::TryGetGeometry
// Il2CppName: TryGetGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Experimental::XR::Boundary::Type)>(&UnityEngine::Experimental::XR::Boundary::TryGetGeometry)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "Boundary/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "TryGetGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, boundaryType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Boundary::TryGetGeometryScriptingInternal
// Il2CppName: TryGetGeometryScriptingInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Experimental::XR::Boundary::Type)>(&UnityEngine::Experimental::XR::Boundary::TryGetGeometryScriptingInternal)> {
  static const MethodInfo* get() {
    static auto* geometry = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "Boundary/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Boundary*), "TryGetGeometryScriptingInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometry, boundaryType});
  }
};
