#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
class TMP_SubMeshUI;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct TMPro__TMP_Text__UnicodeChar;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace TMPro {
class TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18;
}
namespace TMPro {
class TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Type: ::<DelayedGraphicRebuild>d__18
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12269))
// CS Name: TMPro.TextMeshProUGUI::<DelayedGraphicRebuild>d__18
class CORDL_TYPE TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: " const&", def_value: None }]
constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18(TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: "&&", def_value: None }]
constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18(TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18& operator=(TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18&& o) noexcept = default;
  constexpr TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18& operator=(TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2a913c8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2a980bc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2a980c0 size 0xb8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2a98178 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2a98180 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a981c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<DelayedMaterialRebuild>d__19
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12270))
// CS Name: TMPro.TextMeshProUGUI::<DelayedMaterialRebuild>d__19
class CORDL_TYPE TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: " const&", def_value: None }]
constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19(TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: "&&", def_value: None }]
constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19(TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19& operator=(TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19&& o) noexcept = default;
  constexpr TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19& operator=(TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2a91458 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2a981c8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2a981cc size 0xc0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2a9828c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2a98294 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a982d4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TextMeshProUGUI
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12271))
// CS Name: TMPro.TextMeshProUGUI
class CORDL_TYPE TextMeshProUGUI : public TMPro::TMP_Text {
public:
// Declarations
using _DelayedMaterialRebuild_d__19 = TMPro::TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19;

using _DelayedGraphicRebuild_d__18 = TMPro::TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18;

/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x798};

virtual ~TextMeshProUGUI() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: " const&", def_value: None }]
constexpr TextMeshProUGUI(TextMeshProUGUI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: "&&", def_value: None }]
constexpr TextMeshProUGUI(TextMeshProUGUI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextMeshProUGUI(void* ptr) noexcept : TMPro::TMP_Text(ptr) {
}


  constexpr TextMeshProUGUI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextMeshProUGUI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextMeshProUGUI& operator=(TextMeshProUGUI&& o) noexcept = default;
  constexpr TextMeshProUGUI& operator=(TextMeshProUGUI const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_isRebuildingLayout, put=__set_m_isRebuildingLayout))  m_isRebuildingLayout;

constexpr void __set_m_isRebuildingLayout(bool value) ;

constexpr bool __get_m_isRebuildingLayout() const;

 UnityEngine::Coroutine __declspec(property(get=__get_m_DelayedGraphicRebuild, put=__set_m_DelayedGraphicRebuild))  m_DelayedGraphicRebuild;

constexpr void __set_m_DelayedGraphicRebuild(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_DelayedGraphicRebuild() const;

 UnityEngine::Coroutine __declspec(property(get=__get_m_DelayedMaterialRebuild, put=__set_m_DelayedMaterialRebuild))  m_DelayedMaterialRebuild;

constexpr void __set_m_DelayedMaterialRebuild(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_DelayedMaterialRebuild() const;

 UnityEngine::Rect __declspec(property(get=__get_m_ClipRect, put=__set_m_ClipRect))  m_ClipRect;

constexpr void __set_m_ClipRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_ClipRect() const;

 bool __declspec(property(get=__get_m_ValidRect, put=__set_m_ValidRect))  m_ValidRect;

constexpr void __set_m_ValidRect(bool value) ;

constexpr bool __get_m_ValidRect() const;

 System::Action_1<TMPro::TMP_TextInfo> __declspec(property(get=__get_OnPreRenderText, put=__set_OnPreRenderText))  OnPreRenderText;

constexpr void __set_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

constexpr System::Action_1<TMPro::TMP_TextInfo> __get_OnPreRenderText() const;

 bool __declspec(property(get=__get_m_hasFontAssetChanged, put=__set_m_hasFontAssetChanged))  m_hasFontAssetChanged;

constexpr void __set_m_hasFontAssetChanged(bool value) ;

constexpr bool __get_m_hasFontAssetChanged() const;

 ::ArrayW<TMPro::TMP_SubMeshUI> __declspec(property(get=__get_m_subTextObjects, put=__set_m_subTextObjects))  m_subTextObjects;

constexpr void __set_m_subTextObjects(::ArrayW<TMPro::TMP_SubMeshUI> value) ;

constexpr ::ArrayW<TMPro::TMP_SubMeshUI> __get_m_subTextObjects() const;

 float_t __declspec(property(get=__get_m_previousLossyScaleY, put=__set_m_previousLossyScaleY))  m_previousLossyScaleY;

constexpr void __set_m_previousLossyScaleY(float_t value) ;

constexpr float_t __get_m_previousLossyScaleY() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_RectTransformCorners, put=__set_m_RectTransformCorners))  m_RectTransformCorners;

