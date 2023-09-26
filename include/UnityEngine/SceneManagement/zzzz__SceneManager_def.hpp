#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManager;
}
// Type: UnityEngine.SceneManagement::SceneManager
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10334))
// CS Name: UnityEngine.SceneManagement.SceneManager
class CORDL_TYPE SceneManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: " const&", def_value: None }]
constexpr SceneManager(SceneManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None }]
constexpr SceneManager(SceneManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneManager& operator=(SceneManager&& o) noexcept = default;
  constexpr SceneManager& operator=(SceneManager const& o) noexcept = default;
                


// Fields

static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::LoadSceneMode> __declspec(property(get=__get_sceneLoaded, put=__set_sceneLoaded))  sceneLoaded;

static void __set_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::LoadSceneMode> value) ;

static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::LoadSceneMode> __get_sceneLoaded() ;

static UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene> __declspec(property(get=__get_sceneUnloaded, put=__set_sceneUnloaded))  sceneUnloaded;

static void __set_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene> value) ;

static UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene> __get_sceneUnloaded() ;

static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::Scene> __declspec(property(get=__get_activeSceneChanged, put=__set_activeSceneChanged))  activeSceneChanged;

static void __set_activeSceneChanged(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::Scene> value) ;

static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::Scene> __get_activeSceneChanged() ;

static bool __declspec(property(get=__get_s_AllowLoadScene, put=__set_s_AllowLoadScene))  s_AllowLoadScene;

static void __set_s_AllowLoadScene(bool value) ;

static bool __get_s_AllowLoadScene() ;


// Properties

static int32_t __declspec(property(get=get_sceneCount))  sceneCount;

static int32_t __declspec(property(get=get_sceneCountInBuildSettings))  sceneCountInBuildSettings;


// Methods

/// @brief Method add_sceneLoaded addr 0x2ba81e8 size 0xf0 virtual false final false
static void add_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::LoadSceneMode> value) ;

/// @brief Method remove_sceneLoaded addr 0x2ba82d8 size 0xf0 virtual false final false
static void remove_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::LoadSceneMode> value) ;

/// @brief Method add_sceneUnloaded addr 0x2ba83c8 size 0xf4 virtual false final false
static void add_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene> value) ;

/// @brief Method remove_sceneUnloaded addr 0x2ba84bc size 0xf4 virtual false final false
static void remove_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene> value) ;

/// @brief Method LoadScene addr 0x2ba85b0 size 0x68 virtual false final false
static void LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method LoadScene addr 0x2ba86b8 size 0x58 virtual false final false
static void LoadScene(::StringW sceneName) ;

/// @brief Method LoadScene addr 0x2ba8618 size 0xa0 virtual false final false
static UnityEngine::SceneManagement::Scene LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters) ;

/// @brief Method LoadScene addr 0x2ba88a0 size 0x68 virtual false final false
static void LoadScene(int32_t sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method LoadScene addr 0x2ba8908 size 0xa0 virtual false final false
static UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters) ;

/// @brief Method LoadSceneAsync addr 0x2ba89a8 size 0x68 virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method LoadSceneAsync addr 0x2ba8a10 size 0x6c virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters) ;

/// @brief Method LoadSceneAsync addr 0x2ba8a7c size 0x68 virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method LoadSceneAsync addr 0x2ba8b50 size 0x58 virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName) ;

/// @brief Method LoadSceneAsync addr 0x2ba8ae4 size 0x6c virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters) ;

/// @brief Method UnloadSceneAsync addr 0x2ba8ba8 size 0x74 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneAsync(::StringW sceneName) ;

/// @brief Method UnloadSceneAsync addr 0x2ba8d04 size 0x58 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneAsync(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method UnloadSceneAsync addr 0x2ba8de4 size 0x64 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneAsync(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::UnloadSceneOptions options) ;

