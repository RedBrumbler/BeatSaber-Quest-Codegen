#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownField;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DropdownField__PopupTextElement;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DropdownField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__DropdownField____c__DisplayClass38_0;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7246), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(7246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7168))
// CS Name: UnityEngine.UIElements.DropdownField::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__DropdownField__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__DropdownField__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__UxmlTraits(UnityEngine__UIElements__DropdownField__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__UxmlTraits(UnityEngine__UIElements__DropdownField__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DropdownField__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<::StringW>(ptr) {
}


  constexpr UnityEngine__UIElements__DropdownField__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__UxmlTraits& operator=(UnityEngine__UIElements__DropdownField__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DropdownField__UxmlTraits& operator=(UnityEngine__UIElements__DropdownField__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_Index() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Choices, put=__set_m_Choices))  m_Choices;

constexpr void __set_m_Choices(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Choices() const;


// Methods

/// @brief Method Init addr 0x2ce2ff8 size 0x17c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__DropdownField__UxmlTraits() ;

/// @brief Method .ctor addr 0x2ce3174 size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7247), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(7247))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7171))
// CS Name: UnityEngine.UIElements.DropdownField
class CORDL_TYPE DropdownField : public UnityEngine::UIElements::BaseField_1<::StringW> {
public:
// Declarations
using __c__DisplayClass38_0 = UnityEngine::UIElements::UnityEngine__UIElements__DropdownField____c__DisplayClass38_0;

using PopupTextElement = UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__PopupTextElement;

using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x440};

virtual ~DropdownField() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: " const&", def_value: None }]
constexpr DropdownField(DropdownField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "&&", def_value: None }]
constexpr DropdownField(DropdownField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownField(void* ptr) noexcept : UnityEngine::UIElements::BaseField_1<::StringW>(ptr) {
}


  constexpr DropdownField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownField& operator=(DropdownField&& o) noexcept = default;
  constexpr DropdownField& operator=(DropdownField const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Choices, put=__set_m_Choices))  m_Choices;

constexpr void __set_m_Choices(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Choices() const;

 UnityEngine::UIElements::TextElement __declspec(property(get=__get_m_TextElement, put=__set_m_TextElement))  m_TextElement;

constexpr void __set_m_TextElement(UnityEngine::UIElements::TextElement value) ;

constexpr UnityEngine::UIElements::TextElement __get_m_TextElement() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ArrowElement, put=__set_m_ArrowElement))  m_ArrowElement;

