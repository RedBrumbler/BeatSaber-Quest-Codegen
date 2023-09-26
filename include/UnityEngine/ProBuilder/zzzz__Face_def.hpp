#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Face;
}
// Type: UnityEngine.ProBuilder::Face
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12085))
// CS Name: UnityEngine.ProBuilder.Face
class CORDL_TYPE Face : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Face() = default;

// Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: " const&", def_value: None }]
constexpr Face(Face const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "&&", def_value: None }]
constexpr Face(Face&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Face(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Face& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Face& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Face& operator=(Face&& o) noexcept = default;
  constexpr Face& operator=(Face const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_m_Indexes, put=__set_m_Indexes))  m_Indexes;

constexpr void __set_m_Indexes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_Indexes() const;

 int32_t __declspec(property(get=__get_m_SmoothingGroup, put=__set_m_SmoothingGroup))  m_SmoothingGroup;

constexpr void __set_m_SmoothingGroup(int32_t value) ;

constexpr int32_t __get_m_SmoothingGroup() const;

 UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=__get_m_Uv, put=__set_m_Uv))  m_Uv;

constexpr void __set_m_Uv(UnityEngine::ProBuilder::AutoUnwrapSettings value) ;

constexpr UnityEngine::ProBuilder::AutoUnwrapSettings __get_m_Uv() const;

 UnityEngine::Material __declspec(property(get=__get_m_Material, put=__set_m_Material))  m_Material;

constexpr void __set_m_Material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_Material() const;

 int32_t __declspec(property(get=__get_m_SubmeshIndex, put=__set_m_SubmeshIndex))  m_SubmeshIndex;

constexpr void __set_m_SubmeshIndex(int32_t value) ;

constexpr int32_t __get_m_SubmeshIndex() const;

 bool __declspec(property(get=__get_m_ManualUV, put=__set_m_ManualUV))  m_ManualUV;

constexpr void __set_m_ManualUV(bool value) ;

constexpr bool __get_m_ManualUV() const;

 int32_t __declspec(property(get=__get_elementGroup, put=__set_elementGroup))  elementGroup;

constexpr void __set_elementGroup(int32_t value) ;

constexpr int32_t __get_elementGroup() const;

 int32_t __declspec(property(get=__get_m_TextureGroup, put=__set_m_TextureGroup))  m_TextureGroup;

constexpr void __set_m_TextureGroup(int32_t value) ;

constexpr int32_t __get_m_TextureGroup() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_DistinctIndexes, put=__set_m_DistinctIndexes))  m_DistinctIndexes;

constexpr void __set_m_DistinctIndexes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_DistinctIndexes() const;

 ::ArrayW<UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_m_Edges, put=__set_m_Edges))  m_Edges;

constexpr void __set_m_Edges(::ArrayW<UnityEngine::ProBuilder::Edge> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::Edge> __get_m_Edges() const;


// Properties

 bool __declspec(property(get=get_manualUV, put=set_manualUV))  manualUV;

 int32_t __declspec(property(get=get_textureGroup, put=set_textureGroup))  textureGroup;

 ::ArrayW<int32_t> __declspec(property(get=get_indexesInternal, put=set_indexesInternal))  indexesInternal;

 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> __declspec(property(get=get_indexes))  indexes;

 ::ArrayW<int32_t> __declspec(property(get=get_distinctIndexesInternal))  distinctIndexesInternal;

 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> __declspec(property(get=get_distinctIndexes))  distinctIndexes;

 ::ArrayW<UnityEngine::ProBuilder::Edge> __declspec(property(get=get_edgesInternal))  edgesInternal;

 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge> __declspec(property(get=get_edges))  edges;

 int32_t __declspec(property(get=get_smoothingGroup, put=set_smoothingGroup))  smoothingGroup;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 int32_t __declspec(property(get=get_submeshIndex, put=set_submeshIndex))  submeshIndex;

 UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=get_uv, put=set_uv))  uv;

 int32_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_manualUV addr 0x29db8b8 size 0x8 virtual false final false
 bool get_manualUV() ;

/// @brief Method set_manualUV addr 0x29db8c0 size 0xc virtual false final false
 void set_manualUV(bool value) ;

/// @brief Method get_textureGroup addr 0x29db8cc size 0x8 virtual false final false
 int32_t get_textureGroup() ;

/// @brief Method set_textureGroup addr 0x29db8d4 size 0x8 virtual false final false
 void set_textureGroup(int32_t value) ;

/// @brief Method get_indexesInternal addr 0x29db8dc size 0x8 virtual false final false
 ::ArrayW<int32_t> get_indexesInternal() ;

/// @brief Method set_indexesInternal addr 0x29db8e4 size 0xc8 virtual false final false
 void set_indexesInternal(::ArrayW<int32_t> value) ;

/// @brief Method get_indexes addr 0x29db9b4 size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> get_indexes() ;