constexpr void __set_m_RectTransformCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_RectTransformCorners() const;

 UnityEngine::CanvasRenderer __declspec(property(get=__get_m_canvasRenderer, put=__set_m_canvasRenderer))  m_canvasRenderer;

constexpr void __set_m_canvasRenderer(UnityEngine::CanvasRenderer value) ;

constexpr UnityEngine::CanvasRenderer __get_m_canvasRenderer() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_canvas, put=__set_m_canvas))  m_canvas;

constexpr void __set_m_canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_canvas() const;

 float_t __declspec(property(get=__get_m_CanvasScaleFactor, put=__set_m_CanvasScaleFactor))  m_CanvasScaleFactor;

constexpr void __set_m_CanvasScaleFactor(float_t value) ;

constexpr float_t __get_m_CanvasScaleFactor() const;

 bool __declspec(property(get=__get_m_isFirstAllocation, put=__set_m_isFirstAllocation))  m_isFirstAllocation;

constexpr void __set_m_isFirstAllocation(bool value) ;

constexpr bool __get_m_isFirstAllocation() const;

 int32_t __declspec(property(get=__get_m_max_characters, put=__set_m_max_characters))  m_max_characters;

constexpr void __set_m_max_characters(int32_t value) ;

constexpr int32_t __get_m_max_characters() const;

 UnityEngine::Material __declspec(property(get=__get_m_baseMaterial, put=__set_m_baseMaterial))  m_baseMaterial;

constexpr void __set_m_baseMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_baseMaterial() const;

 bool __declspec(property(get=__get_m_isScrollRegionSet, put=__set_m_isScrollRegionSet))  m_isScrollRegionSet;

constexpr void __set_m_isScrollRegionSet(bool value) ;

constexpr bool __get_m_isScrollRegionSet() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_maskOffset, put=__set_m_maskOffset))  m_maskOffset;

constexpr void __set_m_maskOffset(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_maskOffset() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_m_EnvMapMatrix, put=__set_m_EnvMapMatrix))  m_EnvMapMatrix;

constexpr void __set_m_EnvMapMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_m_EnvMapMatrix() const;

 bool __declspec(property(get=__get_m_isRegisteredForEvents, put=__set_m_isRegisteredForEvents))  m_isRegisteredForEvents;

constexpr void __set_m_isRegisteredForEvents(bool value) ;

constexpr bool __get_m_isRegisteredForEvents() const;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextMarker, put=__set_k_GenerateTextMarker))  k_GenerateTextMarker;

static void __set_k_GenerateTextMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_GenerateTextMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SetArraySizesMarker, put=__set_k_SetArraySizesMarker))  k_SetArraySizesMarker;

static void __set_k_SetArraySizesMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_SetArraySizesMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIMarker, put=__set_k_GenerateTextPhaseIMarker))  k_GenerateTextPhaseIMarker;

static void __set_k_GenerateTextPhaseIMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ParseMarkupTextMarker, put=__set_k_ParseMarkupTextMarker))  k_ParseMarkupTextMarker;

static void __set_k_ParseMarkupTextMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ParseMarkupTextMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_CharacterLookupMarker, put=__set_k_CharacterLookupMarker))  k_CharacterLookupMarker;

static void __set_k_CharacterLookupMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_CharacterLookupMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleGPOSFeaturesMarker, put=__set_k_HandleGPOSFeaturesMarker))  k_HandleGPOSFeaturesMarker;

static void __set_k_HandleGPOSFeaturesMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleGPOSFeaturesMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_CalculateVerticesPositionMarker, put=__set_k_CalculateVerticesPositionMarker))  k_CalculateVerticesPositionMarker;

static void __set_k_CalculateVerticesPositionMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_CalculateVerticesPositionMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ComputeTextMetricsMarker, put=__set_k_ComputeTextMetricsMarker))  k_ComputeTextMetricsMarker;

static void __set_k_ComputeTextMetricsMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ComputeTextMetricsMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleVisibleCharacterMarker, put=__set_k_HandleVisibleCharacterMarker))  k_HandleVisibleCharacterMarker;

