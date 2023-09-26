#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
// Type: UnityEngine.EventSystems::IDeselectHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13143))
// CS Name: UnityEngine.EventSystems.IDeselectHandler
class CORDL_TYPE IDeselectHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IDeselectHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDeselectHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDeselect addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IDeselectHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IDeselectHandler, "UnityEngine.EventSystems", "IDeselectHandler");
