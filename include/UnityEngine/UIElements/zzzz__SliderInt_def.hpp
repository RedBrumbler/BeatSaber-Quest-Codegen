#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename TValueType>
struct UnityEngine__UIElements__BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SliderInt;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__SliderInt__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__SliderInt__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7098)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(7248))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7238))
// CS Name: UnityEngine.UIElements.SliderInt::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__SliderInt__UxmlTraits : public UnityEngine::UIElements::BaseFieldTraits_2<int32_t,UnityEngine::UIElements::UxmlIntAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~UnityEngine__UIElements__SliderInt__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__SliderInt__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__SliderInt__UxmlTraits(UnityEngine__UIElements__SliderInt__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__SliderInt__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__SliderInt__UxmlTraits(UnityEngine__UIElements__SliderInt__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__SliderInt__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::BaseFieldTraits_2<int32_t,UnityEngine::UIElements::UxmlIntAttributeDescription>(ptr) {
}


  constexpr UnityEngine__UIElements__SliderInt__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__SliderInt__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__SliderInt__UxmlTraits& operator=(UnityEngine__UIElements__SliderInt__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__SliderInt__UxmlTraits& operator=(UnityEngine__UIElements__SliderInt__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_LowValue() const;

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_HighValue() const;

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_PageSize, put=__set_m_PageSize))  m_PageSize;

constexpr void __set_m_PageSize(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_PageSize() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowInputField, put=__set_m_ShowInputField))  m_ShowInputField;

constexpr void __set_m_ShowInputField(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowInputField() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> __get_m_Direction() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Inverted, put=__set_m_Inverted))  m_Inverted;

constexpr void __set_m_Inverted(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Inverted() const;


// Methods

/// @brief Method Init addr 0x2cf3ff4 size 0x2c0 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__SliderInt__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cf42b4 size 0x230 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::SliderInt
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7218)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7218), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7239))
// CS Name: UnityEngine.UIElements.SliderInt
class CORDL_TYPE SliderInt : public UnityEngine::UIElements::BaseSlider_1<int32_t> {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x458};

virtual ~SliderInt() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInt", modifiers: " const&", def_value: None }]
constexpr SliderInt(SliderInt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInt", modifiers: "&&", def_value: None }]
constexpr SliderInt(SliderInt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderInt(void* ptr) noexcept : UnityEngine::UIElements::BaseSlider_1<int32_t>(ptr) {
}


  constexpr SliderInt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderInt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderInt& operator=(SliderInt&& o) noexcept = default;
  constexpr SliderInt& operator=(SliderInt const& o) noexcept = default;
                


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


// Properties

 float_t __declspec(property(get=get_pageSize, put=set_pageSize))  pageSize;


// Methods

// Ctor Parameters []
explicit SliderInt() ;

/// @brief Method .ctor addr 0x2cf34b4 size 0x18 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit SliderInt(::StringW label, int32_t start, int32_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x2cf34cc size 0x14c virtual false final false
 void _ctor(::StringW label, int32_t start, int32_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method get_pageSize addr 0x2cf3618 size 0x48 virtual true final false
 float_t get_pageSize() ;

/// @brief Method set_pageSize addr 0x2cf3660 size 0x118 virtual true final false
 void set_pageSize(float_t value) ;

/// @brief Method SliderLerpUnclamped addr 0x2cf3778 size 0xec virtual true final false
 int32_t SliderLerpUnclamped(int32_t a, int32_t b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x2cf3864 size 0x1c virtual true final false
 float_t SliderNormalizeValue(int32_t currentValue, int32_t lowerValue, int32_t higherValue) ;

/// @brief Method ParseStringToValue addr 0x2cf3880 size 0x2c virtual true final false
 int32_t ParseStringToValue(::StringW stringValue) ;

/// @brief Method ComputeValueAndDirectionFromClick addr 0x2cf38ac size 0x360 virtual true final false
 void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) ;

/// @brief Method ComputeValueFromKey addr 0x2cf3c0c size 0x2d0 virtual true final false
 void ComputeValueFromKey(UnityEngine::UIElements::UnityEngine__UIElements__BaseSlider_1__SliderKey<int32_t> sliderKey, bool isShift) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5110 }), TypeDefinitionIndex(TypeDefinitionIndex(7238)), TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7237))
// CS Name: UnityEngine.UIElements.SliderInt::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__SliderInt__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::SliderInt,UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__SliderInt__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__SliderInt__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__SliderInt__UxmlFactory(UnityEngine__UIElements__SliderInt__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__SliderInt__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__SliderInt__UxmlFactory(UnityEngine__UIElements__SliderInt__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__SliderInt__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::SliderInt,UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__SliderInt__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__SliderInt__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__SliderInt__UxmlFactory& operator=(UnityEngine__UIElements__SliderInt__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__SliderInt__UxmlFactory& operator=(UnityEngine__UIElements__SliderInt__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__SliderInt__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cf3fac size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::SliderInt);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::SliderInt, "UnityEngine.UIElements", "SliderInt");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlFactory, "UnityEngine.UIElements", "SliderInt/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__SliderInt__UxmlTraits, "UnityEngine.UIElements", "SliderInt/UxmlTraits");
