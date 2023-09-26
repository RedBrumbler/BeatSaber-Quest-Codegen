#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System {
class Attribute;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Exception;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
// Type: ::SimplePropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8348))
// CS Name: System.ComponentModel.TypeConverter::SimplePropertyDescriptor
class CORDL_TYPE System__ComponentModel__TypeConverter__SimplePropertyDescriptor : public System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~System__ComponentModel__TypeConverter__SimplePropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__SimplePropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System__ComponentModel__TypeConverter__SimplePropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__SimplePropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System__ComponentModel__TypeConverter__SimplePropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeConverter__SimplePropertyDescriptor(void* ptr) noexcept : System::ComponentModel::PropertyDescriptor(ptr) {
}


  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(System__ComponentModel__TypeConverter__SimplePropertyDescriptor&& o) noexcept = default;
  constexpr System__ComponentModel__TypeConverter__SimplePropertyDescriptor& operator=(System__ComponentModel__TypeConverter__SimplePropertyDescriptor const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_componentType, put=__set_componentType))  componentType;

constexpr void __set_componentType(System::Type value) ;

constexpr System::Type __get_componentType() const;

 System::Type __declspec(property(get=__get_propertyType, put=__set_propertyType))  propertyType;

constexpr void __set_propertyType(System::Type value) ;

constexpr System::Type __get_propertyType() const;


// Properties

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;


// Methods

// Ctor Parameters [CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "propertyType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeConverter__SimplePropertyDescriptor(System::Type componentType, ::StringW name, System::Type propertyType, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x27cadbc size 0x34 virtual false final false
 void _ctor(System::Type componentType, ::StringW name, System::Type propertyType, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method get_ComponentType addr 0x27cadf0 size 0x8 virtual true final false
 System::Type get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x27cadf8 size 0x84 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x27cae7c size 0x8 virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method CanResetValue addr 0x27cae84 size 0x144 virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ResetValue addr 0x27cafc8 size 0x12c virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method ShouldSerializeValue addr 0x27cb0f4 size 0x8 virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::StandardValuesCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8349))
