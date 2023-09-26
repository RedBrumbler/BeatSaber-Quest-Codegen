#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
namespace System {
struct StringComparison;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JObject____c;
}
// Type: ::<>c
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11951))
// CS Name: Newtonsoft.Json.Linq.JObject::<>c
class CORDL_TYPE Newtonsoft__Json__Linq__JObject____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Linq__JObject____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JObject____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JObject____c(Newtonsoft__Json__Linq__JObject____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JObject____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JObject____c(Newtonsoft__Json__Linq__JObject____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JObject____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JObject____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JObject____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JObject____c& operator=(Newtonsoft__Json__Linq__JObject____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JObject____c& operator=(Newtonsoft__Json__Linq__JObject____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c value) ;

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c __get___9() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Func_2<Newtonsoft::Json::Linq::JProperty,Newtonsoft::Json::Linq::JToken> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,Newtonsoft::Json::Linq::JToken> __get___9__25_0() ;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Linq__JObject____c() ;

/// @brief Method .ctor addr 0x255284c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PropertyValues>b__25_0 addr 0x2552854 size 0x18 virtual false final false
 Newtonsoft::Json::Linq::JToken _PropertyValues_b__25_0(Newtonsoft::Json::Linq::JProperty p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<GetEnumerator>d__58
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11952))
// CS Name: Newtonsoft.Json.Linq.JObject::<GetEnumerator>d__58
class CORDL_TYPE Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58(Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58(Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58& operator=(Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58& operator=(Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> __get___2__current() const;

 Newtonsoft::Json::Linq::JObject __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JObject value) ;

constexpr Newtonsoft::Json::Linq::JObject __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __get___7__wrap1() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2552160 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x255286c size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2552888 size 0x2e4 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2552b6c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current addr 0x2552c1c size 0xc virtual true final true
 System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2552c28 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2552c68 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JObject
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11953))
// CS Name: Newtonsoft.Json.Linq.JObject
class CORDL_TYPE JObject : public Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using _GetEnumerator_d__58 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58;

using __c = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c;

/// @brief Convert operator to System::Collections::Generic::IDictionary_2<::StringW,Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IDictionary_2<::StringW,Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>
constexpr operator  System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::ComponentModel::INotifyPropertyChanged
constexpr operator  System::ComponentModel::INotifyPropertyChanged() const noexcept;

/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr operator  System::ComponentModel::ICustomTypeDescriptor() const noexcept;

/// @brief Convert operator to System::ComponentModel::INotifyPropertyChanging
constexpr operator  System::ComponentModel::INotifyPropertyChanging() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~JObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: " const&", def_value: None }]
constexpr JObject(JObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: "&&", def_value: None }]
constexpr JObject(JObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JObject(void* ptr) noexcept : Newtonsoft::Json::Linq::JContainer(ptr) {
}


  constexpr JObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JObject& operator=(JObject&& o) noexcept = default;
  constexpr JObject& operator=(JObject const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::JPropertyKeyedCollection __declspec(property(get=__get__properties, put=__set__properties))  _properties;

constexpr void __set__properties(Newtonsoft::Json::Linq::JPropertyKeyedCollection value) ;

constexpr Newtonsoft::Json::Linq::JPropertyKeyedCollection __get__properties() const;

 System::ComponentModel::PropertyChangedEventHandler __declspec(property(get=__get_PropertyChanged, put=__set_PropertyChanged))  PropertyChanged;

constexpr void __set_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler value) ;

constexpr System::ComponentModel::PropertyChangedEventHandler __get_PropertyChanged() const;

 System::ComponentModel::PropertyChangingEventHandler __declspec(property(get=__get_PropertyChanging, put=__set_PropertyChanging))  PropertyChanging;

constexpr void __set_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value) ;

constexpr System::ComponentModel::PropertyChangingEventHandler __get_PropertyChanging() const;


// Properties

 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_ChildrenTokens))  ChildrenTokens;

 Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::Generic::ICollection_1<::StringW> __declspec(property(get=System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__get_Keys))  System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__Keys;

 System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__get_Values))  System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__Values;

 bool __declspec(property(get=System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___get_IsReadOnly))  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___IsReadOnly;


