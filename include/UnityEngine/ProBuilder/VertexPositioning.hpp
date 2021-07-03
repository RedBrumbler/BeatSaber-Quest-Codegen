// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.VertexPositioning
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VertexPositioning : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VertexPositioning
    VertexPositioning() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static System::Collections::Generic::List_1<int>* _get_s_CoincidentVertices();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_CoincidentVertices
    static void _set_s_CoincidentVertices(System::Collections::Generic::List_1<int>* value);
    // static public UnityEngine.Vector3[] VerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x22C6010
    static ::Array<UnityEngine::Vector3>* VerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset)
    // Offset: 0x22C6190
    static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, UnityEngine::Vector3 offset);
    // static System.Void TranslateVerticesInWorldSpace(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.Vector3 offset, System.Single snapValue, System.Boolean snapAxisOnly)
    // Offset: 0x22C62A4
    static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, UnityEngine::Vector3 offset, float snapValue, bool snapAxisOnly);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes, UnityEngine.Vector3 offset)
    // Offset: 0x22C688C
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes, UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.Vector3 offset)
    // Offset: 0x22C6B80
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector3 offset);
    // static public System.Void TranslateVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.Vector3 offset)
    // Offset: 0x22C6CAC
    static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, UnityEngine::Vector3 offset);
    // static private System.Void TranslateVerticesInternal(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices, UnityEngine.Vector3 offset)
    // Offset: 0x22C69B8
    static void TranslateVerticesInternal(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indices, UnityEngine::Vector3 offset);
    // static public System.Void SetSharedVertexPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.Vector3 position)
    // Offset: 0x22C6DD8
    static void SetSharedVertexPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, UnityEngine::Vector3 position);
    // static System.Void SetSharedVertexValues(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 sharedVertexHandle, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x22C70D4
    static void SetSharedVertexValues(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int sharedVertexHandle, UnityEngine::ProBuilder::Vertex* vertex);
    // static private System.Void .cctor()
    // Offset: 0x22C7374
    static void _cctor();
  }; // UnityEngine.ProBuilder.VertexPositioning
  #pragma pack(pop)
  // Writing MetadataGetter for method: VertexPositioning::VerticesInWorldSpace
  // Il2CppName: VerticesInWorldSpace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&VertexPositioning::VerticesInWorldSpace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "VerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVerticesInWorldSpace
  // Il2CppName: TranslateVerticesInWorldSpace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ::Array<int>*, UnityEngine::Vector3)>(&VertexPositioning::TranslateVerticesInWorldSpace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<::Array<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVerticesInWorldSpace
  // Il2CppName: TranslateVerticesInWorldSpace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ::Array<int>*, UnityEngine::Vector3, float, bool)>(&VertexPositioning::TranslateVerticesInWorldSpace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVerticesInWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<::Array<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVertices
  // Il2CppName: TranslateVertices
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*, UnityEngine::Vector3)>(&VertexPositioning::TranslateVertices)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVertices
  // Il2CppName: TranslateVertices
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*, UnityEngine::Vector3)>(&VertexPositioning::TranslateVertices)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVertices
  // Il2CppName: TranslateVertices
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*, UnityEngine::Vector3)>(&VertexPositioning::TranslateVertices)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::TranslateVerticesInternal
  // Il2CppName: TranslateVerticesInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*, UnityEngine::Vector3)>(&VertexPositioning::TranslateVerticesInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "TranslateVerticesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::SetSharedVertexPosition
  // Il2CppName: SetSharedVertexPosition
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int, UnityEngine::Vector3)>(&VertexPositioning::SetSharedVertexPosition)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "SetSharedVertexPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::SetSharedVertexValues
  // Il2CppName: SetSharedVertexValues
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int, UnityEngine::ProBuilder::Vertex*)>(&VertexPositioning::SetSharedVertexValues)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), "SetSharedVertexValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Vertex*>()});
    }
  };
  // Writing MetadataGetter for method: VertexPositioning::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VertexPositioning::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VertexPositioning*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VertexPositioning*, "UnityEngine.ProBuilder", "VertexPositioning");
