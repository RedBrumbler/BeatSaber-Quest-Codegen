// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshUtility
#include "UnityEngine/ProBuilder/MeshUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshUtility::$$c*, "UnityEngine.ProBuilder", "MeshUtility/<>c");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshUtility/UnityEngine.ProBuilder.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MeshUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshUtility/UnityEngine.ProBuilder.<>c <>9
    static ::UnityEngine::ProBuilder::MeshUtility::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshUtility/UnityEngine.ProBuilder.<>c <>9
    static void _set_$$9(::UnityEngine::ProBuilder::MeshUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32>,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex>> <>9__10_0
    static ::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32>,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex>> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D0CECC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D0CF30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshUtility::$$c*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex> <CollapseSharedVertices>b__10_0(System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32> x)
    // Offset: 0x1D0CF38
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>* $CollapseSharedVertices$b__10_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int>* x);
  }; // UnityEngine.ProBuilder.MeshUtility/UnityEngine.ProBuilder.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::$$c::$CollapseSharedVertices$b__10_0
// Il2CppName: <CollapseSharedVertices>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Vertex*>* (UnityEngine::ProBuilder::MeshUtility::$$c::*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Vertex*, int>*)>(&UnityEngine::ProBuilder::MeshUtility::$$c::$CollapseSharedVertices$b__10_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility::$$c*), "<CollapseSharedVertices>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
