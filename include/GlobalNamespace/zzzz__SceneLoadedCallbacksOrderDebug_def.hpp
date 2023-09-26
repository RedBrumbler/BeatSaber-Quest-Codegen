#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneLoadedCallbacksOrderDebug;
}
// Type: ::SceneLoadedCallbacksOrderDebug
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13844))
// CS Name: SceneLoadedCallbacksOrderDebug
class CORDL_TYPE SceneLoadedCallbacksOrderDebug : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SceneLoadedCallbacksOrderDebug() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: " const&", def_value: None }]
constexpr SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: "&&", def_value: None }]
constexpr SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneLoadedCallbacksOrderDebug(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SceneLoadedCallbacksOrderDebug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneLoadedCallbacksOrderDebug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneLoadedCallbacksOrderDebug& operator=(SceneLoadedCallbacksOrderDebug&& o) noexcept = default;
  constexpr SceneLoadedCallbacksOrderDebug& operator=(SceneLoadedCallbacksOrderDebug const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x1fb5960 size 0x68 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1fb59c8 size 0xe8 virtual false final false
 void OnEnable() ;

/// @brief Method OnSceneLoaded addr 0x1fb5ab0 size 0xd0 virtual false final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method Start addr 0x1fb5b80 size 0x68 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x1fb5be8 size 0xe8 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit SceneLoadedCallbacksOrderDebug() ;

/// @brief Method .ctor addr 0x1fb5cd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneLoadedCallbacksOrderDebug);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneLoadedCallbacksOrderDebug, "", "SceneLoadedCallbacksOrderDebug");
