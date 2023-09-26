#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class HMUI__HoverTextController___HideTextCoroutine_d__12;
}
namespace HMUI {
class HMUI__HoverTextController___ShowTextCoroutine_d__10;
}
namespace HMUI {
class HoverTextController;
}
// Type: ::<ShowTextCoroutine>d__10
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13613))
// CS Name: HMUI.HoverTextController::<ShowTextCoroutine>d__10
class CORDL_TYPE HMUI__HoverTextController___ShowTextCoroutine_d__10 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMUI__HoverTextController___ShowTextCoroutine_d__10() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverTextController___ShowTextCoroutine_d__10", modifiers: " const&", def_value: None }]
constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10(HMUI__HoverTextController___ShowTextCoroutine_d__10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverTextController___ShowTextCoroutine_d__10", modifiers: "&&", def_value: None }]
constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10(HMUI__HoverTextController___ShowTextCoroutine_d__10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__HoverTextController___ShowTextCoroutine_d__10(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10& operator=(HMUI__HoverTextController___ShowTextCoroutine_d__10&& o) noexcept = default;
  constexpr HMUI__HoverTextController___ShowTextCoroutine_d__10& operator=(HMUI__HoverTextController___ShowTextCoroutine_d__10 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::HoverTextController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::HoverTextController value) ;

constexpr HMUI::HoverTextController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__HoverTextController___ShowTextCoroutine_d__10(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fe5cd0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fe5e10 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fe5e14 size 0x158 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fe5f6c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fe5f74 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fe5fb4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<HideTextCoroutine>d__12
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13614))
// CS Name: HMUI.HoverTextController::<HideTextCoroutine>d__12
class CORDL_TYPE HMUI__HoverTextController___HideTextCoroutine_d__12 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMUI__HoverTextController___HideTextCoroutine_d__12() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverTextController___HideTextCoroutine_d__12", modifiers: " const&", def_value: None }]
constexpr HMUI__HoverTextController___HideTextCoroutine_d__12(HMUI__HoverTextController___HideTextCoroutine_d__12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverTextController___HideTextCoroutine_d__12", modifiers: "&&", def_value: None }]
constexpr HMUI__HoverTextController___HideTextCoroutine_d__12(HMUI__HoverTextController___HideTextCoroutine_d__12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__HoverTextController___HideTextCoroutine_d__12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__HoverTextController___HideTextCoroutine_d__12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__HoverTextController___HideTextCoroutine_d__12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__HoverTextController___HideTextCoroutine_d__12& operator=(HMUI__HoverTextController___HideTextCoroutine_d__12&& o) noexcept = default;
  constexpr HMUI__HoverTextController___HideTextCoroutine_d__12& operator=(HMUI__HoverTextController___HideTextCoroutine_d__12 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::HoverTextController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::HoverTextController value) ;

constexpr HMUI::HoverTextController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__HoverTextController___HideTextCoroutine_d__12(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fe5dcc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fe5fbc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fe5fc0 size 0xe8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fe60a8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fe60b0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fe60f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::HoverTextController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13615))
// CS Name: HMUI.HoverTextController
class CORDL_TYPE HoverTextController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _HideTextCoroutine_d__12 = HMUI::HMUI__HoverTextController___HideTextCoroutine_d__12;

using _ShowTextCoroutine_d__10 = HMUI::HMUI__HoverTextController___ShowTextCoroutine_d__10;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HoverTextController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: " const&", def_value: None }]
constexpr HoverTextController(HoverTextController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: "&&", def_value: None }]
constexpr HoverTextController(HoverTextController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoverTextController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HoverTextController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoverTextController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoverTextController& operator=(HoverTextController&& o) noexcept = default;
  constexpr HoverTextController& operator=(HoverTextController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__textMesh, put=__set__textMesh))  _textMesh;

constexpr void __set__textMesh(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__textMesh() const;

 float_t __declspec(property(get=__get__fadeInDelay, put=__set__fadeInDelay))  _fadeInDelay;

constexpr void __set__fadeInDelay(float_t value) ;

constexpr float_t __get__fadeInDelay() const;

 float_t __declspec(property(get=__get__fadeInSpeed, put=__set__fadeInSpeed))  _fadeInSpeed;

constexpr void __set__fadeInSpeed(float_t value) ;

constexpr float_t __get__fadeInSpeed() const;

 float_t __declspec(property(get=__get__fadeOutSpeed, put=__set__fadeOutSpeed))  _fadeOutSpeed;

constexpr void __set__fadeOutSpeed(float_t value) ;

constexpr float_t __get__fadeOutSpeed() const;

 bool __declspec(property(get=__get__isFadingOut, put=__set__isFadingOut))  _isFadingOut;

constexpr void __set__isFadingOut(bool value) ;

constexpr bool __get__isFadingOut() const;

 bool __declspec(property(get=__get__isFadingIn, put=__set__isFadingIn))  _isFadingIn;

constexpr void __set__isFadingIn(bool value) ;

constexpr bool __get__isFadingIn() const;


// Methods

/// @brief Method Awake addr 0x1fe5b94 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method OnDisable addr 0x1fe5bb4 size 0x28 virtual false final false
 void OnDisable() ;

/// @brief Method OnApplicationFocus addr 0x1fe5bdc size 0x2c virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method ShowText addr 0x1fe5c08 size 0x60 virtual false final false
 void ShowText(::StringW text) ;

/// @brief Method ShowTextCoroutine addr 0x1fe5c68 size 0x68 virtual false final false
 System::Collections::IEnumerator ShowTextCoroutine() ;

/// @brief Method HideText addr 0x1fe5cf8 size 0x6c virtual false final false
 void HideText() ;

/// @brief Method HideTextCoroutine addr 0x1fe5d64 size 0x68 virtual false final false
 System::Collections::IEnumerator HideTextCoroutine() ;

// Ctor Parameters []
explicit HoverTextController() ;

/// @brief Method .ctor addr 0x1fe5df4 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__HoverTextController___HideTextCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__HoverTextController___HideTextCoroutine_d__12, "HMUI", "HoverTextController/<HideTextCoroutine>d__12");
NEED_NO_BOX(HMUI::HMUI__HoverTextController___ShowTextCoroutine_d__10);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__HoverTextController___ShowTextCoroutine_d__10, "HMUI", "HoverTextController/<ShowTextCoroutine>d__10");
NEED_NO_BOX(HMUI::HoverTextController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverTextController, "HMUI", "HoverTextController");
