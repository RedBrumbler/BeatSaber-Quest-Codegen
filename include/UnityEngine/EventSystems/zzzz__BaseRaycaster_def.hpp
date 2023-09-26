#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
// Type: UnityEngine.EventSystems::BaseRaycaster
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13172))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13167))
// CS Name: UnityEngine.EventSystems.BaseRaycaster
class CORDL_TYPE BaseRaycaster : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: " const&", def_value: None }]
constexpr BaseRaycaster(BaseRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: "&&", def_value: None }]
constexpr BaseRaycaster(BaseRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseRaycaster(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr BaseRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseRaycaster& operator=(BaseRaycaster&& o) noexcept = default;
  constexpr BaseRaycaster& operator=(BaseRaycaster const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::BaseRaycaster __declspec(property(get=__get_m_RootRaycaster, put=__set_m_RootRaycaster))  m_RootRaycaster;

constexpr void __set_m_RootRaycaster(UnityEngine::EventSystems::BaseRaycaster value) ;

constexpr UnityEngine::EventSystems::BaseRaycaster __get_m_RootRaycaster() const;


// Properties

 UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;

 int32_t __declspec(property(get=get_priority))  priority;

 int32_t __declspec(property(get=get_sortOrderPriority))  sortOrderPriority;

 int32_t __declspec(property(get=get_renderOrderPriority))  renderOrderPriority;

 UnityEngine::EventSystems::BaseRaycaster __declspec(property(get=get_rootRaycaster))  rootRaycaster;


// Methods

/// @brief Method Raycast addr 0x0 size 0xffffffffffffffff virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method get_eventCamera addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Camera get_eventCamera() ;

/// @brief Method get_priority addr 0x2c59068 size 0x8 virtual true final false
 int32_t get_priority() ;

/// @brief Method get_sortOrderPriority addr 0x2c59070 size 0x8 virtual true final false
 int32_t get_sortOrderPriority() ;

/// @brief Method get_renderOrderPriority addr 0x2c59078 size 0x8 virtual true final false
 int32_t get_renderOrderPriority() ;

/// @brief Method get_rootRaycaster addr 0x2c50110 size 0xb8 virtual false final false
 UnityEngine::EventSystems::BaseRaycaster get_rootRaycaster() ;

/// @brief Method ToString addr 0x2c59080 size 0x2c4 virtual true final false
 ::StringW ToString() ;

/// @brief Method OnEnable addr 0x2c59344 size 0x54 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c59398 size 0x54 virtual true final false
 void OnDisable() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2c593ec size 0x8 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2c593f8 size 0x8 virtual true final false
 void OnTransformParentChanged() ;

// Ctor Parameters []
explicit BaseRaycaster() ;

/// @brief Method .ctor addr 0x2c4e34c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::BaseRaycaster);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseRaycaster, "UnityEngine.EventSystems", "BaseRaycaster");
