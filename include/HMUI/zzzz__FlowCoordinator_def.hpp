#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace HMUI {
struct HMUI__ViewController__AnimationDirection;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
class ScreenSystem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass37_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass38_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass39_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass40_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass41_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass43_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass44_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass47_0;
}
namespace HMUI {
class HMUI__FlowCoordinator____c__DisplayClass48_0;
}
// Type: ::<>c__DisplayClass37_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13643))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass37_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass37_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMUI__FlowCoordinator____c__DisplayClass37_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass37_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass37_0(HMUI__FlowCoordinator____c__DisplayClass37_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass37_0(HMUI__FlowCoordinator____c__DisplayClass37_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass37_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass37_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass37_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass37_0& operator=(HMUI__FlowCoordinator____c__DisplayClass37_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass37_0& operator=(HMUI__FlowCoordinator____c__DisplayClass37_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::FlowCoordinator __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator))  flowCoordinator;

constexpr void __set_flowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get_flowCoordinator() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass37_0() ;

/// @brief Method .ctor addr 0x1feeb08 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PresentFlowCoordinator>b__1 addr 0x1ff0330 size 0x78 virtual false final false
 void _PresentFlowCoordinator_b__1() ;

/// @brief Method <PresentFlowCoordinator>b__0 addr 0x1ff03a8 size 0x78 virtual false final false
 void _PresentFlowCoordinator_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass38_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13644))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass38_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass38_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HMUI__FlowCoordinator____c__DisplayClass38_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass38_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass38_0(HMUI__FlowCoordinator____c__DisplayClass38_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass38_0(HMUI__FlowCoordinator____c__DisplayClass38_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass38_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass38_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass38_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass38_0& operator=(HMUI__FlowCoordinator____c__DisplayClass38_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass38_0& operator=(HMUI__FlowCoordinator____c__DisplayClass38_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_viewController() const;

 HMUI::FlowCoordinator __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator))  flowCoordinator;

constexpr void __set_flowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get_flowCoordinator() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass38_0() ;

/// @brief Method .ctor addr 0x1fef0f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DismissFlowCoordinator>b__0 addr 0x1ff0420 size 0x9c virtual false final false
 void _DismissFlowCoordinator_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass39_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13645))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass39_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass39_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass39_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass39_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass39_0(HMUI__FlowCoordinator____c__DisplayClass39_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass39_0(HMUI__FlowCoordinator____c__DisplayClass39_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass39_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass39_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass39_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass39_0& operator=(HMUI__FlowCoordinator____c__DisplayClass39_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass39_0& operator=(HMUI__FlowCoordinator____c__DisplayClass39_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::FlowCoordinator __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator))  flowCoordinator;

constexpr void __set_flowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get_flowCoordinator() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 HMUI::FlowCoordinator __declspec(property(get=__get_flowCoordinatorToReplace, put=__set_flowCoordinatorToReplace))  flowCoordinatorToReplace;

constexpr void __set_flowCoordinatorToReplace(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get_flowCoordinatorToReplace() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass39_0() ;

/// @brief Method .ctor addr 0x1fef410 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReplaceChildFlowCoordinator>b__0 addr 0x1ff04bc size 0xa0 virtual false final false
 void _ReplaceChildFlowCoordinator_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass40_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13646))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass40_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass40_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass40_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass40_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass40_0(HMUI__FlowCoordinator____c__DisplayClass40_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass40_0(HMUI__FlowCoordinator____c__DisplayClass40_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass40_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass40_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass40_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass40_0& operator=(HMUI__FlowCoordinator____c__DisplayClass40_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass40_0& operator=(HMUI__FlowCoordinator____c__DisplayClass40_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get_topViewController, put=__set_topViewController))  topViewController;

constexpr void __set_topViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_topViewController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass40_0() ;

/// @brief Method .ctor addr 0x1fef418 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PresentViewController>b__0 addr 0x1ff055c size 0x80 virtual false final false
 void _PresentViewController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass41_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13647))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass41_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass41_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass41_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass41_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass41_0(HMUI__FlowCoordinator____c__DisplayClass41_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass41_0(HMUI__FlowCoordinator____c__DisplayClass41_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass41_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass41_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass41_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass41_0& operator=(HMUI__FlowCoordinator____c__DisplayClass41_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass41_0& operator=(HMUI__FlowCoordinator____c__DisplayClass41_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get_newTopViewController, put=__set_newTopViewController))  newTopViewController;

constexpr void __set_newTopViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_newTopViewController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass41_0() ;

/// @brief Method .ctor addr 0x1fef5f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DismissViewController>b__0 addr 0x1ff05dc size 0x80 virtual false final false
 void _DismissViewController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass43_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13648))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass43_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass43_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass43_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass43_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass43_0(HMUI__FlowCoordinator____c__DisplayClass43_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass43_0(HMUI__FlowCoordinator____c__DisplayClass43_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass43_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass43_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass43_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass43_0& operator=(HMUI__FlowCoordinator____c__DisplayClass43_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass43_0& operator=(HMUI__FlowCoordinator____c__DisplayClass43_0 const& o) noexcept = default;
                


// Fields

 HMUI::HMUI__ViewController__AnimationType __declspec(property(get=__get_animationType, put=__set_animationType))  animationType;

constexpr void __set_animationType(HMUI::HMUI__ViewController__AnimationType value) ;

constexpr HMUI::HMUI__ViewController__AnimationType __get_animationType() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get_originalTopViewController, put=__set_originalTopViewController))  originalTopViewController;

constexpr void __set_originalTopViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_originalTopViewController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass43_0() ;

/// @brief Method .ctor addr 0x1fef6dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReplaceTopViewController>b__0 addr 0x1ff065c size 0x80 virtual false final false
 void _ReplaceTopViewController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass44_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13649))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass44_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass44_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass44_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass44_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass44_0(HMUI__FlowCoordinator____c__DisplayClass44_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass44_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass44_0(HMUI__FlowCoordinator____c__DisplayClass44_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass44_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass44_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass44_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass44_0& operator=(HMUI__FlowCoordinator____c__DisplayClass44_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass44_0& operator=(HMUI__FlowCoordinator____c__DisplayClass44_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_viewController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass44_0() ;

/// @brief Method .ctor addr 0x1fef810 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PushViewControllerToNavigationController>b__0 addr 0x1ff06dc size 0x80 virtual false final false
 void _PushViewControllerToNavigationController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass47_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13650))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass47_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass47_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass47_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass47_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass47_0(HMUI__FlowCoordinator____c__DisplayClass47_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass47_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass47_0(HMUI__FlowCoordinator____c__DisplayClass47_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass47_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass47_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass47_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass47_0& operator=(HMUI__FlowCoordinator____c__DisplayClass47_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass47_0& operator=(HMUI__FlowCoordinator____c__DisplayClass47_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::NavigationController __declspec(property(get=__get_navigationController, put=__set_navigationController))  navigationController;

constexpr void __set_navigationController(HMUI::NavigationController value) ;

constexpr HMUI::NavigationController __get_navigationController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass47_0() ;

/// @brief Method .ctor addr 0x1fefa4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PopViewControllerFromNavigationController>b__0 addr 0x1ff075c size 0x80 virtual false final false
 void _PopViewControllerFromNavigationController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass48_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13651))
// CS Name: HMUI.FlowCoordinator::<>c__DisplayClass48_0
class CORDL_TYPE HMUI__FlowCoordinator____c__DisplayClass48_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__FlowCoordinator____c__DisplayClass48_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass48_0", modifiers: " const&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass48_0(HMUI__FlowCoordinator____c__DisplayClass48_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__FlowCoordinator____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
constexpr HMUI__FlowCoordinator____c__DisplayClass48_0(HMUI__FlowCoordinator____c__DisplayClass48_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__FlowCoordinator____c__DisplayClass48_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__FlowCoordinator____c__DisplayClass48_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass48_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__FlowCoordinator____c__DisplayClass48_0& operator=(HMUI__FlowCoordinator____c__DisplayClass48_0&& o) noexcept = default;
  constexpr HMUI__FlowCoordinator____c__DisplayClass48_0& operator=(HMUI__FlowCoordinator____c__DisplayClass48_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::FlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::NavigationController __declspec(property(get=__get_navigationController, put=__set_navigationController))  navigationController;

constexpr void __set_navigationController(HMUI::NavigationController value) ;

constexpr HMUI::NavigationController __get_navigationController() const;


// Methods

// Ctor Parameters []
explicit HMUI__FlowCoordinator____c__DisplayClass48_0() ;

/// @brief Method .ctor addr 0x1fefb94 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PopViewControllersFromNavigationController>b__0 addr 0x1ff07dc size 0x80 virtual false final false
 void _PopViewControllersFromNavigationController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::FlowCoordinator
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13652))
// CS Name: HMUI.FlowCoordinator
class CORDL_TYPE FlowCoordinator : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass48_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass48_0;

using __c__DisplayClass47_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass47_0;

using __c__DisplayClass44_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass44_0;

using __c__DisplayClass43_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass43_0;

using __c__DisplayClass41_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass41_0;

using __c__DisplayClass40_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass40_0;

using __c__DisplayClass39_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass39_0;

using __c__DisplayClass38_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass38_0;

using __c__DisplayClass37_0 = HMUI::HMUI__FlowCoordinator____c__DisplayClass37_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~FlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: " const&", def_value: None }]
constexpr FlowCoordinator(FlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: "&&", def_value: None }]
constexpr FlowCoordinator(FlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlowCoordinator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlowCoordinator& operator=(FlowCoordinator&& o) noexcept = default;
  constexpr FlowCoordinator& operator=(FlowCoordinator const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::BaseInputModule __declspec(property(get=__get__baseInputModule, put=__set__baseInputModule))  _baseInputModule;

constexpr void __set__baseInputModule(UnityEngine::EventSystems::BaseInputModule value) ;

constexpr UnityEngine::EventSystems::BaseInputModule __get__baseInputModule() const;

 HMUI::ScreenSystem __declspec(property(get=__get__screenSystem, put=__set__screenSystem))  _screenSystem;

constexpr void __set__screenSystem(HMUI::ScreenSystem value) ;

constexpr HMUI::ScreenSystem __get__screenSystem() const;

 HMUI::FlowCoordinator __declspec(property(get=__get__parentFlowCoordinator, put=__set__parentFlowCoordinator))  _parentFlowCoordinator;

constexpr void __set__parentFlowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get__parentFlowCoordinator() const;

 HMUI::FlowCoordinator __declspec(property(get=__get__childFlowCoordinator, put=__set__childFlowCoordinator))  _childFlowCoordinator;

constexpr void __set__childFlowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get__childFlowCoordinator() const;

 System::Collections::Generic::List_1<HMUI::ViewController> __declspec(property(get=__get__mainScreenViewControllers, put=__set__mainScreenViewControllers))  _mainScreenViewControllers;

constexpr void __set__mainScreenViewControllers(System::Collections::Generic::List_1<HMUI::ViewController> value) ;

constexpr System::Collections::Generic::List_1<HMUI::ViewController> __get__mainScreenViewControllers() const;

 HMUI::ViewController __declspec(property(get=__get__leftScreenViewController, put=__set__leftScreenViewController))  _leftScreenViewController;

constexpr void __set__leftScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__leftScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__rightScreenViewController, put=__set__rightScreenViewController))  _rightScreenViewController;

constexpr void __set__rightScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__rightScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__bottomScreenViewController, put=__set__bottomScreenViewController))  _bottomScreenViewController;

