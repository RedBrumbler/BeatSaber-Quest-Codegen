#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__TextFadeTransitions__State;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5432))
// CS Name: TextFadeTransitions::State
struct CORDL_TYPE GlobalNamespace__TextFadeTransitions__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TextFadeTransitions__State(int32_t value__) noexcept;


                    constexpr GlobalNamespace__TextFadeTransitions__State(GlobalNamespace__TextFadeTransitions__State const&) = default;
                    constexpr GlobalNamespace__TextFadeTransitions__State(GlobalNamespace__TextFadeTransitions__State&&) = default;
                    constexpr GlobalNamespace__TextFadeTransitions__State& operator=(GlobalNamespace__TextFadeTransitions__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TextFadeTransitions__State& operator=(GlobalNamespace__TextFadeTransitions__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TextFadeTransitions__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__TextFadeTransitions__State_Unwrapped : int32_t {
__NotInTransition = 0,
__FadingOut = 1,
__FadingIn = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__TextFadeTransitions__State_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__TextFadeTransitions__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotInTransition offset 0
static GlobalNamespace::GlobalNamespace__TextFadeTransitions__State const NotInTransition;

/// @brief Field FadingOut offset 0
static GlobalNamespace::GlobalNamespace__TextFadeTransitions__State const FadingOut;

/// @brief Field FadingIn offset 0
static GlobalNamespace::GlobalNamespace__TextFadeTransitions__State const FadingIn;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TextFadeTransitions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5433))
// CS Name: TextFadeTransitions
class CORDL_TYPE TextFadeTransitions : public UnityEngine::MonoBehaviour {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__TextFadeTransitions__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TextFadeTransitions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: " const&", def_value: None }]
constexpr TextFadeTransitions(TextFadeTransitions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: "&&", def_value: None }]
constexpr TextFadeTransitions(TextFadeTransitions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextFadeTransitions(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TextFadeTransitions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextFadeTransitions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextFadeTransitions& operator=(TextFadeTransitions&& o) noexcept = default;
  constexpr TextFadeTransitions& operator=(TextFadeTransitions const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__textLabel, put=__set__textLabel))  _textLabel;

constexpr void __set__textLabel(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__textLabel() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;

 float_t __declspec(property(get=__get__fadeDuration, put=__set__fadeDuration))  _fadeDuration;

constexpr void __set__fadeDuration(float_t value) ;

constexpr float_t __get__fadeDuration() const;

 GlobalNamespace::GlobalNamespace__TextFadeTransitions__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__TextFadeTransitions__State value) ;

constexpr GlobalNamespace::GlobalNamespace__TextFadeTransitions__State __get__state() const;

 ::StringW __declspec(property(get=__get__nextText, put=__set__nextText))  _nextText;

constexpr void __set__nextText(::StringW value) ;

constexpr ::StringW __get__nextText() const;

 float_t __declspec(property(get=__get__fade, put=__set__fade))  _fade;

constexpr void __set__fade(float_t value) ;

constexpr float_t __get__fade() const;


// Methods

/// @brief Method Awake addr 0x214a608 size 0x7c virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x214a754 size 0x4 virtual false final false
 void Update() ;

/// @brief Method RefreshState addr 0x214a758 size 0x100 virtual false final false
 void RefreshState() ;

/// @brief Method RefreshTextAlpha addr 0x214a684 size 0xd0 virtual false final false
 void RefreshTextAlpha() ;

/// @brief Method ShowText addr 0x214181c size 0x74 virtual false final false
 void ShowText(::StringW text) ;

// Ctor Parameters []
explicit TextFadeTransitions() ;

/// @brief Method .ctor addr 0x214a858 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TextFadeTransitions__State, "", "TextFadeTransitions/State");
NEED_NO_BOX(GlobalNamespace::TextFadeTransitions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextFadeTransitions, "", "TextFadeTransitions");
