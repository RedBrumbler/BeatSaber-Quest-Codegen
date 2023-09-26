#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
struct Required;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonPropertyAttribute;
}
// Type: Newtonsoft.Json::JsonPropertyAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11786))
// CS Name: Newtonsoft.Json.JsonPropertyAttribute
class CORDL_TYPE JsonPropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~JsonPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr JsonPropertyAttribute(JsonPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr JsonPropertyAttribute(JsonPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonPropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonPropertyAttribute& operator=(JsonPropertyAttribute&& o) noexcept = default;
  constexpr JsonPropertyAttribute& operator=(JsonPropertyAttribute const& o) noexcept = default;
                


// Fields

 System::Nullable_1<Newtonsoft::Json::NullValueHandling> __declspec(property(get=__get__nullValueHandling, put=__set__nullValueHandling))  _nullValueHandling;

constexpr void __set__nullValueHandling(System::Nullable_1<Newtonsoft::Json::NullValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::NullValueHandling> __get__nullValueHandling() const;

 System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __declspec(property(get=__get__defaultValueHandling, put=__set__defaultValueHandling))  _defaultValueHandling;

constexpr void __set__defaultValueHandling(System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __get__defaultValueHandling() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__referenceLoopHandling, put=__set__referenceLoopHandling))  _referenceLoopHandling;

constexpr void __set__referenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__referenceLoopHandling() const;

 System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __declspec(property(get=__get__objectCreationHandling, put=__set__objectCreationHandling))  _objectCreationHandling;

constexpr void __set__objectCreationHandling(System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __get__objectCreationHandling() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__typeNameHandling, put=__set__typeNameHandling))  _typeNameHandling;

constexpr void __set__typeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__typeNameHandling() const;

 System::Nullable_1<bool> __declspec(property(get=__get__isReference, put=__set__isReference))  _isReference;

constexpr void __set__isReference(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__isReference() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__order, put=__set__order))  _order;

constexpr void __set__order(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__order() const;

 System::Nullable_1<Newtonsoft::Json::Required> __declspec(property(get=__get__required, put=__set__required))  _required;

constexpr void __set__required(System::Nullable_1<Newtonsoft::Json::Required> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Required> __get__required() const;

 System::Nullable_1<bool> __declspec(property(get=__get__itemIsReference, put=__set__itemIsReference))  _itemIsReference;

constexpr void __set__itemIsReference(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__itemIsReference() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__itemReferenceLoopHandling, put=__set__itemReferenceLoopHandling))  _itemReferenceLoopHandling;

constexpr void __set__itemReferenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__itemReferenceLoopHandling() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__itemTypeNameHandling, put=__set__itemTypeNameHandling))  _itemTypeNameHandling;

constexpr void __set__itemTypeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__itemTypeNameHandling() const;

 System::Type __declspec(property(get=__get__ItemConverterType_k__BackingField, put=__set__ItemConverterType_k__BackingField))  _ItemConverterType_k__BackingField;

constexpr void __set__ItemConverterType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ItemConverterType_k__BackingField() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ItemConverterParameters_k__BackingField, put=__set__ItemConverterParameters_k__BackingField))  _ItemConverterParameters_k__BackingField;

constexpr void __set__ItemConverterParameters_k__BackingField(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__ItemConverterParameters_k__BackingField() const;

 ::StringW __declspec(property(get=__get__PropertyName_k__BackingField, put=__set__PropertyName_k__BackingField))  _PropertyName_k__BackingField;

constexpr void __set__PropertyName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PropertyName_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_ItemConverterType, put=set_ItemConverterType))  ItemConverterType;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ItemConverterParameters, put=set_ItemConverterParameters))  ItemConverterParameters;

 Newtonsoft::Json::NullValueHandling __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling))  NullValueHandling;

 Newtonsoft::Json::DefaultValueHandling __declspec(property(get=get_DefaultValueHandling, put=set_DefaultValueHandling))  DefaultValueHandling;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ReferenceLoopHandling, put=set_ReferenceLoopHandling))  ReferenceLoopHandling;

 Newtonsoft::Json::ObjectCreationHandling __declspec(property(get=get_ObjectCreationHandling, put=set_ObjectCreationHandling))  ObjectCreationHandling;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_TypeNameHandling, put=set_TypeNameHandling))  TypeNameHandling;

 bool __declspec(property(get=get_IsReference, put=set_IsReference))  IsReference;

 int32_t __declspec(property(get=get_Order, put=set_Order))  Order;

 Newtonsoft::Json::Required __declspec(property(get=get_Required, put=set_Required))  Required;

 ::StringW __declspec(property(get=get_PropertyName, put=set_PropertyName))  PropertyName;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ItemReferenceLoopHandling, put=set_ItemReferenceLoopHandling))  ItemReferenceLoopHandling;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_ItemTypeNameHandling, put=set_ItemTypeNameHandling))  ItemTypeNameHandling;

 bool __declspec(property(get=get_ItemIsReference, put=set_ItemIsReference))  ItemIsReference;


