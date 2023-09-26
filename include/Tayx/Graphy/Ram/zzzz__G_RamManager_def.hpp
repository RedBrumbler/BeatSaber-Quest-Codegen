#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy::Ram {
class G_RamText;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModulePosition;
}
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
// Type: Tayx.Graphy.Ram::G_RamManager
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15219))
// CS Name: Tayx.Graphy.Ram.G_RamManager
class CORDL_TYPE G_RamManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Tayx::Graphy::UI::IMovable
constexpr operator  Tayx::Graphy::UI::IMovable() const noexcept;

/// @brief Convert operator to Tayx::Graphy::UI::IModifiableState
constexpr operator  Tayx::Graphy::UI::IModifiableState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~G_RamManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: " const&", def_value: None }]
constexpr G_RamManager(G_RamManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: "&&", def_value: None }]
constexpr G_RamManager(G_RamManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_RamManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_RamManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_RamManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_RamManager& operator=(G_RamManager&& o) noexcept = default;
  constexpr G_RamManager& operator=(G_RamManager const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_ramGraphGameObject, put=__set_m_ramGraphGameObject))  m_ramGraphGameObject;

constexpr void __set_m_ramGraphGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_ramGraphGameObject() const;

 System::Collections::Generic::List_1<UnityEngine::UI::Image> __declspec(property(get=__get_m_backgroundImages, put=__set_m_backgroundImages))  m_backgroundImages;

constexpr void __set_m_backgroundImages(System::Collections::Generic::List_1<UnityEngine::UI::Image> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Image> __get_m_backgroundImages() const;

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 Tayx::Graphy::Ram::G_RamGraph __declspec(property(get=__get_m_ramGraph, put=__set_m_ramGraph))  m_ramGraph;

constexpr void __set_m_ramGraph(Tayx::Graphy::Ram::G_RamGraph value) ;

constexpr Tayx::Graphy::Ram::G_RamGraph __get_m_ramGraph() const;

 Tayx::Graphy::Ram::G_RamText __declspec(property(get=__get_m_ramText, put=__set_m_ramText))  m_ramText;

constexpr void __set_m_ramText(Tayx::Graphy::Ram::G_RamText value) ;

constexpr Tayx::Graphy::Ram::G_RamText __get_m_ramText() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform))  m_rectTransform;

constexpr void __set_m_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_rectTransform() const;

 System::Collections::Generic::List_1<UnityEngine::GameObject> __declspec(property(get=__get_m_childrenGameObjects, put=__set_m_childrenGameObjects))  m_childrenGameObjects;

constexpr void __set_m_childrenGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> __get_m_childrenGameObjects() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_previousModuleState, put=__set_m_previousModuleState))  m_previousModuleState;

constexpr void __set_m_previousModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_previousModuleState() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __declspec(property(get=__get_m_currentModuleState, put=__set_m_currentModuleState))  m_currentModuleState;

constexpr void __set_m_currentModuleState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState __get_m_currentModuleState() const;


// Methods

/// @brief Method Awake addr 0x28a6aa4 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x28a6f28 size 0x4 virtual false final false
 void Start() ;

/// @brief Method SetPosition addr 0x28a1674 size 0x2e8 virtual true final true
 void SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition) ;

/// @brief Method SetState addr 0x28a2210 size 0x150 virtual true final true
 void SetState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState state, bool silentUpdate) ;

/// @brief Method RestorePreviousState addr 0x28a405c size 0xc virtual false final false
 void RestorePreviousState() ;

/// @brief Method UpdateParameters addr 0x28a2390 size 0x1ac virtual false final false
 void UpdateParameters() ;

/// @brief Method RefreshParameters addr 0x28a48bc size 0x194 virtual false final false
 void RefreshParameters() ;

/// @brief Method Init addr 0x28a6aa8 size 0x480 virtual false final false
 void Init() ;

/// @brief Method SetGraphActive addr 0x28a6f2c size 0x44 virtual false final false
 void SetGraphActive(bool active) ;

// Ctor Parameters []
explicit G_RamManager() ;

/// @brief Method .ctor addr 0x28a7010 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Ram
NEED_NO_BOX(Tayx::Graphy::Ram::G_RamManager);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Ram::G_RamManager, "Tayx.Graphy.Ram", "G_RamManager");
