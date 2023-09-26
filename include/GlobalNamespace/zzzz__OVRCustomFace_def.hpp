#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRFaceExpressions__FaceExpression;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCustomFace;
}
// Type: ::OVRCustomFace
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8922))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8907))
// CS Name: OVRCustomFace
class CORDL_TYPE OVRCustomFace : public GlobalNamespace::OVRFace {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRCustomFace() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: " const&", def_value: None }]
constexpr OVRCustomFace(OVRCustomFace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "&&", def_value: None }]
constexpr OVRCustomFace(OVRCustomFace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCustomFace(void* ptr) noexcept : GlobalNamespace::OVRFace(ptr) {
}


  constexpr OVRCustomFace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCustomFace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCustomFace& operator=(OVRCustomFace&& o) noexcept = default;
  constexpr OVRCustomFace& operator=(OVRCustomFace const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> __declspec(property(get=__get__mappings, put=__set__mappings))  _mappings;

constexpr void __set__mappings(::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> __get__mappings() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> __declspec(property(get=get_Mappings, put=set_Mappings))  Mappings;


// Methods

/// @brief Method get_Mappings addr 0x264fa6c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> get_Mappings() ;

/// @brief Method set_Mappings addr 0x264fa74 size 0x8 virtual false final false
 void set_Mappings(::ArrayW<GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression> value) ;

/// @brief Method Start addr 0x264fa7c size 0x4 virtual true final false
 void Start() ;

/// @brief Method GetFaceExpression addr 0x264fad0 size 0x30 virtual true final false
 GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex) ;

// Ctor Parameters []
explicit OVRCustomFace() ;

/// @brief Method .ctor addr 0x264fb00 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRCustomFace);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCustomFace, "", "OVRCustomFace");
