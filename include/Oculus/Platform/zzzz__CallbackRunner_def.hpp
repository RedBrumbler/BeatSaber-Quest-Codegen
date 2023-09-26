#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace Oculus::Platform {
class CallbackRunner;
}
// Type: Oculus.Platform::CallbackRunner
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13188))
// CS Name: Oculus.Platform.CallbackRunner
class CORDL_TYPE CallbackRunner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CallbackRunner() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackRunner", modifiers: " const&", def_value: None }]
constexpr CallbackRunner(CallbackRunner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackRunner", modifiers: "&&", def_value: None }]
constexpr CallbackRunner(CallbackRunner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallbackRunner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CallbackRunner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallbackRunner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallbackRunner& operator=(CallbackRunner&& o) noexcept = default;
  constexpr CallbackRunner& operator=(CallbackRunner const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_IsPersistantBetweenSceneLoads, put=__set_IsPersistantBetweenSceneLoads))  IsPersistantBetweenSceneLoads;

constexpr void __set_IsPersistantBetweenSceneLoads(bool value) ;

constexpr bool __get_IsPersistantBetweenSceneLoads() const;


// Methods

/// @brief Method ovr_UnityResetTestPlatform addr 0x2584488 size 0x64 virtual false final false
static void ovr_UnityResetTestPlatform() ;

/// @brief Method Awake addr 0x25844ec size 0x100 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x25845ec size 0xc virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x25845f8 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method OnApplicationQuit addr 0x25845fc size 0x4c virtual false final false
 void OnApplicationQuit() ;

// Ctor Parameters []
explicit CallbackRunner() ;

/// @brief Method .ctor addr 0x2584648 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::CallbackRunner);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CallbackRunner, "Oculus.Platform", "CallbackRunner");