static void __set_k_HandleVisibleCharacterMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleVisibleCharacterMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleWhiteSpacesMarker, put=__set_k_HandleWhiteSpacesMarker))  k_HandleWhiteSpacesMarker;

static void __set_k_HandleWhiteSpacesMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleWhiteSpacesMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleHorizontalLineBreakingMarker, put=__set_k_HandleHorizontalLineBreakingMarker))  k_HandleHorizontalLineBreakingMarker;

static void __set_k_HandleHorizontalLineBreakingMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleHorizontalLineBreakingMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleVerticalLineBreakingMarker, put=__set_k_HandleVerticalLineBreakingMarker))  k_HandleVerticalLineBreakingMarker;

static void __set_k_HandleVerticalLineBreakingMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleVerticalLineBreakingMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SaveGlyphVertexDataMarker, put=__set_k_SaveGlyphVertexDataMarker))  k_SaveGlyphVertexDataMarker;

static void __set_k_SaveGlyphVertexDataMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_SaveGlyphVertexDataMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ComputeCharacterAdvanceMarker, put=__set_k_ComputeCharacterAdvanceMarker))  k_ComputeCharacterAdvanceMarker;

static void __set_k_ComputeCharacterAdvanceMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ComputeCharacterAdvanceMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleCarriageReturnMarker, put=__set_k_HandleCarriageReturnMarker))  k_HandleCarriageReturnMarker;

static void __set_k_HandleCarriageReturnMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleCarriageReturnMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleLineTerminationMarker, put=__set_k_HandleLineTerminationMarker))  k_HandleLineTerminationMarker;

static void __set_k_HandleLineTerminationMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_HandleLineTerminationMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SavePageInfoMarker, put=__set_k_SavePageInfoMarker))  k_SavePageInfoMarker;

static void __set_k_SavePageInfoMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_SavePageInfoMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SaveProcessingStatesMarker, put=__set_k_SaveProcessingStatesMarker))  k_SaveProcessingStatesMarker;

static void __set_k_SaveProcessingStatesMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_SaveProcessingStatesMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIIMarker, put=__set_k_GenerateTextPhaseIIMarker))  k_GenerateTextPhaseIIMarker;

static void __set_k_GenerateTextPhaseIIMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIIMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIIIMarker, put=__set_k_GenerateTextPhaseIIIMarker))  k_GenerateTextPhaseIIIMarker;

static void __set_k_GenerateTextPhaseIIIMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIIIMarker() ;


// Properties

 UnityEngine::Material __declspec(property(get=get_materialForRendering))  materialForRendering;

 bool __declspec(property(get=get_autoSizeTextContainer, put=set_autoSizeTextContainer))  autoSizeTextContainer;

 UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 UnityEngine::CanvasRenderer __declspec(property(get=get_canvasRenderer))  canvasRenderer;

 UnityEngine::Vector4 __declspec(property(get=get_maskOffset, put=set_maskOffset))  maskOffset;


// Methods

/// @brief Method get_materialForRendering addr 0x2a90eb0 size 0x60 virtual true final false
 UnityEngine::Material get_materialForRendering() ;

/// @brief Method get_autoSizeTextContainer addr 0x2a90f10 size 0x8 virtual true final false
 bool get_autoSizeTextContainer() ;

/// @brief Method set_autoSizeTextContainer addr 0x2a90f18 size 0xa0 virtual true final false
 void set_autoSizeTextContainer(bool value) ;

/// @brief Method get_mesh addr 0x2a90fb8 size 0x8 virtual true final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method get_canvasRenderer addr 0x2a90fc0 size 0x94 virtual false final false
 UnityEngine::CanvasRenderer get_canvasRenderer() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2a91054 size 0x4 virtual true final true
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2a91058 size 0x4 virtual true final true
 void CalculateLayoutInputVertical() ;

/// @brief Method SetVerticesDirty addr 0x2a9105c size 0xe4 virtual true final false
 void SetVerticesDirty() ;

/// @brief Method SetLayoutDirty addr 0x2a91140 size 0xf0 virtual true final false
 void SetLayoutDirty() ;

/// @brief Method SetMaterialDirty addr 0x2a91230 size 0xec virtual true final false
 void SetMaterialDirty() ;

/// @brief Method SetAllDirty addr 0x2a9131c size 0x44 virtual true final false
 void SetAllDirty() ;

