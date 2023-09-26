#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIEventRegistration;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIEventRegistration____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7005))
// CS Name: UnityEngine.UIElements.UIEventRegistration::<>c
class CORDL_TYPE UnityEngine__UIElements__UIEventRegistration____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIEventRegistration____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIEventRegistration____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIEventRegistration____c(UnityEngine__UIElements__UIEventRegistration____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIEventRegistration____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIEventRegistration____c(UnityEngine__UIElements__UIEventRegistration____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIEventRegistration____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIEventRegistration____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIEventRegistration____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIEventRegistration____c& operator=(UnityEngine__UIElements__UIEventRegistration____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIEventRegistration____c& operator=(UnityEngine__UIElements__UIEventRegistration____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UIEventRegistration____c() ;

/// @brief Method .ctor addr 0x2cb7398 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__1_0 addr 0x2cb73a0 size 0x4c virtual false final false
 void __cctor_b__1_0() ;

/// @brief Method <.cctor>b__1_1 addr 0x2cb73ec size 0x4c virtual false final false
 void __cctor_b__1_1() ;

/// @brief Method <.cctor>b__1_2 addr 0x2cb7438 size 0x64 virtual false final false
 bool __cctor_b__1_2(int32_t i, ::cordl_internals::intptr_t ptr) ;

/// @brief Method <.cctor>b__1_3 addr 0x2cb749c size 0x4c virtual false final false
 void __cctor_b__1_3() ;

/// @brief Method <.cctor>b__1_4 addr 0x2cb74e8 size 0x54 virtual false final false
 bool __cctor_b__1_4(System::Exception exception) ;

/// @brief Method <.cctor>b__1_5 addr 0x2cb753c size 0x4c virtual false final false
 void __cctor_b__1_5() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIEventRegistration
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7006))
// CS Name: UnityEngine.UIElements.UIEventRegistration
class CORDL_TYPE UIEventRegistration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIEventRegistration() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration", modifiers: " const&", def_value: None }]
constexpr UIEventRegistration(UIEventRegistration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIEventRegistration", modifiers: "&&", def_value: None }]
constexpr UIEventRegistration(UIEventRegistration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIEventRegistration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIEventRegistration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIEventRegistration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIEventRegistration& operator=(UIEventRegistration&& o) noexcept = default;
  constexpr UIEventRegistration& operator=(UIEventRegistration const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::UIElements::IUIElementsUtility> __declspec(property(get=__get_s_Utilities, put=__set_s_Utilities))  s_Utilities;

static void __set_s_Utilities(System::Collections::Generic::List_1<UnityEngine::UIElements::IUIElementsUtility> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::IUIElementsUtility> __get_s_Utilities() ;


// Methods

/// @brief Method RegisterUIElementSystem addr 0x2cb6708 size 0x84 virtual false final false
static void RegisterUIElementSystem(UnityEngine::UIElements::IUIElementsUtility utility) ;

/// @brief Method TakeCapture addr 0x2cb678c size 0x1d8 virtual false final false
static void TakeCapture() ;

/// @brief Method ReleaseCapture addr 0x2cb6964 size 0x1dc virtual false final false
static void ReleaseCapture() ;

/// @brief Method EndContainerGUIFromException addr 0x2cb6b40 size 0x218 virtual false final false
static bool EndContainerGUIFromException(System::Exception exception) ;

/// @brief Method ProcessEvent addr 0x2cb6d58 size 0x224 virtual false final false
static bool ProcessEvent(int32_t instanceID, ::cordl_internals::intptr_t nativeEventPtr) ;

/// @brief Method CleanupRoots addr 0x2cb6f7c size 0x1dc virtual false final false
static void CleanupRoots() ;

/// @brief Method MakeCurrentIMGUIContainerDirty addr 0x2cb7158 size 0x1dc virtual false final false
static void MakeCurrentIMGUIContainerDirty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIEventRegistration);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIEventRegistration, "UnityEngine.UIElements", "UIEventRegistration");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UIEventRegistration____c, "UnityEngine.UIElements", "UIEventRegistration/<>c");
