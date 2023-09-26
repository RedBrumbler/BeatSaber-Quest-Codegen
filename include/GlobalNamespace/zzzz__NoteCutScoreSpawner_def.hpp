#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
// Type: ::NoteCutScoreSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5011))
// CS Name: NoteCutScoreSpawner
class CORDL_TYPE NoteCutScoreSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NoteCutScoreSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: " const&", def_value: None }]
constexpr NoteCutScoreSpawner(NoteCutScoreSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: "&&", def_value: None }]
constexpr NoteCutScoreSpawner(NoteCutScoreSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutScoreSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutScoreSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutScoreSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutScoreSpawner& operator=(NoteCutScoreSpawner&& o) noexcept = default;
  constexpr NoteCutScoreSpawner& operator=(NoteCutScoreSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FlyingScoreSpawner __declspec(property(get=__get__flyingScoreSpawner, put=__set__flyingScoreSpawner))  _flyingScoreSpawner;

constexpr void __set__flyingScoreSpawner(GlobalNamespace::FlyingScoreSpawner value) ;

constexpr GlobalNamespace::FlyingScoreSpawner __get__flyingScoreSpawner() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;


// Methods

/// @brief Method Start addr 0x2294294 size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2294384 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleScoringForNoteStarted addr 0x229448c size 0xac virtual false final false
 void HandleScoringForNoteStarted(GlobalNamespace::ScoringElement scoringElement) ;

// Ctor Parameters []
explicit NoteCutScoreSpawner() ;

/// @brief Method .ctor addr 0x2294538 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteCutScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutScoreSpawner, "", "NoteCutScoreSpawner");
