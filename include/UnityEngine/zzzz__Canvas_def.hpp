#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderMode;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class UnityEngine__Canvas__WillRenderCanvases;
}
// Type: ::WillRenderCanvases
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15780))
// CS Name: UnityEngine.Canvas::WillRenderCanvases
class CORDL_TYPE UnityEngine__Canvas__WillRenderCanvases : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Canvas__WillRenderCanvases() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Canvas__WillRenderCanvases", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Canvas__WillRenderCanvases(UnityEngine__Canvas__WillRenderCanvases const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Canvas__WillRenderCanvases", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Canvas__WillRenderCanvases(UnityEngine__Canvas__WillRenderCanvases&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Canvas__WillRenderCanvases(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(UnityEngine__Canvas__WillRenderCanvases&& o) noexcept = default;
  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(UnityEngine__Canvas__WillRenderCanvases const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Canvas__WillRenderCanvases(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d65210 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d652cc size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Canvas
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15781))
// CS Name: UnityEngine.Canvas
class CORDL_TYPE Canvas : public UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = UnityEngine::UnityEngine__Canvas__WillRenderCanvases;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Canvas() = default;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: " const&", def_value: None }]
constexpr Canvas(Canvas const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
constexpr Canvas(Canvas&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Canvas(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Canvas& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Canvas& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Canvas& operator=(Canvas&& o) noexcept = default;
  constexpr Canvas& operator=(Canvas const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __declspec(property(get=__get_preWillRenderCanvases, put=__set_preWillRenderCanvases))  preWillRenderCanvases;

static void __set_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __get_preWillRenderCanvases() ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __declspec(property(get=__get_willRenderCanvases, put=__set_willRenderCanvases))  willRenderCanvases;

static void __set_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __get_willRenderCanvases() ;

static System::Action_1<int32_t> __declspec(property(get=__get__externBeginRenderOverlays_k__BackingField, put=__set__externBeginRenderOverlays_k__BackingField))  _externBeginRenderOverlays_k__BackingField;

static void __set__externBeginRenderOverlays_k__BackingField(System::Action_1<int32_t> value) ;

static System::Action_1<int32_t> __get__externBeginRenderOverlays_k__BackingField() ;

static System::Action_2<int32_t,int32_t> __declspec(property(get=__get__externRenderOverlaysBefore_k__BackingField, put=__set__externRenderOverlaysBefore_k__BackingField))  _externRenderOverlaysBefore_k__BackingField;

static void __set__externRenderOverlaysBefore_k__BackingField(System::Action_2<int32_t,int32_t> value) ;

static System::Action_2<int32_t,int32_t> __get__externRenderOverlaysBefore_k__BackingField() ;

static System::Action_1<int32_t> __declspec(property(get=__get__externEndRenderOverlays_k__BackingField, put=__set__externEndRenderOverlays_k__BackingField))  _externEndRenderOverlays_k__BackingField;

static void __set__externEndRenderOverlays_k__BackingField(System::Action_1<int32_t> value) ;

static System::Action_1<int32_t> __get__externEndRenderOverlays_k__BackingField() ;


// Properties

 UnityEngine::RenderMode __declspec(property(get=get_renderMode, put=set_renderMode))  renderMode;

 bool __declspec(property(get=get_isRootCanvas))  isRootCanvas;

 UnityEngine::Rect __declspec(property(get=get_pixelRect))  pixelRect;

 float_t __declspec(property(get=get_scaleFactor, put=set_scaleFactor))  scaleFactor;

 float_t __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit))  referencePixelsPerUnit;

 bool __declspec(property(get=get_pixelPerfect, put=set_pixelPerfect))  pixelPerfect;

 int32_t __declspec(property(get=get_renderOrder))  renderOrder;

 bool __declspec(property(get=get_overrideSorting, put=set_overrideSorting))  overrideSorting;

 int32_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;

 int32_t __declspec(property(get=get_targetDisplay))  targetDisplay;

 int32_t __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID))  sortingLayerID;

 UnityEngine::AdditionalCanvasShaderChannels __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels))  additionalShaderChannels;

 UnityEngine::Canvas __declspec(property(get=get_rootCanvas))  rootCanvas;

 UnityEngine::Vector2 __declspec(property(get=get_renderingDisplaySize))  renderingDisplaySize;

