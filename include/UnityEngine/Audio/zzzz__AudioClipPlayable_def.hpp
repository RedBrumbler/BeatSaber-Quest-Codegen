#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioClipPlayable;
}
// Type: UnityEngine.Audio::AudioClipPlayable
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15640))
// CS Name: UnityEngine.Audio.AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Audio::AudioClipPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AudioClipPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AudioClipPlayable(AudioClipPlayable const&) = default;
                    constexpr AudioClipPlayable(AudioClipPlayable&&) = default;
                    constexpr AudioClipPlayable& operator=(AudioClipPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioClipPlayable& operator=(AudioClipPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioClipPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;


// Methods

/// @brief Method Create addr 0x2b58d00 size 0x124 virtual false final false
static UnityEngine::Audio::AudioClipPlayable Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AudioClip clip, bool looping) ;

/// @brief Method CreateHandle addr 0x2b58e24 size 0xd0 virtual false final false
static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AudioClip clip, bool looping) ;

/// @brief Method .ctor addr 0x2b58ef4 size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b59010 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b5901c size 0x30 virtual false final false
static UnityEngine::Playables::Playable op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Audio::AudioClipPlayable playable) ;

/// @brief Method op_Explicit addr 0x2b5904c size 0x44 virtual false final false
static UnityEngine::Audio::AudioClipPlayable op_Explicit_UnityEngine__Audio__AudioClipPlayable(UnityEngine::Playables::Playable playable) ;

/// @brief Method Equals addr 0x2b59090 size 0x78 virtual true final true
 bool Equals(UnityEngine::Audio::AudioClipPlayable other) ;

/// @brief Method SetVolume addr 0x2b59108 size 0xd8 virtual false final false
 void SetVolume(float_t value) ;

/// @brief Method SetStereoPan addr 0x2b5922c size 0xdc virtual false final false
 void SetStereoPan(float_t value) ;

/// @brief Method SetSpatialBlend addr 0x2b59354 size 0xd8 virtual false final false
 void SetSpatialBlend(float_t value) ;

/// @brief Method Seek addr 0x2b59478 size 0x134 virtual false final false
 void Seek(double_t startTime, double_t startDelay, double_t duration) ;

/// @brief Method SetVolumeInternal addr 0x2b591e0 size 0x4c virtual false final false
static void SetVolumeInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float_t volume) ;

/// @brief Method SetStereoPanInternal addr 0x2b59308 size 0x4c virtual false final false
static void SetStereoPanInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float_t stereoPan) ;

/// @brief Method SetSpatialBlendInternal addr 0x2b5942c size 0x4c virtual false final false
static void SetSpatialBlendInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, float_t spatialBlend) ;

/// @brief Method SetStartDelayInternal addr 0x2b595ac size 0x4c virtual false final false
static void SetStartDelayInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, double_t delay) ;

/// @brief Method SetPauseDelayInternal addr 0x2b595f8 size 0x4c virtual false final false
static void SetPauseDelayInternal(ByRef<UnityEngine::Playables::PlayableHandle> hdl, double_t delay) ;

/// @brief Method InternalCreateAudioClipPlayable addr 0x2b58fb4 size 0x5c virtual false final false
static bool InternalCreateAudioClipPlayable(ByRef<UnityEngine::Playables::PlayableGraph> graph, UnityEngine::AudioClip clip, bool looping, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
