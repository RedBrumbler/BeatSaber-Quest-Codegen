#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnPointerClick;
}
// Type: ::SignalOnPointerClick
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13903))
// CS Name: SignalOnPointerClick
class CORDL_TYPE SignalOnPointerClick : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignalOnPointerClick() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: " const&", def_value: None }]
constexpr SignalOnPointerClick(SignalOnPointerClick const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: "&&", def_value: None }]
constexpr SignalOnPointerClick(SignalOnPointerClick&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalOnPointerClick(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SignalOnPointerClick& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalOnPointerClick& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalOnPointerClick& operator=(SignalOnPointerClick&& o) noexcept = default;
  constexpr SignalOnPointerClick& operator=(SignalOnPointerClick const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Signal __declspec(property(get=__get__inputFieldClickedSignal, put=__set__inputFieldClickedSignal))  _inputFieldClickedSignal;

constexpr void __set__inputFieldClickedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__inputFieldClickedSignal() const;


// Methods

/// @brief Method OnPointerClick addr 0x1fbed20 size 0x20 virtual true final true
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit SignalOnPointerClick() ;

/// @brief Method .ctor addr 0x1fbed40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SignalOnPointerClick);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalOnPointerClick, "", "SignalOnPointerClick");
