#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEventController__Pool;
}
namespace GlobalNamespace {
class ParticleSystemEventController;
}
// Type: ::ParticleSystemEventController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5070))
// CS Name: ParticleSystemEventController
class CORDL_TYPE ParticleSystemEventController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ParticleSystemEventController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: " const&", def_value: None }]
constexpr ParticleSystemEventController(ParticleSystemEventController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: "&&", def_value: None }]
constexpr ParticleSystemEventController(ParticleSystemEventController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemEventController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParticleSystemEventController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemEventController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemEventController& operator=(ParticleSystemEventController&& o) noexcept = default;
  constexpr ParticleSystemEventController& operator=(ParticleSystemEventController const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 float_t __declspec(property(get=__get__particleSystemFullDuration, put=__set__particleSystemFullDuration))  _particleSystemFullDuration;

constexpr void __set__particleSystemFullDuration(float_t value) ;

constexpr float_t __get__particleSystemFullDuration() const;

 float_t __declspec(property(get=__get__startTime_k__BackingField, put=__set__startTime_k__BackingField))  _startTime_k__BackingField;

constexpr void __set__startTime_k__BackingField(float_t value) ;

constexpr float_t __get__startTime_k__BackingField() const;

/// @brief Field kMaxSimDelta offset 0
static constexpr float_t  kMaxSimDelta{0.033333335};


// Properties

 float_t __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 float_t __declspec(property(get=get_endTime))  endTime;


// Methods

/// @brief Method get_startTime addr 0x22a00dc size 0x8 virtual false final false
 float_t get_startTime() ;

/// @brief Method set_startTime addr 0x22a00e4 size 0x8 virtual false final false
 void set_startTime(float_t value) ;

/// @brief Method get_endTime addr 0x229f8fc size 0xc virtual false final false
 float_t get_endTime() ;

/// @brief Method Init addr 0x229f560 size 0x30 virtual false final false
 void Init(float_t startTime) ;

/// @brief Method InitSpeed addr 0x229ffe0 size 0x4c virtual false final false
 void InitSpeed(float_t simulationSpeedMultiplier) ;

/// @brief Method Play addr 0x229ff08 size 0x1c virtual false final false
 void Play() ;

/// @brief Method Pause addr 0x229fd74 size 0x1c virtual false final false
 void Pause() ;

/// @brief Method Stop addr 0x229f274 size 0x1c virtual false final false
 void Stop() ;

/// @brief Method ManualUpdate addr 0x229f908 size 0x68 virtual false final false
 void ManualUpdate(float_t time, float_t deltaTime) ;

// Ctor Parameters []
explicit ParticleSystemEventController() ;

/// @brief Method .ctor addr 0x22a00ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11011)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11011), inst: 2725 }), TypeDefinitionIndex(TypeDefinitionIndex(5070))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5069))
// CS Name: ParticleSystemEventController::Pool
class CORDL_TYPE GlobalNamespace__ParticleSystemEventController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::ParticleSystemEventController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__ParticleSystemEventController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEventController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEventController__Pool(GlobalNamespace__ParticleSystemEventController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEventController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEventController__Pool(GlobalNamespace__ParticleSystemEventController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ParticleSystemEventController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::ParticleSystemEventController>(ptr) {
}


  constexpr GlobalNamespace__ParticleSystemEventController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEventController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEventController__Pool& operator=(GlobalNamespace__ParticleSystemEventController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__ParticleSystemEventController__Pool& operator=(GlobalNamespace__ParticleSystemEventController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__ParticleSystemEventController__Pool() ;

/// @brief Method .ctor addr 0x22a00f4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool, "", "ParticleSystemEventController/Pool");
NEED_NO_BOX(GlobalNamespace::ParticleSystemEventController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEventController, "", "ParticleSystemEventController");
