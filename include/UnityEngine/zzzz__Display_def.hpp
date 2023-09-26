#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Display;
}
namespace UnityEngine {
class UnityEngine__Display__DisplaysUpdatedDelegate;
}
// Type: ::DisplaysUpdatedDelegate
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10089))
// CS Name: UnityEngine.Display::DisplaysUpdatedDelegate
class CORDL_TYPE UnityEngine__Display__DisplaysUpdatedDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Display__DisplaysUpdatedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Display__DisplaysUpdatedDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Display__DisplaysUpdatedDelegate(UnityEngine__Display__DisplaysUpdatedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Display__DisplaysUpdatedDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Display__DisplaysUpdatedDelegate(UnityEngine__Display__DisplaysUpdatedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Display__DisplaysUpdatedDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Display__DisplaysUpdatedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Display__DisplaysUpdatedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Display__DisplaysUpdatedDelegate& operator=(UnityEngine__Display__DisplaysUpdatedDelegate&& o) noexcept = default;
  constexpr UnityEngine__Display__DisplaysUpdatedDelegate& operator=(UnityEngine__Display__DisplaysUpdatedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Display__DisplaysUpdatedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b7e858 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b7e914 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Display
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10090))
// CS Name: UnityEngine.Display
class CORDL_TYPE Display : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DisplaysUpdatedDelegate = UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Display() = default;

// Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: " const&", def_value: None }]
constexpr Display(Display const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Display", modifiers: "&&", def_value: None }]
constexpr Display(Display&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Display(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Display& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Display& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Display& operator=(Display&& o) noexcept = default;
  constexpr Display& operator=(Display const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_nativeDisplay, put=__set_nativeDisplay))  nativeDisplay;

constexpr void __set_nativeDisplay(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_nativeDisplay() const;

static ::ArrayW<UnityEngine::Display> __declspec(property(get=__get_displays, put=__set_displays))  displays;

static void __set_displays(::ArrayW<UnityEngine::Display> value) ;

static ::ArrayW<UnityEngine::Display> __get_displays() ;

static UnityEngine::Display __declspec(property(get=__get__mainDisplay, put=__set__mainDisplay))  _mainDisplay;

static void __set__mainDisplay(UnityEngine::Display value) ;

static UnityEngine::Display __get__mainDisplay() ;

static int32_t __declspec(property(get=__get_m_ActiveEditorGameViewTarget, put=__set_m_ActiveEditorGameViewTarget))  m_ActiveEditorGameViewTarget;

static void __set_m_ActiveEditorGameViewTarget(int32_t value) ;

static int32_t __get_m_ActiveEditorGameViewTarget() ;

static UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate __declspec(property(get=__get_onDisplaysUpdated, put=__set_onDisplaysUpdated))  onDisplaysUpdated;

static void __set_onDisplaysUpdated(UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate value) ;

static UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate __get_onDisplaysUpdated() ;


// Properties

 int32_t __declspec(property(get=get_renderingWidth))  renderingWidth;

 int32_t __declspec(property(get=get_renderingHeight))  renderingHeight;

 int32_t __declspec(property(get=get_systemWidth))  systemWidth;

 int32_t __declspec(property(get=get_systemHeight))  systemHeight;

static UnityEngine::Display __declspec(property(get=get_main))  main;


// Methods

// Ctor Parameters []
explicit Display() ;

/// @brief Method .ctor addr 0x2b7e088 size 0x3c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "nativeDisplay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Display(::cordl_internals::intptr_t nativeDisplay) ;

/// @brief Method .ctor addr 0x2b7e0c4 size 0x28 virtual false final false
 void _ctor(::cordl_internals::intptr_t nativeDisplay) ;

/// @brief Method get_renderingWidth addr 0x2b7e0ec size 0x94 virtual false final false
 int32_t get_renderingWidth() ;

/// @brief Method get_renderingHeight addr 0x2b7e1d4 size 0x94 virtual false final false
 int32_t get_renderingHeight() ;

/// @brief Method get_systemWidth addr 0x2b7e268 size 0x94 virtual false final false
 int32_t get_systemWidth() ;

/// @brief Method get_systemHeight addr 0x2b7e350 size 0x94 virtual false final false
 int32_t get_systemHeight() ;

/// @brief Method RelativeMouseAt addr 0x2b7e3e4 size 0xd0 virtual false final false
static UnityEngine::Vector3 RelativeMouseAt(UnityEngine::Vector3 inputMouseCoordinates) ;

/// @brief Method get_main addr 0x2b7e510 size 0x58 virtual false final false
static UnityEngine::Display get_main() ;

/// @brief Method RecreateDisplayList addr 0x2b7e568 size 0x14c virtual false final false
static void RecreateDisplayList(::ArrayW<::cordl_internals::intptr_t> nativeDisplay) ;

/// @brief Method FireDisplaysUpdated addr 0x2b7e6b4 size 0x94 virtual false final false
static void FireDisplaysUpdated() ;

/// @brief Method GetSystemExtImpl addr 0x2b7e2fc size 0x54 virtual false final false
static void GetSystemExtImpl(::cordl_internals::intptr_t nativeDisplay, ByRef<int32_t> w, ByRef<int32_t> h) ;

/// @brief Method GetRenderingExtImpl addr 0x2b7e180 size 0x54 virtual false final false
static void GetRenderingExtImpl(::cordl_internals::intptr_t nativeDisplay, ByRef<int32_t> w, ByRef<int32_t> h) ;

/// @brief Method RelativeMouseAtImpl addr 0x2b7e4b4 size 0x5c virtual false final false
static int32_t RelativeMouseAtImpl(int32_t x, int32_t y, ByRef<int32_t> rx, ByRef<int32_t> ry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Display);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Display, "UnityEngine", "Display");
NEED_NO_BOX(UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Display__DisplaysUpdatedDelegate, "UnityEngine", "Display/DisplaysUpdatedDelegate");