// Methods

/// @brief Method get_ChildrenTokens addr 0x254fc54 size 0x8 virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> get_ChildrenTokens() ;

/// @brief Method add_PropertyChanged addr 0x254fc5c size 0x9c virtual true final true
 void add_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler value) ;

/// @brief Method remove_PropertyChanged addr 0x254fcf8 size 0x9c virtual true final true
 void remove_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler value) ;

/// @brief Method add_PropertyChanging addr 0x254fd94 size 0x9c virtual true final true
 void add_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value) ;

/// @brief Method remove_PropertyChanging addr 0x254fe30 size 0x9c virtual true final true
 void remove_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value) ;

// Ctor Parameters []
explicit JObject() ;

/// @brief Method .ctor addr 0x254eae4 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "Newtonsoft::Json::Linq::JObject", modifiers: "", def_value: None }]
explicit JObject(Newtonsoft::Json::Linq::JObject other) ;

/// @brief Method .ctor addr 0x254fecc size 0x70 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JObject other) ;

// Ctor Parameters [CppParam { name: "content", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit JObject(::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

/// @brief Method .ctor addr 0x254ff3c size 0x4 virtual false final false
 void _ctor(::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

// Ctor Parameters [CppParam { name: "content", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JObject(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method .ctor addr 0x254ff40 size 0x84 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method DeepEquals addr 0x254ffc4 size 0x9c virtual true final false
 bool DeepEquals(Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method IndexOfItem addr 0x2550060 size 0x18 virtual true final false
 int32_t IndexOfItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method InsertItem addr 0x2550078 size 0x6c virtual true final false
 void InsertItem(int32_t index, Newtonsoft::Json::Linq::JToken item, bool skipParentCheck) ;

/// @brief Method ValidateToken addr 0x25500e4 size 0x21c virtual true final false
 void ValidateToken(Newtonsoft::Json::Linq::JToken o, Newtonsoft::Json::Linq::JToken existing) ;

/// @brief Method MergeItem addr 0x2550300 size 0x424 virtual true final false
 void MergeItem(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method InternalPropertyChanged addr 0x2550814 size 0xcc virtual false final false
 void InternalPropertyChanged(Newtonsoft::Json::Linq::JProperty childProperty) ;

/// @brief Method InternalPropertyChanging addr 0x25508e0 size 0x24 virtual false final false
 void InternalPropertyChanging(Newtonsoft::Json::Linq::JProperty childProperty) ;

/// @brief Method CloneToken addr 0x2550904 size 0x60 virtual true final false
 Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method get_Type addr 0x2550964 size 0x8 virtual true final false
 Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method Properties addr 0x254951c size 0x48 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JProperty> Properties() ;

/// @brief Method Property addr 0x254eb44 size 0xa8 virtual false final false
 Newtonsoft::Json::Linq::JProperty Property(::StringW name) ;

/// @brief Method PropertyValues addr 0x255096c size 0x13c virtual false final false
 Newtonsoft::Json::Linq::JEnumerable_1<Newtonsoft::Json::Linq::JToken> PropertyValues() ;

/// @brief Method get_Item addr 0x2550aa8 size 0x118 virtual true final false
 Newtonsoft::Json::Linq::JToken get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x2550bc0 size 0x120 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method get_Item addr 0x25477f0 size 0x80 virtual true final true
 Newtonsoft::Json::Linq::JToken get_Item(::StringW propertyName) ;

/// @brief Method set_Item addr 0x254795c size 0xe0 virtual true final true
 void set_Item(::StringW propertyName, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method Load addr 0x2550ce0 size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JObject Load(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Load addr 0x2550ce8 size 0x1c4 virtual false final false
static Newtonsoft::Json::Linq::JObject Load(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method Parse addr 0x2550eac size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JObject Parse(::StringW json) ;

/// @brief Method Parse addr 0x2550eb4 size 0x23c virtual false final false
static Newtonsoft::Json::Linq::JObject Parse(::StringW json, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method FromObject addr 0x25510f0 size 0x20 virtual false final false
static Newtonsoft::Json::Linq::JObject FromObject(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method FromObject addr 0x2551110 size 0x18c virtual false final false
static Newtonsoft::Json::Linq::JObject FromObject(::bs_hook::Il2CppWrapperType o, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method WriteTo addr 0x25514a4 size 0xe8 virtual true final false
 void WriteTo(Newtonsoft::Json::JsonWriter writer, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method GetValue addr 0x255158c size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken GetValue(::StringW propertyName) ;

/// @brief Method GetValue addr 0x2551594 size 0x380 virtual false final false
 Newtonsoft::Json::Linq::JToken GetValue(::StringW propertyName, System::StringComparison comparison) ;

/// @brief Method TryGetValue addr 0x2551914 size 0x24 virtual false final false
 bool TryGetValue(::StringW propertyName, System::StringComparison comparison, ByRef<Newtonsoft::Json::Linq::JToken> value) ;

/// @brief Method Add addr 0x255078c size 0x88 virtual true final true
 void Add(::StringW propertyName, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey addr 0x2551938 size 0x18 virtual true final true
 bool System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__ContainsKey(::StringW key) ;

/// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys addr 0x2551950 size 0x18 virtual true final true
 System::Collections::Generic::ICollection_1<::StringW> System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__get_Keys() ;

/// @brief Method Remove addr 0x2551968 size 0x1c virtual true final true
 bool Remove(::StringW propertyName) ;

/// @brief Method TryGetValue addr 0x25519f4 size 0x34 virtual true final true
 bool TryGetValue(::StringW propertyName, ByRef<Newtonsoft::Json::Linq::JToken> value) ;

/// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values addr 0x2551a28 size 0x40 virtual true final true
 System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IDictionary_System_String,Newtonsoft_Json_Linq_JToken__get_Values() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add addr 0x2551a68 size 0xa0 virtual true final true
 void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___Add(System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear addr 0x2551b08 size 0x10 virtual true final true
 void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___Clear() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains addr 0x2551b18 size 0x74 virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___Contains(System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo addr 0x2551b8c size 0x484 virtual true final true
 void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>> array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly addr 0x2552010 size 0x8 virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove addr 0x2552018 size 0x144 virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String,Newtonsoft_Json_Linq_JToken___Remove(System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken> item) ;

/// @brief Method GetDeepHashCode addr 0x255215c size 0x4 virtual true final false
 int32_t GetDeepHashCode() ;

/// @brief Method GetEnumerator addr 0x2550724 size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,Newtonsoft::Json::Linq::JToken>> GetEnumerator() ;

/// @brief Method OnPropertyChanged addr 0x2552188 size 0x98 virtual true final false
 void OnPropertyChanged(::StringW propertyName) ;

/// @brief Method OnPropertyChanging addr 0x2552220 size 0x98 virtual true final false
 void OnPropertyChanging(::StringW propertyName) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x25522b8 size 0x9c virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x2552354 size 0x300 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes addr 0x2552654 size 0x58 virtual true final true
 System::ComponentModel::AttributeCollection System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName addr 0x25526ac size 0x8 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName addr 0x25526b4 size 0x8 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter addr 0x25526bc size 0x5c virtual true final true
 System::ComponentModel::TypeConverter System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent addr 0x2552718 size 0x8 virtual true final true
 System::ComponentModel::EventDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty addr 0x2552720 size 0x8 virtual true final true
 System::ComponentModel::PropertyDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor addr 0x2552728 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x2552730 size 0x58 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x2552788 size 0x58 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner addr 0x25527e0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JObject);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JObject, "Newtonsoft.Json.Linq", "JObject");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject___GetEnumerator_d__58, "Newtonsoft.Json.Linq", "JObject/<GetEnumerator>d__58");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JObject____c, "Newtonsoft.Json.Linq", "JObject/<>c");
