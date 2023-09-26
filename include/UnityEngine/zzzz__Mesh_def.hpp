#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace System {
class Array;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct UnityEngine__GraphicsBuffer__Target;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshData;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshDataArray;
}
// Type: ::MeshDataArray
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10029))
// CS Name: UnityEngine.Mesh::MeshDataArray
struct CORDL_TYPE UnityEngine__Mesh__MeshDataArray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Mesh__MeshDataArray(void* m_Ptrs, int32_t m_Length) noexcept;


                    constexpr UnityEngine__Mesh__MeshDataArray(UnityEngine__Mesh__MeshDataArray const&) = default;
                    constexpr UnityEngine__Mesh__MeshDataArray(UnityEngine__Mesh__MeshDataArray&&) = default;
                    constexpr UnityEngine__Mesh__MeshDataArray& operator=(UnityEngine__Mesh__MeshDataArray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Mesh__MeshDataArray& operator=(UnityEngine__Mesh__MeshDataArray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Mesh__MeshDataArray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Ptrs, put=__set_m_Ptrs))  m_Ptrs;

constexpr void __set_m_Ptrs(void* value) ;

constexpr void* __get_m_Ptrs() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Length addr 0x2b69208 size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method Dispose addr 0x2b69210 size 0x90 virtual true final true
 void Dispose() ;

/// @brief Method ApplyToMeshAndDispose addr 0x2b65b48 size 0x124 virtual false final false
 void ApplyToMeshAndDispose(UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyToMeshesAndDispose addr 0x2b65dcc size 0x244 virtual false final false
 void ApplyToMeshesAndDispose(::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method .ctor addr 0x2b65134 size 0x248 virtual false final false
 void _ctor(UnityEngine::Mesh mesh, bool checkReadWrite) ;

/// @brief Method .ctor addr 0x2b65418 size 0x338 virtual false final false
 void _ctor(::ArrayW<UnityEngine::Mesh> meshes, int32_t meshesCount, bool checkReadWrite) ;

/// @brief Method .ctor addr 0x2b65858 size 0x168 virtual false final false
 void _ctor(int32_t meshesCount) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b69394 size 0x44 virtual false final false
static void AcquireReadOnlyMeshData(UnityEngine::Mesh mesh, void* datas) ;

/// @brief Method AcquireReadOnlyMeshDatas addr 0x2b693d8 size 0x54 virtual false final false
static void AcquireReadOnlyMeshDatas(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count) ;

/// @brief Method ReleaseMeshDatas addr 0x2b692a0 size 0x44 virtual false final false
static void ReleaseMeshDatas(void* datas, int32_t count) ;

/// @brief Method CreateNewMeshDatas addr 0x2b6942c size 0x44 virtual false final false
static void CreateNewMeshDatas(void* datas, int32_t count) ;

/// @brief Method ApplyToMeshesImpl addr 0x2b69338 size 0x5c virtual false final false
static void ApplyToMeshesImpl(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyToMeshImpl addr 0x2b692e4 size 0x54 virtual false final false
static void ApplyToMeshImpl(UnityEngine::Mesh mesh, ::cordl_internals::intptr_t data, UnityEngine::Rendering::MeshUpdateFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::MeshData
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10030))
// CS Name: UnityEngine.Mesh::MeshData
struct CORDL_TYPE UnityEngine__Mesh__MeshData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Mesh__MeshData(::cordl_internals::intptr_t m_Ptr) noexcept;


                    constexpr UnityEngine__Mesh__MeshData(UnityEngine__Mesh__MeshData const&) = default;
                    constexpr UnityEngine__Mesh__MeshData(UnityEngine__Mesh__MeshData&&) = default;
                    constexpr UnityEngine__Mesh__MeshData& operator=(UnityEngine__Mesh__MeshData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Mesh__MeshData& operator=(UnityEngine__Mesh__MeshData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Mesh__MeshData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Mesh
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10031))
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public UnityEngine::Object {
public:
// Declarations
using MeshData = UnityEngine::UnityEngine__Mesh__MeshData;

using MeshDataArray = UnityEngine::UnityEngine__Mesh__MeshDataArray;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: " const&", def_value: None }]
constexpr Mesh(Mesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
constexpr Mesh(Mesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mesh(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Mesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mesh& operator=(Mesh&& o) noexcept = default;
  constexpr Mesh& operator=(Mesh const& o) noexcept = default;
                


// Properties

 UnityEngine::Rendering::IndexFormat __declspec(property(get=get_indexFormat, put=set_indexFormat))  indexFormat;

 int32_t __declspec(property(get=get_vertexBufferCount))  vertexBufferCount;

 UnityEngine::UnityEngine__GraphicsBuffer__Target __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget))  vertexBufferTarget;

 UnityEngine::UnityEngine__GraphicsBuffer__Target __declspec(property(get=get_indexBufferTarget, put=set_indexBufferTarget))  indexBufferTarget;

 int32_t __declspec(property(get=get_blendShapeCount))  blendShapeCount;

 ::ArrayW<UnityEngine::Matrix4x4> __declspec(property(get=get_bindposes, put=set_bindposes))  bindposes;

 bool __declspec(property(get=get_isReadable))  isReadable;

 bool __declspec(property(get=get_canAccess))  canAccess;

 int32_t __declspec(property(get=get_vertexCount))  vertexCount;

 int32_t __declspec(property(get=get_subMeshCount, put=set_subMeshCount))  subMeshCount;

 UnityEngine::Bounds __declspec(property(get=get_bounds, put=set_bounds))  bounds;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_vertices, put=set_vertices))  vertices;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_normals, put=set_normals))  normals;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=get_tangents, put=set_tangents))  tangents;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv, put=set_uv))  uv;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv2, put=set_uv2))  uv2;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv3, put=set_uv3))  uv3;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv4, put=set_uv4))  uv4;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv5, put=set_uv5))  uv5;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv6, put=set_uv6))  uv6;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv7, put=set_uv7))  uv7;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv8, put=set_uv8))  uv8;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=get_colors, put=set_colors))  colors;

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=get_colors32, put=set_colors32))  colors32;

 int32_t __declspec(property(get=get_vertexAttributeCount))  vertexAttributeCount;

 ::ArrayW<int32_t> __declspec(property(get=get_triangles, put=set_triangles))  triangles;

 ::ArrayW<UnityEngine::BoneWeight> __declspec(property(get=get_boneWeights, put=set_boneWeights))  boneWeights;


