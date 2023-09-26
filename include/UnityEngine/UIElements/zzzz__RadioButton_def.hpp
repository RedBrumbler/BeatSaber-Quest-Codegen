#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__RadioButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__RadioButton__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7248)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 885 }), TypeDefinitionIndex(TypeDefinitionIndex(7102))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7193))
// CS Name: UnityEngine.UIElements.RadioButton::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__RadioButton__UxmlTraits : public UnityEngine::UIElements::BaseFieldTraits_2<bool,UnityEngine::UIElements::UxmlBoolAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__RadioButton__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RadioButton__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__RadioButton__UxmlTraits(UnityEngine__UIElements__RadioButton__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RadioButton__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__RadioButton__UxmlTraits(UnityEngine__UIElements__RadioButton__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__RadioButton__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::BaseFieldTraits_2<bool,UnityEngine::UIElements::UxmlBoolAttributeDescription>(ptr) {
}


  constexpr UnityEngine__UIElements__RadioButton__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__RadioButton__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__RadioButton__UxmlTraits& operator=(UnityEngine__UIElements__RadioButton__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__RadioButton__UxmlTraits& operator=(UnityEngine__UIElements__RadioButton__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;


// Methods

/// @brief Method Init addr 0x2cebea8 size 0x118 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__RadioButton__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cebfc0 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::RadioButton
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7182))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7194))
// CS Name: UnityEngine.UIElements.RadioButton
class CORDL_TYPE RadioButton : public UnityEngine::UIElements::BaseBoolField {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlFactory;

/// @brief Convert operator to UnityEngine::UIElements::IGroupBoxOption
constexpr operator  UnityEngine::UIElements::IGroupBoxOption() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x430};

virtual ~RadioButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: " const&", def_value: None }]
constexpr RadioButton(RadioButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "&&", def_value: None }]
constexpr RadioButton(RadioButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RadioButton(void* ptr) noexcept : UnityEngine::UIElements::BaseBoolField(ptr) {
}


  constexpr RadioButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RadioButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RadioButton& operator=(RadioButton&& o) noexcept = default;
  constexpr RadioButton& operator=(RadioButton const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_checkmarkBackgroundUssClassName, put=__set_checkmarkBackgroundUssClassName))  checkmarkBackgroundUssClassName;

static void __set_checkmarkBackgroundUssClassName(::StringW value) ;

static ::StringW __get_checkmarkBackgroundUssClassName() ;

static ::StringW __declspec(property(get=__get_checkmarkUssClassName, put=__set_checkmarkUssClassName))  checkmarkUssClassName;

static void __set_checkmarkUssClassName(::StringW value) ;

static ::StringW __get_checkmarkUssClassName() ;

static ::StringW __declspec(property(get=__get_textUssClassName, put=__set_textUssClassName))  textUssClassName;

static void __set_textUssClassName(::StringW value) ;

static ::StringW __get_textUssClassName() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CheckmarkBackground, put=__set_m_CheckmarkBackground))  m_CheckmarkBackground;

constexpr void __set_m_CheckmarkBackground(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_CheckmarkBackground() const;


// Properties

 bool __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_value addr 0x2ceb76c size 0x48 virtual true final false
 bool get_value() ;

/// @brief Method set_value addr 0x2ceb7b4 size 0xe0 virtual true final false
 void set_value(bool value) ;

// Ctor Parameters []
explicit RadioButton() ;

/// @brief Method .ctor addr 0x2ceb988 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit RadioButton(::StringW label) ;

/// @brief Method .ctor addr 0x2ceb990 size 0x1d8 virtual false final false
 void _ctor(::StringW label) ;

/// @brief Method InitLabel addr 0x2cebb68 size 0x78 virtual true final false
 void InitLabel() ;

/// @brief Method ToggleValue addr 0x2cebbe0 size 0x40 virtual true final false
 void ToggleValue() ;

/// @brief Method SetSelected addr 0x2cebc20 size 0x14 virtual true final true
 void SetSelected(bool selected) ;

/// @brief Method SetValueWithoutNotify addr 0x2cebc34 size 0x1c virtual true final false
 void SetValueWithoutNotify(bool newValue) ;

/// @brief Method UpdateCheckmark addr 0x2ceb894 size 0xf4 virtual false final false
 void UpdateCheckmark() ;

/// @brief Method UpdateMixedValueContent addr 0x2cebc50 size 0xa0 virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7108)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5104 }), TypeDefinitionIndex(TypeDefinitionIndex(7193)), TypeDefinitionIndex(TypeDefinitionIndex(7194))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7192))
// CS Name: UnityEngine.UIElements.RadioButton::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__RadioButton__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::RadioButton,UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__RadioButton__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RadioButton__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__RadioButton__UxmlFactory(UnityEngine__UIElements__RadioButton__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RadioButton__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__RadioButton__UxmlFactory(UnityEngine__UIElements__RadioButton__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__RadioButton__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::RadioButton,UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__RadioButton__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__RadioButton__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__RadioButton__UxmlFactory& operator=(UnityEngine__UIElements__RadioButton__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__RadioButton__UxmlFactory& operator=(UnityEngine__UIElements__RadioButton__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__RadioButton__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cebe60 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RadioButton, "UnityEngine.UIElements", "RadioButton");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlFactory, "UnityEngine.UIElements", "RadioButton/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__RadioButton__UxmlTraits, "UnityEngine.UIElements", "RadioButton/UxmlTraits");
