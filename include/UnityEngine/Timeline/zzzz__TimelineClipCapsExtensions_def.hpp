#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipCapsExtensions;
}
// Type: UnityEngine.Timeline::TimelineClipCapsExtensions
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14103))
// CS Name: UnityEngine.Timeline.TimelineClipCapsExtensions
class CORDL_TYPE TimelineClipCapsExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimelineClipCapsExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: " const&", def_value: None }]
constexpr TimelineClipCapsExtensions(TimelineClipCapsExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: "&&", def_value: None }]
constexpr TimelineClipCapsExtensions(TimelineClipCapsExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineClipCapsExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimelineClipCapsExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineClipCapsExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineClipCapsExtensions& operator=(TimelineClipCapsExtensions&& o) noexcept = default;
  constexpr TimelineClipCapsExtensions& operator=(TimelineClipCapsExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SupportsLooping addr 0x2afd5c4 size 0x18 virtual false final false
static bool SupportsLooping(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method SupportsExtrapolation addr 0x2afd5dc size 0x18 virtual false final false
static bool SupportsExtrapolation(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method SupportsClipIn addr 0x2afd5f4 size 0x18 virtual false final false
static bool SupportsClipIn(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method SupportsSpeedMultiplier addr 0x2afd60c size 0x18 virtual false final false
static bool SupportsSpeedMultiplier(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method SupportsBlending addr 0x2afd624 size 0x18 virtual false final false
static bool SupportsBlending(UnityEngine::Timeline::TimelineClip clip) ;

/// @brief Method HasAll addr 0x2afd63c size 0xc virtual false final false
static bool HasAll(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags) ;

/// @brief Method HasAny addr 0x2aefe50 size 0xc virtual false final false
static bool HasAny(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TimelineClipCapsExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClipCapsExtensions, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
