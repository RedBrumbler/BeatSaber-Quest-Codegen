#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableBinding;
}
// Type: UnityEngine.Audio::AudioPlayableBinding
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15635))
// CS Name: UnityEngine.Audio.AudioPlayableBinding
class CORDL_TYPE AudioPlayableBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AudioPlayableBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: " const&", def_value: None }]
constexpr AudioPlayableBinding(AudioPlayableBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: "&&", def_value: None }]
constexpr AudioPlayableBinding(AudioPlayableBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioPlayableBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioPlayableBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioPlayableBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioPlayableBinding& operator=(AudioPlayableBinding&& o) noexcept = default;
  constexpr AudioPlayableBinding& operator=(AudioPlayableBinding const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2b58a98 size 0x13c virtual false final false
static UnityEngine::Playables::PlayableBinding Create(::StringW name, UnityEngine::Object key) ;

/// @brief Method CreateAudioOutput addr 0x2b58bd4 size 0x40 virtual false final false
static UnityEngine::Playables::PlayableOutput CreateAudioOutput(UnityEngine::Playables::PlayableGraph graph, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
NEED_NO_BOX(UnityEngine::Audio::AudioPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableBinding, "UnityEngine.Audio", "AudioPlayableBinding");
