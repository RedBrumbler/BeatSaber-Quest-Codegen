#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureDispatchingStrategy;
}
// Type: UnityEngine.UIElements::PointerCaptureDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7279))
// CS Name: UnityEngine.UIElements.PointerCaptureDispatchingStrategy
class CORDL_TYPE PointerCaptureDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerCaptureDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr PointerCaptureDispatchingStrategy(PointerCaptureDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr PointerCaptureDispatchingStrategy(PointerCaptureDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCaptureDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerCaptureDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCaptureDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCaptureDispatchingStrategy& operator=(PointerCaptureDispatchingStrategy&& o) noexcept = default;
  constexpr PointerCaptureDispatchingStrategy& operator=(PointerCaptureDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2d054f0 size 0x54 virtual true final true
 bool CanDispatchEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2d05544 size 0x5d0 virtual true final true
 void DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit PointerCaptureDispatchingStrategy() ;

/// @brief Method .ctor addr 0x2d05ba0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerCaptureDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerCaptureDispatchingStrategy, "UnityEngine.UIElements", "PointerCaptureDispatchingStrategy");
