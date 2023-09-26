#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Type: Newtonsoft.Json.Linq::JArray
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11954))
// CS Name: Newtonsoft.Json.Linq.JArray
class CORDL_TYPE JArray : public Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~JArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: " const&", def_value: None }]
constexpr JArray(JArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "&&", def_value: None }]
constexpr JArray(JArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JArray(void* ptr) noexcept : Newtonsoft::Json::Linq::JContainer(ptr) {
}


  constexpr JArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JArray& operator=(JArray&& o) noexcept = default;
  constexpr JArray& operator=(JArray const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> __get__values() const;


// Properties

 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_ChildrenTokens))  ChildrenTokens;

 Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method get_ChildrenTokens addr 0x2552cc4 size 0x8 virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> get_ChildrenTokens() ;

/// @brief Method get_Type addr 0x2552ccc size 0x8 virtual true final false
 Newtonsoft::Json::Linq::JTokenType get_Type() ;

// Ctor Parameters []
explicit JArray() ;

/// @brief Method .ctor addr 0x254ea6c size 0x78 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "Newtonsoft::Json::Linq::JArray", modifiers: "", def_value: None }]
explicit JArray(Newtonsoft::Json::Linq::JArray other) ;

/// @brief Method .ctor addr 0x2552cd4 size 0x88 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JArray other) ;

// Ctor Parameters [CppParam { name: "content", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit JArray(::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

/// @brief Method .ctor addr 0x2552d5c size 0x4 virtual false final false
 void _ctor(::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

// Ctor Parameters [CppParam { name: "content", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JArray(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method .ctor addr 0x2552d60 size 0x9c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method DeepEquals addr 0x2552dfc size 0x8c virtual true final false
 bool DeepEquals(Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method CloneToken addr 0x2552e88 size 0x60 virtual true final false
 Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method Load addr 0x2552ee8 size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JArray Load(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Load addr 0x2552ef0 size 0x1a0 virtual false final false
static Newtonsoft::Json::Linq::JArray Load(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method Parse addr 0x2553090 size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JArray Parse(::StringW json) ;

/// @brief Method Parse addr 0x2553098 size 0x23c virtual false final false
static Newtonsoft::Json::Linq::JArray Parse(::StringW json, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method FromObject addr 0x25532d4 size 0x20 virtual false final false
static Newtonsoft::Json::Linq::JArray FromObject(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method FromObject addr 0x25532f4 size 0x18c virtual false final false
static Newtonsoft::Json::Linq::JArray FromObject(::bs_hook::Il2CppWrapperType o, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method WriteTo addr 0x2553480 size 0xcc virtual true final false
 void WriteTo(Newtonsoft::Json::JsonWriter writer, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method get_Item addr 0x255354c size 0x12c virtual true final false
 Newtonsoft::Json::Linq::JToken get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x2553678 size 0x134 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method get_Item addr 0x25537ac size 0x10 virtual true final true
 Newtonsoft::Json::Linq::JToken get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x25537bc size 0x10 virtual true final true
 void set_Item(int32_t index, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method IndexOfItem addr 0x25537cc size 0x58 virtual true final false
 int32_t IndexOfItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method MergeItem addr 0x2553824 size 0xe0 virtual true final false
 void MergeItem(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method IndexOf addr 0x2553904 size 0x10 virtual true final true
 int32_t IndexOf(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method Insert addr 0x2553914 size 0x14 virtual true final true
 void Insert(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method RemoveAt addr 0x2553928 size 0x10 virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method GetEnumerator addr 0x2553938 size 0x70 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> GetEnumerator() ;

/// @brief Method Add addr 0x25539a8 size 0x10 virtual true final true
 void Add(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method Clear addr 0x25539b8 size 0x10 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x25539c8 size 0x10 virtual true final true
 bool Contains(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method CopyTo addr 0x25539d8 size 0x10 virtual true final true
 void CopyTo(::ArrayW<Newtonsoft::Json::Linq::JToken> array, int32_t arrayIndex) ;

/// @brief Method get_IsReadOnly addr 0x25539e8 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Remove addr 0x25539f0 size 0x10 virtual true final true
 bool Remove(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method GetDeepHashCode addr 0x2553a00 size 0x4 virtual true final false
 int32_t GetDeepHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JArray);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JArray, "Newtonsoft.Json.Linq", "JArray");
