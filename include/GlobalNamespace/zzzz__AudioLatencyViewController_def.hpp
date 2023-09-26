#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace GlobalNamespace {
class VisualMetronome;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLatencyViewController;
}
// Type: ::AudioLatencyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5710))
// CS Name: AudioLatencyViewController
class CORDL_TYPE AudioLatencyViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~AudioLatencyViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: " const&", def_value: None }]
constexpr AudioLatencyViewController(AudioLatencyViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "&&", def_value: None }]
constexpr AudioLatencyViewController(AudioLatencyViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioLatencyViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr AudioLatencyViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioLatencyViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioLatencyViewController& operator=(AudioLatencyViewController&& o) noexcept = default;
  constexpr AudioLatencyViewController& operator=(AudioLatencyViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get__audioLatency, put=__set__audioLatency))  _audioLatency;

constexpr void __set__audioLatency(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__audioLatency() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__overrideAudioLatency, put=__set__overrideAudioLatency))  _overrideAudioLatency;

constexpr void __set__overrideAudioLatency(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__overrideAudioLatency() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__setupCanvasGroup, put=__set__setupCanvasGroup))  _setupCanvasGroup;

constexpr void __set__setupCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__setupCanvasGroup() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__overrideAudioLatencyToggle, put=__set__overrideAudioLatencyToggle))  _overrideAudioLatencyToggle;

constexpr void __set__overrideAudioLatencyToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__overrideAudioLatencyToggle() const;

 HMUI::RangeValuesTextSlider __declspec(property(get=__get__slider, put=__set__slider))  _slider;

constexpr void __set__slider(HMUI::RangeValuesTextSlider value) ;

constexpr HMUI::RangeValuesTextSlider __get__slider() const;

 GlobalNamespace::VisualMetronome __declspec(property(get=__get__visualMetronome, put=__set__visualMetronome))  _visualMetronome;

constexpr void __set__visualMetronome(GlobalNamespace::VisualMetronome value) ;

constexpr GlobalNamespace::VisualMetronome __get__visualMetronome() const;

 float_t __declspec(property(get=__get__disabledAlpha, put=__set__disabledAlpha))  _disabledAlpha;

constexpr void __set__disabledAlpha(float_t value) ;

constexpr float_t __get__disabledAlpha() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;


// Methods

/// @brief Method DidActivate addr 0x218bc88 size 0x224 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x218bf98 size 0x28 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x218bfc0 size 0xe4 virtual true final false
 void OnDestroy() ;

/// @brief Method SliderValueDidChange addr 0x218c0a4 size 0x74 virtual false final false
 void SliderValueDidChange(HMUI::RangeValuesTextSlider slider, float_t value) ;

/// @brief Method HandleOverrideAudioLatencyToggleValueChanged addr 0x218c118 size 0x68 virtual false final false
 void HandleOverrideAudioLatencyToggleValueChanged(bool isOn) ;

/// @brief Method RefreshVisuals addr 0x218beac size 0xec virtual false final false
 void RefreshVisuals(bool overrideAudioLatencyIsEnabled) ;

// Ctor Parameters []
explicit AudioLatencyViewController() ;

/// @brief Method .ctor addr 0x218c180 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioLatencyViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioLatencyViewController, "", "AudioLatencyViewController");
