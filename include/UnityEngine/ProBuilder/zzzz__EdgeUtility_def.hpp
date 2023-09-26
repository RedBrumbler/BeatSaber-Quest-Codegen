#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EdgeUtility;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12081))
// CS Name: UnityEngine.ProBuilder.EdgeUtility::<>c__DisplayClass0_0
class CORDL_TYPE UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0(UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0(UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_mesh() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x29dafd4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetSharedVertexHandleEdges>b__0 addr 0x29db7d0 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _GetSharedVertexHandleEdges_b__0(UnityEngine::ProBuilder::Edge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::EdgeUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12082))
// CS Name: UnityEngine.ProBuilder.EdgeUtility
class CORDL_TYPE EdgeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_0 = UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EdgeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "EdgeUtility", modifiers: " const&", def_value: None }]
constexpr EdgeUtility(EdgeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EdgeUtility", modifiers: "&&", def_value: None }]
constexpr EdgeUtility(EdgeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EdgeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EdgeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EdgeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EdgeUtility& operator=(EdgeUtility&& o) noexcept = default;
  constexpr EdgeUtility& operator=(EdgeUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetSharedVertexHandleEdges addr 0x29daf00 size 0xd4 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> GetSharedVertexHandleEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetSharedVertexHandleEdge addr 0x29dafdc size 0x9c virtual false final false
static UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method GetEdgeWithSharedVertexHandles addr 0x29db078 size 0x98 virtual false final false
static UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method ValidateEdge addr 0x29db110 size 0x250 virtual false final false
static bool ValidateEdge(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Edge>> validEdge) ;

/// @brief Method Contains addr 0x29db374 size 0x88 virtual false final false
static bool Contains(::ArrayW<UnityEngine::ProBuilder::Edge> edges, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method Contains addr 0x29db3fc size 0x68 virtual false final false
static bool Contains(::ArrayW<UnityEngine::ProBuilder::Edge> edges, int32_t x, int32_t y) ;

/// @brief Method IndexOf addr 0x29db464 size 0x170 virtual false final false
static int32_t IndexOf(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge> edges, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method AllTriangles addr 0x29db5d4 size 0xd0 virtual false final false
static ::ArrayW<int32_t> AllTriangles(::ArrayW<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetFace addr 0x29db6a4 size 0x118 virtual false final false
static UnityEngine::ProBuilder::Face GetFace(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::EdgeUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeUtility, "UnityEngine.ProBuilder", "EdgeUtility");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeUtility____c__DisplayClass0_0, "UnityEngine.ProBuilder", "EdgeUtility/<>c__DisplayClass0_0");
