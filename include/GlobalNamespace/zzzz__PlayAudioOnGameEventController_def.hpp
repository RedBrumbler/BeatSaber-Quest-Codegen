#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class AudioClipQueue;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding;
}
namespace GlobalNamespace {
class PlayAudioOnGameEventController;
}
// Type: ::EventAudioBinding
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4059))
// CS Name: PlayAudioOnGameEventController::EventAudioBinding
class CORDL_TYPE GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding(GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding(GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding& operator=(GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding&& o) noexcept = default;
  constexpr GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding& operator=(GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Signal __declspec(property(get=__get__signal, put=__set__signal))  _signal;

constexpr void __set__signal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__signal() const;

 float_t __declspec(property(get=__get__delay, put=__set__delay))  _delay;

constexpr void __set__delay(float_t value) ;

constexpr float_t __get__delay() const;

 ::ArrayW<GlobalNamespace::LocalizedAudioClipSO> __declspec(property(get=__get__localizedAudioClips, put=__set__localizedAudioClips))  _localizedAudioClips;

constexpr void __set__localizedAudioClips(::ArrayW<GlobalNamespace::LocalizedAudioClipSO> value) ;

constexpr ::ArrayW<GlobalNamespace::LocalizedAudioClipSO> __get__localizedAudioClips() const;

 GlobalNamespace::AudioClipQueue __declspec(property(get=__get__audioClipQueue, put=__set__audioClipQueue))  _audioClipQueue;

constexpr void __set__audioClipQueue(GlobalNamespace::AudioClipQueue value) ;

constexpr GlobalNamespace::AudioClipQueue __get__audioClipQueue() const;

 GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO> __declspec(property(get=__get__randomObjectPicker, put=__set__randomObjectPicker))  _randomObjectPicker;

constexpr void __set__randomObjectPicker(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO> __get__randomObjectPicker() const;


// Methods

/// @brief Method Init addr 0x20f4ec4 size 0xf0 virtual false final false
 void Init(GlobalNamespace::AudioClipQueue audioClipQueue) ;

/// @brief Method Deinit addr 0x20f5010 size 0x8c virtual false final false
 void Deinit() ;

/// @brief Method HandleGameEvent addr 0x20f50a4 size 0xc4 virtual false final false
 void HandleGameEvent() ;

// Ctor Parameters []
explicit GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding() ;

/// @brief Method .ctor addr 0x20f5168 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayAudioOnGameEventController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4060))
// CS Name: PlayAudioOnGameEventController
class CORDL_TYPE PlayAudioOnGameEventController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using EventAudioBinding = GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayAudioOnGameEventController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: " const&", def_value: None }]
constexpr PlayAudioOnGameEventController(PlayAudioOnGameEventController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "&&", def_value: None }]
constexpr PlayAudioOnGameEventController(PlayAudioOnGameEventController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayAudioOnGameEventController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayAudioOnGameEventController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayAudioOnGameEventController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayAudioOnGameEventController& operator=(PlayAudioOnGameEventController&& o) noexcept = default;
  constexpr PlayAudioOnGameEventController& operator=(PlayAudioOnGameEventController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioClipQueue __declspec(property(get=__get__audioClipQueue, put=__set__audioClipQueue))  _audioClipQueue;

constexpr void __set__audioClipQueue(GlobalNamespace::AudioClipQueue value) ;

constexpr GlobalNamespace::AudioClipQueue __get__audioClipQueue() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding> __declspec(property(get=__get__eventAudioBindings, put=__set__eventAudioBindings))  _eventAudioBindings;

constexpr void __set__eventAudioBindings(::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding> __get__eventAudioBindings() const;


// Methods

/// @brief Method Awake addr 0x20f4e60 size 0x64 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20f4fb4 size 0x5c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit PlayAudioOnGameEventController() ;

/// @brief Method .ctor addr 0x20f509c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayAudioOnGameEventController__EventAudioBinding, "", "PlayAudioOnGameEventController/EventAudioBinding");
NEED_NO_BOX(GlobalNamespace::PlayAudioOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController, "", "PlayAudioOnGameEventController");