/// @brief Method Internal_SceneLoaded addr 0x2ba8e48 size 0xb0 virtual false final false
static void Internal_SceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method Internal_SceneUnloaded addr 0x2ba8ef8 size 0x9c virtual false final false
static void Internal_SceneUnloaded(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method Internal_ActiveSceneChanged addr 0x2ba8f94 size 0xb0 virtual false final false
static void Internal_ActiveSceneChanged(UnityEngine::SceneManagement::Scene previousActiveScene, UnityEngine::SceneManagement::Scene newActiveScene) ;

/// @brief Method get_sceneCount addr 0x2ba87ec size 0x28 virtual false final false
static int32_t get_sceneCount() ;

/// @brief Method get_sceneCountInBuildSettings addr 0x2b9987c size 0x60 virtual false final false
static int32_t get_sceneCountInBuildSettings() ;

/// @brief Method GetActiveScene addr 0x2ba90ec size 0x7c virtual false final false
static UnityEngine::SceneManagement::Scene GetActiveScene() ;

/// @brief Method SetActiveScene addr 0x2ba91a4 size 0x7c virtual false final false
static bool SetActiveScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method GetSceneByName addr 0x2ba925c size 0x8c virtual false final false
static UnityEngine::SceneManagement::Scene GetSceneByName(::StringW name) ;

/// @brief Method GetSceneAt addr 0x2ba8814 size 0x8c virtual false final false
static UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index) ;

/// @brief Method UnloadSceneAsyncInternal addr 0x2ba8d5c size 0x88 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneAsyncInternal(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::UnloadSceneOptions options) ;

/// @brief Method LoadSceneAsyncNameIndexInternal addr 0x2ba8710 size 0xdc virtual false final false
static UnityEngine::AsyncOperation LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame) ;

/// @brief Method UnloadSceneNameIndexInternal addr 0x2ba8c1c size 0xe8 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine::SceneManagement::UnloadSceneOptions options, ByRef<bool> outSuccess) ;

/// @brief Method MoveGameObjectToScene addr 0x2ba93b4 size 0x88 virtual false final false
static void MoveGameObjectToScene(UnityEngine::GameObject go, UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method LoadFirstScene_Internal addr 0x2ba9480 size 0x68 virtual false final false
static UnityEngine::AsyncOperation LoadFirstScene_Internal(bool async) ;

/// @brief Method GetActiveScene_Injected addr 0x2ba9168 size 0x3c virtual false final false
static void GetActiveScene_Injected(ByRef<UnityEngine::SceneManagement::Scene> ret) ;

/// @brief Method SetActiveScene_Injected addr 0x2ba9220 size 0x3c virtual false final false
static bool SetActiveScene_Injected(ByRef<UnityEngine::SceneManagement::Scene> scene) ;

/// @brief Method GetSceneByName_Injected addr 0x2ba92e8 size 0x44 virtual false final false
static void GetSceneByName_Injected(::StringW name, ByRef<UnityEngine::SceneManagement::Scene> ret) ;

/// @brief Method GetSceneAt_Injected addr 0x2ba932c size 0x44 virtual false final false
static void GetSceneAt_Injected(int32_t index, ByRef<UnityEngine::SceneManagement::Scene> ret) ;

/// @brief Method UnloadSceneAsyncInternal_Injected addr 0x2ba9370 size 0x44 virtual false final false
static UnityEngine::AsyncOperation UnloadSceneAsyncInternal_Injected(ByRef<UnityEngine::SceneManagement::Scene> scene, UnityEngine::SceneManagement::UnloadSceneOptions options) ;

/// @brief Method MoveGameObjectToScene_Injected addr 0x2ba943c size 0x44 virtual false final false
static void MoveGameObjectToScene_Injected(UnityEngine::GameObject go, ByRef<UnityEngine::SceneManagement::Scene> scene) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
NEED_NO_BOX(UnityEngine::SceneManagement::SceneManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::SceneManager, "UnityEngine.SceneManagement", "SceneManager");
