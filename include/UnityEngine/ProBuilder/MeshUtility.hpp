// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshTopology
  struct MeshTopology;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: MeshUtility
  class MeshUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshUtility*, "UnityEngine.ProBuilder", "MeshUtility");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MeshUtility : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshUtility::$$c
    class $$c;
    // static UnityEngine.ProBuilder.Vertex[] GeneratePerTriangleMesh(UnityEngine.Mesh mesh)
    // Offset: 0x1D09C00
    static ::ArrayW<::UnityEngine::ProBuilder::Vertex*> GeneratePerTriangleMesh(::UnityEngine::Mesh* mesh);
    // static public System.Void GenerateTangent(UnityEngine.Mesh mesh)
    // Offset: 0x1D09F5C
    static void GenerateTangent(::UnityEngine::Mesh* mesh);
    // static public UnityEngine.Mesh DeepCopy(UnityEngine.Mesh source)
    // Offset: 0x1D0A5C4
    static ::UnityEngine::Mesh* DeepCopy(::UnityEngine::Mesh* source);
    // static public System.Void CopyTo(UnityEngine.Mesh source, UnityEngine.Mesh destination)
    // Offset: 0x1D0A630
    static void CopyTo(::UnityEngine::Mesh* source, ::UnityEngine::Mesh* destination);
    // static T GetMeshChannel(UnityEngine.GameObject gameObject, System.Func`2<UnityEngine.Mesh,T> attributeGetter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetMeshChannel(::UnityEngine::GameObject* gameObject, ::System::Func_2<::UnityEngine::Mesh*, T>* attributeGetter) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::System::Collections::IList>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshUtility::GetMeshChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "MeshUtility", "GetMeshChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObject), ::il2cpp_utils::ExtractType(attributeGetter)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, gameObject, attributeGetter);
    }
    // static public System.String Print(UnityEngine.Mesh mesh)
    // Offset: 0x1D0AAA4
    static ::StringW Print(::UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetIndexCount(UnityEngine.Mesh mesh)
    // Offset: 0x1D0C288
    static uint GetIndexCount(::UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetPrimitiveCount(UnityEngine.Mesh mesh)
    // Offset: 0x1D0C358
    static uint GetPrimitiveCount(::UnityEngine::Mesh* mesh);
    // static public System.Void Compile(UnityEngine.ProBuilder.ProBuilderMesh probuilderMesh, UnityEngine.Mesh targetMesh, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x1D0C484
    static void Compile(::UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, ::UnityEngine::Mesh* targetMesh, ::UnityEngine::MeshTopology preferredTopology);
    // static public UnityEngine.ProBuilder.Vertex[] GetVertices(UnityEngine.Mesh mesh)
    // Offset: 0x1CFC778
    static ::ArrayW<::UnityEngine::ProBuilder::Vertex*> GetVertices(::UnityEngine::Mesh* mesh);
    // static public System.Void CollapseSharedVertices(UnityEngine.Mesh mesh, UnityEngine.ProBuilder.Vertex[] vertices)
    // Offset: 0x1D0C7FC
    static void CollapseSharedVertices(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Vertex*> vertices);
    // static System.String SanityCheck(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1D0CC14
    static ::StringW SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static System.String SanityCheck(UnityEngine.Mesh mesh)
    // Offset: 0x1D0CEB8
    static ::StringW SanityCheck(::UnityEngine::Mesh* mesh);
    // static System.String SanityCheck(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x1D0CC38
    static ::StringW SanityCheck(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices);
  }; // UnityEngine.ProBuilder.MeshUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh
// Il2CppName: GeneratePerTriangleMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*> (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::GeneratePerTriangleMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "GeneratePerTriangleMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GenerateTangent
// Il2CppName: GenerateTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::GenerateTangent)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "GenerateTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::DeepCopy
// Il2CppName: DeepCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::DeepCopy)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "DeepCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::CopyTo)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GetMeshChannel
// Il2CppName: GetMeshChannel
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::Print
// Il2CppName: Print
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::Print)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "Print", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GetIndexCount
// Il2CppName: GetIndexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::GetIndexCount)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "GetIndexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount
// Il2CppName: GetPrimitiveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::GetPrimitiveCount)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "GetPrimitiveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::UnityEngine::MeshTopology)>(&UnityEngine::ProBuilder::MeshUtility::Compile)> {
  static const MethodInfo* get() {
    static auto* probuilderMesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* targetMesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* preferredTopology = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshTopology")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{probuilderMesh, targetMesh, preferredTopology});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::GetVertices
// Il2CppName: GetVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*> (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::GetVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "GetVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices
// Il2CppName: CollapseSharedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::ProBuilder::Vertex*>)>(&UnityEngine::ProBuilder::MeshUtility::CollapseSharedVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "CollapseSharedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::SanityCheck
// Il2CppName: SanityCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "SanityCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::SanityCheck
// Il2CppName: SanityCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "SanityCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshUtility::SanityCheck
// Il2CppName: SanityCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(&UnityEngine::ProBuilder::MeshUtility::SanityCheck)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshUtility*), "SanityCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices});
  }
};