constexpr void __set__bottomScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__bottomScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__topScreenViewController, put=__set__topScreenViewController))  _topScreenViewController;

constexpr void __set__topScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__topScreenViewController() const;

 bool __declspec(property(get=__get__wasActivatedBefore, put=__set__wasActivatedBefore))  _wasActivatedBefore;

constexpr void __set__wasActivatedBefore(bool value) ;

constexpr bool __get__wasActivatedBefore() const;

 ::StringW __declspec(property(get=__get__title, put=__set__title))  _title;

constexpr void __set__title(::StringW value) ;

constexpr ::StringW __get__title() const;

 HMUI::ViewController __declspec(property(get=__get__providedMainViewController, put=__set__providedMainViewController))  _providedMainViewController;

constexpr void __set__providedMainViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__providedMainViewController() const;

 HMUI::ViewController __declspec(property(get=__get__providedLeftScreenViewController, put=__set__providedLeftScreenViewController))  _providedLeftScreenViewController;

constexpr void __set__providedLeftScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__providedLeftScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__providedRightScreenViewController, put=__set__providedRightScreenViewController))  _providedRightScreenViewController;

constexpr void __set__providedRightScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__providedRightScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__providedBottomScreenViewController, put=__set__providedBottomScreenViewController))  _providedBottomScreenViewController;