constexpr void __set_m_ArrowElement(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_ArrowElement() const;

 System::Func_2<::StringW,::StringW> __declspec(property(get=__get_m_FormatSelectedValueCallback, put=__set_m_FormatSelectedValueCallback))  m_FormatSelectedValueCallback;

constexpr void __set_m_FormatSelectedValueCallback(System::Func_2<::StringW,::StringW> value) ;

constexpr System::Func_2<::StringW,::StringW> __get_m_FormatSelectedValueCallback() const;

 System::Func_2<::StringW,::StringW> __declspec(property(get=__get_m_FormatListItemCallback, put=__set_m_FormatListItemCallback))  m_FormatListItemCallback;

constexpr void __set_m_FormatListItemCallback(System::Func_2<::StringW,::StringW> value) ;

constexpr System::Func_2<::StringW,::StringW> __get_m_FormatListItemCallback() const;

 System::Func_1<UnityEngine::UIElements::IGenericMenu> __declspec(property(get=__get_createMenuCallback, put=__set_createMenuCallback))  createMenuCallback;

constexpr void __set_createMenuCallback(System::Func_1<UnityEngine::UIElements::IGenericMenu> value) ;

constexpr System::Func_1<UnityEngine::UIElements::IGenericMenu> __get_createMenuCallback() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

static ::StringW __declspec(property(get=__get_ussClassNameBasePopupField, put=__set_ussClassNameBasePopupField))  ussClassNameBasePopupField;

static void __set_ussClassNameBasePopupField(::StringW value) ;

static ::StringW __get_ussClassNameBasePopupField() ;

static ::StringW __declspec(property(get=__get_textUssClassNameBasePopupField, put=__set_textUssClassNameBasePopupField))  textUssClassNameBasePopupField;

static void __set_textUssClassNameBasePopupField(::StringW value) ;

static ::StringW __get_textUssClassNameBasePopupField() ;

static ::StringW __declspec(property(get=__get_arrowUssClassNameBasePopupField, put=__set_arrowUssClassNameBasePopupField))  arrowUssClassNameBasePopupField;

static void __set_arrowUssClassNameBasePopupField(::StringW value) ;

static ::StringW __get_arrowUssClassNameBasePopupField() ;

static ::StringW __declspec(property(get=__get_labelUssClassNameBasePopupField, put=__set_labelUssClassNameBasePopupField))  labelUssClassNameBasePopupField;

static void __set_labelUssClassNameBasePopupField(::StringW value) ;

static ::StringW __get_labelUssClassNameBasePopupField() ;

static ::StringW __declspec(property(get=__get_inputUssClassNameBasePopupField, put=__set_inputUssClassNameBasePopupField))  inputUssClassNameBasePopupField;

static void __set_inputUssClassNameBasePopupField(::StringW value) ;

static ::StringW __get_inputUssClassNameBasePopupField() ;

static ::StringW __declspec(property(get=__get_ussClassNamePopupField, put=__set_ussClassNamePopupField))  ussClassNamePopupField;

static void __set_ussClassNamePopupField(::StringW value) ;

static ::StringW __get_ussClassNamePopupField() ;

static ::StringW __declspec(property(get=__get_labelUssClassNamePopupField, put=__set_labelUssClassNamePopupField))  labelUssClassNamePopupField;

static void __set_labelUssClassNamePopupField(::StringW value) ;

static ::StringW __get_labelUssClassNamePopupField() ;

static ::StringW __declspec(property(get=__get_inputUssClassNamePopupField, put=__set_inputUssClassNamePopupField))  inputUssClassNamePopupField;

static void __set_inputUssClassNamePopupField(::StringW value) ;

static ::StringW __get_inputUssClassNamePopupField() ;


// Properties

 UnityEngine::UIElements::TextElement __declspec(property(get=get_textElement))  textElement;

 int32_t __declspec(property(put=set_index))  index;

 System::Collections::Generic::List_1<::StringW> __declspec(property(put=set_choices))  choices;

 ::StringW __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_textElement addr 0x2ce1d2c size 0x8 virtual false final false
 UnityEngine::UIElements::TextElement get_textElement() ;

/// @brief Method GetValueToDisplay addr 0x2ce1d34 size 0x8c virtual false final false
 ::StringW GetValueToDisplay() ;

/// @brief Method GetListItemToDisplay addr 0x2ce1dc0 size 0xac virtual false final false
 ::StringW GetListItemToDisplay(::StringW value) ;

/// @brief Method set_index addr 0x2ce1e6c size 0x9c virtual false final false
 void set_index(int32_t value) ;

// Ctor Parameters []
explicit DropdownField() ;

/// @brief Method .ctor addr 0x2ce1f08 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit DropdownField(::StringW label) ;

/// @brief Method .ctor addr 0x2ce1f10 size 0x2b8 virtual false final false
 void _ctor(::StringW label) ;

/// @brief Method AddMenuItems addr 0x2ce2220 size 0x308 virtual false final false
 void AddMenuItems(UnityEngine::UIElements::IGenericMenu menu) ;

/// @brief Method ChangeValueFromMenu addr 0x2ce2530 size 0x10 virtual false final false
 void ChangeValueFromMenu(::StringW menuItem) ;

/// @brief Method set_choices addr 0x2ce2540 size 0x70 virtual true final false
 void set_choices(System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method get_value addr 0x2ce25b0 size 0x48 virtual true final false
 ::StringW get_value() ;

/// @brief Method set_value addr 0x2ce25f8 size 0x84 virtual true final false
 void set_value(::StringW value) ;

/// @brief Method SetValueWithoutNotify addr 0x2ce267c size 0x110 virtual true final false
 void SetValueWithoutNotify(::StringW newValue) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2ce278c size 0x180 virtual true final false
 void ExecuteDefaultActionAtTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ShowMenu addr 0x2ce290c size 0x180 virtual false final false
 void ShowMenu() ;

/// @brief Method UpdateMixedValueContent addr 0x2ce2d60 size 0xc0 virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7168)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5092 }), TypeDefinitionIndex(TypeDefinitionIndex(7171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7167))
// CS Name: UnityEngine.UIElements.DropdownField::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__DropdownField__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::DropdownField,UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__DropdownField__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__UxmlFactory(UnityEngine__UIElements__DropdownField__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__UxmlFactory(UnityEngine__UIElements__DropdownField__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DropdownField__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::DropdownField,UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__DropdownField__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__UxmlFactory& operator=(UnityEngine__UIElements__DropdownField__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DropdownField__UxmlFactory& operator=(UnityEngine__UIElements__DropdownField__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__DropdownField__UxmlFactory() ;

/// @brief Method .ctor addr 0x2ce2fb0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::PopupTextElement
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6919))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7169))
// CS Name: UnityEngine.UIElements.DropdownField::PopupTextElement
class CORDL_TYPE UnityEngine__UIElements__DropdownField__PopupTextElement : public UnityEngine::UIElements::TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x478};

