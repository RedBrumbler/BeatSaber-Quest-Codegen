#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::ComponentModel {
class NullableConverter;
}
// Type: System.ComponentModel::NullableConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8313))
// CS Name: System.ComponentModel.NullableConverter
class CORDL_TYPE NullableConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NullableConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: " const&", def_value: None }]
constexpr NullableConverter(NullableConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: "&&", def_value: None }]
constexpr NullableConverter(NullableConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullableConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr NullableConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullableConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullableConverter& operator=(NullableConverter&& o) noexcept = default;
  constexpr NullableConverter& operator=(NullableConverter const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__NullableType_k__BackingField, put=__set__NullableType_k__BackingField))  _NullableType_k__BackingField;

constexpr void __set__NullableType_k__BackingField(System::Type value) ;

constexpr System::Type __get__NullableType_k__BackingField() const;

 System::Type __declspec(property(get=__get__UnderlyingType_k__BackingField, put=__set__UnderlyingType_k__BackingField))  _UnderlyingType_k__BackingField;

constexpr void __set__UnderlyingType_k__BackingField(System::Type value) ;

constexpr System::Type __get__UnderlyingType_k__BackingField() const;

 System::ComponentModel::TypeConverter __declspec(property(get=__get__UnderlyingTypeConverter_k__BackingField, put=__set__UnderlyingTypeConverter_k__BackingField))  _UnderlyingTypeConverter_k__BackingField;

constexpr void __set__UnderlyingTypeConverter_k__BackingField(System::ComponentModel::TypeConverter value) ;

constexpr System::ComponentModel::TypeConverter __get__UnderlyingTypeConverter_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_NullableType))  NullableType;

 System::Type __declspec(property(get=get_UnderlyingType))  UnderlyingType;

 System::ComponentModel::TypeConverter __declspec(property(get=get_UnderlyingTypeConverter))  UnderlyingTypeConverter;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit NullableConverter(System::Type type) ;

/// @brief Method .ctor addr 0x27afec4 size 0x12c virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method CanConvertFrom addr 0x27afff0 size 0xc4 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method ConvertFrom addr 0x27b00b4 size 0x13c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CanConvertTo addr 0x27b01f0 size 0xc4 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertTo addr 0x27b02b4 size 0x1f0 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method CreateInstance addr 0x27b04a4 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType CreateInstance(System::ComponentModel::ITypeDescriptorContext context, System::Collections::IDictionary propertyValues) ;

/// @brief Method GetCreateInstanceSupported addr 0x27b04c8 size 0x24 virtual true final false
 bool GetCreateInstanceSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetProperties addr 0x27b04ec size 0x24 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x27b0510 size 0x24 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValues addr 0x27b0534 size 0x3b0 virtual true final false
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x27b08e4 size 0x28 virtual true final false
 bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x27b090c size 0x28 virtual true final false
 bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method IsValid addr 0x27b0934 size 0x34 virtual true final false
 bool IsValid(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_NullableType addr 0x27b0968 size 0x8 virtual false final false
 System::Type get_NullableType() ;

/// @brief Method get_UnderlyingType addr 0x27b0970 size 0x8 virtual false final false
 System::Type get_UnderlyingType() ;

/// @brief Method get_UnderlyingTypeConverter addr 0x27b0978 size 0x8 virtual false final false
 System::ComponentModel::TypeConverter get_UnderlyingTypeConverter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::NullableConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::NullableConverter, "System.ComponentModel", "NullableConverter");
