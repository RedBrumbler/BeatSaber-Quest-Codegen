#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
// Type: ::ObstacleSaberSparkleEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5062))
// CS Name: ObstacleSaberSparkleEffect
class CORDL_TYPE ObstacleSaberSparkleEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ObstacleSaberSparkleEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: " const&", def_value: None }]
constexpr ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffect", modifiers: "&&", def_value: None }]
constexpr ObstacleSaberSparkleEffect(ObstacleSaberSparkleEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleSaberSparkleEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleSaberSparkleEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleSaberSparkleEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleSaberSparkleEffect& operator=(ObstacleSaberSparkleEffect&& o) noexcept = default;
  constexpr ObstacleSaberSparkleEffect& operator=(ObstacleSaberSparkleEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__sparkleParticleSystem, put=__set__sparkleParticleSystem))  _sparkleParticleSystem;

constexpr void __set__sparkleParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__sparkleParticleSystem() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__burnParticleSystem, put=__set__burnParticleSystem))  _burnParticleSystem;

constexpr void __set__burnParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__burnParticleSystem() const;

 UnityEngine::UnityEngine__ParticleSystem__EmissionModule __declspec(property(get=__get__sparkleParticleSystemEmissionModule, put=__set__sparkleParticleSystemEmissionModule))  _sparkleParticleSystemEmissionModule;

constexpr void __set__sparkleParticleSystemEmissionModule(UnityEngine::UnityEngine__ParticleSystem__EmissionModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmissionModule __get__sparkleParticleSystemEmissionModule() const;

 UnityEngine::UnityEngine__ParticleSystem__EmissionModule __declspec(property(get=__get__burnParticleSystemEmissionModule, put=__set__burnParticleSystemEmissionModule))  _burnParticleSystemEmissionModule;

constexpr void __set__burnParticleSystemEmissionModule(UnityEngine::UnityEngine__ParticleSystem__EmissionModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmissionModule __get__burnParticleSystemEmissionModule() const;


// Properties

 UnityEngine::Color __declspec(property(put=set_color))  color;


// Methods

/// @brief Method set_color addr 0x229e804 size 0xfc virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method Awake addr 0x229e900 size 0x5c virtual false final false
 void Awake() ;

/// @brief Method SetPositionAndRotation addr 0x229e95c size 0x78 virtual false final false
 void SetPositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

/// @brief Method StartEmission addr 0x229e9d4 size 0x54 virtual false final false
 void StartEmission() ;

/// @brief Method StopEmission addr 0x229ea28 size 0x68 virtual false final false
 void StopEmission() ;

// Ctor Parameters []
explicit ObstacleSaberSparkleEffect() ;

/// @brief Method .ctor addr 0x229ea90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleSaberSparkleEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffect, "", "ObstacleSaberSparkleEffect");