/// @brief Method SetIndexes addr 0x29dba30 size 0x110 virtual false final false
 void SetIndexes(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method get_distinctIndexesInternal addr 0x29db360 size 0x14 virtual false final false
 ::ArrayW<int32_t> get_distinctIndexesInternal() ;

/// @brief Method get_distinctIndexes addr 0x29dbbb4 size 0x8c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> get_distinctIndexes() ;

/// @brief Method get_edgesInternal addr 0x29db7bc size 0x14 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Edge> get_edgesInternal() ;

/// @brief Method get_edges addr 0x29dbf40 size 0x8c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge> get_edges() ;

/// @brief Method get_smoothingGroup addr 0x29dbfcc size 0x8 virtual false final false
 int32_t get_smoothingGroup() ;

/// @brief Method set_smoothingGroup addr 0x29dbfd4 size 0x8 virtual false final false
 void set_smoothingGroup(int32_t value) ;

/// @brief Method get_material addr 0x29dbfdc size 0x8 virtual false final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x29dbfe4 size 0x8 virtual false final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method get_submeshIndex addr 0x29dbfec size 0x8 virtual false final false
 int32_t get_submeshIndex() ;

/// @brief Method set_submeshIndex addr 0x29dbff4 size 0x8 virtual false final false
 void set_submeshIndex(int32_t value) ;

/// @brief Method get_uv addr 0x29dbffc size 0x10 virtual false final false
 UnityEngine::ProBuilder::AutoUnwrapSettings get_uv() ;

/// @brief Method set_uv addr 0x29dc00c size 0x10 virtual false final false
 void set_uv(UnityEngine::ProBuilder::AutoUnwrapSettings value) ;

/// @brief Method get_Item addr 0x29dc01c size 0x30 virtual false final false
 int32_t get_Item(int32_t i) ;

// Ctor Parameters []
explicit Face() ;

/// @brief Method .ctor addr 0x29dc04c size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "indices", ty: "System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }]
explicit Face(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method .ctor addr 0x29dc068 size 0xa4 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

// Ctor Parameters [CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "u", ty: "UnityEngine::ProBuilder::AutoUnwrapSettings", modifiers: "", def_value: None }, CppParam { name: "smoothing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "element", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "manualUVs", ty: "bool", modifiers: "", def_value: None }]
explicit Face(::ArrayW<int32_t> triangles, UnityEngine::Material m, UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) ;

/// @brief Method .ctor addr 0x29dc10c size 0xc0 virtual false final false
 void _ctor(::ArrayW<int32_t> triangles, UnityEngine::Material m, UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) ;

// Ctor Parameters [CppParam { name: "triangles", ty: "System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "u", ty: "UnityEngine::ProBuilder::AutoUnwrapSettings", modifiers: "", def_value: None }, CppParam { name: "smoothing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "element", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "manualUVs", ty: "bool", modifiers: "", def_value: None }]
explicit Face(System::Collections::Generic::IEnumerable_1<int32_t> triangles, int32_t submeshIndex, UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) ;

/// @brief Method .ctor addr 0x29dc1cc size 0xbc virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<int32_t> triangles, int32_t submeshIndex, UnityEngine::ProBuilder::AutoUnwrapSettings u, int32_t smoothing, int32_t texture, int32_t element, bool manualUVs) ;

// Ctor Parameters [CppParam { name: "other", ty: "UnityEngine::ProBuilder::Face", modifiers: "", def_value: None }]
explicit Face(UnityEngine::ProBuilder::Face other) ;

/// @brief Method .ctor addr 0x29dc288 size 0x2c virtual false final false
 void _ctor(UnityEngine::ProBuilder::Face other) ;

/// @brief Method CopyFrom addr 0x29dc2b4 size 0x13c virtual false final false
 void CopyFrom(UnityEngine::ProBuilder::Face other) ;

/// @brief Method InvalidateCache addr 0x29db9ac size 0x8 virtual false final false
 void InvalidateCache() ;

/// @brief Method CacheEdges addr 0x29dbc40 size 0x300 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Edge> CacheEdges() ;

/// @brief Method CacheDistinctIndexes addr 0x29dbb40 size 0x74 virtual false final false
 ::ArrayW<int32_t> CacheDistinctIndexes() ;

/// @brief Method Contains addr 0x29dc3f0 size 0x94 virtual false final false
 bool Contains(int32_t a, int32_t b, int32_t c) ;

/// @brief Method IsQuad addr 0x29dc484 size 0x48 virtual false final false
 bool IsQuad() ;

/// @brief Method ToQuad addr 0x29dc4cc size 0x384 virtual false final false
 ::ArrayW<int32_t> ToQuad() ;

/// @brief Method ToString addr 0x29dc850 size 0x1cc virtual true final false
 ::StringW ToString() ;

/// @brief Method ShiftIndexes addr 0x29dca1c size 0x44 virtual false final false
 void ShiftIndexes(int32_t offset) ;

/// @brief Method SmallestIndexValue addr 0x29dca60 size 0x50 virtual false final false
 int32_t SmallestIndexValue() ;

/// @brief Method ShiftIndexesToZero addr 0x29dcab0 size 0x64 virtual false final false
 void ShiftIndexesToZero() ;

/// @brief Method Reverse addr 0x29dcb14 size 0x50 virtual false final false
 void Reverse() ;

/// @brief Method GetIndices addr 0x29dcb64 size 0x3c4 virtual false final false
static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method GetDistinctIndices addr 0x29dcf28 size 0x3ec virtual false final false
static void GetDistinctIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method TryGetNextEdge addr 0x29dd314 size 0x16c virtual false final false
 bool TryGetNextEdge(UnityEngine::ProBuilder::Edge source, int32_t index, ByRef<UnityEngine::ProBuilder::Edge> nextEdge, ByRef<int32_t> nextIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Face);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Face, "UnityEngine.ProBuilder", "Face");
