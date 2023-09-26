#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
class FloatMath;
}
// Type: UnityEngine.ProBuilder.KdTree.Math::FloatMath
namespace UnityEngine::ProBuilder::KdTree::Math {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15832), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(15832))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15831))
// CS Name: UnityEngine.ProBuilder.KdTree.Math.FloatMath
class CORDL_TYPE FloatMath : public UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FloatMath() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatMath", modifiers: " const&", def_value: None }]
constexpr FloatMath(FloatMath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatMath", modifiers: "&&", def_value: None }]
constexpr FloatMath(FloatMath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatMath(void* ptr) noexcept : UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float_t>(ptr) {
}


  constexpr FloatMath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatMath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatMath& operator=(FloatMath&& o) noexcept = default;
  constexpr FloatMath& operator=(FloatMath const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_MinValue))  MinValue;

 float_t __declspec(property(get=get_MaxValue))  MaxValue;

 float_t __declspec(property(get=get_Zero))  Zero;

 float_t __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 float_t __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x29c8e88 size 0x20 virtual true final false
 int32_t Compare(float_t a, float_t b) ;

/// @brief Method AreEqual addr 0x29c8ea8 size 0xc virtual true final false
 bool AreEqual(float_t a, float_t b) ;

/// @brief Method get_MinValue addr 0x29c8eb4 size 0xc virtual true final false
 float_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x29c8ec0 size 0xc virtual true final false
 float_t get_MaxValue() ;

/// @brief Method get_Zero addr 0x29c8ecc size 0x8 virtual true final false
 float_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x29c8ed4 size 0xc virtual true final false
 float_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x29c8ee0 size 0xc virtual true final false
 float_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x29c8eec size 0x8 virtual true final false
 float_t Add(float_t a, float_t b) ;

/// @brief Method Subtract addr 0x29c8ef4 size 0x8 virtual true final false
 float_t Subtract(float_t a, float_t b) ;

/// @brief Method Multiply addr 0x29c8efc size 0x8 virtual true final false
 float_t Multiply(float_t a, float_t b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x29c8f04 size 0x100 virtual true final false
 float_t DistanceSquaredBetweenPoints(::ArrayW<float_t> a, ::ArrayW<float_t> b) ;

// Ctor Parameters []
explicit FloatMath() ;

/// @brief Method .ctor addr 0x29c9004 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
NEED_NO_BOX(UnityEngine::ProBuilder::KdTree::Math::FloatMath);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::KdTree::Math::FloatMath, "UnityEngine.ProBuilder.KdTree.Math", "FloatMath");
