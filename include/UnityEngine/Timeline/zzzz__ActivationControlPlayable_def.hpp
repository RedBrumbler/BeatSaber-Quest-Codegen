#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__ActivationControlPlayable__InitialState;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationControlPlayable;
}
// Type: ::PostPlaybackState
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14131))
// CS Name: UnityEngine.Timeline.ActivationControlPlayable::PostPlaybackState
struct CORDL_TYPE UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState(UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState const&) = default;
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState(UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState&&) = default;
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState& operator=(UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState& operator=(UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState_Unwrapped : int32_t {
__Active = 0,
__Inactive = 1,
__Revert = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Active offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState const Active;

/// @brief Field Inactive offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState const Inactive;

/// @brief Field Revert offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState const Revert;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::InitialState
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14132))
// CS Name: UnityEngine.Timeline.ActivationControlPlayable::InitialState
struct CORDL_TYPE UnityEngine__Timeline__ActivationControlPlayable__InitialState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__ActivationControlPlayable__InitialState(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__ActivationControlPlayable__InitialState(UnityEngine__Timeline__ActivationControlPlayable__InitialState const&) = default;
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__InitialState(UnityEngine__Timeline__ActivationControlPlayable__InitialState&&) = default;
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__InitialState& operator=(UnityEngine__Timeline__ActivationControlPlayable__InitialState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__ActivationControlPlayable__InitialState& operator=(UnityEngine__Timeline__ActivationControlPlayable__InitialState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__ActivationControlPlayable__InitialState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__ActivationControlPlayable__InitialState_Unwrapped : int32_t {
__Unset = 0,
__Active = 1,
__Inactive = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__ActivationControlPlayable__InitialState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__ActivationControlPlayable__InitialState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unset offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState const Unset;

/// @brief Field Active offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState const Active;

/// @brief Field Inactive offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState const Inactive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::ActivationControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14133))
// CS Name: UnityEngine.Timeline.ActivationControlPlayable
class CORDL_TYPE ActivationControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using InitialState = UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState;

using PostPlaybackState = UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ActivationControlPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: " const&", def_value: None }]
constexpr ActivationControlPlayable(ActivationControlPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "&&", def_value: None }]
constexpr ActivationControlPlayable(ActivationControlPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivationControlPlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr ActivationControlPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivationControlPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivationControlPlayable& operator=(ActivationControlPlayable&& o) noexcept = default;
  constexpr ActivationControlPlayable& operator=(ActivationControlPlayable const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_gameObject() const;

 UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState __declspec(property(get=__get_postPlayback, put=__set_postPlayback))  postPlayback;

constexpr void __set_postPlayback(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState __get_postPlayback() const;

 UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState __declspec(property(get=__get_m_InitialState, put=__set_m_InitialState))  m_InitialState;

constexpr void __set_m_InitialState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState __get_m_InitialState() const;


// Methods

/// @brief Method Create addr 0x2affa44 size 0x140 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationControlPlayable> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject gameObject, UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState postPlaybackState) ;

/// @brief Method OnBehaviourPlay addr 0x2b04b3c size 0x88 virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2b04bc4 size 0xa8 virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x2b04c6c size 0x88 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method OnGraphStart addr 0x2b04cf4 size 0x94 virtual true final false
 void OnGraphStart(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableDestroy addr 0x2b04d88 size 0xcc virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

// Ctor Parameters []
explicit ActivationControlPlayable() ;

/// @brief Method .ctor addr 0x2b04e54 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
NEED_NO_BOX(UnityEngine::Timeline::ActivationControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationControlPlayable, "UnityEngine.Timeline", "ActivationControlPlayable");
