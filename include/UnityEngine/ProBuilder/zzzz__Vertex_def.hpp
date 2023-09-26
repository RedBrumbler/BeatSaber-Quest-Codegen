#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Vertex;
}
// Type: UnityEngine.ProBuilder::Vertex
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12179))
// CS Name: UnityEngine.ProBuilder.Vertex
class CORDL_TYPE Vertex : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::Vertex>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::Vertex>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Vertex() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: " const&", def_value: None }]
constexpr Vertex(Vertex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "&&", def_value: None }]
constexpr Vertex(Vertex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vertex(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Vertex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vertex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vertex& operator=(Vertex&& o) noexcept = default;
  constexpr Vertex& operator=(Vertex const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_Color() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Normal() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_Tangent, put=__set_m_Tangent))  m_Tangent;

constexpr void __set_m_Tangent(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_Tangent() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_UV0, put=__set_m_UV0))  m_UV0;

constexpr void __set_m_UV0(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_UV0() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_UV2, put=__set_m_UV2))  m_UV2;

constexpr void __set_m_UV2(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_UV2() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_UV3, put=__set_m_UV3))  m_UV3;

constexpr void __set_m_UV3(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_UV3() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_UV4, put=__set_m_UV4))  m_UV4;

constexpr void __set_m_UV4(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_UV4() const;

 UnityEngine::ProBuilder::MeshArrays __declspec(property(get=__get_m_Attributes, put=__set_m_Attributes))  m_Attributes;

constexpr void __set_m_Attributes(UnityEngine::ProBuilder::MeshArrays value) ;

constexpr UnityEngine::ProBuilder::MeshArrays __get_m_Attributes() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 UnityEngine::Vector3 __declspec(property(get=get_normal, put=set_normal))  normal;

 UnityEngine::Vector4 __declspec(property(get=get_tangent, put=set_tangent))  tangent;

 UnityEngine::Vector2 __declspec(property(get=get_uv0, put=set_uv0))  uv0;

 UnityEngine::Vector2 __declspec(property(get=get_uv2, put=set_uv2))  uv2;

 UnityEngine::Vector4 __declspec(property(get=get_uv3, put=set_uv3))  uv3;

 UnityEngine::Vector4 __declspec(property(get=get_uv4, put=set_uv4))  uv4;

 UnityEngine::ProBuilder::MeshArrays __declspec(property(get=get_attributes))  attributes;

 bool __declspec(property(get=get_hasPosition, put=set_hasPosition))  hasPosition;

 bool __declspec(property(get=get_hasColor, put=set_hasColor))  hasColor;

 bool __declspec(property(get=get_hasNormal, put=set_hasNormal))  hasNormal;

 bool __declspec(property(get=get_hasTangent, put=set_hasTangent))  hasTangent;

 bool __declspec(property(get=get_hasUV0, put=set_hasUV0))  hasUV0;

 bool __declspec(property(get=get_hasUV2, put=set_hasUV2))  hasUV2;

 bool __declspec(property(get=get_hasUV3, put=set_hasUV3))  hasUV3;

 bool __declspec(property(get=get_hasUV4, put=set_hasUV4))  hasUV4;


// Methods

/// @brief Method get_position addr 0x2a1d544 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2a1d550 size 0x28 virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_color addr 0x2a1d5a4 size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2a1d5b0 size 0x28 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_normal addr 0x2a1d604 size 0xc virtual false final false
 UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal addr 0x2a1d610 size 0x28 virtual false final false
 void set_normal(UnityEngine::Vector3 value) ;

/// @brief Method get_tangent addr 0x2a1d664 size 0xc virtual false final false
 UnityEngine::Vector4 get_tangent() ;

/// @brief Method set_tangent addr 0x2a1d670 size 0x28 virtual false final false
 void set_tangent(UnityEngine::Vector4 value) ;

/// @brief Method get_uv0 addr 0x2a1d6c4 size 0x8 virtual false final false
 UnityEngine::Vector2 get_uv0() ;

/// @brief Method set_uv0 addr 0x2a1d6cc size 0x24 virtual false final false
 void set_uv0(UnityEngine::Vector2 value) ;

/// @brief Method get_uv2 addr 0x2a1d71c size 0x8 virtual false final false
 UnityEngine::Vector2 get_uv2() ;

/// @brief Method set_uv2 addr 0x2a1d724 size 0x24 virtual false final false
 void set_uv2(UnityEngine::Vector2 value) ;

/// @brief Method get_uv3 addr 0x2a1d774 size 0xc virtual false final false
 UnityEngine::Vector4 get_uv3() ;

/// @brief Method set_uv3 addr 0x2a1d780 size 0x28 virtual false final false
 void set_uv3(UnityEngine::Vector4 value) ;

/// @brief Method get_uv4 addr 0x2a1d7d4 size 0xc virtual false final false
 UnityEngine::Vector4 get_uv4() ;

/// @brief Method set_uv4 addr 0x2a1d7e0 size 0x28 virtual false final false
 void set_uv4(UnityEngine::Vector4 value) ;

/// @brief Method get_attributes addr 0x2a1d834 size 0x8 virtual false final false
 UnityEngine::ProBuilder::MeshArrays get_attributes() ;

/// @brief Method HasArrays addr 0x2a1d83c size 0x10 virtual false final false
 bool HasArrays(UnityEngine::ProBuilder::MeshArrays attribute) ;

/// @brief Method get_hasPosition addr 0x2a1d84c size 0xc virtual false final false
 bool get_hasPosition() ;

/// @brief Method set_hasPosition addr 0x2a1d578 size 0x2c virtual false final false
 void set_hasPosition(bool value) ;

/// @brief Method get_hasColor addr 0x2a1d858 size 0xc virtual false final false
 bool get_hasColor() ;

/// @brief Method set_hasColor addr 0x2a1d5d8 size 0x2c virtual false final false
 void set_hasColor(bool value) ;

/// @brief Method get_hasNormal addr 0x2a1d864 size 0xc virtual false final false
 bool get_hasNormal() ;

/// @brief Method set_hasNormal addr 0x2a1d638 size 0x2c virtual false final false
 void set_hasNormal(bool value) ;

/// @brief Method get_hasTangent addr 0x2a1d870 size 0xc virtual false final false
 bool get_hasTangent() ;

/// @brief Method set_hasTangent addr 0x2a1d698 size 0x2c virtual false final false
 void set_hasTangent(bool value) ;

/// @brief Method get_hasUV0 addr 0x2a1d87c size 0xc virtual false final false
 bool get_hasUV0() ;

/// @brief Method set_hasUV0 addr 0x2a1d6f0 size 0x2c virtual false final false
 void set_hasUV0(bool value) ;

/// @brief Method get_hasUV2 addr 0x2a1d888 size 0xc virtual false final false
 bool get_hasUV2() ;

/// @brief Method set_hasUV2 addr 0x2a1d748 size 0x2c virtual false final false
 void set_hasUV2(bool value) ;

/// @brief Method get_hasUV3 addr 0x2a1d894 size 0xc virtual false final false
 bool get_hasUV3() ;

/// @brief Method set_hasUV3 addr 0x2a1d7a8 size 0x2c virtual false final false
 void set_hasUV3(bool value) ;

/// @brief Method get_hasUV4 addr 0x2a1d8a0 size 0xc virtual false final false
 bool get_hasUV4() ;

/// @brief Method set_hasUV4 addr 0x2a1d808 size 0x2c virtual false final false
 void set_hasUV4(bool value) ;

// Ctor Parameters []
explicit Vertex() ;

/// @brief Method .ctor addr 0x2a1d8ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x2a1d8b4 size 0x70 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a1d924 size 0x148 virtual true final true
 bool Equals(UnityEngine::ProBuilder::Vertex other) ;

/// @brief Method Equals addr 0x2a1da6c size 0x178 virtual false final false
 bool Equals(UnityEngine::ProBuilder::Vertex other, UnityEngine::ProBuilder::MeshArrays mask) ;

/// @brief Method GetHashCode addr 0x2a1dbe4 size 0x6c virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "vertex", ty: "UnityEngine::ProBuilder::Vertex", modifiers: "", def_value: None }]
explicit Vertex(UnityEngine::ProBuilder::Vertex vertex) ;

/// @brief Method .ctor addr 0x2a1dc50 size 0x190 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Vertex vertex) ;

/// @brief Method op_Equality addr 0x2a1dde0 size 0x28 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method op_Inequality addr 0x2a1de08 size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method op_Addition addr 0x2a1de3c size 0x4 virtual false final false
static UnityEngine::ProBuilder::Vertex op_Addition(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method Add addr 0x2a1de40 size 0x78 virtual false final false
static UnityEngine::ProBuilder::Vertex Add(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method Add addr 0x2a1deb8 size 0x10c virtual false final false
 void Add(UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method op_Subtraction addr 0x2a1dfc4 size 0x4 virtual false final false
static UnityEngine::ProBuilder::Vertex op_Subtraction(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method Subtract addr 0x2a1dfc8 size 0x78 virtual false final false
static UnityEngine::ProBuilder::Vertex Subtract(UnityEngine::ProBuilder::Vertex a, UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method Subtract addr 0x2a1e040 size 0x10c virtual false final false
 void Subtract(UnityEngine::ProBuilder::Vertex b) ;

/// @brief Method op_Multiply addr 0x2a1e14c size 0x4 virtual false final false
static UnityEngine::ProBuilder::Vertex op_Multiply(UnityEngine::ProBuilder::Vertex a, float_t value) ;

/// @brief Method Multiply addr 0x2a1e150 size 0x78 virtual false final false
static UnityEngine::ProBuilder::Vertex Multiply(UnityEngine::ProBuilder::Vertex a, float_t value) ;

/// @brief Method Multiply addr 0x2a1e1c8 size 0x44 virtual false final false
 void Multiply(float_t value) ;

/// @brief Method op_Division addr 0x2a1e20c size 0x4 virtual false final false
static UnityEngine::ProBuilder::Vertex op_Division(UnityEngine::ProBuilder::Vertex a, float_t value) ;

/// @brief Method Divide addr 0x2a1e210 size 0x78 virtual false final false
static UnityEngine::ProBuilder::Vertex Divide(UnityEngine::ProBuilder::Vertex a, float_t value) ;

/// @brief Method Divide addr 0x2a1e288 size 0x48 virtual false final false
 void Divide(float_t value) ;

/// @brief Method Normalize addr 0x2a1e2d0 size 0x554 virtual false final false
 void Normalize() ;

/// @brief Method ToString addr 0x2a1e824 size 0x314 virtual false final false
 ::StringW ToString(::StringW args) ;

/// @brief Method GetArrays addr 0x2a1eb38 size 0x28 virtual false final false
static void GetArrays(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, ByRef<::ArrayW<UnityEngine::Vector3>> position, ByRef<::ArrayW<UnityEngine::Color>> color, ByRef<::ArrayW<UnityEngine::Vector2>> uv0, ByRef<::ArrayW<UnityEngine::Vector3>> normal, ByRef<::ArrayW<UnityEngine::Vector4>> tangent, ByRef<::ArrayW<UnityEngine::Vector2>> uv2, ByRef<System::Collections::Generic::List_1<UnityEngine::Vector4>> uv3, ByRef<System::Collections::Generic::List_1<UnityEngine::Vector4>> uv4) ;

/// @brief Method GetArrays addr 0x2a1eb60 size 0x97c virtual false final false
static void GetArrays(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, ByRef<::ArrayW<UnityEngine::Vector3>> position, ByRef<::ArrayW<UnityEngine::Color>> color, ByRef<::ArrayW<UnityEngine::Vector2>> uv0, ByRef<::ArrayW<UnityEngine::Vector3>> normal, ByRef<::ArrayW<UnityEngine::Vector4>> tangent, ByRef<::ArrayW<UnityEngine::Vector2>> uv2, ByRef<System::Collections::Generic::List_1<UnityEngine::Vector4>> uv3, ByRef<System::Collections::Generic::List_1<UnityEngine::Vector4>> uv4, UnityEngine::ProBuilder::MeshArrays attributes) ;

/// @brief Method SetMesh addr 0x2a1f4dc size 0x2c0 virtual false final false
static void SetMesh(UnityEngine::Mesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method Average addr 0x2a1f79c size 0xb24 virtual false final false
static UnityEngine::ProBuilder::Vertex Average(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Mix addr 0x2a202c0 size 0x2f8 virtual false final false
static UnityEngine::ProBuilder::Vertex Mix(UnityEngine::ProBuilder::Vertex x, UnityEngine::ProBuilder::Vertex y, float_t weight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Vertex);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vertex, "UnityEngine.ProBuilder", "Vertex");
