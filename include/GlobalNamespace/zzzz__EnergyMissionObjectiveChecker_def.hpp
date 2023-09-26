#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class GameEnergyCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class EnergyMissionObjectiveChecker;
}
// Type: ::EnergyMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5197))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5192))
// CS Name: EnergyMissionObjectiveChecker
class CORDL_TYPE EnergyMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EnergyMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnergyMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr EnergyMissionObjectiveChecker(EnergyMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnergyMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr EnergyMissionObjectiveChecker(EnergyMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnergyMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::MissionObjectiveChecker(ptr) {
}


  constexpr EnergyMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnergyMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnergyMissionObjectiveChecker& operator=(EnergyMissionObjectiveChecker&& o) noexcept = default;
  constexpr EnergyMissionObjectiveChecker& operator=(EnergyMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__energyCounter, put=__set__energyCounter))  _energyCounter;

constexpr void __set__energyCounter(GlobalNamespace::GameEnergyCounter value) ;

constexpr GlobalNamespace::GameEnergyCounter __get__energyCounter() const;


// Methods

/// @brief Method OnDestroy addr 0x210d96c size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleEnergyDidChange addr 0x210da3c size 0x6c virtual false final false
 void HandleEnergyDidChange(float_t energy) ;

/// @brief Method Init addr 0x210db6c size 0x138 virtual true final false
 void Init() ;

/// @brief Method CheckAndUpdateStatus addr 0x210daa8 size 0xc4 virtual false final false
 void CheckAndUpdateStatus() ;

// Ctor Parameters []
explicit EnergyMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x210dca4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnergyMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnergyMissionObjectiveChecker, "", "EnergyMissionObjectiveChecker");
