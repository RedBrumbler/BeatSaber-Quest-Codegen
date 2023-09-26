#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class ResultObjectiveListItem;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace UnityEngine {
class AudioClip;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class MissionResultsViewController;
}
// Type: ::<StartFireworksAfterDelay>d__28
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5803))
// CS Name: MissionResultsViewController::<StartFireworksAfterDelay>d__28
class CORDL_TYPE GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28(GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28(GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28& operator=(GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28&& o) noexcept = default;
  constexpr GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28& operator=(GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::MissionResultsViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionResultsViewController value) ;

constexpr GlobalNamespace::MissionResultsViewController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21ab064 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21ab0dc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21ab0e0 size 0xbc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21ab19c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21ab1a4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21ab1e4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass29_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5804))
// CS Name: MissionResultsViewController::<>c__DisplayClass29_0
class CORDL_TYPE GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0(GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0(GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0& operator=(GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0&& o) noexcept = default;
  constexpr GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0& operator=(GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_levelCleared, put=__set_levelCleared))  levelCleared;

constexpr void __set_levelCleared(bool value) ;

constexpr bool __get_levelCleared() const;

 GlobalNamespace::MissionResultsViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionResultsViewController value) ;

constexpr GlobalNamespace::MissionResultsViewController __get___4__this() const;

 ::ArrayW<GlobalNamespace::MissionObjective> __declspec(property(get=__get_missionObjectives, put=__set_missionObjectives))  missionObjectives;

constexpr void __set_missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjective> __get_missionObjectives() const;

 ::ArrayW<GlobalNamespace::MissionObjectiveResult> __declspec(property(get=__get_missionObjectiveResults, put=__set_missionObjectiveResults))  missionObjectiveResults;

constexpr void __set_missionObjectiveResults(::ArrayW<GlobalNamespace::MissionObjectiveResult> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjectiveResult> __get_missionObjectiveResults() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0() ;

/// @brief Method .ctor addr 0x21ab08c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetDataToUI>b__0 addr 0x21ab1ec size 0x410 virtual false final false
 void _SetDataToUI_b__0(int32_t idx, GlobalNamespace::ResultObjectiveListItem objectiveListItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionResultsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5805))
// CS Name: MissionResultsViewController
class CORDL_TYPE MissionResultsViewController : public HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass29_0 = GlobalNamespace::GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0;

using _StartFireworksAfterDelay_d__28 = GlobalNamespace::GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~MissionResultsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: " const&", def_value: None }]
constexpr MissionResultsViewController(MissionResultsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: "&&", def_value: None }]
constexpr MissionResultsViewController(MissionResultsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionResultsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr MissionResultsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionResultsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionResultsViewController& operator=(MissionResultsViewController&& o) noexcept = default;
  constexpr MissionResultsViewController& operator=(MissionResultsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__failedBannerGo, put=__set__failedBannerGo))  _failedBannerGo;

constexpr void __set__failedBannerGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__failedBannerGo() const;

 UnityEngine::GameObject __declspec(property(get=__get__clearedBannerGo, put=__set__clearedBannerGo))  _clearedBannerGo;

constexpr void __set__clearedBannerGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__clearedBannerGo() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__missionNameText, put=__set__missionNameText))  _missionNameText;

constexpr void __set__missionNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__missionNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songNameText, put=__set__songNameText))  _songNameText;

constexpr void __set__songNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songNameText() const;

 UnityEngine::Sprite __declspec(property(get=__get__successIcon, put=__set__successIcon))  _successIcon;

constexpr void __set__successIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__successIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__successIconGlow, put=__set__successIconGlow))  _successIconGlow;

constexpr void __set__successIconGlow(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__successIconGlow() const;

 UnityEngine::Color __declspec(property(get=__get__successColor, put=__set__successColor))  _successColor;

constexpr void __set__successColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__successColor() const;

 UnityEngine::Sprite __declspec(property(get=__get__failIcon, put=__set__failIcon))  _failIcon;

constexpr void __set__failIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__failIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__failIconGlow, put=__set__failIconGlow))  _failIconGlow;