constexpr void __set__providedBottomScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__providedBottomScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__providedTopScreenViewController, put=__set__providedTopScreenViewController))  _providedTopScreenViewController;

constexpr void __set__providedTopScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__providedTopScreenViewController() const;

 bool __declspec(property(get=__get__viewControllersWereProvided, put=__set__viewControllersWereProvided))  _viewControllersWereProvided;

constexpr void __set__viewControllersWereProvided(bool value) ;

constexpr bool __get__viewControllersWereProvided() const;

 bool __declspec(property(get=__get__isInDidActivatePhase, put=__set__isInDidActivatePhase))  _isInDidActivatePhase;

constexpr void __set__isInDidActivatePhase(bool value) ;

constexpr bool __get__isInDidActivatePhase() const;

 bool __declspec(property(get=__get__isActivated, put=__set__isActivated))  _isActivated;

constexpr void __set__isActivated(bool value) ;

constexpr bool __get__isActivated() const;

 bool __declspec(property(get=__get__isInTransition, put=__set__isInTransition))  _isInTransition;

constexpr void __set__isInTransition(bool value) ;

constexpr bool __get__isInTransition() const;

 bool __declspec(property(get=__get__showBackButton, put=__set__showBackButton))  _showBackButton;

constexpr void __set__showBackButton(bool value) ;

