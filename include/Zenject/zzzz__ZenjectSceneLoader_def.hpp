#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class ProjectKernel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
struct LoadSceneRelationship;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace Zenject {
class ZenjectSceneLoader;
}
// Type: Zenject::ZenjectSceneLoader
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11324))
// CS Name: Zenject.ZenjectSceneLoader
class CORDL_TYPE ZenjectSceneLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ZenjectSceneLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSceneLoader", modifiers: " const&", def_value: None }]
constexpr ZenjectSceneLoader(ZenjectSceneLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSceneLoader", modifiers: "&&", def_value: None }]
constexpr ZenjectSceneLoader(ZenjectSceneLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectSceneLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZenjectSceneLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectSceneLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectSceneLoader& operator=(ZenjectSceneLoader&& o) noexcept = default;
  constexpr ZenjectSceneLoader& operator=(ZenjectSceneLoader const& o) noexcept = default;
                


// Fields

 Zenject::ProjectKernel __declspec(property(get=__get__projectKernel, put=__set__projectKernel))  _projectKernel;

constexpr void __set__projectKernel(Zenject::ProjectKernel value) ;

constexpr Zenject::ProjectKernel __get__projectKernel() const;

 Zenject::DiContainer __declspec(property(get=__get__sceneContainer, put=__set__sceneContainer))  _sceneContainer;

constexpr void __set__sceneContainer(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__sceneContainer() const;


// Methods

// Ctor Parameters [CppParam { name: "sceneRoot", ty: "Zenject::SceneContext", modifiers: "", def_value: None }, CppParam { name: "projectKernel", ty: "Zenject::ProjectKernel", modifiers: "", def_value: None }]
explicit ZenjectSceneLoader(Zenject::SceneContext sceneRoot, Zenject::ProjectKernel projectKernel) ;

/// @brief Method .ctor addr 0x2dd8f04 size 0xa8 virtual false final false
 void _ctor(Zenject::SceneContext sceneRoot, Zenject::ProjectKernel projectKernel) ;

/// @brief Method LoadScene addr 0x2dd8fac size 0x14 virtual false final false
 void LoadScene(::StringW sceneName) ;

/// @brief Method LoadScene addr 0x2dd8fc0 size 0x10 virtual false final false
 void LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode) ;

/// @brief Method LoadScene addr 0x2dd8fd0 size 0xc virtual false final false
 void LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings) ;

/// @brief Method LoadScene addr 0x2dd8fdc size 0x8 virtual false final false
 void LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode) ;

/// @brief Method LoadScene addr 0x2dd8fe4 size 0xd8 virtual false final false
 void LoadScene(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer> extraBindingsLate) ;

/// @brief Method LoadSceneAsync addr 0x2dd92a8 size 0x18 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName) ;

/// @brief Method LoadSceneAsync addr 0x2dd92c0 size 0x14 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode) ;

/// @brief Method LoadSceneAsync addr 0x2dd92d4 size 0x14 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings) ;

/// @brief Method LoadSceneAsync addr 0x2dd92e8 size 0x14 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode) ;

/// @brief Method LoadSceneAsync addr 0x2dd92fc size 0xe4 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(::StringW sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindingsEarly, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer> extraBindingsLate) ;

/// @brief Method PrepareForLoadScene addr 0x2dd90bc size 0x1ec virtual false final false
 void PrepareForLoadScene(UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindingsEarly, System::Action_1<Zenject::DiContainer> extraBindings, System::Action_1<Zenject::DiContainer> extraBindingsLate, Zenject::LoadSceneRelationship containerMode) ;

/// @brief Method LoadScene addr 0x2dd93e0 size 0x14 virtual false final false
 void LoadScene(int32_t sceneIndex) ;

/// @brief Method LoadScene addr 0x2dd93f4 size 0x10 virtual false final false
 void LoadScene(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode) ;

/// @brief Method LoadScene addr 0x2dd9404 size 0xc virtual false final false
 void LoadScene(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings) ;

/// @brief Method LoadScene addr 0x2dd9410 size 0x8 virtual false final false
 void LoadScene(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode) ;

/// @brief Method LoadScene addr 0x2dd9418 size 0x10c virtual false final false
 void LoadScene(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer> extraBindingsLate) ;

/// @brief Method LoadSceneAsync addr 0x2dd9524 size 0x14 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneIndex) ;

/// @brief Method LoadSceneAsync addr 0x2dd9538 size 0x10 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode) ;

/// @brief Method LoadSceneAsync addr 0x2dd9548 size 0xc virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings) ;

/// @brief Method LoadSceneAsync addr 0x2dd9554 size 0x8 virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode) ;

/// @brief Method LoadSceneAsync addr 0x2dd955c size 0x10c virtual false final false
 UnityEngine::AsyncOperation LoadSceneAsync(int32_t sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer> extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer> extraBindingsLate) ;

/// @brief Method __zenCreate addr 0x2dd9668 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd9784 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenjectSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSceneLoader, "Zenject", "ZenjectSceneLoader");
