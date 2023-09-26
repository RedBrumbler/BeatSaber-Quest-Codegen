#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutUtility;
}
namespace UnityEngine::UI {
class UnityEngine__UI__LayoutUtility____c;
}
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13052))
// CS Name: UnityEngine.UI.LayoutUtility::<>c
class CORDL_TYPE UnityEngine__UI__LayoutUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UI__LayoutUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutUtility____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__LayoutUtility____c(UnityEngine__UI__LayoutUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutUtility____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__LayoutUtility____c(UnityEngine__UI__LayoutUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__LayoutUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__LayoutUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutUtility____c& operator=(UnityEngine__UI__LayoutUtility____c&& o) noexcept = default;
  constexpr UnityEngine__UI__LayoutUtility____c& operator=(UnityEngine__UI__LayoutUtility____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::UnityEngine__UI__LayoutUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UI::UnityEngine__UI__LayoutUtility____c value) ;

static UnityEngine::UI::UnityEngine__UI__LayoutUtility____c __get___9() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__3_0() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__4_0() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__4_1() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__5_0() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__6_0() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__7_0() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__7_1() ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<UnityEngine::UI::ILayoutElement,float_t> value) ;

static System::Func_2<UnityEngine::UI::ILayoutElement,float_t> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__LayoutUtility____c() ;

/// @brief Method .ctor addr 0x2c3306c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetMinWidth>b__3_0 addr 0x2c33074 size 0xa0 virtual false final false
 float_t _GetMinWidth_b__3_0(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetPreferredWidth>b__4_0 addr 0x2c33114 size 0xa0 virtual false final false
 float_t _GetPreferredWidth_b__4_0(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetPreferredWidth>b__4_1 addr 0x2c331b4 size 0xa0 virtual false final false
 float_t _GetPreferredWidth_b__4_1(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetFlexibleWidth>b__5_0 addr 0x2c33254 size 0xa0 virtual false final false
 float_t _GetFlexibleWidth_b__5_0(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetMinHeight>b__6_0 addr 0x2c332f4 size 0xa0 virtual false final false
 float_t _GetMinHeight_b__6_0(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetPreferredHeight>b__7_0 addr 0x2c33394 size 0xa0 virtual false final false
 float_t _GetPreferredHeight_b__7_0(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetPreferredHeight>b__7_1 addr 0x2c33434 size 0xa0 virtual false final false
 float_t _GetPreferredHeight_b__7_1(UnityEngine::UI::ILayoutElement e) ;

/// @brief Method <GetFlexibleHeight>b__8_0 addr 0x2c334d4 size 0xa0 virtual false final false
 float_t _GetFlexibleHeight_b__8_0(UnityEngine::UI::ILayoutElement e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::LayoutUtility
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13053))
// CS Name: UnityEngine.UI.LayoutUtility
class CORDL_TYPE LayoutUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UI::UnityEngine__UI__LayoutUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LayoutUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: " const&", def_value: None }]
constexpr LayoutUtility(LayoutUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: "&&", def_value: None }]
constexpr LayoutUtility(LayoutUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayoutUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LayoutUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayoutUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayoutUtility& operator=(LayoutUtility&& o) noexcept = default;
  constexpr LayoutUtility& operator=(LayoutUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetMinSize addr 0x2c2da94 size 0xc virtual false final false
static float_t GetMinSize(UnityEngine::RectTransform rect, int32_t axis) ;

/// @brief Method GetPreferredSize addr 0x2c2daa0 size 0xc virtual false final false
static float_t GetPreferredSize(UnityEngine::RectTransform rect, int32_t axis) ;

/// @brief Method GetFlexibleSize addr 0x2c303ac size 0xc virtual false final false
static float_t GetFlexibleSize(UnityEngine::RectTransform rect, int32_t axis) ;

/// @brief Method GetMinWidth addr 0x2c326e8 size 0xf0 virtual false final false
static float_t GetMinWidth(UnityEngine::RectTransform rect) ;

/// @brief Method GetPreferredWidth addr 0x2c3296c size 0x194 virtual false final false
static float_t GetPreferredWidth(UnityEngine::RectTransform rect) ;

/// @brief Method GetFlexibleWidth addr 0x2c32bf0 size 0xf0 virtual false final false
static float_t GetFlexibleWidth(UnityEngine::RectTransform rect) ;

/// @brief Method GetMinHeight addr 0x2c325f8 size 0xf0 virtual false final false
static float_t GetMinHeight(UnityEngine::RectTransform rect) ;

/// @brief Method GetPreferredHeight addr 0x2c327d8 size 0x194 virtual false final false
static float_t GetPreferredHeight(UnityEngine::RectTransform rect) ;

/// @brief Method GetFlexibleHeight addr 0x2c32b00 size 0xf0 virtual false final false
static float_t GetFlexibleHeight(UnityEngine::RectTransform rect) ;

/// @brief Method GetLayoutProperty addr 0x2c32ce0 size 0x18 virtual false final false
static float_t GetLayoutProperty(UnityEngine::RectTransform rect, System::Func_2<UnityEngine::UI::ILayoutElement,float_t> property, float_t defaultValue) ;

/// @brief Method GetLayoutProperty addr 0x2c32cf8 size 0x310 virtual false final false
static float_t GetLayoutProperty(UnityEngine::RectTransform rect, System::Func_2<UnityEngine::UI::ILayoutElement,float_t> property, float_t defaultValue, ByRef<UnityEngine::UI::ILayoutElement> source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::LayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutUtility, "UnityEngine.UI", "LayoutUtility");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__LayoutUtility____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__LayoutUtility____c, "UnityEngine.UI", "LayoutUtility/<>c");