// Methods

/// @brief Method Internal_Create addr 0x2b60734 size 0x3c virtual false final false
static void Internal_Create(UnityEngine::Mesh mono) ;

// Ctor Parameters []
explicit Mesh() ;

/// @brief Method .ctor addr 0x2b60770 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method FromInstanceID addr 0x2b607f0 size 0x3c virtual false final false
static UnityEngine::Mesh FromInstanceID(int32_t id) ;

/// @brief Method get_indexFormat addr 0x2b6082c size 0x3c virtual false final false
 UnityEngine::Rendering::IndexFormat get_indexFormat() ;

/// @brief Method set_indexFormat addr 0x2b60868 size 0x44 virtual false final false
 void set_indexFormat(UnityEngine::Rendering::IndexFormat value) ;

/// @brief Method GetTotalIndexCount addr 0x2b608ac size 0x3c virtual false final false
 uint32_t GetTotalIndexCount() ;

/// @brief Method SetIndexBufferParams addr 0x2b608e8 size 0x54 virtual false final false
 void SetIndexBufferParams(int32_t indexCount, UnityEngine::Rendering::IndexFormat format) ;

/// @brief Method InternalSetIndexBufferData addr 0x2b6093c size 0x84 virtual false final false
 void InternalSetIndexBufferData(::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method InternalSetIndexBufferDataFromArray addr 0x2b609c0 size 0x84 virtual false final false
 void InternalSetIndexBufferDataFromArray(System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferParamsFromPtr addr 0x2b60a44 size 0x5c virtual false final false
 void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::cordl_internals::intptr_t attributesPtr, int32_t attributesCount) ;

/// @brief Method SetVertexBufferParamsFromArray addr 0x2b60aa0 size 0x54 virtual false final false
 void SetVertexBufferParamsFromArray(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method InternalSetVertexBufferData addr 0x2b60af4 size 0x8c virtual false final false
 void InternalSetVertexBufferData(int32_t stream, ::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method InternalSetVertexBufferDataFromArray addr 0x2b60b80 size 0x8c virtual false final false
 void InternalSetVertexBufferDataFromArray(int32_t stream, System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetVertexAttributesAlloc addr 0x2b60c0c size 0x3c virtual false final false
 System::Array GetVertexAttributesAlloc() ;

/// @brief Method GetVertexAttributesArray addr 0x2b60c48 size 0x44 virtual false final false
 int32_t GetVertexAttributesArray(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributesList addr 0x2b60c8c size 0x44 virtual false final false
 int32_t GetVertexAttributesList(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributeCountImpl addr 0x2b60cd0 size 0x3c virtual false final false
 int32_t GetVertexAttributeCountImpl() ;

/// @brief Method GetVertexAttribute addr 0x2b60d0c size 0x5c virtual false final false
 UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index) ;

/// @brief Method GetIndexStartImpl addr 0x2b60dbc size 0x44 virtual false final false
 uint32_t GetIndexStartImpl(int32_t submesh) ;

/// @brief Method GetIndexCountImpl addr 0x2b60e00 size 0x44 virtual false final false
 uint32_t GetIndexCountImpl(int32_t submesh) ;

/// @brief Method GetTrianglesCountImpl addr 0x2b60e44 size 0x44 virtual false final false
 uint32_t GetTrianglesCountImpl(int32_t submesh) ;

/// @brief Method GetBaseVertexImpl addr 0x2b60e88 size 0x44 virtual false final false
 uint32_t GetBaseVertexImpl(int32_t submesh) ;

/// @brief Method GetTrianglesImpl addr 0x2b60ecc size 0x54 virtual false final false
 ::ArrayW<int32_t> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesImpl addr 0x2b60f20 size 0x54 virtual false final false
 ::ArrayW<int32_t> GetIndicesImpl(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method SetIndicesImpl addr 0x2b60f74 size 0x9c virtual false final false
 void SetIndicesImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndicesNativeArrayImpl addr 0x2b61010 size 0x9c virtual false final false
 void SetIndicesNativeArrayImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, ::cordl_internals::intptr_t indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method GetTrianglesNonAllocImpl addr 0x2b610ac size 0x5c virtual false final false
 void GetTrianglesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTrianglesNonAllocImpl16 addr 0x2b61108 size 0x5c virtual false final false
 void GetTrianglesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesNonAllocImpl addr 0x2b61164 size 0x5c virtual false final false
 void GetIndicesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesNonAllocImpl16 addr 0x2b611c0 size 0x5c virtual false final false
 void GetIndicesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method PrintErrorCantAccessChannel addr 0x2b6121c size 0x44 virtual false final false
 void PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch) ;

/// @brief Method HasVertexAttribute addr 0x2b61260 size 0x44 virtual false final false
 bool HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeDimension addr 0x2b612a4 size 0x44 virtual false final false
 int32_t GetVertexAttributeDimension(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeFormat addr 0x2b612e8 size 0x44 virtual false final false
 UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeStream addr 0x2b6132c size 0x44 virtual false final false
 int32_t GetVertexAttributeStream(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeOffset addr 0x2b61370 size 0x44 virtual false final false
 int32_t GetVertexAttributeOffset(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method SetArrayForChannelImpl addr 0x2b613b4 size 0x9c virtual false final false
 void SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNativeArrayForChannelImpl addr 0x2b61450 size 0x9c virtual false final false
 void SetNativeArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetAllocArrayFromChannelImpl addr 0x2b614ec size 0x5c virtual false final false
 System::Array GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) ;

/// @brief Method GetArrayFromChannelImpl addr 0x2b61548 size 0x6c virtual false final false
 void GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values) ;

/// @brief Method get_vertexBufferCount addr 0x2b615b4 size 0x3c virtual false final false
 int32_t get_vertexBufferCount() ;

/// @brief Method GetVertexBufferStride addr 0x2b615f0 size 0x44 virtual false final false
 int32_t GetVertexBufferStride(int32_t stream) ;

/// @brief Method GetNativeVertexBufferPtr addr 0x2b61634 size 0x44 virtual false final false
 ::cordl_internals::intptr_t GetNativeVertexBufferPtr(int32_t index) ;

/// @brief Method GetNativeIndexBufferPtr addr 0x2b61678 size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetNativeIndexBufferPtr() ;

/// @brief Method GetVertexBufferImpl addr 0x2b616b4 size 0x44 virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBufferImpl(int32_t index) ;

/// @brief Method GetIndexBufferImpl addr 0x2b616f8 size 0x3c virtual false final false
 UnityEngine::GraphicsBuffer GetIndexBufferImpl() ;

/// @brief Method get_vertexBufferTarget addr 0x2b61734 size 0x3c virtual false final false
 UnityEngine::UnityEngine__GraphicsBuffer__Target get_vertexBufferTarget() ;

/// @brief Method set_vertexBufferTarget addr 0x2b61770 size 0x44 virtual false final false
 void set_vertexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value) ;

/// @brief Method get_indexBufferTarget addr 0x2b617b4 size 0x3c virtual false final false
 UnityEngine::UnityEngine__GraphicsBuffer__Target get_indexBufferTarget() ;

/// @brief Method set_indexBufferTarget addr 0x2b617f0 size 0x44 virtual false final false
 void set_indexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value) ;

/// @brief Method get_blendShapeCount addr 0x2b61834 size 0x3c virtual false final false
 int32_t get_blendShapeCount() ;

/// @brief Method ClearBlendShapes addr 0x2b61870 size 0x3c virtual false final false
 void ClearBlendShapes() ;

/// @brief Method GetBlendShapeName addr 0x2b618ac size 0x44 virtual false final false
 ::StringW GetBlendShapeName(int32_t shapeIndex) ;

/// @brief Method GetBlendShapeIndex addr 0x2b618f0 size 0x44 virtual false final false
 int32_t GetBlendShapeIndex(::StringW blendShapeName) ;

/// @brief Method GetBlendShapeFrameCount addr 0x2b61934 size 0x44 virtual false final false
 int32_t GetBlendShapeFrameCount(int32_t shapeIndex) ;

/// @brief Method GetBlendShapeFrameWeight addr 0x2b61978 size 0x54 virtual false final false
 float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex) ;

/// @brief Method GetBlendShapeFrameVertices addr 0x2b619cc size 0x74 virtual false final false
 void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents) ;

/// @brief Method AddBlendShapeFrame addr 0x2b61a40 size 0x7c virtual false final false
 void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents) ;

/// @brief Method HasBoneWeights addr 0x2b61abc size 0x3c virtual false final false
 bool HasBoneWeights() ;

/// @brief Method GetBoneWeightsImpl addr 0x2b61af8 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::BoneWeight> GetBoneWeightsImpl() ;

/// @brief Method SetBoneWeightsImpl addr 0x2b61b34 size 0x44 virtual false final false
 void SetBoneWeightsImpl(::ArrayW<UnityEngine::BoneWeight> weights) ;

/// @brief Method SetBoneWeights addr 0x2b61b78 size 0xe8 virtual false final false
 void SetBoneWeights(Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> weights) ;

/// @brief Method InternalSetBoneWeights addr 0x2b61c60 size 0x6c virtual false final false
 void InternalSetBoneWeights(::cordl_internals::intptr_t bonesPerVertex, int32_t bonesPerVertexSize, ::cordl_internals::intptr_t weights, int32_t weightsSize) ;

/// @brief Method GetAllBoneWeights addr 0x2b61ccc size 0xb4 virtual false final false
 Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> GetAllBoneWeights() ;

/// @brief Method GetBonesPerVertex addr 0x2b61df8 size 0xe4 virtual false final false
 Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex() ;

/// @brief Method GetAllBoneWeightsArraySize addr 0x2b61dbc size 0x3c virtual false final false
 int32_t GetAllBoneWeightsArraySize() ;

/// @brief Method GetAllBoneWeightsArray addr 0x2b61d80 size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetAllBoneWeightsArray() ;

/// @brief Method GetBonesPerVertexArray addr 0x2b61f18 size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetBonesPerVertexArray() ;

/// @brief Method GetBindposeCount addr 0x2b61f54 size 0x3c virtual false final false
 int32_t GetBindposeCount() ;

/// @brief Method get_bindposes addr 0x2b61f90 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> get_bindposes() ;

/// @brief Method set_bindposes addr 0x2b61fcc size 0x44 virtual false final false
 void set_bindposes(::ArrayW<UnityEngine::Matrix4x4> value) ;

/// @brief Method GetBoneWeightsNonAllocImpl addr 0x2b62010 size 0x44 virtual false final false
 void GetBoneWeightsNonAllocImpl(ByRef<::ArrayW<UnityEngine::BoneWeight>> values) ;

/// @brief Method GetBindposesNonAllocImpl addr 0x2b62054 size 0x44 virtual false final false
 void GetBindposesNonAllocImpl(ByRef<::ArrayW<UnityEngine::Matrix4x4>> values) ;

/// @brief Method get_isReadable addr 0x2b62098 size 0x3c virtual false final false
 bool get_isReadable() ;

/// @brief Method get_canAccess addr 0x2b620d4 size 0x3c virtual false final false
 bool get_canAccess() ;

/// @brief Method get_vertexCount addr 0x2b61edc size 0x3c virtual false final false
 int32_t get_vertexCount() ;

/// @brief Method get_subMeshCount addr 0x2b62110 size 0x3c virtual false final false
 int32_t get_subMeshCount() ;

/// @brief Method set_subMeshCount addr 0x2b6214c size 0x44 virtual false final false
 void set_subMeshCount(int32_t value) ;

/// @brief Method SetSubMesh addr 0x2b62190 size 0x5c virtual false final false
 void SetSubMesh(int32_t index, UnityEngine::Rendering::SubMeshDescriptor desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetSubMesh addr 0x2b62248 size 0x7c virtual false final false
 UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index) ;

/// @brief Method SetAllSubMeshesAtOnceFromArray addr 0x2b62318 size 0x6c virtual false final false
 void SetAllSubMeshesAtOnceFromArray(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetAllSubMeshesAtOnceFromNativeArray addr 0x2b62384 size 0x6c virtual false final false
 void SetAllSubMeshesAtOnceFromNativeArray(::cordl_internals::intptr_t desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method get_bounds addr 0x2b623f0 size 0x68 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method set_bounds addr 0x2b6249c size 0x44 virtual false final false
 void set_bounds(UnityEngine::Bounds value) ;

/// @brief Method ClearImpl addr 0x2b62524 size 0x44 virtual false final false
 void ClearImpl(bool keepVertexLayout) ;

/// @brief Method RecalculateBoundsImpl addr 0x2b62568 size 0x44 virtual false final false
 void RecalculateBoundsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateNormalsImpl addr 0x2b625ac size 0x44 virtual false final false
 void RecalculateNormalsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateTangentsImpl addr 0x2b625f0 size 0x44 virtual false final false
 void RecalculateTangentsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method MarkDynamicImpl addr 0x2b62634 size 0x3c virtual false final false
 void MarkDynamicImpl() ;

/// @brief Method MarkModified addr 0x2b62670 size 0x3c virtual false final false
 void MarkModified() ;

/// @brief Method UploadMeshDataImpl addr 0x2b626ac size 0x44 virtual false final false
 void UploadMeshDataImpl(bool markNoLongerReadable) ;

/// @brief Method GetTopologyImpl addr 0x2b626f0 size 0x44 virtual false final false
 UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh) ;

/// @brief Method RecalculateUVDistributionMetricImpl addr 0x2b62734 size 0x54 virtual false final false
 void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetricsImpl addr 0x2b62788 size 0x4c virtual false final false
 void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold) ;

/// @brief Method GetUVDistributionMetric addr 0x2b627d4 size 0x44 virtual false final false
 float_t GetUVDistributionMetric(int32_t uvSetIndex) ;

/// @brief Method CombineMeshesImpl addr 0x2b62818 size 0x6c virtual false final false
 void CombineMeshesImpl(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) ;

/// @brief Method OptimizeImpl addr 0x2b62884 size 0x3c virtual false final false
 void OptimizeImpl() ;

/// @brief Method OptimizeIndexBuffersImpl addr 0x2b628c0 size 0x3c virtual false final false
 void OptimizeIndexBuffersImpl() ;

/// @brief Method OptimizeReorderVertexBufferImpl addr 0x2b628fc size 0x3c virtual false final false
 void OptimizeReorderVertexBufferImpl() ;

/// @brief Method GetUVChannel addr 0x2b62938 size 0x78 virtual false final false
static UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex) ;

