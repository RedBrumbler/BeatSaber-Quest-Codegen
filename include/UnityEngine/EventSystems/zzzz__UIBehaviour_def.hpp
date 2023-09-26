#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace UnityEngine::EventSystems {
class UIBehaviour;
}
// Type: UnityEngine.EventSystems::UIBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13172))
// CS Name: UnityEngine.EventSystems.UIBehaviour
class CORDL_TYPE UIBehaviour : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UIBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: " const&", def_value: None }]
constexpr UIBehaviour(UIBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: "&&", def_value: None }]
constexpr UIBehaviour(UIBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIBehaviour(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIBehaviour& operator=(UIBehaviour&& o) noexcept = default;
  constexpr UIBehaviour& operator=(UIBehaviour const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x2c5a524 size 0x4 virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2c4b900 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method Start addr 0x2c50cb8 size 0x4 virtual true final false
 void Start() ;

/// @brief Method OnDisable addr 0x2c4b908 size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2c50d60 size 0x4 virtual true final false
 void OnDestroy() ;

/// @brief Method IsActive addr 0x2c5a528 size 0x8 virtual true final false
 bool IsActive() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2c5a530 size 0x4 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method OnBeforeTransformParentChanged addr 0x2c5a534 size 0x4 virtual true final false
 void OnBeforeTransformParentChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2c59400 size 0x4 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c5a538 size 0x4 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method OnCanvasGroupChanged addr 0x2c5a53c size 0x4 virtual true final false
 void OnCanvasGroupChanged() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2c593f4 size 0x4 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method IsDestroyed addr 0x2c5a540 size 0x5c virtual true final true
 bool IsDestroyed() ;

// Ctor Parameters []
explicit UIBehaviour() ;

/// @brief Method .ctor addr 0x2c4da24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::UIBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UIBehaviour, "UnityEngine.EventSystems", "UIBehaviour");
