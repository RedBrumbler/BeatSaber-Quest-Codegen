#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
#include <cmath>
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClip;
}
// Type: UnityEngine.Timeline::RuntimeClip
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14114))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14113))
// CS Name: UnityEngine.Timeline.RuntimeClip
class CORDL_TYPE RuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RuntimeClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: " const&", def_value: None }]
constexpr RuntimeClip(RuntimeClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: "&&", def_value: None }]
constexpr RuntimeClip(RuntimeClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeClip(void* ptr) noexcept : UnityEngine::Timeline::RuntimeClipBase(ptr) {
}


  constexpr RuntimeClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeClip& operator=(RuntimeClip&& o) noexcept = default;
  constexpr RuntimeClip& operator=(RuntimeClip const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::TimelineClip __declspec(property(get=__get_m_Clip, put=__set_m_Clip))  m_Clip;

constexpr void __set_m_Clip(UnityEngine::Timeline::TimelineClip value) ;

constexpr UnityEngine::Timeline::TimelineClip __get_m_Clip() const;

 UnityEngine::Playables::Playable __declspec(property(get=__get_m_Playable, put=__set_m_Playable))  m_Playable;

constexpr void __set_m_Playable(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_m_Playable() const;

 UnityEngine::Playables::Playable __declspec(property(get=__get_m_ParentMixer, put=__set_m_ParentMixer))  m_ParentMixer;

constexpr void __set_m_ParentMixer(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_m_ParentMixer() const;


// Properties

 double_t __declspec(property(get=get_start))  start;

 double_t __declspec(property(get=get_duration))  duration;

 UnityEngine::Timeline::TimelineClip __declspec(property(get=get_clip))  clip;

 UnityEngine::Playables::Playable __declspec(property(get=get_mixer))  mixer;

 UnityEngine::Playables::Playable __declspec(property(get=get_playable))  playable;

 bool __declspec(property(put=set_enable))  enable;


// Methods

/// @brief Method get_start addr 0x2b021ac size 0x2c virtual true final false
 double_t get_start() ;

/// @brief Method get_duration addr 0x2b021d8 size 0x18 virtual true final false
 double_t get_duration() ;

// Ctor Parameters [CppParam { name: "clip", ty: "UnityEngine::Timeline::TimelineClip", modifiers: "", def_value: None }, CppParam { name: "clipPlayable", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }]
explicit RuntimeClip(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer) ;

/// @brief Method .ctor addr 0x2aec994 size 0x5c virtual false final false
 void _ctor(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer) ;

/// @brief Method Create addr 0x2b021f8 size 0x84 virtual false final false
 void Create(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer) ;

/// @brief Method get_clip addr 0x2b0227c size 0x8 virtual false final false
 UnityEngine::Timeline::TimelineClip get_clip() ;

/// @brief Method get_mixer addr 0x2b02284 size 0xc virtual false final false
 UnityEngine::Playables::Playable get_mixer() ;

/// @brief Method get_playable addr 0x2b02290 size 0xc virtual false final false
 UnityEngine::Playables::Playable get_playable() ;

/// @brief Method set_enable addr 0x2b0229c size 0x134 virtual true final false
 void set_enable(bool value) ;

/// @brief Method SetTime addr 0x2b023d0 size 0x58 virtual false final false
 void SetTime(double_t time) ;

/// @brief Method SetDuration addr 0x2b02428 size 0x58 virtual false final false
 void SetDuration(double_t duration) ;

/// @brief Method EvaluateAt addr 0x2b02480 size 0x1f8 virtual true final false
 void EvaluateAt(double_t localTime, UnityEngine::Playables::FrameData frameData) ;

/// @brief Method DisableAt addr 0x2b02678 size 0x158 virtual true final false
 void DisableAt(double_t localTime, double_t rootDuration, UnityEngine::Playables::FrameData frameData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::RuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClip, "UnityEngine.Timeline", "RuntimeClip");