constexpr bool __get__showBackButton() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get__prevEventSystem, put=__set__prevEventSystem))  _prevEventSystem;

constexpr void __set__prevEventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get__prevEventSystem() const;


// Properties

 HMUI::ViewController __declspec(property(get=get_topViewController))  topViewController;

 HMUI::FlowCoordinator __declspec(property(get=get_childFlowCoordinator))  childFlowCoordinator;

 bool __declspec(property(get=get_isActivated))  isActivated;

 bool __declspec(property(get=get_isInTransition))  isInTransition;

 ::StringW __declspec(property(get=get_title))  title;

 bool __declspec(property(get=get_showBackButton, put=set_showBackButton))  showBackButton;


// Methods

/// @brief Method get_topViewController addr 0x1fedc1c size 0x78 virtual false final false
 HMUI::ViewController get_topViewController() ;

/// @brief Method get_childFlowCoordinator addr 0x1fedc94 size 0x8 virtual false final false
 HMUI::FlowCoordinator get_childFlowCoordinator() ;

/// @brief Method get_isActivated addr 0x1fedc9c size 0x8 virtual false final false
 bool get_isActivated() ;

/// @brief Method get_isInTransition addr 0x1fedca4 size 0x8 virtual false final false
 bool get_isInTransition() ;