// CS Name: System.ComponentModel.TypeConverter::StandardValuesCollection
class CORDL_TYPE System__ComponentModel__TypeConverter__StandardValuesCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__TypeConverter__StandardValuesCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__StandardValuesCollection", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__StandardValuesCollection(System__ComponentModel__TypeConverter__StandardValuesCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeConverter__StandardValuesCollection", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeConverter__StandardValuesCollection(System__ComponentModel__TypeConverter__StandardValuesCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeConverter__StandardValuesCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(System__ComponentModel__TypeConverter__StandardValuesCollection&& o) noexcept = default;
  constexpr System__ComponentModel__TypeConverter__StandardValuesCollection& operator=(System__ComponentModel__TypeConverter__StandardValuesCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ICollection __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get_values() const;

 System::Array __declspec(property(get=__get_valueArray, put=__set_valueArray))  valueArray;

constexpr void __set_valueArray(System::Array value) ;

constexpr System::Array __get_valueArray() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "values", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeConverter__StandardValuesCollection(System::Collections::ICollection values) ;

/// @brief Method .ctor addr 0x27b5188 size 0xb0 virtual false final false
 void _ctor(System::Collections::ICollection values) ;

/// @brief Method get_Count addr 0x27cb0fc size 0xbc virtual false final false
 int32_t get_Count() ;

/// @brief Method CopyTo addr 0x27cb1b8 size 0xb8 virtual false final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x27cb270 size 0xa0 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x27cb310 size 0x4 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27cb314 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27cb31c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27cb324 size 0x4 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27cb328 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::TypeConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8350))
// CS Name: System.ComponentModel.TypeConverter
class CORDL_TYPE TypeConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StandardValuesCollection = System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection;

using SimplePropertyDescriptor = System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: " const&", def_value: None }]
constexpr TypeConverter(TypeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "&&", def_value: None }]
constexpr TypeConverter(TypeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeConverter& operator=(TypeConverter&& o) noexcept = default;
  constexpr TypeConverter& operator=(TypeConverter const& o) noexcept = default;
                


// Fields

/// @brief Field s_UseCompatibleTypeConverterBehavior offset 0
static constexpr ::ConstString  s_UseCompatibleTypeConverterBehavior{u"UseCompatibleTypeConverterBehavior"};

static bool __declspec(property(get=__get_useCompatibleTypeConversion, put=__set_useCompatibleTypeConversion))  useCompatibleTypeConversion;

static void __set_useCompatibleTypeConversion(bool value) ;

static bool __get_useCompatibleTypeConversion() ;


// Properties

static bool __declspec(property(get=get_UseCompatibleTypeConversion))  UseCompatibleTypeConversion;


// Methods

/// @brief Method get_UseCompatibleTypeConversion addr 0x27ca2d4 size 0x50 virtual false final false
static bool get_UseCompatibleTypeConversion() ;

/// @brief Method CanConvertFrom addr 0x27ca324 size 0x14 virtual false final false
 bool CanConvertFrom(System::Type sourceType) ;

/// @brief Method CanConvertFrom addr 0x27b3ec0 size 0x88 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x27ca338 size 0x14 virtual false final false
 bool CanConvertTo(System::Type destinationType) ;

/// @brief Method CanConvertTo addr 0x27b7088 size 0x88 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x27ca34c size 0x7c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertFrom addr 0x27b4280 size 0x6c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertFromInvariantString addr 0x27ca4fc size 0x7c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromInvariantString(::StringW text) ;

/// @brief Method ConvertFromInvariantString addr 0x27ca584 size 0x80 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromInvariantString(System::ComponentModel::ITypeDescriptorContext context, ::StringW text) ;

/// @brief Method ConvertFromString addr 0x27ca604 size 0x18 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(::StringW text) ;

/// @brief Method ConvertFromString addr 0x27ca61c size 0x80 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(System::ComponentModel::ITypeDescriptorContext context, ::StringW text) ;

/// @brief Method ConvertFromString addr 0x27ca578 size 0xc virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertFromString(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::StringW text) ;

/// @brief Method ConvertTo addr 0x27ca69c size 0x1c virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method ConvertTo addr 0x27b4738 size 0x238 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method ConvertToInvariantString addr 0x27ca838 size 0x74 virtual false final false
 ::StringW ConvertToInvariantString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToInvariantString addr 0x27bb220 size 0x78 virtual false final false
 ::StringW ConvertToInvariantString(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x27b5360 size 0x100 virtual false final false
 ::StringW ConvertToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x27ca988 size 0x104 virtual false final false
 ::StringW ConvertToString(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertToString addr 0x27ca8ac size 0xdc virtual false final false
 ::StringW ConvertToString(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CreateInstance addr 0x27caa8c size 0x14 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstance(System::Collections::IDictionary propertyValues) ;

/// @brief Method CreateInstance addr 0x27caaa0 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType CreateInstance(System::ComponentModel::ITypeDescriptorContext context, System::Collections::IDictionary propertyValues) ;

/// @brief Method GetConvertFromException addr 0x27ca3c8 size 0x134 virtual false final false
 System::Exception GetConvertFromException(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetConvertToException addr 0x27ca6b8 size 0x180 virtual false final false
 System::Exception GetConvertToException(::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method GetCreateInstanceSupported addr 0x27caaa8 size 0x10 virtual false final false
 bool GetCreateInstanceSupported() ;

/// @brief Method GetCreateInstanceSupported addr 0x27caab8 size 0x8 virtual true final false
 bool GetCreateInstanceSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetProperties addr 0x27caac0 size 0xc virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetProperties addr 0x27caacc size 0xf0 virtual false final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetProperties addr 0x27cabbc size 0x8 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x27cabc4 size 0x10 virtual false final false
 bool GetPropertiesSupported() ;

/// @brief Method GetPropertiesSupported addr 0x27cabd4 size 0x8 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValues addr 0x27cabdc size 0x10 virtual false final false
 System::Collections::ICollection GetStandardValues() ;

/// @brief Method GetStandardValues addr 0x27cabec size 0x8 virtual true final false
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x27cabf4 size 0x14 virtual false final false
 bool GetStandardValuesExclusive() ;

/// @brief Method GetStandardValuesExclusive addr 0x27cac08 size 0x8 virtual true final false
 bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x27cac10 size 0x14 virtual false final false
 bool GetStandardValuesSupported() ;

/// @brief Method GetStandardValuesSupported addr 0x27cac24 size 0x8 virtual true final false
 bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method IsValid addr 0x27cac2c size 0x18 virtual false final false
 bool IsValid(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsValid addr 0x27cac44 size 0x140 virtual true final false
 bool IsValid(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SortProperties addr 0x27cad84 size 0x38 virtual false final false
 System::ComponentModel::PropertyDescriptorCollection SortProperties(System::ComponentModel::PropertyDescriptorCollection props, ::ArrayW<::StringW> names) ;

// Ctor Parameters []
explicit TypeConverter() ;

/// @brief Method .ctor addr 0x27b3e08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor, "System.ComponentModel", "TypeConverter/SimplePropertyDescriptor");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, "System.ComponentModel", "TypeConverter/StandardValuesCollection");
NEED_NO_BOX(System::ComponentModel::TypeConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverter, "System.ComponentModel", "TypeConverter");