virtual ~UnityEngine__UIElements__DropdownField__PopupTextElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__PopupTextElement", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__PopupTextElement(UnityEngine__UIElements__DropdownField__PopupTextElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField__PopupTextElement", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField__PopupTextElement(UnityEngine__UIElements__DropdownField__PopupTextElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DropdownField__PopupTextElement(void* ptr) noexcept : UnityEngine::UIElements::TextElement(ptr) {
}


  constexpr UnityEngine__UIElements__DropdownField__PopupTextElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__PopupTextElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField__PopupTextElement& operator=(UnityEngine__UIElements__DropdownField__PopupTextElement&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DropdownField__PopupTextElement& operator=(UnityEngine__UIElements__DropdownField__PopupTextElement const& o) noexcept = default;
                


// Methods

/// @brief Method DoMeasure addr 0x2ce3260 size 0xa4 virtual true final false
 UnityEngine::Vector2 DoMeasure(float_t desiredWidth, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__DropdownField__PopupTextElement() ;

/// @brief Method .ctor addr 0x2ce21c8 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass38_0
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7170))
// CS Name: UnityEngine.UIElements.DropdownField::<>c__DisplayClass38_0
class CORDL_TYPE UnityEngine__UIElements__DropdownField____c__DisplayClass38_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__DropdownField____c__DisplayClass38_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField____c__DisplayClass38_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0(UnityEngine__UIElements__DropdownField____c__DisplayClass38_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__DropdownField____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0(UnityEngine__UIElements__DropdownField____c__DisplayClass38_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DropdownField____c__DisplayClass38_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0& operator=(UnityEngine__UIElements__DropdownField____c__DisplayClass38_0&& o) noexcept = default;
  constexpr UnityEngine__UIElements__DropdownField____c__DisplayClass38_0& operator=(UnityEngine__UIElements__DropdownField____c__DisplayClass38_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(::StringW value) ;

constexpr ::StringW __get_item() const;

 UnityEngine::UIElements::DropdownField __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::DropdownField value) ;

constexpr UnityEngine::UIElements::DropdownField __get___4__this() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__DropdownField____c__DisplayClass38_0() ;

/// @brief Method .ctor addr 0x2ce2528 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddMenuItems>b__0 addr 0x2ce3304 size 0x2c virtual false final false
 void _AddMenuItems_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownField);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownField, "UnityEngine.UIElements", "DropdownField");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__PopupTextElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__PopupTextElement, "UnityEngine.UIElements", "DropdownField/PopupTextElement");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlFactory, "UnityEngine.UIElements", "DropdownField/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField__UxmlTraits, "UnityEngine.UIElements", "DropdownField/UxmlTraits");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DropdownField____c__DisplayClass38_0, "UnityEngine.UIElements", "DropdownField/<>c__DisplayClass38_0");
