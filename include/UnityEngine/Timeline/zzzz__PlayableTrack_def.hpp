#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class PlayableTrack;
}
// Type: UnityEngine.Timeline::PlayableTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14144))
// CS Name: UnityEngine.Timeline.PlayableTrack
class CORDL_TYPE PlayableTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~PlayableTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableTrack", modifiers: " const&", def_value: None }]
constexpr PlayableTrack(PlayableTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableTrack", modifiers: "&&", def_value: None }]
constexpr PlayableTrack(PlayableTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr PlayableTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableTrack& operator=(PlayableTrack&& o) noexcept = default;
  constexpr PlayableTrack& operator=(PlayableTrack const& o) noexcept = default;
                


// Methods

/// @brief Method OnCreateClip addr 0x2b07d74 size 0x94 virtual true final false
 void OnCreateClip(UnityEngine::Timeline::TimelineClip clip) ;

// Ctor Parameters []
explicit PlayableTrack() ;

/// @brief Method .ctor addr 0x2b07e08 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::PlayableTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::PlayableTrack, "UnityEngine.Timeline", "PlayableTrack");