constexpr void __set__failIconGlow(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__failIconGlow() const;

 UnityEngine::Color __declspec(property(get=__get__failColor, put=__set__failColor))  _failColor;

constexpr void __set__failColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__failColor() const;

 GlobalNamespace::ResultObjectiveListItemsList __declspec(property(get=__get__resultObjectiveListItemList, put=__set__resultObjectiveListItemList))  _resultObjectiveListItemList;

constexpr void __set__resultObjectiveListItemList(GlobalNamespace::ResultObjectiveListItemsList value) ;

constexpr GlobalNamespace::ResultObjectiveListItemsList __get__resultObjectiveListItemList() const;

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__retryButton, put=__set__retryButton))  _retryButton;

constexpr void __set__retryButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__retryButton() const;

 UnityEngine::AudioClip __declspec(property(get=__get__levelClearedAudioClip, put=__set__levelClearedAudioClip))  _levelClearedAudioClip;

constexpr void __set__levelClearedAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__levelClearedAudioClip() const;

 GlobalNamespace::FireworksController __declspec(property(get=__get__fireworksController, put=__set__fireworksController))  _fireworksController;

constexpr void __set__fireworksController(GlobalNamespace::FireworksController value) ;

constexpr GlobalNamespace::FireworksController __get__fireworksController() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 System::Action_1<GlobalNamespace::MissionResultsViewController> __declspec(property(get=__get_continueButtonPressedEvent, put=__set_continueButtonPressedEvent))  continueButtonPressedEvent;

constexpr void __set_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionResultsViewController> __get_continueButtonPressedEvent() const;

 System::Action_1<GlobalNamespace::MissionResultsViewController> __declspec(property(get=__get_retryButtonPressedEvent, put=__set_retryButtonPressedEvent))  retryButtonPressedEvent;

constexpr void __set_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionResultsViewController> __get_retryButtonPressedEvent() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get__missionNode, put=__set__missionNode))  _missionNode;

constexpr void __set__missionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__missionNode() const;

 GlobalNamespace::MissionCompletionResults __declspec(property(get=__get__missionCompletionResults, put=__set__missionCompletionResults))  _missionCompletionResults;

constexpr void __set__missionCompletionResults(GlobalNamespace::MissionCompletionResults value) ;

constexpr GlobalNamespace::MissionCompletionResults __get__missionCompletionResults() const;

 UnityEngine::Coroutine __declspec(property(get=__get__startFireworksAfterDelayCoroutine, put=__set__startFireworksAfterDelayCoroutine))  _startFireworksAfterDelayCoroutine;

constexpr void __set__startFireworksAfterDelayCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__startFireworksAfterDelayCoroutine() const;


// Methods

/// @brief Method add_continueButtonPressedEvent addr 0x21aa8c8 size 0xb4 virtual false final false
 void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

/// @brief Method remove_continueButtonPressedEvent addr 0x21aa97c size 0xb4 virtual false final false
 void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

/// @brief Method add_retryButtonPressedEvent addr 0x21aaa30 size 0xb4 virtual false final false
 void add_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

/// @brief Method remove_retryButtonPressedEvent addr 0x21aaae4 size 0xb4 virtual false final false
 void remove_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController> value) ;

/// @brief Method Init addr 0x21aab98 size 0x8 virtual false final false
 void Init(GlobalNamespace::MissionNode missionNode, GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method DidActivate addr 0x21aaba0 size 0x198 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21ab028 size 0x3c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method StartFireworksAfterDelay addr 0x21aafb0 size 0x78 virtual false final false
 System::Collections::IEnumerator StartFireworksAfterDelay(float_t delay) ;

/// @brief Method SetDataToUI addr 0x21aad38 size 0x278 virtual false final false
 void SetDataToUI() ;

/// @brief Method ContinueButtonPressed addr 0x21ab094 size 0x20 virtual false final false
 void ContinueButtonPressed() ;

/// @brief Method RetryButtonPressed addr 0x21ab0b4 size 0x20 virtual false final false
 void RetryButtonPressed() ;

// Ctor Parameters []
explicit MissionResultsViewController() ;

/// @brief Method .ctor addr 0x21ab0d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionResultsViewController___StartFireworksAfterDelay_d__28, "", "MissionResultsViewController/<StartFireworksAfterDelay>d__28");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionResultsViewController____c__DisplayClass29_0, "", "MissionResultsViewController/<>c__DisplayClass29_0");
NEED_NO_BOX(GlobalNamespace::MissionResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController, "", "MissionResultsViewController");