// Methods

/// @brief Method get_ItemConverterType addr 0x2502830 size 0x8 virtual false final false
 System::Type get_ItemConverterType() ;

/// @brief Method set_ItemConverterType addr 0x2502838 size 0x8 virtual false final false
 void set_ItemConverterType(System::Type value) ;

/// @brief Method get_ItemConverterParameters addr 0x2502840 size 0x8 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_ItemConverterParameters() ;

/// @brief Method set_ItemConverterParameters addr 0x2502848 size 0x8 virtual false final false
 void set_ItemConverterParameters(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_NullValueHandling addr 0x2502850 size 0x50 virtual false final false
 Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// @brief Method set_NullValueHandling addr 0x25028a0 size 0x68 virtual false final false
 void set_NullValueHandling(Newtonsoft::Json::NullValueHandling value) ;

/// @brief Method get_DefaultValueHandling addr 0x2502908 size 0x50 virtual false final false
 Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling() ;

/// @brief Method set_DefaultValueHandling addr 0x2502958 size 0x68 virtual false final false
 void set_DefaultValueHandling(Newtonsoft::Json::DefaultValueHandling value) ;

/// @brief Method get_ReferenceLoopHandling addr 0x25029c0 size 0x50 virtual false final false
 Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling() ;

/// @brief Method set_ReferenceLoopHandling addr 0x2502a10 size 0x68 virtual false final false
 void set_ReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_ObjectCreationHandling addr 0x2502a78 size 0x50 virtual false final false
 Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling() ;

/// @brief Method set_ObjectCreationHandling addr 0x2502ac8 size 0x68 virtual false final false
 void set_ObjectCreationHandling(Newtonsoft::Json::ObjectCreationHandling value) ;

/// @brief Method get_TypeNameHandling addr 0x2502b30 size 0x50 virtual false final false
 Newtonsoft::Json::TypeNameHandling get_TypeNameHandling() ;

/// @brief Method set_TypeNameHandling addr 0x2502b80 size 0x68 virtual false final false
 void set_TypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

/// @brief Method get_IsReference addr 0x2502be8 size 0x5c virtual false final false
 bool get_IsReference() ;

/// @brief Method set_IsReference addr 0x2502c44 size 0x68 virtual false final false
 void set_IsReference(bool value) ;

/// @brief Method get_Order addr 0x2502cac size 0x50 virtual false final false
 int32_t get_Order() ;

/// @brief Method set_Order addr 0x2502cfc size 0x68 virtual false final false
 void set_Order(int32_t value) ;

/// @brief Method get_Required addr 0x2502d64 size 0x50 virtual false final false
 Newtonsoft::Json::Required get_Required() ;

/// @brief Method set_Required addr 0x2502db4 size 0x68 virtual false final false
 void set_Required(Newtonsoft::Json::Required value) ;

/// @brief Method get_PropertyName addr 0x2502e1c size 0x8 virtual false final false
 ::StringW get_PropertyName() ;

/// @brief Method set_PropertyName addr 0x2502e24 size 0x8 virtual false final false
 void set_PropertyName(::StringW value) ;

/// @brief Method get_ItemReferenceLoopHandling addr 0x2502e2c size 0x50 virtual false final false
 Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling() ;

/// @brief Method set_ItemReferenceLoopHandling addr 0x2502e7c size 0x68 virtual false final false
 void set_ItemReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_ItemTypeNameHandling addr 0x2502ee4 size 0x50 virtual false final false
 Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling() ;

/// @brief Method set_ItemTypeNameHandling addr 0x2502f34 size 0x68 virtual false final false
 void set_ItemTypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

/// @brief Method get_ItemIsReference addr 0x2502f9c size 0x5c virtual false final false
 bool get_ItemIsReference() ;

/// @brief Method set_ItemIsReference addr 0x2502ff8 size 0x68 virtual false final false
 void set_ItemIsReference(bool value) ;

// Ctor Parameters []
explicit JsonPropertyAttribute() ;

/// @brief Method .ctor addr 0x2503060 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonPropertyAttribute(::StringW propertyName) ;

/// @brief Method .ctor addr 0x2503068 size 0x28 virtual false final false
 void _ctor(::StringW propertyName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonPropertyAttribute, "Newtonsoft.Json", "JsonPropertyAttribute");
