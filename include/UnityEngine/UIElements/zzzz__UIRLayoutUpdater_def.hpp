#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRLayoutUpdater;
}
// Type: UnityEngine.UIElements::UIRLayoutUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7447))
// CS Name: UnityEngine.UIElements.UIRLayoutUpdater
class CORDL_TYPE UIRLayoutUpdater : public UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UIRLayoutUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: " const&", def_value: None }]
constexpr UIRLayoutUpdater(UIRLayoutUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "&&", def_value: None }]
constexpr UIRLayoutUpdater(UIRLayoutUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRLayoutUpdater(void* ptr) noexcept : UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr UIRLayoutUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRLayoutUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRLayoutUpdater& operator=(UIRLayoutUpdater&& o) noexcept = default;
  constexpr UIRLayoutUpdater& operator=(UIRLayoutUpdater const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;


// Properties

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method get_profilerMarker addr 0x2d32874 size 0x58 virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2d328cc size 0x48 virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Update addr 0x2d32914 size 0x2ec virtual true final false
 void Update() ;

/// @brief Method UpdateSubTree addr 0x2d32c00 size 0x810 virtual false final false
 void UpdateSubTree(UnityEngine::UIElements::VisualElement ve, int32_t currentLayoutPass, bool isDisplayed) ;

// Ctor Parameters []
explicit UIRLayoutUpdater() ;

/// @brief Method .ctor addr 0x2d33410 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIRLayoutUpdater, "UnityEngine.UIElements", "UIRLayoutUpdater");
