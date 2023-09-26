#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRTextUpdatePainter;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class RenderEvents;
}
// Type: UnityEngine.UIElements.UIR.Implementation::RenderEvents
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7565))
// CS Name: UnityEngine.UIElements.UIR.Implementation.RenderEvents
class CORDL_TYPE RenderEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RenderEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: " const&", def_value: None }]
constexpr RenderEvents(RenderEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: "&&", def_value: None }]
constexpr RenderEvents(RenderEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RenderEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderEvents& operator=(RenderEvents&& o) noexcept = default;
  constexpr RenderEvents& operator=(RenderEvents const& o) noexcept = default;
                


// Fields

static float_t __declspec(property(get=__get_VisibilityTreshold, put=__set_VisibilityTreshold))  VisibilityTreshold;

static void __set_VisibilityTreshold(float_t value) ;

static float_t __get_VisibilityTreshold() ;


// Methods

/// @brief Method ProcessOnClippingChanged addr 0x2c9037c size 0xec virtual false final false
static void ProcessOnClippingChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method ProcessOnOpacityChanged addr 0x2c90944 size 0xe4 virtual false final false
static void ProcessOnOpacityChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method ProcessOnColorChanged addr 0x2c90dac size 0x88 virtual false final false
static void ProcessOnColorChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method ProcessOnTransformOrSizeChanged addr 0x2c91000 size 0xc0 virtual false final false
static void ProcessOnTransformOrSizeChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method ProcessOnVisualsChanged addr 0x2c91444 size 0x104 virtual false final false
static void ProcessOnVisualsChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method ProcessRegenText addr 0x2c91968 size 0x5c virtual false final false
static void ProcessRegenText(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter painter, UnityEngine::UIElements::UIR::UIRenderDevice device, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method GetTransformIDTransformInfo addr 0x2c919c4 size 0x150 virtual false final false
static UnityEngine::Matrix4x4 GetTransformIDTransformInfo(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method GetClipRectIDClipInfo addr 0x2c91b14 size 0x1bc virtual false final false
static UnityEngine::Vector4 GetClipRectIDClipInfo(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method DepthFirstOnChildAdded addr 0x2c91cd0 size 0x528 virtual false final false
static uint32_t DepthFirstOnChildAdded(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement parent, UnityEngine::UIElements::VisualElement ve, int32_t index, bool resetState) ;

/// @brief Method DepthFirstOnChildRemoving addr 0x2c92c24 size 0x45c virtual false final false
static uint32_t DepthFirstOnChildRemoving(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method DepthFirstOnClippingChanged addr 0x2c90468 size 0x4dc virtual false final false
static void DepthFirstOnClippingChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement parent, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, UnityEngine::UIElements::UIR::UIRenderDevice device, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method DepthFirstOnOpacityChanged addr 0x2c90a28 size 0x384 virtual false final false
static void DepthFirstOnOpacityChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, float_t parentCompositeOpacity, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, bool hierarchical, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration) ;

/// @brief Method OnColorChanged addr 0x2c90e34 size 0x1cc virtual false final false
static void OnColorChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method DepthFirstOnTransformOrSizeChanged addr 0x2c910c0 size 0x384 virtual false final false
static void DepthFirstOnTransformOrSizeChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement parent, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, UnityEngine::UIElements::UIR::UIRenderDevice device, bool isAncestorOfChangeSkinned, bool transformChanged, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method DepthFirstOnVisualsChanged addr 0x2c91608 size 0x360 virtual false final false
static void DepthFirstOnVisualsChanged(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve, uint32_t dirtyID, bool parentHierarchyHidden, bool hierarchical, ByRef<UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method UpdateTextCoreSettings addr 0x2c9318c size 0x3d8 virtual false final false
static bool UpdateTextCoreSettings(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsElementHierarchyHidden addr 0x2c91548 size 0xc0 virtual false final false
static bool IsElementHierarchyHidden(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method GetLastDeepestChild addr 0x2c9232c size 0x80 virtual false final false
static UnityEngine::UIElements::VisualElement GetLastDeepestChild(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method DetermineSelfClipMethod addr 0x2c93080 size 0x10c virtual false final false
static UnityEngine::UIElements::UIR::Implementation::ClipMethod DetermineSelfClipMethod(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UpdateLocalFlipsWinding addr 0x2c921f8 size 0x134 virtual false final false
static bool UpdateLocalFlipsWinding(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UpdateWorldFlipsWinding addr 0x2c936dc size 0x58 virtual false final false
static void UpdateWorldFlipsWinding(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UpdateZeroScaling addr 0x2c93564 size 0x178 virtual false final false
static void UpdateZeroScaling(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method NeedsTransformID addr 0x2c923ac size 0x3c virtual false final false
static bool NeedsTransformID(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method NeedsColorID addr 0x2c923e8 size 0x20 virtual false final false
static bool NeedsColorID(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method InitColorIDs addr 0x2c92408 size 0x444 virtual false final false
static bool InitColorIDs(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method SetColorValues addr 0x2c9284c size 0x3d8 virtual false final false
static void SetColorValues(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::VisualElement ve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(UnityEngine::UIElements::UIR::Implementation::RenderEvents);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Implementation::RenderEvents, "UnityEngine.UIElements.UIR.Implementation", "RenderEvents");