/// @brief Method DefaultDimensionForChannel addr 0x2b629b0 size 0xa0 virtual false final false
static int32_t DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel) ;

/// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) ;

/// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel) ;

/// @brief Method SetSizedArrayForChannel addr 0x2b62a50 size 0x2a4 virtual false final false
 void SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSizedNativeArrayForChannel addr 0x2b62cf4 size 0x29c virtual false final false
 void SetSizedNativeArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim) ;

/// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim, UnityEngine::Rendering::VertexAttributeFormat channelType) ;

/// @brief Method get_vertices addr 0x2b62f90 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_vertices() ;

/// @brief Method set_vertices addr 0x2b62fdc size 0x60 virtual false final false
 void set_vertices(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method get_normals addr 0x2b6303c size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_normals() ;

/// @brief Method set_normals addr 0x2b63088 size 0x60 virtual false final false
 void set_normals(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method get_tangents addr 0x2b630e8 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector4> get_tangents() ;

/// @brief Method set_tangents addr 0x2b63134 size 0x60 virtual false final false
 void set_tangents(::ArrayW<UnityEngine::Vector4> value) ;

/// @brief Method get_uv addr 0x2b63194 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv() ;

/// @brief Method set_uv addr 0x2b631e0 size 0x60 virtual false final false
 void set_uv(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv2 addr 0x2b63240 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv2() ;

/// @brief Method set_uv2 addr 0x2b6328c size 0x60 virtual false final false
 void set_uv2(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv3 addr 0x2b632ec size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv3() ;

/// @brief Method set_uv3 addr 0x2b63338 size 0x60 virtual false final false
 void set_uv3(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv4 addr 0x2b63398 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv4() ;

/// @brief Method set_uv4 addr 0x2b633e4 size 0x60 virtual false final false
 void set_uv4(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv5 addr 0x2b63444 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv5() ;

/// @brief Method set_uv5 addr 0x2b63490 size 0x60 virtual false final false
 void set_uv5(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv6 addr 0x2b634f0 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv6() ;

/// @brief Method set_uv6 addr 0x2b6353c size 0x60 virtual false final false
 void set_uv6(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv7 addr 0x2b6359c size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv7() ;

/// @brief Method set_uv7 addr 0x2b635e8 size 0x60 virtual false final false
 void set_uv7(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv8 addr 0x2b63648 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv8() ;

/// @brief Method set_uv8 addr 0x2b63694 size 0x60 virtual false final false
 void set_uv8(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_colors addr 0x2b636f4 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Color> get_colors() ;

/// @brief Method set_colors addr 0x2b63740 size 0x60 virtual false final false
 void set_colors(::ArrayW<UnityEngine::Color> value) ;

/// @brief Method get_colors32 addr 0x2b637a0 size 0x54 virtual false final false
 ::ArrayW<UnityEngine::Color32> get_colors32() ;

/// @brief Method set_colors32 addr 0x2b637f4 size 0x68 virtual false final false
 void set_colors32(::ArrayW<UnityEngine::Color32> value) ;

/// @brief Method GetVertices addr 0x2b6385c size 0xf0 virtual false final false
 void GetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> vertices) ;

/// @brief Method SetVertices addr 0x2b6394c size 0x6c virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices) ;

/// @brief Method SetVertices addr 0x2b639b8 size 0x8 virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x2b639c0 size 0x7c virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertices addr 0x2b63a3c size 0x68 virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices) ;

/// @brief Method SetVertices addr 0x2b63aa4 size 0x68 virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x2b63b0c size 0x6c virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetNormals addr 0x2b63b78 size 0xf0 virtual false final false
 void GetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> normals) ;

/// @brief Method SetNormals addr 0x2b63c68 size 0x6c virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals) ;

/// @brief Method SetNormals addr 0x2b63cd4 size 0x8 virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x2b63cdc size 0x7c virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNormals addr 0x2b63d58 size 0x68 virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals) ;

/// @brief Method SetNormals addr 0x2b63dc0 size 0x68 virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x2b63e28 size 0x6c virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetTangents addr 0x2b63e94 size 0xf0 virtual false final false
 void GetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> tangents) ;

/// @brief Method SetTangents addr 0x2b63f84 size 0x6c virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents) ;

/// @brief Method SetTangents addr 0x2b63ff0 size 0x8 virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x2b63ff8 size 0x7c virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetTangents addr 0x2b64074 size 0x68 virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents) ;

/// @brief Method SetTangents addr 0x2b640dc size 0x68 virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x2b64144 size 0x6c virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetColors addr 0x2b641b0 size 0xf0 virtual false final false
 void GetColors(System::Collections::Generic::List_1<UnityEngine::Color> colors) ;

/// @brief Method SetColors addr 0x2b642a0 size 0x6c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors) ;

/// @brief Method SetColors addr 0x2b6430c size 0x8 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b64314 size 0x7c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x2b64390 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors) ;

/// @brief Method SetColors addr 0x2b643f8 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b64460 size 0x6c virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetColors addr 0x2b644cc size 0xf4 virtual false final false
 void GetColors(System::Collections::Generic::List_1<UnityEngine::Color32> colors) ;

/// @brief Method SetColors addr 0x2b645c0 size 0x6c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors) ;

/// @brief Method SetColors addr 0x2b6462c size 0x8 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b64634 size 0x94 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x2b646c8 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors) ;

/// @brief Method SetColors addr 0x2b64730 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b64798 size 0x6c virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUvsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUvsImpl(int32_t uvIndex, int32_t dim, System::Collections::Generic::List_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b64804 size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs) ;

/// @brief Method SetUVs addr 0x2b64880 size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs) ;

/// @brief Method SetUVs addr 0x2b648fc size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method SetUVs addr 0x2b64878 size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64978 size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b648f4 size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64a04 size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b64970 size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64a90 size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUvsImpl addr 0x2b64b1c size 0x10c virtual false final false
 void SetUvsImpl(int32_t uvIndex, int32_t dim, System::Array uvs, int32_t arrayStart, int32_t arraySize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b64c28 size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs) ;

/// @brief Method SetUVs addr 0x2b64c88 size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs) ;

/// @brief Method SetUVs addr 0x2b64ce8 size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs) ;

/// @brief Method SetUVs addr 0x2b64c70 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64d48 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b64cd0 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64d60 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b64d30 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b64d78 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetUVsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetUVsImpl(int32_t uvIndex, System::Collections::Generic::List_1<T> uvs, int32_t dim) ;

/// @brief Method GetUVs addr 0x2b64d90 size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs) ;

/// @brief Method GetUVs addr 0x2b64df4 size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs) ;

/// @brief Method GetUVs addr 0x2b64e58 size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method get_vertexAttributeCount addr 0x2b64ebc size 0x3c virtual false final false
 int32_t get_vertexAttributeCount() ;

/// @brief Method GetVertexAttributes addr 0x2b64ef8 size 0x8c virtual false final false
 ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes() ;

/// @brief Method GetVertexAttributes addr 0x2b64f84 size 0x44 virtual false final false
 int32_t GetVertexAttributes(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributes addr 0x2b64fc8 size 0x44 virtual false final false
 int32_t GetVertexAttributes(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferParams addr 0x2b6500c size 0x54 virtual false final false
 void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferParams addr 0x2b65060 size 0xa8 virtual false final false
 void SetVertexBufferParams(int32_t vertexCount, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b65108 size 0x2c virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(UnityEngine::Mesh mesh) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b6537c size 0x9c virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(::ArrayW<UnityEngine::Mesh> meshes) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b65750 size 0xe0 virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(System::Collections::Generic::List_1<UnityEngine::Mesh> meshes) ;

/// @brief Method AllocateWritableMeshData addr 0x2b65830 size 0x28 virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AllocateWritableMeshData(int32_t meshCount) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b659c0 size 0x188 virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b65c6c size 0x160 virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, ::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b66010 size 0x1bc virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, System::Collections::Generic::List_1<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetVertexBuffer addr 0x2b661cc size 0xd4 virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBuffer(int32_t index) ;

/// @brief Method GetIndexBuffer addr 0x2b662a0 size 0xc4 virtual false final false
 UnityEngine::GraphicsBuffer GetIndexBuffer() ;

/// @brief Method PrintErrorCantAccessIndices addr 0x2b66364 size 0x98 virtual false final false
 void PrintErrorCantAccessIndices() ;

/// @brief Method CheckCanAccessSubmesh addr 0x2b663fc size 0x140 virtual false final false
 bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles) ;

/// @brief Method CheckCanAccessSubmeshTriangles addr 0x2b6653c size 0x8 virtual false final false
 bool CheckCanAccessSubmeshTriangles(int32_t submesh) ;

/// @brief Method CheckCanAccessSubmeshIndices addr 0x2b66544 size 0x8 virtual false final false
 bool CheckCanAccessSubmeshIndices(int32_t submesh) ;

/// @brief Method get_triangles addr 0x2b6654c size 0xb4 virtual false final false
 ::ArrayW<int32_t> get_triangles() ;

/// @brief Method set_triangles addr 0x2b66600 size 0xa8 virtual false final false
 void set_triangles(::ArrayW<int32_t> value) ;

/// @brief Method GetTriangles addr 0x2b66748 size 0x8 virtual false final false
 ::ArrayW<int32_t> GetTriangles(int32_t submesh) ;

/// @brief Method GetTriangles addr 0x2b66750 size 0xa8 virtual false final false
 ::ArrayW<int32_t> GetTriangles(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTriangles addr 0x2b667f8 size 0x8 virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh) ;

/// @brief Method GetTriangles addr 0x2b66800 size 0x1bc virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTriangles addr 0x2b669bc size 0x1bc virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b66b78 size 0x8 virtual false final false
 ::ArrayW<int32_t> GetIndices(int32_t submesh) ;

/// @brief Method GetIndices addr 0x2b66b80 size 0xa8 virtual false final false
 ::ArrayW<int32_t> GetIndices(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b66c28 size 0x8 virtual false final false
 void GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh) ;

/// @brief Method GetIndices addr 0x2b66c30 size 0x19c virtual false final false
 void GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b66e90 size 0x19c virtual false final false
 void GetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetIndexStart addr 0x2b6702c size 0xc4 virtual false final false
 uint32_t GetIndexStart(int32_t submesh) ;

/// @brief Method GetIndexCount addr 0x2b66dcc size 0xc4 virtual false final false
 uint32_t GetIndexCount(int32_t submesh) ;

/// @brief Method GetBaseVertex addr 0x2b670f0 size 0xc4 virtual false final false
 uint32_t GetBaseVertex(int32_t submesh) ;

/// @brief Method CheckIndicesArrayRange addr 0x2b671b4 size 0x1ac virtual false final false
 void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length) ;

/// @brief Method SetTrianglesImpl addr 0x2b666a8 size 0xa0 virtual false final false
 void SetTrianglesImpl(int32_t submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array triangles, int32_t trianglesArrayLength, int32_t start, int32_t length, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b67360 size 0x48 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh) ;

/// @brief Method SetTriangles addr 0x2b67400 size 0x54 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetTriangles addr 0x2b673a8 size 0x58 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b67454 size 0x8c virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b674e0 size 0x58 virtual false final false
 void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b67538 size 0x8c virtual false final false
 void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b675c4 size 0xc virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh) ;

/// @brief Method SetTriangles addr 0x2b67658 size 0xc virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetTriangles addr 0x2b675d0 size 0x88 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b67664 size 0xd0 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b67734 size 0x88 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b677bc size 0xd0 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b6788c size 0x64 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh) ;

/// @brief Method SetIndices addr 0x2b67964 size 0x68 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetIndices addr 0x2b678f0 size 0x74 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b679cc size 0xd4 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67aa0 size 0x74 virtual false final false
 void SetIndices(::ArrayW<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67b14 size 0xd4 virtual false final false
 void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndices(Unity::Collections::NativeArray_1<T> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndices(Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67be8 size 0xa4 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67c8c size 0x110 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67d9c size 0xa4 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b67e40 size 0x110 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetSubMeshes addr 0x2b67f50 size 0x2dc virtual false final false
 void SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b6822c size 0x2c virtual false final false
 void SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b68258 size 0x80 virtual false final false
 void SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b682d8 size 0x90 virtual false final false
 void SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetBindposes addr 0x2b68368 size 0x134 virtual false final false
 void GetBindposes(System::Collections::Generic::List_1<UnityEngine::Matrix4x4> bindposes) ;

/// @brief Method GetBoneWeights addr 0x2b6849c size 0x160 virtual false final false
 void GetBoneWeights(System::Collections::Generic::List_1<UnityEngine::BoneWeight> boneWeights) ;

/// @brief Method get_boneWeights addr 0x2b685fc size 0x3c virtual false final false
 ::ArrayW<UnityEngine::BoneWeight> get_boneWeights() ;

/// @brief Method set_boneWeights addr 0x2b68638 size 0x44 virtual false final false
 void set_boneWeights(::ArrayW<UnityEngine::BoneWeight> value) ;

/// @brief Method Clear addr 0x2b6867c size 0x44 virtual false final false
 void Clear(bool keepVertexLayout) ;

/// @brief Method Clear addr 0x2b686c0 size 0x40 virtual false final false
 void Clear() ;

/// @brief Method RecalculateBounds addr 0x2b68700 size 0x8 virtual false final false
 void RecalculateBounds() ;

/// @brief Method RecalculateNormals addr 0x2b687fc size 0x8 virtual false final false
 void RecalculateNormals() ;

/// @brief Method RecalculateTangents addr 0x2b688f8 size 0x8 virtual false final false
 void RecalculateTangents() ;

/// @brief Method RecalculateBounds addr 0x2b68708 size 0xf4 virtual false final false
 void RecalculateBounds(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateNormals addr 0x2b68804 size 0xf4 virtual false final false
 void RecalculateNormals(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateTangents addr 0x2b68900 size 0xf4 virtual false final false
 void RecalculateTangents(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateUVDistributionMetric addr 0x2b689f4 size 0x108 virtual false final false
 void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetrics addr 0x2b68afc size 0x100 virtual false final false
 void RecalculateUVDistributionMetrics(float_t uvAreaThreshold) ;

/// @brief Method MarkDynamic addr 0x2b68bfc size 0x74 virtual false final false
 void MarkDynamic() ;

/// @brief Method UploadMeshData addr 0x2b68c70 size 0x7c virtual false final false
 void UploadMeshData(bool markNoLongerReadable) ;

/// @brief Method Optimize addr 0x2b68cec size 0xec virtual false final false
 void Optimize() ;

/// @brief Method OptimizeIndexBuffers addr 0x2b68dd8 size 0xec virtual false final false
 void OptimizeIndexBuffers() ;

/// @brief Method OptimizeReorderVertexBuffer addr 0x2b68ec4 size 0xec virtual false final false
 void OptimizeReorderVertexBuffer() ;

/// @brief Method GetTopology addr 0x2b68fb0 size 0xe0 virtual false final false
 UnityEngine::MeshTopology GetTopology(int32_t submesh) ;

/// @brief Method CombineMeshes addr 0x2b69090 size 0x6c virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) ;

/// @brief Method CombineMeshes addr 0x2b690fc size 0x60 virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices) ;

/// @brief Method CombineMeshes addr 0x2b6915c size 0x5c virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes) ;

/// @brief Method CombineMeshes addr 0x2b691b8 size 0x50 virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine) ;

/// @brief Method GetVertexAttribute_Injected addr 0x2b60d68 size 0x54 virtual false final false
 void GetVertexAttribute_Injected(int32_t index, ByRef<UnityEngine::Rendering::VertexAttributeDescriptor> ret) ;

/// @brief Method SetSubMesh_Injected addr 0x2b621ec size 0x5c virtual false final false
 void SetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetSubMesh_Injected addr 0x2b622c4 size 0x54 virtual false final false
 void GetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> ret) ;

/// @brief Method get_bounds_Injected addr 0x2b62458 size 0x44 virtual false final false
 void get_bounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

/// @brief Method set_bounds_Injected addr 0x2b624e0 size 0x44 virtual false final false
 void set_bounds_Injected(ByRef<UnityEngine::Bounds> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mesh, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Mesh__MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Mesh__MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
