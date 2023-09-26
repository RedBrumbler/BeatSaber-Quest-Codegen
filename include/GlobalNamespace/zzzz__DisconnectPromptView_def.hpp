#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace GlobalNamespace {
class GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0;
}
// Type: ::<>c__DisplayClass12_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5872))
// CS Name: DisconnectPromptView::<>c__DisplayClass12_0
class CORDL_TYPE GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0(GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0(GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0& operator=(GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0&& o) noexcept = default;
  constexpr GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0& operator=(GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 GlobalNamespace::DisconnectPromptView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::DisconnectPromptView value) ;

constexpr GlobalNamespace::DisconnectPromptView __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x21bd698 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Hide>b__0 addr 0x21bd748 size 0x44 virtual false final false
 void _Hide_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DisconnectPromptView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5873))
// CS Name: DisconnectPromptView
class CORDL_TYPE DisconnectPromptView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass12_0 = GlobalNamespace::GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~DisconnectPromptView() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: " const&", def_value: None }]
constexpr DisconnectPromptView(DisconnectPromptView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: "&&", def_value: None }]
constexpr DisconnectPromptView(DisconnectPromptView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisconnectPromptView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisconnectPromptView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisconnectPromptView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisconnectPromptView& operator=(DisconnectPromptView&& o) noexcept = default;
  constexpr DisconnectPromptView& operator=(DisconnectPromptView const& o) noexcept = default;
                


// Fields

 HMUI::PanelAnimationSO __declspec(property(get=__get__presentPanelAnimation, put=__set__presentPanelAnimation))  _presentPanelAnimation;

constexpr void __set__presentPanelAnimation(HMUI::PanelAnimationSO value) ;

constexpr HMUI::PanelAnimationSO __get__presentPanelAnimation() const;

 HMUI::PanelAnimationSO __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation))  _dismissPanelAnimation;

constexpr void __set__dismissPanelAnimation(HMUI::PanelAnimationSO value) ;

constexpr HMUI::PanelAnimationSO __get__dismissPanelAnimation() const;

 UnityEngine::GameObject __declspec(property(get=__get__promptGameObject, put=__set__promptGameObject))  _promptGameObject;

constexpr void __set__promptGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__promptGameObject() const;

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 System::Action_1<bool> __declspec(property(get=__get_didViewFinishEvent, put=__set_didViewFinishEvent))  didViewFinishEvent;

constexpr void __set_didViewFinishEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_didViewFinishEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Methods

/// @brief Method add_didViewFinishEvent addr 0x21bd328 size 0xb0 virtual false final false
 void add_didViewFinishEvent(System::Action_1<bool> value) ;

/// @brief Method remove_didViewFinishEvent addr 0x21bd3d8 size 0xb0 virtual false final false
 void remove_didViewFinishEvent(System::Action_1<bool> value) ;

/// @brief Method OnEnable addr 0x21bd488 size 0xf0 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x21bd578 size 0x1c virtual false final false
 void OnDisable() ;

/// @brief Method Show addr 0x21bd594 size 0x38 virtual false final false
 void Show() ;

/// @brief Method Hide addr 0x21bd5cc size 0xcc virtual false final false
 void Hide(System::Action finishedCallback) ;

// Ctor Parameters []
explicit DisconnectPromptView() ;

/// @brief Method .ctor addr 0x21bd6a0 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <OnEnable>b__9_0 addr 0x21bd708 size 0x20 virtual false final false
 void _OnEnable_b__9_0() ;

/// @brief Method <OnEnable>b__9_1 addr 0x21bd728 size 0x20 virtual false final false
 void _OnEnable_b__9_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisconnectPromptView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectPromptView, "", "DisconnectPromptView");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DisconnectPromptView____c__DisplayClass12_0, "", "DisconnectPromptView/<>c__DisplayClass12_0");
