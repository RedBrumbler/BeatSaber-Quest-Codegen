#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class HoverHintPanel;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HMUI__HoverHintController___HideHintAfterDelay_d__11;
}
namespace HMUI {
class HMUI__HoverHintController___ShowHintAfterDelay_d__10;
}
namespace HMUI {
class HoverHintController;
}
// Type: ::<ShowHintAfterDelay>d__10
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13605))
// CS Name: HMUI.HoverHintController::<ShowHintAfterDelay>d__10
class CORDL_TYPE HMUI__HoverHintController___ShowHintAfterDelay_d__10 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HMUI__HoverHintController___ShowHintAfterDelay_d__10() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverHintController___ShowHintAfterDelay_d__10", modifiers: " const&", def_value: None }]
constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10(HMUI__HoverHintController___ShowHintAfterDelay_d__10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverHintController___ShowHintAfterDelay_d__10", modifiers: "&&", def_value: None }]
constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10(HMUI__HoverHintController___ShowHintAfterDelay_d__10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__HoverHintController___ShowHintAfterDelay_d__10(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10& operator=(HMUI__HoverHintController___ShowHintAfterDelay_d__10&& o) noexcept = default;
  constexpr HMUI__HoverHintController___ShowHintAfterDelay_d__10& operator=(HMUI__HoverHintController___ShowHintAfterDelay_d__10 const& o) noexcept = default;
                


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

 HMUI::HoverHint __declspec(property(get=__get_hoverHint, put=__set_hoverHint))  hoverHint;

constexpr void __set_hoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get_hoverHint() const;

 HMUI::HoverHintController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::HoverHintController value) ;

constexpr HMUI::HoverHintController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__HoverHintController___ShowHintAfterDelay_d__10(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fe45f0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fe4a0c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fe4a10 size 0xec virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fe4afc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fe4b04 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fe4b44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<HideHintAfterDelay>d__11
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13606))
// CS Name: HMUI.HoverHintController::<HideHintAfterDelay>d__11
class CORDL_TYPE HMUI__HoverHintController___HideHintAfterDelay_d__11 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~HMUI__HoverHintController___HideHintAfterDelay_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverHintController___HideHintAfterDelay_d__11", modifiers: " const&", def_value: None }]
constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11(HMUI__HoverHintController___HideHintAfterDelay_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__HoverHintController___HideHintAfterDelay_d__11", modifiers: "&&", def_value: None }]
constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11(HMUI__HoverHintController___HideHintAfterDelay_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__HoverHintController___HideHintAfterDelay_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11& operator=(HMUI__HoverHintController___HideHintAfterDelay_d__11&& o) noexcept = default;
  constexpr HMUI__HoverHintController___HideHintAfterDelay_d__11& operator=(HMUI__HoverHintController___HideHintAfterDelay_d__11 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::HoverHintController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::HoverHintController value) ;

constexpr HMUI::HoverHintController __get___4__this() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__HoverHintController___HideHintAfterDelay_d__11(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fe4618 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fe4b4c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fe4b50 size 0xcc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fe4c1c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fe4c24 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fe4c64 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::HoverHintController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13607))
// CS Name: HMUI.HoverHintController
class CORDL_TYPE HoverHintController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _HideHintAfterDelay_d__11 = HMUI::HMUI__HoverHintController___HideHintAfterDelay_d__11;

using _ShowHintAfterDelay_d__10 = HMUI::HMUI__HoverHintController___ShowHintAfterDelay_d__10;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HoverHintController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: " const&", def_value: None }]
constexpr HoverHintController(HoverHintController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "&&", def_value: None }]
constexpr HoverHintController(HoverHintController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoverHintController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HoverHintController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoverHintController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoverHintController& operator=(HoverHintController&& o) noexcept = default;
  constexpr HoverHintController& operator=(HoverHintController const& o) noexcept = default;
                


// Fields

 HMUI::HoverHintPanel __declspec(property(get=__get__hoverHintPanelPrefab, put=__set__hoverHintPanelPrefab))  _hoverHintPanelPrefab;

constexpr void __set__hoverHintPanelPrefab(HMUI::HoverHintPanel value) ;

constexpr HMUI::HoverHintPanel __get__hoverHintPanelPrefab() const;

/// @brief Field kShowHintDelay offset 0
static constexpr float_t  kShowHintDelay{0.6};

/// @brief Field kHideHintDelay offset 0
static constexpr float_t  kHideHintDelay{0.3};

 HMUI::HoverHintPanel __declspec(property(get=__get__hoverHintPanel, put=__set__hoverHintPanel))  _hoverHintPanel;

constexpr void __set__hoverHintPanel(HMUI::HoverHintPanel value) ;

constexpr HMUI::HoverHintPanel __get__hoverHintPanel() const;

 bool __declspec(property(get=__get__isHiding, put=__set__isHiding))  _isHiding;

constexpr void __set__isHiding(bool value) ;

constexpr bool __get__isHiding() const;


// Methods

/// @brief Method Awake addr 0x1fe42b4 size 0xa0 virtual false final false
 void Awake() ;

/// @brief Method OnApplicationFocus addr 0x1fe437c size 0x2c virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method ShowHint addr 0x1fe4014 size 0x94 virtual false final false
 void ShowHint(HMUI::HoverHint hoverHint) ;

/// @brief Method HideHint addr 0x1fe4198 size 0x44 virtual false final false
 void HideHint() ;

/// @brief Method HideHintInstant addr 0x1fe4164 size 0x34 virtual false final false
 void HideHintInstant() ;

/// @brief Method ShowHintAfterDelay addr 0x1fe44f4 size 0x84 virtual false final false
 System::Collections::IEnumerator ShowHintAfterDelay(HMUI::HoverHint hoverHint, float_t delay) ;

/// @brief Method HideHintAfterDelay addr 0x1fe4578 size 0x78 virtual false final false
 System::Collections::IEnumerator HideHintAfterDelay(float_t delay) ;

/// @brief Method SetupAndShowHintPanel addr 0x1fe43a8 size 0x14c virtual false final false
 void SetupAndShowHintPanel(HMUI::HoverHint hoverHint) ;

/// @brief Method GetScreenTransformForHoverHint addr 0x1fe4640 size 0x150 virtual false final false
static UnityEngine::Transform GetScreenTransformForHoverHint(HMUI::HoverHint hoverHint) ;

// Ctor Parameters []
explicit HoverHintController() ;

/// @brief Method .ctor addr 0x1fe4a04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__HoverHintController___HideHintAfterDelay_d__11);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__HoverHintController___HideHintAfterDelay_d__11, "HMUI", "HoverHintController/<HideHintAfterDelay>d__11");
NEED_NO_BOX(HMUI::HMUI__HoverHintController___ShowHintAfterDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__HoverHintController___ShowHintAfterDelay_d__10, "HMUI", "HoverHintController/<ShowHintAfterDelay>d__10");
NEED_NO_BOX(HMUI::HoverHintController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintController, "HMUI", "HoverHintController");
