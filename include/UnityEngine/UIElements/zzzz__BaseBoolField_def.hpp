#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseBoolField;
}
// Type: UnityEngine.UIElements::BaseBoolField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7247)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7247), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7182))
// CS Name: UnityEngine.UIElements.BaseBoolField
class CORDL_TYPE BaseBoolField : public UnityEngine::UIElements::BaseField_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x428};

virtual ~BaseBoolField() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: " const&", def_value: None }]
constexpr BaseBoolField(BaseBoolField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "&&", def_value: None }]
constexpr BaseBoolField(BaseBoolField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseBoolField(void* ptr) noexcept : UnityEngine::UIElements::BaseField_1<bool>(ptr) {
}


  constexpr BaseBoolField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseBoolField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseBoolField& operator=(BaseBoolField&& o) noexcept = default;
  constexpr BaseBoolField& operator=(BaseBoolField const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::Label __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(UnityEngine::UIElements::Label value) ;

constexpr UnityEngine::UIElements::Label __get_m_Label() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CheckMark, put=__set_m_CheckMark))  m_CheckMark;

constexpr void __set_m_CheckMark(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_CheckMark() const;

 UnityEngine::UIElements::Clickable __declspec(property(get=__get_m_Clickable, put=__set_m_Clickable))  m_Clickable;

constexpr void __set_m_Clickable(UnityEngine::UIElements::Clickable value) ;

constexpr UnityEngine::UIElements::Clickable __get_m_Clickable() const;

 ::StringW __declspec(property(get=__get_m_OriginalText, put=__set_m_OriginalText))  m_OriginalText;

constexpr void __set_m_OriginalText(::StringW value) ;

constexpr ::StringW __get_m_OriginalText() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseBoolField(::StringW label) ;

/// @brief Method .ctor addr 0x2ce5bd8 size 0x29c virtual false final false
 void _ctor(::StringW label) ;

/// @brief Method OnNavigationSubmit addr 0x2ce5efc size 0x34 virtual false final false
 void OnNavigationSubmit(UnityEngine::UIElements::NavigationSubmitEvent evt) ;

/// @brief Method OnKeyDown addr 0x2ce5f30 size 0x114 virtual false final false
 void OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method get_text addr 0x2ce6044 size 0x1c virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2ce5e74 size 0x88 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method InitLabel addr 0x2ce6060 size 0x94 virtual true final false
 void InitLabel() ;

/// @brief Method SetValueWithoutNotify addr 0x2ce60f4 size 0xe0 virtual true final false
 void SetValueWithoutNotify(bool newValue) ;

/// @brief Method OnClickEvent addr 0x2ce61d4 size 0x288 virtual false final false
 void OnClickEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ToggleValue addr 0x2ce645c size 0x38 virtual true final false
 void ToggleValue() ;

/// @brief Method UpdateMixedValueContent addr 0x2ce6494 size 0x184 virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BaseBoolField);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BaseBoolField, "UnityEngine.UIElements", "BaseBoolField");