static System::Action_1<int32_t> __declspec(property(get=get_externBeginRenderOverlays, put=set_externBeginRenderOverlays))  externBeginRenderOverlays;

static System::Action_2<int32_t,int32_t> __declspec(property(get=get_externRenderOverlaysBefore, put=set_externRenderOverlaysBefore))  externRenderOverlaysBefore;

static System::Action_1<int32_t> __declspec(property(get=get_externEndRenderOverlays, put=set_externEndRenderOverlays))  externEndRenderOverlays;

 UnityEngine::Camera __declspec(property(get=get_worldCamera, put=set_worldCamera))  worldCamera;


// Methods

/// @brief Method add_preWillRenderCanvases addr 0x2d64408 size 0xb8 virtual false final false
static void add_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method remove_preWillRenderCanvases addr 0x2d644c0 size 0xb8 virtual false final false
static void remove_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method add_willRenderCanvases addr 0x2d64578 size 0xbc virtual false final false
static void add_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method remove_willRenderCanvases addr 0x2d64634 size 0xbc virtual false final false
static void remove_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method get_renderMode addr 0x2d646f0 size 0x3c virtual false final false
 UnityEngine::RenderMode get_renderMode() ;

/// @brief Method set_renderMode addr 0x2d6472c size 0x44 virtual false final false
 void set_renderMode(UnityEngine::RenderMode value) ;

/// @brief Method get_isRootCanvas addr 0x2d64770 size 0x3c virtual false final false
 bool get_isRootCanvas() ;

/// @brief Method get_pixelRect addr 0x2d647ac size 0x58 virtual false final false
 UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_scaleFactor addr 0x2d64848 size 0x3c virtual false final false
 float_t get_scaleFactor() ;

/// @brief Method set_scaleFactor addr 0x2d64884 size 0x4c virtual false final false
 void set_scaleFactor(float_t value) ;

/// @brief Method get_referencePixelsPerUnit addr 0x2d648d0 size 0x3c virtual false final false
 float_t get_referencePixelsPerUnit() ;

/// @brief Method set_referencePixelsPerUnit addr 0x2d6490c size 0x4c virtual false final false
 void set_referencePixelsPerUnit(float_t value) ;

/// @brief Method get_pixelPerfect addr 0x2d64958 size 0x3c virtual false final false
 bool get_pixelPerfect() ;

/// @brief Method set_pixelPerfect addr 0x2d64994 size 0x44 virtual false final false
 void set_pixelPerfect(bool value) ;

/// @brief Method get_renderOrder addr 0x2d649d8 size 0x3c virtual false final false
 int32_t get_renderOrder() ;

/// @brief Method get_overrideSorting addr 0x2d64a14 size 0x3c virtual false final false
 bool get_overrideSorting() ;

/// @brief Method set_overrideSorting addr 0x2d64a50 size 0x44 virtual false final false
 void set_overrideSorting(bool value) ;

/// @brief Method get_sortingOrder addr 0x2d64a94 size 0x3c virtual false final false
 int32_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2d64ad0 size 0x44 virtual false final false
 void set_sortingOrder(int32_t value) ;

/// @brief Method get_targetDisplay addr 0x2d64b14 size 0x3c virtual false final false
 int32_t get_targetDisplay() ;

/// @brief Method get_sortingLayerID addr 0x2d64b50 size 0x3c virtual false final false
 int32_t get_sortingLayerID() ;

/// @brief Method set_sortingLayerID addr 0x2d64b8c size 0x44 virtual false final false
 void set_sortingLayerID(int32_t value) ;

