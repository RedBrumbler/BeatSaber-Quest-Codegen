#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyFirstPersonFlyingControllerHandler;
}
// Type: ::SonyFirstPersonFlyingControllerHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5933))
// CS Name: SonyFirstPersonFlyingControllerHandler
class CORDL_TYPE SonyFirstPersonFlyingControllerHandler : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SonyFirstPersonFlyingControllerHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: " const&", def_value: None }]
constexpr SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: "&&", def_value: None }]
constexpr SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyFirstPersonFlyingControllerHandler(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SonyFirstPersonFlyingControllerHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyFirstPersonFlyingControllerHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyFirstPersonFlyingControllerHandler& operator=(SonyFirstPersonFlyingControllerHandler&& o) noexcept = default;
  constexpr SonyFirstPersonFlyingControllerHandler& operator=(SonyFirstPersonFlyingControllerHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FirstPersonFlyingController __declspec(property(get=__get__fpsFlying, put=__set__fpsFlying))  _fpsFlying;

constexpr void __set__fpsFlying(GlobalNamespace::FirstPersonFlyingController value) ;

constexpr GlobalNamespace::FirstPersonFlyingController __get__fpsFlying() const;


// Methods

// Ctor Parameters []
explicit SonyFirstPersonFlyingControllerHandler() ;

/// @brief Method .ctor addr 0x21ca9cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SonyFirstPersonFlyingControllerHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyFirstPersonFlyingControllerHandler, "", "SonyFirstPersonFlyingControllerHandler");
