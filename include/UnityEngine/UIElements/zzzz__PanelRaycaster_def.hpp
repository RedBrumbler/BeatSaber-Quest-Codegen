#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelRaycaster;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__PanelRaycaster__FloatIntBits;
}
// Type: ::FloatIntBits
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13119))
// CS Name: UnityEngine.UIElements.PanelRaycaster::FloatIntBits
struct CORDL_TYPE UnityEngine__UIElements__PanelRaycaster__FloatIntBits : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__PanelRaycaster__FloatIntBits(float_t f, int32_t i) noexcept;


                    constexpr UnityEngine__UIElements__PanelRaycaster__FloatIntBits(UnityEngine__UIElements__PanelRaycaster__FloatIntBits const&) = default;
                    constexpr UnityEngine__UIElements__PanelRaycaster__FloatIntBits(UnityEngine__UIElements__PanelRaycaster__FloatIntBits&&) = default;
                    constexpr UnityEngine__UIElements__PanelRaycaster__FloatIntBits& operator=(UnityEngine__UIElements__PanelRaycaster__FloatIntBits const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__PanelRaycaster__FloatIntBits& operator=(UnityEngine__UIElements__PanelRaycaster__FloatIntBits&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PanelRaycaster__FloatIntBits(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(float_t value) ;

constexpr float_t __get_f() const;

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelRaycaster
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13120))
// CS Name: UnityEngine.UIElements.PanelRaycaster
class CORDL_TYPE PanelRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using FloatIntBits = UnityEngine::UIElements::UnityEngine__UIElements__PanelRaycaster__FloatIntBits;

/// @brief Convert operator to UnityEngine::UIElements::IRuntimePanelComponent
constexpr operator  UnityEngine::UIElements::IRuntimePanelComponent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PanelRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: " const&", def_value: None }]
constexpr PanelRaycaster(PanelRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "&&", def_value: None }]
constexpr PanelRaycaster(PanelRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelRaycaster(void* ptr) noexcept : UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr PanelRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelRaycaster& operator=(PanelRaycaster&& o) noexcept = default;
  constexpr PanelRaycaster& operator=(PanelRaycaster const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=__get_m_Panel, put=__set_m_Panel))  m_Panel;

constexpr void __set_m_Panel(UnityEngine::UIElements::BaseRuntimePanel value) ;

constexpr UnityEngine::UIElements::BaseRuntimePanel __get_m_Panel() const;


// Properties

 UnityEngine::UIElements::IPanel __declspec(property(get=get_panel, put=set_panel))  panel;

 UnityEngine::GameObject __declspec(property(get=get_selectableGameObject))  selectableGameObject;

 int32_t __declspec(property(get=get_sortOrderPriority))  sortOrderPriority;

 int32_t __declspec(property(get=get_renderOrderPriority))  renderOrderPriority;

 UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;


// Methods

/// @brief Method get_panel addr 0x2c4dbf8 size 0x8 virtual true final true
 UnityEngine::UIElements::IPanel get_panel() ;

/// @brief Method set_panel addr 0x2c4dc00 size 0xa4 virtual true final true
 void set_panel(UnityEngine::UIElements::IPanel value) ;

/// @brief Method RegisterCallbacks addr 0x2c4dd3c size 0x98 virtual false final false
 void RegisterCallbacks() ;

/// @brief Method UnregisterCallbacks addr 0x2c4dca4 size 0x98 virtual false final false
 void UnregisterCallbacks() ;

/// @brief Method OnPanelDestroyed addr 0x2c4ddd4 size 0x8 virtual false final false
 void OnPanelDestroyed() ;

/// @brief Method get_selectableGameObject addr 0x2c4dddc size 0x18 virtual false final false
 UnityEngine::GameObject get_selectableGameObject() ;

/// @brief Method get_sortOrderPriority addr 0x2c4ddf4 size 0x34 virtual true final false
 int32_t get_sortOrderPriority() ;

/// @brief Method get_renderOrderPriority addr 0x2c4de28 size 0x18 virtual true final false
 int32_t get_renderOrderPriority() ;

/// @brief Method Raycast addr 0x2c4de48 size 0x4f4 virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method get_eventCamera addr 0x2c4e33c size 0x8 virtual true final false
 UnityEngine::Camera get_eventCamera() ;

/// @brief Method ConvertFloatBitsToInt addr 0x2c4de40 size 0x8 virtual false final false
static int32_t ConvertFloatBitsToInt(float_t f) ;

// Ctor Parameters []
explicit PanelRaycaster() ;

/// @brief Method .ctor addr 0x2c4e344 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PanelRaycaster);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PanelRaycaster, "UnityEngine.UIElements", "PanelRaycaster");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PanelRaycaster__FloatIntBits, "UnityEngine.UIElements", "PanelRaycaster/FloatIntBits");
