#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class UIKeyboard;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerPasswordEntryViewController;
}
// Type: ::ServerPasswordEntryViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5826))
// CS Name: ServerPasswordEntryViewController
class CORDL_TYPE ServerPasswordEntryViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ServerPasswordEntryViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: " const&", def_value: None }]
constexpr ServerPasswordEntryViewController(ServerPasswordEntryViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: "&&", def_value: None }]
constexpr ServerPasswordEntryViewController(ServerPasswordEntryViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerPasswordEntryViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ServerPasswordEntryViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerPasswordEntryViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerPasswordEntryViewController& operator=(ServerPasswordEntryViewController&& o) noexcept = default;
  constexpr ServerPasswordEntryViewController& operator=(ServerPasswordEntryViewController const& o) noexcept = default;
                


// Fields

 HMUI::InputFieldView __declspec(property(get=__get__passwordInput, put=__set__passwordInput))  _passwordInput;

constexpr void __set__passwordInput(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__passwordInput() const;

 HMUI::UIKeyboard __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard))  _uiKeyboard;

constexpr void __set__uiKeyboard(HMUI::UIKeyboard value) ;

constexpr HMUI::UIKeyboard __get__uiKeyboard() const;

 System::Action_2<GlobalNamespace::INetworkPlayer,::StringW> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer,::StringW> value) ;

constexpr System::Action_2<GlobalNamespace::INetworkPlayer,::StringW> __get_didFinishEvent() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get__selectedNetworkPlayer, put=__set__selectedNetworkPlayer))  _selectedNetworkPlayer;

constexpr void __set__selectedNetworkPlayer(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get__selectedNetworkPlayer() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x21b06e4 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer,::StringW> value) ;

/// @brief Method remove_didFinishEvent addr 0x21b0794 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer,::StringW> value) ;

/// @brief Method Setup addr 0x21b0844 size 0x8 virtual false final false
 void Setup(GlobalNamespace::INetworkPlayer selectedPlayer) ;

/// @brief Method DidActivate addr 0x21b084c size 0xc4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21b0910 size 0xb4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleJoinClicked addr 0x21b09c4 size 0x3c virtual false final false
 void HandleJoinClicked() ;

/// @brief Method HandleUIKeyboardOkButtonWasPressed addr 0x21b0a00 size 0x3c virtual false final false
 void HandleUIKeyboardOkButtonWasPressed() ;

// Ctor Parameters []
explicit ServerPasswordEntryViewController() ;

/// @brief Method .ctor addr 0x21b0a3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ServerPasswordEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPasswordEntryViewController, "", "ServerPasswordEntryViewController");
