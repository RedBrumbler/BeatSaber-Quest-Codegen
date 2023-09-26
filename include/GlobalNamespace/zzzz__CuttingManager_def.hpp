#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class NoteCutter;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttingManager;
}
// Type: ::CuttingManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5381))
// CS Name: CuttingManager
class CORDL_TYPE CuttingManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CuttingManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: " const&", def_value: None }]
constexpr CuttingManager(CuttingManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "&&", def_value: None }]
constexpr CuttingManager(CuttingManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CuttingManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CuttingManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CuttingManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CuttingManager& operator=(CuttingManager&& o) noexcept = default;
  constexpr CuttingManager& operator=(CuttingManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 GlobalNamespace::NoteCutter __declspec(property(get=__get__noteCutter, put=__set__noteCutter))  _noteCutter;

constexpr void __set__noteCutter(GlobalNamespace::NoteCutter value) ;

constexpr GlobalNamespace::NoteCutter __get__noteCutter() const;


// Methods

/// @brief Method OnEnable addr 0x2143328 size 0x88 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2143460 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method HandleSaberManagerDidUpdateSaberPositions addr 0x2143598 size 0x44 virtual false final false
 void HandleSaberManagerDidUpdateSaberPositions(GlobalNamespace::Saber leftSaber, GlobalNamespace::Saber rightSaber) ;

// Ctor Parameters []
explicit CuttingManager() ;

/// @brief Method .ctor addr 0x2143b00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CuttingManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CuttingManager, "", "CuttingManager");
