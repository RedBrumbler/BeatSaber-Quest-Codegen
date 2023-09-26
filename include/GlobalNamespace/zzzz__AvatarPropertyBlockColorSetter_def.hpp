#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPropertyBlockColorSetter;
}
// Type: ::AvatarPropertyBlockColorSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4079))
// CS Name: AvatarPropertyBlockColorSetter
class CORDL_TYPE AvatarPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~AvatarPropertyBlockColorSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: " const&", def_value: None }]
constexpr AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
constexpr AvatarPropertyBlockColorSetter(AvatarPropertyBlockColorSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPropertyBlockColorSetter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarPropertyBlockColorSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPropertyBlockColorSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPropertyBlockColorSetter& operator=(AvatarPropertyBlockColorSetter&& o) noexcept = default;
  constexpr AvatarPropertyBlockColorSetter& operator=(AvatarPropertyBlockColorSetter const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__defaultColor, put=__set__defaultColor))  _defaultColor;

constexpr void __set__defaultColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__defaultColor() const;

 float_t __declspec(property(get=__get__darkerColorMultiplier, put=__set__darkerColorMultiplier))  _darkerColorMultiplier;

constexpr void __set__darkerColorMultiplier(float_t value) ;

constexpr float_t __get__darkerColorMultiplier() const;

 float_t __declspec(property(get=__get__whiteBoost, put=__set__whiteBoost))  _whiteBoost;

constexpr void __set__whiteBoost(float_t value) ;

constexpr float_t __get__whiteBoost() const;

 bool __declspec(property(get=__get__editInPlayMode, put=__set__editInPlayMode))  _editInPlayMode;

constexpr void __set__editInPlayMode(bool value) ;

constexpr bool __get__editInPlayMode() const;

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

 UnityEngine::Color __declspec(property(get=__get__rimLightColor, put=__set__rimLightColor))  _rimLightColor;

constexpr void __set__rimLightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__rimLightColor() const;

 UnityEngine::Color __declspec(property(get=__get__mainColor, put=__set__mainColor))  _mainColor;

constexpr void __set__mainColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__mainColor() const;

 UnityEngine::Color __declspec(property(get=__get__boostColor, put=__set__boostColor))  _boostColor;

constexpr void __set__boostColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__boostColor() const;

 bool __declspec(property(get=__get__highlighted, put=__set__highlighted))  _highlighted;

constexpr void __set__highlighted(bool value) ;

constexpr bool __get__highlighted() const;


// Methods

/// @brief Method Awake addr 0x20f8014 size 0x10 virtual false final false
 void Awake() ;

/// @brief Method OnValidate addr 0x20f8024 size 0xa0 virtual false final false
 void OnValidate() ;

/// @brief Method SetColor addr 0x20f80c4 size 0x38 virtual false final false
 void SetColor(UnityEngine::Color color) ;

/// @brief Method SetColors addr 0x20f80fc size 0x14 virtual false final false
 void SetColors(UnityEngine::Color mainColor, UnityEngine::Color rimLightColor) ;

/// @brief Method SetHighlight addr 0x20f8280 size 0xc virtual false final false
 void SetHighlight(bool highlighted, int32_t uvSegment) ;

/// @brief Method UpdateRenderer addr 0x20f8110 size 0x170 virtual false final false
 void UpdateRenderer() ;

// Ctor Parameters []
explicit AvatarPropertyBlockColorSetter() ;

/// @brief Method .ctor addr 0x20f828c size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPropertyBlockColorSetter, "", "AvatarPropertyBlockColorSetter");
