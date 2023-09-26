#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
// Type: ::SetSaberFakeGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5400))
// CS Name: SetSaberFakeGlowColor
class CORDL_TYPE SetSaberFakeGlowColor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SetSaberFakeGlowColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: " const&", def_value: None }]
constexpr SetSaberFakeGlowColor(SetSaberFakeGlowColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: "&&", def_value: None }]
constexpr SetSaberFakeGlowColor(SetSaberFakeGlowColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetSaberFakeGlowColor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetSaberFakeGlowColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetSaberFakeGlowColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetSaberFakeGlowColor& operator=(SetSaberFakeGlowColor&& o) noexcept = default;
  constexpr SetSaberFakeGlowColor& operator=(SetSaberFakeGlowColor const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__tintColor, put=__set__tintColor))  _tintColor;

constexpr void __set__tintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__tintColor() const;

 GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saberTypeObject, put=__set__saberTypeObject))  _saberTypeObject;

constexpr void __set__saberTypeObject(GlobalNamespace::SaberTypeObject value) ;

constexpr GlobalNamespace::SaberTypeObject __get__saberTypeObject() const;

 GlobalNamespace::Parametric3SliceSpriteController __declspec(property(get=__get__parametric3SliceSprite, put=__set__parametric3SliceSprite))  _parametric3SliceSprite;

constexpr void __set__parametric3SliceSprite(GlobalNamespace::Parametric3SliceSpriteController value) ;

constexpr GlobalNamespace::Parametric3SliceSpriteController __get__parametric3SliceSprite() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get__saberType() const;


// Properties

 GlobalNamespace::SaberType __declspec(property(put=set_saberType))  saberType;


// Methods

/// @brief Method set_saberType addr 0x2145030 size 0xc virtual false final false
 void set_saberType(GlobalNamespace::SaberType value) ;

/// @brief Method Start addr 0x214556c size 0x80 virtual false final false
 void Start() ;

/// @brief Method SetColors addr 0x2145510 size 0x5c virtual false final false
 void SetColors() ;

// Ctor Parameters []
explicit SetSaberFakeGlowColor() ;

/// @brief Method .ctor addr 0x21455ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SetSaberFakeGlowColor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberFakeGlowColor, "", "SetSaberFakeGlowColor");
