#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateOnVisible;
}
// Type: ::ActivateOnVisible
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13783))
// CS Name: ActivateOnVisible
class CORDL_TYPE ActivateOnVisible : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ActivateOnVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnVisible", modifiers: " const&", def_value: None }]
constexpr ActivateOnVisible(ActivateOnVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnVisible", modifiers: "&&", def_value: None }]
constexpr ActivateOnVisible(ActivateOnVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivateOnVisible(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ActivateOnVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivateOnVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivateOnVisible& operator=(ActivateOnVisible&& o) noexcept = default;
  constexpr ActivateOnVisible& operator=(ActivateOnVisible const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__gameObjects, put=__set__gameObjects))  _gameObjects;

constexpr void __set__gameObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__gameObjects() const;


// Methods

/// @brief Method Awake addr 0x1fafff8 size 0x64 virtual false final false
 void Awake() ;

/// @brief Method OnBecameVisible addr 0x1fb005c size 0x64 virtual false final false
 void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x1fb00c0 size 0x64 virtual false final false
 void OnBecameInvisible() ;

// Ctor Parameters []
explicit ActivateOnVisible() ;

/// @brief Method .ctor addr 0x1fb0124 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ActivateOnVisible);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ActivateOnVisible, "", "ActivateOnVisible");
