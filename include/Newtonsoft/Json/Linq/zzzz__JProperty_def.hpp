#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JProperty__JPropertyList;
}
// Type: ::<GetEnumerator>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11964))
// CS Name: Newtonsoft.Json.Linq.JProperty::JPropertyList::<GetEnumerator>d__1
class CORDL_TYPE Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1(Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1(Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1& operator=(Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1& operator=(Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___2__current() const;

 Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList value) ;

constexpr Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList __get___4__this() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2560864 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2560990 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2560994 size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x25609f4 size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x25609fc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2560a3c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JPropertyList
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11965))
// CS Name: Newtonsoft.Json.Linq.JProperty::JPropertyList
class CORDL_TYPE Newtonsoft__Json__Linq__JProperty__JPropertyList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = GlobalNamespace::Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1;

/// @brief Convert operator to System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__Linq__JProperty__JPropertyList() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JProperty__JPropertyList", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList(Newtonsoft__Json__Linq__JProperty__JPropertyList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JProperty__JPropertyList", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList(Newtonsoft__Json__Linq__JProperty__JPropertyList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JProperty__JPropertyList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList& operator=(Newtonsoft__Json__Linq__JProperty__JPropertyList&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JProperty__JPropertyList& operator=(Newtonsoft__Json__Linq__JProperty__JPropertyList const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__token() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method GetEnumerator addr 0x25607fc size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x256088c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Add addr 0x2560890 size 0x8 virtual true final true
 void Add(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method Clear addr 0x2560898 size 0x8 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x25608a0 size 0x10 virtual true final true
 bool Contains(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method CopyTo addr 0x25608b0 size 0x64 virtual true final true
 void CopyTo(::ArrayW<Newtonsoft::Json::Linq::JToken> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x2560914 size 0x20 virtual true final true
 bool Remove(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method get_Count addr 0x2560934 size 0x10 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x2560944 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method IndexOf addr 0x255ff9c size 0x10 virtual true final true
 int32_t IndexOf(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method Insert addr 0x256094c size 0x10 virtual true final true
 void Insert(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method RemoveAt addr 0x256095c size 0x10 virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method get_Item addr 0x256096c size 0x14 virtual true final true
 Newtonsoft::Json::Linq::JToken get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2560980 size 0x10 virtual true final true
 void set_Item(int32_t index, Newtonsoft::Json::Linq::JToken value) ;

// Ctor Parameters []
explicit Newtonsoft__Json__Linq__JProperty__JPropertyList() ;

/// @brief Method .ctor addr 0x255fc58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JProperty
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11966))
// CS Name: Newtonsoft.Json.Linq.JProperty
class CORDL_TYPE JProperty : public Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using JPropertyList = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~JProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: " const&", def_value: None }]
constexpr JProperty(JProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "&&", def_value: None }]
constexpr JProperty(JProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JProperty(void* ptr) noexcept : Newtonsoft::Json::Linq::JContainer(ptr) {
}


  constexpr JProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JProperty& operator=(JProperty&& o) noexcept = default;
  constexpr JProperty& operator=(JProperty const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList __declspec(property(get=__get__content, put=__set__content))  _content;

constexpr void __set__content(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList value) ;

constexpr Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList __get__content() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;


// Properties

 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_ChildrenTokens))  ChildrenTokens;

 ::StringW __declspec(property(get=get_Name))  Name;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Value, put=set_Value))  Value;

 Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;


// Methods

/// @brief Method get_ChildrenTokens addr 0x255fac4 size 0x8 virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> get_ChildrenTokens() ;

/// @brief Method get_Name addr 0x255facc size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x255fad4 size 0x1c virtual false final false
 Newtonsoft::Json::Linq::JToken get_Value() ;

/// @brief Method set_Value addr 0x255faf0 size 0x80 virtual false final false
 void set_Value(Newtonsoft::Json::Linq::JToken value) ;

// Ctor Parameters [CppParam { name: "other", ty: "Newtonsoft::Json::Linq::JProperty", modifiers: "", def_value: None }]
explicit JProperty(Newtonsoft::Json::Linq::JProperty other) ;

/// @brief Method .ctor addr 0x255fbd0 size 0x88 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JProperty other) ;

/// @brief Method GetItem addr 0x255fc60 size 0x5c virtual true final false
 Newtonsoft::Json::Linq::JToken GetItem(int32_t index) ;

/// @brief Method SetItem addr 0x255fcbc size 0x154 virtual true final false
 void SetItem(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method RemoveItem addr 0x255fe10 size 0xb4 virtual true final false
 bool RemoveItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method RemoveItemAt addr 0x255fec4 size 0xb4 virtual true final false
 void RemoveItemAt(int32_t index) ;

/// @brief Method IndexOfItem addr 0x255ff78 size 0x24 virtual true final false
 int32_t IndexOfItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method InsertItem addr 0x255ffac size 0x11c virtual true final false
 void InsertItem(int32_t index, Newtonsoft::Json::Linq::JToken item, bool skipParentCheck) ;

/// @brief Method ContainsItem addr 0x25600c8 size 0x24 virtual true final false
 bool ContainsItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method MergeItem addr 0x25600ec size 0xc4 virtual true final false
 void MergeItem(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method ClearItems addr 0x25601b0 size 0xb4 virtual true final false
 void ClearItems() ;

/// @brief Method DeepEquals addr 0x2560264 size 0xb0 virtual true final false
 bool DeepEquals(Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method CloneToken addr 0x2560314 size 0x60 virtual true final false
 Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method get_Type addr 0x2560374 size 0x8 virtual true final false
 Newtonsoft::Json::Linq::JTokenType get_Type() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit JProperty(::StringW name) ;

/// @brief Method .ctor addr 0x256037c size 0xa0 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit JProperty(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

/// @brief Method .ctor addr 0x256041c size 0x4 virtual false final false
 void _ctor(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JProperty(::StringW name, ::bs_hook::Il2CppWrapperType content) ;

/// @brief Method .ctor addr 0x2560420 size 0x104 virtual false final false
 void _ctor(::StringW name, ::bs_hook::Il2CppWrapperType content) ;

/// @brief Method WriteTo addr 0x2560524 size 0x80 virtual true final false
 void WriteTo(Newtonsoft::Json::JsonWriter writer, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method GetDeepHashCode addr 0x25605a4 size 0x50 virtual true final false
 int32_t GetDeepHashCode() ;

/// @brief Method Load addr 0x25605f4 size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JProperty Load(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Load addr 0x25605fc size 0x200 virtual false final false
static Newtonsoft::Json::Linq::JProperty Load(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(GlobalNamespace::Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Newtonsoft__Json__Linq__JProperty__JPropertyList___GetEnumerator_d__1, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
NEED_NO_BOX(Newtonsoft::Json::Linq::JProperty);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JProperty, "Newtonsoft.Json.Linq", "JProperty");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JProperty__JPropertyList, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
