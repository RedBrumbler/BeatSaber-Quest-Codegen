#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
// Type: UnityEngine.Timeline::IPropertyPreview
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14165))
// CS Name: UnityEngine.Timeline.IPropertyPreview
class CORDL_TYPE IPropertyPreview : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPropertyPreview() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPropertyPreview(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GatherProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 void GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::IPropertyPreview);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IPropertyPreview, "UnityEngine.Timeline", "IPropertyPreview");
