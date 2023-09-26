#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureHelper;
}
// Type: UnityEngine.UIElements::PointerCaptureHelper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6877))
// CS Name: UnityEngine.UIElements.PointerCaptureHelper
class CORDL_TYPE PointerCaptureHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerCaptureHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureHelper", modifiers: " const&", def_value: None }]
constexpr PointerCaptureHelper(PointerCaptureHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureHelper", modifiers: "&&", def_value: None }]
constexpr PointerCaptureHelper(PointerCaptureHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCaptureHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerCaptureHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCaptureHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCaptureHelper& operator=(PointerCaptureHelper&& o) noexcept = default;
  constexpr PointerCaptureHelper& operator=(PointerCaptureHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetStateFor addr 0x2c70dc4 size 0x118 virtual false final false
static UnityEngine::UIElements::PointerDispatchState GetStateFor(UnityEngine::UIElements::IEventHandler handler) ;

/// @brief Method HasPointerCapture addr 0x2c70edc size 0x38 virtual false final false
static bool HasPointerCapture(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method CapturePointer addr 0x2c70f4c size 0x38 virtual false final false
static void CapturePointer(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method ReleasePointer addr 0x2c710c0 size 0x38 virtual false final false
static void ReleasePointer(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method GetCapturingElement addr 0x2c71134 size 0xc8 virtual false final false
static UnityEngine::UIElements::IEventHandler GetCapturingElement(UnityEngine::UIElements::IPanel panel, int32_t pointerId) ;

/// @brief Method ReleasePointer addr 0x2c7122c size 0xc4 virtual false final false
static void ReleasePointer(UnityEngine::UIElements::IPanel panel, int32_t pointerId) ;

/// @brief Method ActivateCompatibilityMouseEvents addr 0x2c71320 size 0xc4 virtual false final false
static void ActivateCompatibilityMouseEvents(UnityEngine::UIElements::IPanel panel, int32_t pointerId) ;

/// @brief Method PreventCompatibilityMouseEvents addr 0x2c71418 size 0xc4 virtual false final false
static void PreventCompatibilityMouseEvents(UnityEngine::UIElements::IPanel panel, int32_t pointerId) ;

/// @brief Method ShouldSendCompatibilityMouseEvents addr 0x2c7150c size 0x124 virtual false final false
static bool ShouldSendCompatibilityMouseEvents(UnityEngine::UIElements::IPanel panel, UnityEngine::UIElements::IPointerEvent evt) ;

/// @brief Method ProcessPointerCapture addr 0x2c71764 size 0xc4 virtual false final false
static void ProcessPointerCapture(UnityEngine::UIElements::IPanel panel, int32_t pointerId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerCaptureHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerCaptureHelper, "UnityEngine.UIElements", "PointerCaptureHelper");