/// @brief Method get_title addr 0x1fedcac size 0x8 virtual false final false
 ::StringW get_title() ;

/// @brief Method SetTitle addr 0x1fedcb4 size 0x50 virtual false final false
 void SetTitle(::StringW value, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method set_showBackButton addr 0x1fede14 size 0xc virtual false final false
 void set_showBackButton(bool value) ;

/// @brief Method get_showBackButton addr 0x1fede20 size 0x8 virtual false final false
 bool get_showBackButton() ;

/// @brief Method __StartOnScreenSystem addr 0x1fede28 size 0x150 virtual false final false
 void __StartOnScreenSystem(HMUI::ScreenSystem screenSystem) ;

/// @brief Method PresentFlowCoordinator addr 0x1fee750 size 0x3b8 virtual false final false
 void PresentFlowCoordinator(HMUI::FlowCoordinator flowCoordinator, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately, bool replaceTopViewController) ;

/// @brief Method DismissFlowCoordinator addr 0x1feede4 size 0x30c virtual false final false
 void DismissFlowCoordinator(HMUI::FlowCoordinator flowCoordinator, HMUI::HMUI__ViewController__AnimationDirection animationDirection, System::Action finishedCallback, bool immediately) ;

/// @brief Method ReplaceChildFlowCoordinator addr 0x1fef118 size 0x2f8 virtual false final false
 void ReplaceChildFlowCoordinator(HMUI::FlowCoordinator flowCoordinator, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method PresentViewController addr 0x1fee3a4 size 0x3ac virtual false final false
 void PresentViewController(HMUI::ViewController viewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method DismissViewController addr 0x1fef420 size 0x1d8 virtual false final false
 void DismissViewController(HMUI::ViewController viewController, HMUI::HMUI__ViewController__AnimationDirection animationDirection, System::Action finishedCallback, bool immediately) ;

/// @brief Method ReplaceTopViewController addr 0x1fef600 size 0xdc virtual false final false
 void ReplaceTopViewController(HMUI::ViewController viewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationType animationType, HMUI::HMUI__ViewController__AnimationDirection animationDirection) ;

/// @brief Method ReplaceTopViewController addr 0x1feebc8 size 0x21c virtual false final false
 void ReplaceTopViewController(HMUI::ViewController viewController, HMUI::FlowCoordinator originalOwnerFlowCoordinator, HMUI::FlowCoordinator newOwnerFlowCoordinator, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationType animationType, HMUI::HMUI__ViewController__AnimationDirection animationDirection) ;

/// @brief Method PushViewControllerToNavigationController addr 0x1fef6e4 size 0x12c virtual false final false
 void PushViewControllerToNavigationController(HMUI::NavigationController navigationController, HMUI::ViewController viewController, System::Action finishedCallback, bool immediately) ;

/// @brief Method SetViewControllersToNavigationController addr 0x1fef8f4 size 0x18 virtual false final false
 void SetViewControllersToNavigationController(HMUI::NavigationController navigationController, ::ArrayW<HMUI::ViewController> viewControllers) ;

/// @brief Method SetViewControllerToNavigationController addr 0x1fef90c size 0x18 virtual false final false
 void SetViewControllerToNavigationController(HMUI::NavigationController navigationController, HMUI::ViewController viewController) ;

/// @brief Method PopViewControllerFromNavigationController addr 0x1fef924 size 0x128 virtual false final false
 void PopViewControllerFromNavigationController(HMUI::NavigationController navigationController, System::Action finishedCallback, bool immediately) ;

/// @brief Method PopViewControllersFromNavigationController addr 0x1fefa68 size 0x12c virtual false final false
 void PopViewControllersFromNavigationController(HMUI::NavigationController navigationController, int32_t numberOfControllers, System::Action finishedCallback, bool immediately) ;

/// @brief Method SetLeftScreenViewController addr 0x1fee044 size 0xd8 virtual false final false
 void SetLeftScreenViewController(HMUI::ViewController viewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method SetRightScreenViewController addr 0x1fee11c size 0xd8 virtual false final false
 void SetRightScreenViewController(HMUI::ViewController viewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method SetBottomScreenViewController addr 0x1fee1f4 size 0xd8 virtual false final false
 void SetBottomScreenViewController(HMUI::ViewController viewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method SetTopScreenViewController addr 0x1fee2cc size 0xd8 virtual false final false
 void SetTopScreenViewController(HMUI::ViewController viewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method PresentTitle addr 0x1fedda4 size 0x70 virtual false final false
 void PresentTitle(::StringW title, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method IsFlowCoordinatorInHierarchy addr 0x1fedd04 size 0xa0 virtual false final false
 bool IsFlowCoordinatorInHierarchy(HMUI::FlowCoordinator flowCoordinator) ;

/// @brief Method YoungestChildFlowCoordinatorOrSelf addr 0x1fefd80 size 0x7c virtual false final false
 HMUI::FlowCoordinator YoungestChildFlowCoordinatorOrSelf() ;

/// @brief Method ProvideInitialViewControllers addr 0x1fefdfc size 0x18 virtual false final false
 void ProvideInitialViewControllers(HMUI::ViewController mainViewController, HMUI::ViewController leftScreenViewController, HMUI::ViewController rightScreenViewController, HMUI::ViewController bottomScreenViewController, HMUI::ViewController topScreenViewController) ;

/// @brief Method Activate addr 0x1fedf78 size 0xcc virtual false final false
 void Activate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method Deactivate addr 0x1feeb10 size 0xb8 virtual false final false
 void Deactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method __ExternalActivate addr 0x1fefe14 size 0x1f8 virtual false final false
 void __ExternalActivate() ;

/// @brief Method __ExternalDeactivate addr 0x1ff000c size 0x208 virtual false final false
 void __ExternalDeactivate() ;

/// @brief Method HandleScreenSystemBackButtonWasPressed addr 0x1ff0214 size 0x24 virtual false final false
 void HandleScreenSystemBackButtonWasPressed() ;

/// @brief Method SetGlobalUserInteraction addr 0x1fef0f8 size 0x20 virtual false final false
 void SetGlobalUserInteraction(bool value) ;

/// @brief Method DidActivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x1ff0238 size 0x4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method TransitionDidStart addr 0x1ff023c size 0xc virtual true final false
 void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x1ff0248 size 0x8 virtual true final false
 void TransitionDidFinish() ;

/// @brief Method TopViewControllerWillChange addr 0x1ff0250 size 0x4 virtual true final false
 void TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method InitialViewControllerWasPresented addr 0x1ff0254 size 0x4 virtual true final false
 void InitialViewControllerWasPresented() ;

/// @brief Method BackButtonWasPressed addr 0x1ff0258 size 0x4 virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

/// @brief Method Log addr 0x1ff025c size 0x58 virtual false final false
static void Log(::StringW message) ;

// Ctor Parameters []
explicit FlowCoordinator() ;

/// @brief Method .ctor addr 0x1ff02b4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::FlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator, "HMUI", "FlowCoordinator");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass37_0, "HMUI", "FlowCoordinator/<>c__DisplayClass37_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass38_0, "HMUI", "FlowCoordinator/<>c__DisplayClass38_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass39_0, "HMUI", "FlowCoordinator/<>c__DisplayClass39_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass40_0, "HMUI", "FlowCoordinator/<>c__DisplayClass40_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass41_0, "HMUI", "FlowCoordinator/<>c__DisplayClass41_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass43_0, "HMUI", "FlowCoordinator/<>c__DisplayClass43_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass44_0, "HMUI", "FlowCoordinator/<>c__DisplayClass44_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass47_0, "HMUI", "FlowCoordinator/<>c__DisplayClass47_0");
NEED_NO_BOX(HMUI::HMUI__FlowCoordinator____c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__FlowCoordinator____c__DisplayClass48_0, "HMUI", "FlowCoordinator/<>c__DisplayClass48_0");
