#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class SaberModelController;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelContainer;
}
// Type: ::SaberModelContainer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5391))
// CS Name: SaberModelContainer
class CORDL_TYPE SaberModelContainer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SaberModelContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: " const&", def_value: None }]
constexpr SaberModelContainer(SaberModelContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "&&", def_value: None }]
constexpr SaberModelContainer(SaberModelContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberModelContainer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberModelContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberModelContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberModelContainer& operator=(SaberModelContainer&& o) noexcept = default;
  constexpr SaberModelContainer& operator=(SaberModelContainer const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Saber __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__saber() const;

 GlobalNamespace::SaberModelController __declspec(property(get=__get__saberModelControllerPrefab, put=__set__saberModelControllerPrefab))  _saberModelControllerPrefab;

constexpr void __set__saberModelControllerPrefab(GlobalNamespace::SaberModelController value) ;

constexpr GlobalNamespace::SaberModelController __get__saberModelControllerPrefab() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Methods

/// @brief Method Start addr 0x2144ca8 size 0x84 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit SaberModelContainer() ;

/// @brief Method .ctor addr 0x214501c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberModelContainer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelContainer, "", "SaberModelContainer");