/// @brief Method get_additionalShaderChannels addr 0x2d64bd0 size 0x3c virtual false final false
 UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method set_additionalShaderChannels addr 0x2d64c0c size 0x44 virtual false final false
 void set_additionalShaderChannels(UnityEngine::AdditionalCanvasShaderChannels value) ;

/// @brief Method get_rootCanvas addr 0x2d64c50 size 0x3c virtual false final false
 UnityEngine::Canvas get_rootCanvas() ;

/// @brief Method get_renderingDisplaySize addr 0x2d64c8c size 0x4c virtual false final false
 UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_externBeginRenderOverlays addr 0x2d64d1c size 0x48 virtual false final false
static System::Action_1<int32_t> get_externBeginRenderOverlays() ;

/// @brief Method set_externBeginRenderOverlays addr 0x2d64d64 size 0x4c virtual false final false
static void set_externBeginRenderOverlays(System::Action_1<int32_t> value) ;

/// @brief Method get_externRenderOverlaysBefore addr 0x2d64db0 size 0x48 virtual false final false
static System::Action_2<int32_t,int32_t> get_externRenderOverlaysBefore() ;

/// @brief Method set_externRenderOverlaysBefore addr 0x2d64df8 size 0x4c virtual false final false
static void set_externRenderOverlaysBefore(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method get_externEndRenderOverlays addr 0x2d64e44 size 0x48 virtual false final false
static System::Action_1<int32_t> get_externEndRenderOverlays() ;

/// @brief Method set_externEndRenderOverlays addr 0x2d64e8c size 0x4c virtual false final false
static void set_externEndRenderOverlays(System::Action_1<int32_t> value) ;

/// @brief Method SetExternalCanvasEnabled addr 0x2d64ed8 size 0x3c virtual false final false
static void SetExternalCanvasEnabled(bool enabled) ;

/// @brief Method get_worldCamera addr 0x2d64f14 size 0x3c virtual false final false
 UnityEngine::Camera get_worldCamera() ;

/// @brief Method set_worldCamera addr 0x2d64f50 size 0x44 virtual false final false
 void set_worldCamera(UnityEngine::Camera value) ;

/// @brief Method GetDefaultCanvasMaterial addr 0x2d64f94 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultCanvasMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial addr 0x2d64fbc size 0x28 virtual false final false
static UnityEngine::Material GetETC1SupportedCanvasMaterial() ;

/// @brief Method ForceUpdateCanvases addr 0x2d64fe4 size 0x10 virtual false final false
static void ForceUpdateCanvases() ;

/// @brief Method SendPreWillRenderCanvases addr 0x2d64ff4 size 0x64 virtual false final false
static void SendPreWillRenderCanvases() ;

/// @brief Method SendWillRenderCanvases addr 0x2d65058 size 0x64 virtual false final false
static void SendWillRenderCanvases() ;

/// @brief Method BeginRenderExtraOverlays addr 0x2d650bc size 0x6c virtual false final false
static void BeginRenderExtraOverlays(int32_t displayIndex) ;

/// @brief Method RenderExtraOverlaysBefore addr 0x2d65128 size 0x74 virtual false final false
static void RenderExtraOverlaysBefore(int32_t displayIndex, int32_t sortingOrder) ;

/// @brief Method EndRenderExtraOverlays addr 0x2d6519c size 0x6c virtual false final false
static void EndRenderExtraOverlays(int32_t displayIndex) ;

// Ctor Parameters []
explicit Canvas() ;

/// @brief Method .ctor addr 0x2d65208 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_pixelRect_Injected addr 0x2d64804 size 0x44 virtual false final false
 void get_pixelRect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method get_renderingDisplaySize_Injected addr 0x2d64cd8 size 0x44 virtual false final false
 void get_renderingDisplaySize_Injected(ByRef<UnityEngine::Vector2> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Canvas, "UnityEngine", "Canvas");
NEED_NO_BOX(UnityEngine::UnityEngine__Canvas__WillRenderCanvases);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Canvas__WillRenderCanvases, "UnityEngine", "Canvas/WillRenderCanvases");
