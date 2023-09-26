#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
// Type: UnityEngine::GUILayout
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14798))
// CS Name: UnityEngine.GUILayout
class CORDL_TYPE GUILayout : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GUILayout() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: " const&", def_value: None }]
constexpr GUILayout(GUILayout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None }]
constexpr GUILayout(GUILayout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUILayout(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUILayout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUILayout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUILayout& operator=(GUILayout&& o) noexcept = default;
  constexpr GUILayout& operator=(GUILayout const& o) noexcept = default;
                


// Methods

/// @brief Method Label addr 0x2bc2584 size 0xa8 virtual false final false
static void Label(::StringW text, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method DoLabel addr 0x2bc262c size 0xcc virtual false final false
static void DoLabel(UnityEngine::GUIContent content, UnityEngine::GUIStyle style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method Width addr 0x2bb7610 size 0x9c virtual false final false
static UnityEngine::GUILayoutOption Width(float_t width) ;

/// @brief Method Height addr 0x2bb76ac size 0x9c virtual false final false
static UnityEngine::GUILayoutOption Height(float_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayout, "UnityEngine", "GUILayout");
