#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IGamePause;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPauseGamePause;
}
// Type: ::NoPauseGamePause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5165))
// CS Name: NoPauseGamePause
class CORDL_TYPE NoPauseGamePause : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IGamePause
constexpr operator  GlobalNamespace::IGamePause() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoPauseGamePause() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoPauseGamePause", modifiers: " const&", def_value: None }]
constexpr NoPauseGamePause(NoPauseGamePause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoPauseGamePause", modifiers: "&&", def_value: None }]
constexpr NoPauseGamePause(NoPauseGamePause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoPauseGamePause(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoPauseGamePause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoPauseGamePause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoPauseGamePause& operator=(NoPauseGamePause&& o) noexcept = default;
  constexpr NoPauseGamePause& operator=(NoPauseGamePause const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent))  didPauseEvent;

constexpr void __set_didPauseEvent(System::Action value) ;

constexpr System::Action __get_didPauseEvent() const;

 System::Action __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent))  willResumeEvent;

constexpr void __set_willResumeEvent(System::Action value) ;

constexpr System::Action __get_willResumeEvent() const;

 System::Action __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent))  didResumeEvent;

constexpr void __set_didResumeEvent(System::Action value) ;

constexpr System::Action __get_didResumeEvent() const;

 bool __declspec(property(get=__get__pause, put=__set__pause))  _pause;

constexpr void __set__pause(bool value) ;

constexpr bool __get__pause() const;


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x2108b80 size 0x8 virtual true final true
 bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x2108b88 size 0x9c virtual true final true
 void add_didPauseEvent(System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x2108c24 size 0x9c virtual true final true
 void remove_didPauseEvent(System::Action value) ;

/// @brief Method add_willResumeEvent addr 0x2108cc0 size 0x9c virtual true final true
 void add_willResumeEvent(System::Action value) ;

/// @brief Method remove_willResumeEvent addr 0x2108d5c size 0x9c virtual true final true
 void remove_willResumeEvent(System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x2108df8 size 0x9c virtual true final true
 void add_didResumeEvent(System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x2108e94 size 0x9c virtual true final true
 void remove_didResumeEvent(System::Action value) ;

/// @brief Method Pause addr 0x2108f30 size 0x24 virtual true final true
 void Pause() ;

/// @brief Method WillResume addr 0x2108f54 size 0x1c virtual true final true
 void WillResume() ;

/// @brief Method Resume addr 0x2108f70 size 0x20 virtual true final true
 void Resume() ;

// Ctor Parameters []
explicit NoPauseGamePause() ;

/// @brief Method .ctor addr 0x2108f90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoPauseGamePause);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoPauseGamePause, "", "NoPauseGamePause");
