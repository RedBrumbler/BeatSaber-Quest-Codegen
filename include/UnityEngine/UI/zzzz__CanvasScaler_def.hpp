#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__CanvasScaler__ScaleMode;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__CanvasScaler__ScreenMatchMode;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__CanvasScaler__Unit;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
// Type: ::ScaleMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13030))
// CS Name: UnityEngine.UI.CanvasScaler::ScaleMode
struct CORDL_TYPE UnityEngine__UI__CanvasScaler__ScaleMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__CanvasScaler__ScaleMode(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__CanvasScaler__ScaleMode(UnityEngine__UI__CanvasScaler__ScaleMode const&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__ScaleMode(UnityEngine__UI__CanvasScaler__ScaleMode&&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__ScaleMode& operator=(UnityEngine__UI__CanvasScaler__ScaleMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__CanvasScaler__ScaleMode& operator=(UnityEngine__UI__CanvasScaler__ScaleMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CanvasScaler__ScaleMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped : int32_t {
__ConstantPixelSize = 0,
__ScaleWithScreenSize = 1,
__ConstantPhysicalSize = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ConstantPixelSize offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode const ConstantPixelSize;

/// @brief Field ScaleWithScreenSize offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode const ScaleWithScreenSize;

/// @brief Field ConstantPhysicalSize offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode const ConstantPhysicalSize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ScreenMatchMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13031))
// CS Name: UnityEngine.UI.CanvasScaler::ScreenMatchMode
struct CORDL_TYPE UnityEngine__UI__CanvasScaler__ScreenMatchMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__CanvasScaler__ScreenMatchMode(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__CanvasScaler__ScreenMatchMode(UnityEngine__UI__CanvasScaler__ScreenMatchMode const&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__ScreenMatchMode(UnityEngine__UI__CanvasScaler__ScreenMatchMode&&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__ScreenMatchMode& operator=(UnityEngine__UI__CanvasScaler__ScreenMatchMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__CanvasScaler__ScreenMatchMode& operator=(UnityEngine__UI__CanvasScaler__ScreenMatchMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CanvasScaler__ScreenMatchMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped : int32_t {
__MatchWidthOrHeight = 0,
__Expand = 1,
__Shrink = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MatchWidthOrHeight offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode const MatchWidthOrHeight;

/// @brief Field Expand offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode const Expand;

/// @brief Field Shrink offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode const Shrink;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Unit
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13032))
// CS Name: UnityEngine.UI.CanvasScaler::Unit
struct CORDL_TYPE UnityEngine__UI__CanvasScaler__Unit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__CanvasScaler__Unit(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__CanvasScaler__Unit(UnityEngine__UI__CanvasScaler__Unit const&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__Unit(UnityEngine__UI__CanvasScaler__Unit&&) = default;
                    constexpr UnityEngine__UI__CanvasScaler__Unit& operator=(UnityEngine__UI__CanvasScaler__Unit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__CanvasScaler__Unit& operator=(UnityEngine__UI__CanvasScaler__Unit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CanvasScaler__Unit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__CanvasScaler__Unit_Unwrapped : int32_t {
__Centimeters = 0,
__Millimeters = 1,
__Inches = 2,
__Points = 3,
__Picas = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__CanvasScaler__Unit_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__CanvasScaler__Unit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Centimeters offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit const Centimeters;

/// @brief Field Millimeters offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit const Millimeters;

/// @brief Field Inches offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit const Inches;

/// @brief Field Points offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit const Points;

/// @brief Field Picas offset 0
static UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit const Picas;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::CanvasScaler
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13172))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13033))
// CS Name: UnityEngine.UI.CanvasScaler
class CORDL_TYPE CanvasScaler : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using Unit = UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit;

using ScreenMatchMode = UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode;

using ScaleMode = UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~CanvasScaler() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: " const&", def_value: None }]
constexpr CanvasScaler(CanvasScaler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "&&", def_value: None }]
constexpr CanvasScaler(CanvasScaler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasScaler(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr CanvasScaler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasScaler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasScaler& operator=(CanvasScaler&& o) noexcept = default;
  constexpr CanvasScaler& operator=(CanvasScaler const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode __declspec(property(get=__get_m_UiScaleMode, put=__set_m_UiScaleMode))  m_UiScaleMode;

constexpr void __set_m_UiScaleMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode value) ;

constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode __get_m_UiScaleMode() const;

 float_t __declspec(property(get=__get_m_ReferencePixelsPerUnit, put=__set_m_ReferencePixelsPerUnit))  m_ReferencePixelsPerUnit;

constexpr void __set_m_ReferencePixelsPerUnit(float_t value) ;

constexpr float_t __get_m_ReferencePixelsPerUnit() const;

 float_t __declspec(property(get=__get_m_ScaleFactor, put=__set_m_ScaleFactor))  m_ScaleFactor;

constexpr void __set_m_ScaleFactor(float_t value) ;

constexpr float_t __get_m_ScaleFactor() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_ReferenceResolution, put=__set_m_ReferenceResolution))  m_ReferenceResolution;

constexpr void __set_m_ReferenceResolution(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_ReferenceResolution() const;

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode __declspec(property(get=__get_m_ScreenMatchMode, put=__set_m_ScreenMatchMode))  m_ScreenMatchMode;

constexpr void __set_m_ScreenMatchMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode value) ;

constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode __get_m_ScreenMatchMode() const;

 float_t __declspec(property(get=__get_m_MatchWidthOrHeight, put=__set_m_MatchWidthOrHeight))  m_MatchWidthOrHeight;

constexpr void __set_m_MatchWidthOrHeight(float_t value) ;

constexpr float_t __get_m_MatchWidthOrHeight() const;

/// @brief Field kLogBase offset 0
static constexpr float_t  kLogBase{2};

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit __declspec(property(get=__get_m_PhysicalUnit, put=__set_m_PhysicalUnit))  m_PhysicalUnit;

constexpr void __set_m_PhysicalUnit(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit value) ;

constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit __get_m_PhysicalUnit() const;

 float_t __declspec(property(get=__get_m_FallbackScreenDPI, put=__set_m_FallbackScreenDPI))  m_FallbackScreenDPI;

constexpr void __set_m_FallbackScreenDPI(float_t value) ;

constexpr float_t __get_m_FallbackScreenDPI() const;

 float_t __declspec(property(get=__get_m_DefaultSpriteDPI, put=__set_m_DefaultSpriteDPI))  m_DefaultSpriteDPI;

constexpr void __set_m_DefaultSpriteDPI(float_t value) ;

constexpr float_t __get_m_DefaultSpriteDPI() const;

 float_t __declspec(property(get=__get_m_DynamicPixelsPerUnit, put=__set_m_DynamicPixelsPerUnit))  m_DynamicPixelsPerUnit;

constexpr void __set_m_DynamicPixelsPerUnit(float_t value) ;

constexpr float_t __get_m_DynamicPixelsPerUnit() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;

 float_t __declspec(property(get=__get_m_PrevScaleFactor, put=__set_m_PrevScaleFactor))  m_PrevScaleFactor;

constexpr void __set_m_PrevScaleFactor(float_t value) ;

constexpr float_t __get_m_PrevScaleFactor() const;

 float_t __declspec(property(get=__get_m_PrevReferencePixelsPerUnit, put=__set_m_PrevReferencePixelsPerUnit))  m_PrevReferencePixelsPerUnit;

constexpr void __set_m_PrevReferencePixelsPerUnit(float_t value) ;

constexpr float_t __get_m_PrevReferencePixelsPerUnit() const;

 bool __declspec(property(get=__get_m_PresetInfoIsWorld, put=__set_m_PresetInfoIsWorld))  m_PresetInfoIsWorld;

constexpr void __set_m_PresetInfoIsWorld(bool value) ;

constexpr bool __get_m_PresetInfoIsWorld() const;


// Properties

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode __declspec(property(get=get_uiScaleMode, put=set_uiScaleMode))  uiScaleMode;

 float_t __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit))  referencePixelsPerUnit;

 float_t __declspec(property(get=get_scaleFactor, put=set_scaleFactor))  scaleFactor;

 UnityEngine::Vector2 __declspec(property(get=get_referenceResolution, put=set_referenceResolution))  referenceResolution;

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode __declspec(property(get=get_screenMatchMode, put=set_screenMatchMode))  screenMatchMode;

 float_t __declspec(property(get=get_matchWidthOrHeight, put=set_matchWidthOrHeight))  matchWidthOrHeight;

 UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit __declspec(property(get=get_physicalUnit, put=set_physicalUnit))  physicalUnit;

 float_t __declspec(property(get=get_fallbackScreenDPI, put=set_fallbackScreenDPI))  fallbackScreenDPI;

 float_t __declspec(property(get=get_defaultSpriteDPI, put=set_defaultSpriteDPI))  defaultSpriteDPI;

 float_t __declspec(property(get=get_dynamicPixelsPerUnit, put=set_dynamicPixelsPerUnit))  dynamicPixelsPerUnit;


// Methods

/// @brief Method get_uiScaleMode addr 0x2c2cfc4 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode get_uiScaleMode() ;

/// @brief Method set_uiScaleMode addr 0x2c2cfcc size 0x8 virtual false final false
 void set_uiScaleMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode value) ;

/// @brief Method get_referencePixelsPerUnit addr 0x2c2cfd4 size 0x8 virtual false final false
 float_t get_referencePixelsPerUnit() ;

/// @brief Method set_referencePixelsPerUnit addr 0x2c2cfdc size 0x8 virtual false final false
 void set_referencePixelsPerUnit(float_t value) ;

/// @brief Method get_scaleFactor addr 0x2c2cfe4 size 0x8 virtual false final false
 float_t get_scaleFactor() ;

/// @brief Method set_scaleFactor addr 0x2c2cfec size 0x14 virtual false final false
 void set_scaleFactor(float_t value) ;

/// @brief Method get_referenceResolution addr 0x2c2d000 size 0x8 virtual false final false
 UnityEngine::Vector2 get_referenceResolution() ;

/// @brief Method set_referenceResolution addr 0x2c2d008 size 0x64 virtual false final false
 void set_referenceResolution(UnityEngine::Vector2 value) ;

/// @brief Method get_screenMatchMode addr 0x2c2d06c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode get_screenMatchMode() ;

/// @brief Method set_screenMatchMode addr 0x2c2d074 size 0x8 virtual false final false
 void set_screenMatchMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode value) ;

/// @brief Method get_matchWidthOrHeight addr 0x2c2d07c size 0x8 virtual false final false
 float_t get_matchWidthOrHeight() ;

/// @brief Method set_matchWidthOrHeight addr 0x2c2d084 size 0x8 virtual false final false
 void set_matchWidthOrHeight(float_t value) ;

/// @brief Method get_physicalUnit addr 0x2c2d08c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit get_physicalUnit() ;

/// @brief Method set_physicalUnit addr 0x2c2d094 size 0x8 virtual false final false
 void set_physicalUnit(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit value) ;

/// @brief Method get_fallbackScreenDPI addr 0x2c2d09c size 0x8 virtual false final false
 float_t get_fallbackScreenDPI() ;

/// @brief Method set_fallbackScreenDPI addr 0x2c2d0a4 size 0x8 virtual false final false
 void set_fallbackScreenDPI(float_t value) ;

/// @brief Method get_defaultSpriteDPI addr 0x2c2d0ac size 0x8 virtual false final false
 float_t get_defaultSpriteDPI() ;

/// @brief Method set_defaultSpriteDPI addr 0x2c2d0b4 size 0x10 virtual false final false
 void set_defaultSpriteDPI(float_t value) ;

/// @brief Method get_dynamicPixelsPerUnit addr 0x2c2d0c4 size 0x8 virtual false final false
 float_t get_dynamicPixelsPerUnit() ;

/// @brief Method set_dynamicPixelsPerUnit addr 0x2c2d0cc size 0x8 virtual false final false
 void set_dynamicPixelsPerUnit(float_t value) ;

// Ctor Parameters []
explicit CanvasScaler() ;

/// @brief Method .ctor addr 0x2c2d0d4 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2c2d11c size 0xcc virtual true final false
 void OnEnable() ;

/// @brief Method Canvas_preWillRenderCanvases addr 0x2c2d1e8 size 0x10 virtual false final false
 void Canvas_preWillRenderCanvases() ;

/// @brief Method OnDisable addr 0x2c2d1f8 size 0xa8 virtual true final false
 void OnDisable() ;

/// @brief Method Handle addr 0x2c2d320 size 0xfc virtual true final false
 void Handle() ;

/// @brief Method HandleWorldCanvas addr 0x2c2d41c size 0x20 virtual true final false
 void HandleWorldCanvas() ;

/// @brief Method HandleConstantPixelSize addr 0x2c2d43c size 0x20 virtual true final false
 void HandleConstantPixelSize() ;

/// @brief Method HandleScaleWithScreenSize addr 0x2c2d45c size 0x234 virtual true final false
 void HandleScaleWithScreenSize() ;

/// @brief Method HandleConstantPhysicalSize addr 0x2c2d690 size 0x6c virtual true final false
 void HandleConstantPhysicalSize() ;

/// @brief Method SetScaleFactor addr 0x2c2d2a0 size 0x40 virtual false final false
 void SetScaleFactor(float_t scaleFactor) ;

/// @brief Method SetReferencePixelsPerUnit addr 0x2c2d2e0 size 0x40 virtual false final false
 void SetReferencePixelsPerUnit(float_t referencePixelsPerUnit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode, "UnityEngine.UI", "CanvasScaler/ScaleMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit, "UnityEngine.UI", "CanvasScaler/Unit");
NEED_NO_BOX(UnityEngine::UI::CanvasScaler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasScaler, "UnityEngine.UI", "CanvasScaler");