/// @brief Method DelayedGraphicRebuild addr 0x2a91360 size 0x68 virtual false final false
 System::Collections::IEnumerator DelayedGraphicRebuild() ;

/// @brief Method DelayedMaterialRebuild addr 0x2a913f0 size 0x68 virtual false final false
 System::Collections::IEnumerator DelayedMaterialRebuild() ;

/// @brief Method Rebuild addr 0x2a91480 size 0xe8 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method UpdateSubObjectPivot addr 0x2a917f0 size 0xd4 virtual false final false
 void UpdateSubObjectPivot() ;

/// @brief Method GetModifiedMaterial addr 0x2a918c4 size 0x100 virtual true final false
 UnityEngine::Material GetModifiedMaterial(UnityEngine::Material baseMaterial) ;

/// @brief Method UpdateMaterial addr 0x2a919c4 size 0xec virtual true final false
 void UpdateMaterial() ;

/// @brief Method get_maskOffset addr 0x2a91ab0 size 0x14 virtual false final false
 UnityEngine::Vector4 get_maskOffset() ;

/// @brief Method set_maskOffset addr 0x2a91ac4 size 0x2c virtual false final false
 void set_maskOffset(UnityEngine::Vector4 value) ;

/// @brief Method RecalculateClipping addr 0x2a91e40 size 0x8 virtual true final false
 void RecalculateClipping() ;

/// @brief Method Cull addr 0x2a91e48 size 0x220 virtual true final false
 void Cull(UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method UpdateCulling addr 0x2a92068 size 0x1cc virtual true final false
 void UpdateCulling() ;

/// @brief Method UpdateMeshPadding addr 0x2a92234 size 0x100 virtual true final false
 void UpdateMeshPadding() ;

/// @brief Method InternalCrossFadeColor addr 0x2a92334 size 0xcc virtual true final false
 void InternalCrossFadeColor(UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) ;

/// @brief Method InternalCrossFadeAlpha addr 0x2a92400 size 0x9c virtual true final false
 void InternalCrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) ;

/// @brief Method ForceMeshUpdate addr 0x2a9249c size 0xa8 virtual true final false
 void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing) ;

/// @brief Method GetTextInfo addr 0x2a92544 size 0xe8 virtual true final false
 TMPro::TMP_TextInfo GetTextInfo(::StringW text) ;

/// @brief Method ClearMesh addr 0x2a9262c size 0xf0 virtual true final false
 void ClearMesh() ;

/// @brief Method add_OnPreRenderText addr 0x2a9271c size 0xb4 virtual true final false
 void add_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

/// @brief Method remove_OnPreRenderText addr 0x2a927d0 size 0xb4 virtual true final false
 void remove_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

/// @brief Method UpdateGeometry addr 0x2a92884 size 0x78 virtual true final false
 void UpdateGeometry(UnityEngine::Mesh mesh, int32_t index) ;

/// @brief Method UpdateVertexData addr 0x2a928fc size 0x1e0 virtual true final false
 void UpdateVertexData(TMPro::TMP_VertexDataUpdateFlags flags) ;

/// @brief Method UpdateVertexData addr 0x2a92adc size 0x1dc virtual true final false
 void UpdateVertexData() ;

/// @brief Method UpdateFontAsset addr 0x2a92cb8 size 0x10 virtual false final false
 void UpdateFontAsset() ;

/// @brief Method Awake addr 0x2a92cc8 size 0x388 virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2a93050 size 0x130 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2a932e4 size 0x1a4 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2a93488 size 0x15c virtual true final false
 void OnDestroy() ;

/// @brief Method LoadFontAsset addr 0x2a935e4 size 0x5c0 virtual true final false
 void LoadFontAsset() ;

/// @brief Method GetCanvas addr 0x2a93180 size 0x164 virtual false final false
 UnityEngine::Canvas GetCanvas() ;

/// @brief Method UpdateEnvMapMatrix addr 0x2a93ba4 size 0x27c virtual false final false
 void UpdateEnvMapMatrix() ;

/// @brief Method EnableMasking addr 0x2a93e20 size 0x1a4 virtual false final false
 void EnableMasking() ;

/// @brief Method DisableMasking addr 0x2a93fc4 size 0x4 virtual false final false
 void DisableMasking() ;

/// @brief Method UpdateMask addr 0x2a91af0 size 0x350 virtual false final false
 void UpdateMask() ;

