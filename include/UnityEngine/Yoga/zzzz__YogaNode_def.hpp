#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Yoga {
struct YogaValue;
}
namespace System {
class WeakReference;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::Yoga {
class MeasureFunction;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::Yoga {
class BaselineFunction;
}
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaNode;
}
// Type: UnityEngine.Yoga::YogaNode
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15397))
// CS Name: UnityEngine.Yoga.YogaNode
class CORDL_TYPE YogaNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Yoga::YogaNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Yoga::YogaNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~YogaNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: " const&", def_value: None }]
constexpr YogaNode(YogaNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaNode", modifiers: "&&", def_value: None }]
constexpr YogaNode(YogaNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit YogaNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr YogaNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr YogaNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr YogaNode& operator=(YogaNode&& o) noexcept = default;
  constexpr YogaNode& operator=(YogaNode const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__ygNode, put=__set__ygNode))  _ygNode;

constexpr void __set__ygNode(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__ygNode() const;

 UnityEngine::Yoga::YogaConfig __declspec(property(get=__get__config, put=__set__config))  _config;

constexpr void __set__config(UnityEngine::Yoga::YogaConfig value) ;

constexpr UnityEngine::Yoga::YogaConfig __get__config() const;

 System::WeakReference __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(System::WeakReference value) ;

constexpr System::WeakReference __get__parent() const;

 System::Collections::Generic::List_1<UnityEngine::Yoga::YogaNode> __declspec(property(get=__get__children, put=__set__children))  _children;

constexpr void __set__children(System::Collections::Generic::List_1<UnityEngine::Yoga::YogaNode> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Yoga::YogaNode> __get__children() const;

 UnityEngine::Yoga::MeasureFunction __declspec(property(get=__get__measureFunction, put=__set__measureFunction))  _measureFunction;

constexpr void __set__measureFunction(UnityEngine::Yoga::MeasureFunction value) ;

constexpr UnityEngine::Yoga::MeasureFunction __get__measureFunction() const;

 UnityEngine::Yoga::BaselineFunction __declspec(property(get=__get__baselineFunction, put=__set__baselineFunction))  _baselineFunction;

constexpr void __set__baselineFunction(UnityEngine::Yoga::BaselineFunction value) ;

constexpr UnityEngine::Yoga::BaselineFunction __get__baselineFunction() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__data() const;


// Properties

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Left))  Left;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Top))  Top;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Right))  Right;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Bottom))  Bottom;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MarginLeft))  MarginLeft;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MarginTop))  MarginTop;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MarginRight))  MarginRight;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MarginBottom))  MarginBottom;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_PaddingLeft))  PaddingLeft;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_PaddingTop))  PaddingTop;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_PaddingRight))  PaddingRight;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_PaddingBottom))  PaddingBottom;

 float_t __declspec(property(put=set_BorderLeftWidth))  BorderLeftWidth;

 float_t __declspec(property(put=set_BorderTopWidth))  BorderTopWidth;

 float_t __declspec(property(put=set_BorderRightWidth))  BorderRightWidth;

 float_t __declspec(property(put=set_BorderBottomWidth))  BorderBottomWidth;

 float_t __declspec(property(get=get_LayoutMarginLeft))  LayoutMarginLeft;

 float_t __declspec(property(get=get_LayoutMarginTop))  LayoutMarginTop;

 float_t __declspec(property(get=get_LayoutMarginRight))  LayoutMarginRight;

 float_t __declspec(property(get=get_LayoutMarginBottom))  LayoutMarginBottom;

 float_t __declspec(property(get=get_LayoutPaddingLeft))  LayoutPaddingLeft;

 float_t __declspec(property(get=get_LayoutPaddingTop))  LayoutPaddingTop;

 float_t __declspec(property(get=get_LayoutPaddingRight))  LayoutPaddingRight;

 float_t __declspec(property(get=get_LayoutPaddingBottom))  LayoutPaddingBottom;

 float_t __declspec(property(get=get_LayoutBorderLeft))  LayoutBorderLeft;

 float_t __declspec(property(get=get_LayoutBorderTop))  LayoutBorderTop;

 float_t __declspec(property(get=get_LayoutBorderRight))  LayoutBorderRight;

 float_t __declspec(property(get=get_LayoutBorderBottom))  LayoutBorderBottom;

 UnityEngine::Yoga::YogaConfig __declspec(property(put=set_Config))  Config;

 bool __declspec(property(get=get_IsDirty))  IsDirty;

 bool __declspec(property(get=get_HasNewLayout))  HasNewLayout;

 bool __declspec(property(get=get_IsMeasureDefined))  IsMeasureDefined;

 bool __declspec(property(get=get_IsBaselineDefined))  IsBaselineDefined;

 UnityEngine::Yoga::YogaFlexDirection __declspec(property(put=set_FlexDirection))  FlexDirection;

 UnityEngine::Yoga::YogaJustify __declspec(property(put=set_JustifyContent))  JustifyContent;

 UnityEngine::Yoga::YogaDisplay __declspec(property(put=set_Display))  Display;

 UnityEngine::Yoga::YogaAlign __declspec(property(put=set_AlignItems))  AlignItems;

 UnityEngine::Yoga::YogaAlign __declspec(property(put=set_AlignSelf))  AlignSelf;

 UnityEngine::Yoga::YogaAlign __declspec(property(put=set_AlignContent))  AlignContent;

 UnityEngine::Yoga::YogaPositionType __declspec(property(put=set_PositionType))  PositionType;

 UnityEngine::Yoga::YogaWrap __declspec(property(put=set_Wrap))  Wrap;

 float_t __declspec(property(put=set_Flex))  Flex;

 float_t __declspec(property(put=set_FlexGrow))  FlexGrow;

 float_t __declspec(property(put=set_FlexShrink))  FlexShrink;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_FlexBasis))  FlexBasis;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Width))  Width;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_Height))  Height;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MaxWidth))  MaxWidth;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MaxHeight))  MaxHeight;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MinWidth))  MinWidth;

 UnityEngine::Yoga::YogaValue __declspec(property(put=set_MinHeight))  MinHeight;

 float_t __declspec(property(get=get_LayoutX))  LayoutX;

 float_t __declspec(property(get=get_LayoutY))  LayoutY;

 float_t __declspec(property(get=get_LayoutRight))  LayoutRight;

 float_t __declspec(property(get=get_LayoutBottom))  LayoutBottom;

 float_t __declspec(property(get=get_LayoutWidth))  LayoutWidth;

 float_t __declspec(property(get=get_LayoutHeight))  LayoutHeight;

 UnityEngine::Yoga::YogaOverflow __declspec(property(put=set_Overflow))  Overflow;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method set_Left addr 0x2d5cebc size 0xc virtual false final false
 void set_Left(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_Top addr 0x2d5cf4c size 0xc virtual false final false
 void set_Top(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_Right addr 0x2d5cf58 size 0xc virtual false final false
 void set_Right(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_Bottom addr 0x2d5cf64 size 0xc virtual false final false
 void set_Bottom(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method SetStylePosition addr 0x2d5cec8 size 0x84 virtual false final false
 void SetStylePosition(UnityEngine::Yoga::YogaEdge edge, UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MarginLeft addr 0x2d5d028 size 0xc virtual false final false
 void set_MarginLeft(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MarginTop addr 0x2d5d0fc size 0xc virtual false final false
 void set_MarginTop(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MarginRight addr 0x2d5d108 size 0xc virtual false final false
 void set_MarginRight(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MarginBottom addr 0x2d5d114 size 0xc virtual false final false
 void set_MarginBottom(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method SetStyleMargin addr 0x2d5d034 size 0xc8 virtual false final false
 void SetStyleMargin(UnityEngine::Yoga::YogaEdge edge, UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_PaddingLeft addr 0x2d5d20c size 0xc virtual false final false
 void set_PaddingLeft(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_PaddingTop addr 0x2d5d29c size 0xc virtual false final false
 void set_PaddingTop(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_PaddingRight addr 0x2d5d2a8 size 0xc virtual false final false
 void set_PaddingRight(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_PaddingBottom addr 0x2d5d2b4 size 0xc virtual false final false
 void set_PaddingBottom(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method SetStylePadding addr 0x2d5d218 size 0x84 virtual false final false
 void SetStylePadding(UnityEngine::Yoga::YogaEdge edge, UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_BorderLeftWidth addr 0x2d5d368 size 0x50 virtual false final false
 void set_BorderLeftWidth(float_t value) ;

/// @brief Method set_BorderTopWidth addr 0x2d5d40c size 0x50 virtual false final false
 void set_BorderTopWidth(float_t value) ;

/// @brief Method set_BorderRightWidth addr 0x2d5d45c size 0x50 virtual false final false
 void set_BorderRightWidth(float_t value) ;

/// @brief Method set_BorderBottomWidth addr 0x2d5d4ac size 0x50 virtual false final false
 void set_BorderBottomWidth(float_t value) ;

/// @brief Method get_LayoutMarginLeft addr 0x2d5d4fc size 0x40 virtual false final false
 float_t get_LayoutMarginLeft() ;

/// @brief Method get_LayoutMarginTop addr 0x2d5d580 size 0x40 virtual false final false
 float_t get_LayoutMarginTop() ;

/// @brief Method get_LayoutMarginRight addr 0x2d5d5c0 size 0x40 virtual false final false
 float_t get_LayoutMarginRight() ;

/// @brief Method get_LayoutMarginBottom addr 0x2d5d600 size 0x40 virtual false final false
 float_t get_LayoutMarginBottom() ;

/// @brief Method get_LayoutPaddingLeft addr 0x2d5d640 size 0x40 virtual false final false
 float_t get_LayoutPaddingLeft() ;

/// @brief Method get_LayoutPaddingTop addr 0x2d5d6c4 size 0x40 virtual false final false
 float_t get_LayoutPaddingTop() ;

/// @brief Method get_LayoutPaddingRight addr 0x2d5d704 size 0x40 virtual false final false
 float_t get_LayoutPaddingRight() ;

/// @brief Method get_LayoutPaddingBottom addr 0x2d5d744 size 0x40 virtual false final false
 float_t get_LayoutPaddingBottom() ;

/// @brief Method get_LayoutBorderLeft addr 0x2d5d784 size 0x40 virtual false final false
 float_t get_LayoutBorderLeft() ;

/// @brief Method get_LayoutBorderTop addr 0x2d5d808 size 0x40 virtual false final false
 float_t get_LayoutBorderTop() ;

/// @brief Method get_LayoutBorderRight addr 0x2d5d848 size 0x40 virtual false final false
 float_t get_LayoutBorderRight() ;

/// @brief Method get_LayoutBorderBottom addr 0x2d5d888 size 0x40 virtual false final false
 float_t get_LayoutBorderBottom() ;

// Ctor Parameters [CppParam { name: "config", ty: "UnityEngine::Yoga::YogaConfig", modifiers: "", def_value: None }]
explicit YogaNode(UnityEngine::Yoga::YogaConfig config) ;

/// @brief Method .ctor addr 0x2d5d8c8 size 0x130 virtual false final false
 void _ctor(UnityEngine::Yoga::YogaConfig config) ;

/// @brief Method Finalize addr 0x2d5da3c size 0x98 virtual true final false
 void Finalize() ;

/// @brief Method set_Config addr 0x2d5db60 size 0xb0 virtual false final false
 void set_Config(UnityEngine::Yoga::YogaConfig value) ;

/// @brief Method get_IsDirty addr 0x2d5dc54 size 0x3c virtual false final false
 bool get_IsDirty() ;

/// @brief Method MarkDirty addr 0x2d5dccc size 0x3c virtual true final false
 void MarkDirty() ;

/// @brief Method get_HasNewLayout addr 0x2d5dd44 size 0x3c virtual false final false
 bool get_HasNewLayout() ;

/// @brief Method get_IsMeasureDefined addr 0x2d5ddbc size 0x10 virtual false final false
 bool get_IsMeasureDefined() ;

/// @brief Method get_IsBaselineDefined addr 0x2d5ddcc size 0x10 virtual false final false
 bool get_IsBaselineDefined() ;

/// @brief Method CopyStyle addr 0x2d5dddc size 0x4c virtual false final false
 void CopyStyle(UnityEngine::Yoga::YogaNode srcNode) ;

/// @brief Method set_FlexDirection addr 0x2d5de6c size 0x44 virtual false final false
 void set_FlexDirection(UnityEngine::Yoga::YogaFlexDirection value) ;

/// @brief Method set_JustifyContent addr 0x2d5def4 size 0x44 virtual false final false
 void set_JustifyContent(UnityEngine::Yoga::YogaJustify value) ;

/// @brief Method set_Display addr 0x2d5df7c size 0x44 virtual false final false
 void set_Display(UnityEngine::Yoga::YogaDisplay value) ;

/// @brief Method set_AlignItems addr 0x2d5e004 size 0x44 virtual false final false
 void set_AlignItems(UnityEngine::Yoga::YogaAlign value) ;

/// @brief Method set_AlignSelf addr 0x2d5e08c size 0x44 virtual false final false
 void set_AlignSelf(UnityEngine::Yoga::YogaAlign value) ;

/// @brief Method set_AlignContent addr 0x2d5e114 size 0x44 virtual false final false
 void set_AlignContent(UnityEngine::Yoga::YogaAlign value) ;

/// @brief Method set_PositionType addr 0x2d5e19c size 0x44 virtual false final false
 void set_PositionType(UnityEngine::Yoga::YogaPositionType value) ;

/// @brief Method set_Wrap addr 0x2d5e224 size 0x44 virtual false final false
 void set_Wrap(UnityEngine::Yoga::YogaWrap value) ;

/// @brief Method set_Flex addr 0x2d5e2ac size 0x4c virtual false final false
 void set_Flex(float_t value) ;

/// @brief Method set_FlexGrow addr 0x2d5e344 size 0x4c virtual false final false
 void set_FlexGrow(float_t value) ;

/// @brief Method set_FlexShrink addr 0x2d5e3dc size 0x4c virtual false final false
 void set_FlexShrink(float_t value) ;

/// @brief Method set_FlexBasis addr 0x2d5e474 size 0xbc virtual false final false
 void set_FlexBasis(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_Width addr 0x2d5e604 size 0xbc virtual false final false
 void set_Width(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_Height addr 0x2d5e794 size 0xbc virtual false final false
 void set_Height(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MaxWidth addr 0x2d5e924 size 0x7c virtual false final false
 void set_MaxWidth(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MaxHeight addr 0x2d5ea38 size 0x7c virtual false final false
 void set_MaxHeight(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MinWidth addr 0x2d5eb4c size 0x7c virtual false final false
 void set_MinWidth(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method set_MinHeight addr 0x2d5ec60 size 0x7c virtual false final false
 void set_MinHeight(UnityEngine::Yoga::YogaValue value) ;

/// @brief Method get_LayoutX addr 0x2d5ed74 size 0x3c virtual false final false
 float_t get_LayoutX() ;

/// @brief Method get_LayoutY addr 0x2d5edec size 0x3c virtual false final false
 float_t get_LayoutY() ;

/// @brief Method get_LayoutRight addr 0x2d5ee64 size 0x3c virtual false final false
 float_t get_LayoutRight() ;

/// @brief Method get_LayoutBottom addr 0x2d5eedc size 0x3c virtual false final false
 float_t get_LayoutBottom() ;

/// @brief Method get_LayoutWidth addr 0x2d5ef54 size 0x3c virtual false final false
 float_t get_LayoutWidth() ;

/// @brief Method get_LayoutHeight addr 0x2d5efcc size 0x3c virtual false final false
 float_t get_LayoutHeight() ;

/// @brief Method set_Overflow addr 0x2d5f044 size 0x44 virtual false final false
 void set_Overflow(UnityEngine::Yoga::YogaOverflow value) ;

/// @brief Method get_Count addr 0x2d5f0cc size 0x4c virtual false final false
 int32_t get_Count() ;

/// @brief Method MarkLayoutSeen addr 0x2d5f118 size 0x40 virtual false final false
 void MarkLayoutSeen() ;

/// @brief Method Insert addr 0x2d5f19c size 0x124 virtual false final false
 void Insert(int32_t index, UnityEngine::Yoga::YogaNode node) ;

/// @brief Method RemoveAt addr 0x2d5f314 size 0xc8 virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method Clear addr 0x2d5f420 size 0x64 virtual false final false
 void Clear() ;

/// @brief Method SetMeasureFunction addr 0x2d5f484 size 0xd8 virtual false final false
 void SetMeasureFunction(UnityEngine::Yoga::MeasureFunction measureFunction) ;

/// @brief Method CalculateLayout addr 0x2d5f618 size 0x84 virtual false final false
 void CalculateLayout(float_t width, float_t height) ;

/// @brief Method MeasureInternal addr 0x2d5f734 size 0x7c virtual false final false
static UnityEngine::Yoga::YogaSize MeasureInternal(UnityEngine::Yoga::YogaNode node, float_t width, UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height, UnityEngine::Yoga::YogaMeasureMode heightMode) ;

/// @brief Method BaselineInternal addr 0x2d5f7b0 size 0x74 virtual false final false
static float_t BaselineInternal(UnityEngine::Yoga::YogaNode node, float_t width, float_t height) ;

/// @brief Method GetEnumerator addr 0x2d5f824 size 0x12c virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Yoga::YogaNode> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d5f950 size 0x12c virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::YogaNode);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaNode, "UnityEngine.Yoga", "YogaNode");
