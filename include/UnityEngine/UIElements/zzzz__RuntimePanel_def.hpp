#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimePanel;
}
// Type: UnityEngine.UIElements::RuntimePanel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7130))
// CS Name: UnityEngine.UIElements.RuntimePanel
class CORDL_TYPE RuntimePanel : public UnityEngine::UIElements::BaseRuntimePanel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1e0};

virtual ~RuntimePanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: " const&", def_value: None }]
constexpr RuntimePanel(RuntimePanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "&&", def_value: None }]
constexpr RuntimePanel(RuntimePanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimePanel(void* ptr) noexcept : UnityEngine::UIElements::BaseRuntimePanel(ptr) {
}


  constexpr RuntimePanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimePanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimePanel& operator=(RuntimePanel&& o) noexcept = default;
  constexpr RuntimePanel& operator=(RuntimePanel const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::EventDispatcher __declspec(property(get=__get_s_EventDispatcher, put=__set_s_EventDispatcher))  s_EventDispatcher;

static void __set_s_EventDispatcher(UnityEngine::UIElements::EventDispatcher value) ;

static UnityEngine::UIElements::EventDispatcher __get_s_EventDispatcher() ;

 UnityEngine::UIElements::PanelSettings __declspec(property(get=__get_m_PanelSettings, put=__set_m_PanelSettings))  m_PanelSettings;

constexpr void __set_m_PanelSettings(UnityEngine::UIElements::PanelSettings value) ;

constexpr UnityEngine::UIElements::PanelSettings __get_m_PanelSettings() const;


// Properties

 UnityEngine::UIElements::PanelSettings __declspec(property(get=get_panelSettings))  panelSettings;


// Methods

/// @brief Method get_panelSettings addr 0x2cd18b4 size 0x8 virtual true final true
 UnityEngine::UIElements::PanelSettings get_panelSettings() ;

/// @brief Method Create addr 0x2cd18bc size 0x60 virtual false final false
static UnityEngine::UIElements::RuntimePanel Create(UnityEngine::ScriptableObject ownerObject) ;

// Ctor Parameters [CppParam { name: "ownerObject", ty: "UnityEngine::ScriptableObject", modifiers: "", def_value: None }]
explicit RuntimePanel(UnityEngine::ScriptableObject ownerObject) ;

/// @brief Method .ctor addr 0x2cd191c size 0x1f8 virtual false final false
 void _ctor(UnityEngine::ScriptableObject ownerObject) ;

/// @brief Method Update addr 0x2cd1b98 size 0x80 virtual true final false
 void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::RuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RuntimePanel, "UnityEngine.UIElements", "RuntimePanel");