/// @brief Method GetMaterial addr 0x2a93fc8 size 0x144 virtual true final false
 UnityEngine::Material GetMaterial(UnityEngine::Material mat) ;

/// @brief Method GetMaterials addr 0x2a9410c size 0x1b0 virtual true final false
 ::ArrayW<UnityEngine::Material> GetMaterials(::ArrayW<UnityEngine::Material> mats) ;

/// @brief Method SetSharedMaterial addr 0x2a942bc size 0x38 virtual true final false
 void SetSharedMaterial(UnityEngine::Material mat) ;

/// @brief Method GetSharedMaterials addr 0x2a942f4 size 0x190 virtual true final false
 ::ArrayW<UnityEngine::Material> GetSharedMaterials() ;

/// @brief Method SetSharedMaterials addr 0x2a94484 size 0x3ac virtual true final false
 void SetSharedMaterials(::ArrayW<UnityEngine::Material> materials) ;

/// @brief Method SetOutlineThickness addr 0x2a94830 size 0x1c4 virtual true final false
 void SetOutlineThickness(float_t thickness) ;

/// @brief Method SetFaceColor addr 0x2a949f4 size 0x130 virtual true final false
 void SetFaceColor(UnityEngine::Color32 color) ;

/// @brief Method SetOutlineColor addr 0x2a94b24 size 0x130 virtual true final false
 void SetOutlineColor(UnityEngine::Color32 color) ;

/// @brief Method SetShaderDepth addr 0x2a94c54 size 0x124 virtual true final false
 void SetShaderDepth() ;

/// @brief Method SetCulling addr 0x2a94d78 size 0x2cc virtual true final false
 void SetCulling() ;

/// @brief Method SetPerspectiveCorrection addr 0x2a95044 size 0x84 virtual false final false
 void SetPerspectiveCorrection() ;

/// @brief Method SetMeshArrays addr 0x2a950c8 size 0x64 virtual false final false
 void SetMeshArrays(int32_t size) ;

/// @brief Method SetArraySizes addr 0x2a9512c size 0x1c04 virtual true final false
 int32_t SetArraySizes(::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> unicodeChars) ;

/// @brief Method ComputeMarginSize addr 0x2a96d30 size 0x124 virtual true final false
 void ComputeMarginSize() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2a96e54 size 0x38 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2a96e8c size 0x118 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2a96fa4 size 0x44 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2a96fe8 size 0x1fc virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method InternalUpdate addr 0x2a971e4 size 0x9c virtual true final false
 void InternalUpdate() ;

/// @brief Method OnPreRenderCanvas addr 0x2a91568 size 0x288 virtual false final false
 void OnPreRenderCanvas() ;

/// @brief Method GenerateTextMesh addr 0x2a80e30 size 0x7ad0 virtual true final false
 void GenerateTextMesh() ;

/// @brief Method GetTextContainerLocalCorners addr 0x2a97490 size 0x9c virtual true final false
 ::ArrayW<UnityEngine::Vector3> GetTextContainerLocalCorners() ;

/// @brief Method SetActiveSubMeshes addr 0x2a9752c size 0x108 virtual true final false
 void SetActiveSubMeshes(bool state) ;

/// @brief Method DestroySubMeshObjects addr 0x2a97634 size 0xdc virtual true final false
 void DestroySubMeshObjects() ;

/// @brief Method GetCompoundBounds addr 0x2a97710 size 0x248 virtual true final false
 UnityEngine::Bounds GetCompoundBounds() ;

/// @brief Method GetCanvasSpaceClippingRect addr 0x2a97958 size 0x1f0 virtual true final false
 UnityEngine::Rect GetCanvasSpaceClippingRect() ;

/// @brief Method UpdateSDFScale addr 0x2a97280 size 0x210 virtual false final false
 void UpdateSDFScale(float_t scaleDelta) ;

// Ctor Parameters []
explicit TextMeshProUGUI() ;

/// @brief Method .ctor addr 0x2a97b48 size 0xb8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TextMeshProUGUI___DelayedGraphicRebuild_d__18, "TMPro", "TextMeshProUGUI/<DelayedGraphicRebuild>d__18");
NEED_NO_BOX(TMPro::TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TextMeshProUGUI___DelayedMaterialRebuild_d__19, "TMPro", "TextMeshProUGUI/<DelayedMaterialRebuild>d__19");
NEED_NO_BOX(TMPro::TextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextMeshProUGUI, "TMPro", "TextMeshProUGUI");
