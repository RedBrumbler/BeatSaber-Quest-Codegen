#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct System__Collections__Generic__Dictionary_2__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__Enumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONObject____c__DisplayClass21_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONObject___get_Children_d__23;
}
namespace HoudiniEngineUnity {
class JSONObject;
}
// Type: ::<>c__DisplayClass21_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9832))
// CS Name: HoudiniEngineUnity.JSONObject::<>c__DisplayClass21_0
class CORDL_TYPE HoudiniEngineUnity__JSONObject____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__JSONObject____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONObject____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0(HoudiniEngineUnity__JSONObject____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONObject____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0(HoudiniEngineUnity__JSONObject____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONObject____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0& operator=(HoudiniEngineUnity__JSONObject____c__DisplayClass21_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONObject____c__DisplayClass21_0& operator=(HoudiniEngineUnity__JSONObject____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get_aNode, put=__set_aNode))  aNode;

constexpr void __set_aNode(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get_aNode() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__JSONObject____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x209fec0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Remove>b__0 addr 0x20a027c size 0x44 virtual false final false
 bool _Remove_b__0(System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<get_Children>d__23
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9833))
// CS Name: HoudiniEngineUnity.JSONObject::<get_Children>d__23
class CORDL_TYPE HoudiniEngineUnity__JSONObject___get_Children_d__23 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HoudiniEngineUnity__JSONObject___get_Children_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONObject___get_Children_d__23", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23(HoudiniEngineUnity__JSONObject___get_Children_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONObject___get_Children_d__23", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23(HoudiniEngineUnity__JSONObject___get_Children_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONObject___get_Children_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23& operator=(HoudiniEngineUnity__JSONObject___get_Children_d__23&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONObject___get_Children_d__23& operator=(HoudiniEngineUnity__JSONObject___get_Children_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 HoudiniEngineUnity::JSONObject __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HoudiniEngineUnity::JSONObject value) ;

constexpr HoudiniEngineUnity::JSONObject __get___4__this() const;

 System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> __get___7__wrap1() const;


// Properties

 HoudiniEngineUnity::JSONNode __declspec(property(get=System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current))  System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__JSONObject___get_Children_d__23(int32_t __1__state) ;

/// @brief Method .ctor addr 0x209ff40 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20a02c0 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20a02dc size 0x1a8 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x20a0484 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x20a04d4 size 0x8 virtual true final true
 HoudiniEngineUnity::JSONNode System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20a04dc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20a051c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x20a0524 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x20a05c8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::JSONObject
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9834))
// CS Name: HoudiniEngineUnity.JSONObject
class CORDL_TYPE JSONObject : public HoudiniEngineUnity::JSONNode {
public:
// Declarations
using _get_Children_d__23 = HoudiniEngineUnity::HoudiniEngineUnity__JSONObject___get_Children_d__23;

using __c__DisplayClass21_0 = HoudiniEngineUnity::HoudiniEngineUnity__JSONObject____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JSONObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: " const&", def_value: None }]
constexpr JSONObject(JSONObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: "&&", def_value: None }]
constexpr JSONObject(JSONObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONObject(void* ptr) noexcept : HoudiniEngineUnity::JSONNode(ptr) {
}


  constexpr JSONObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONObject& operator=(JSONObject&& o) noexcept = default;
  constexpr JSONObject& operator=(JSONObject const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::JSONNode> __declspec(property(get=__get_m_Dict, put=__set_m_Dict))  m_Dict;

constexpr void __set_m_Dict(System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::JSONNode> __get_m_Dict() const;

 bool __declspec(property(get=__get_inline, put=__set_inline))  inline;

constexpr void __set_inline(bool value) ;

constexpr bool __get_inline() const;


// Properties

 bool __declspec(property(get=get_Inline, put=set_Inline))  Inline;

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsObject))  IsObject;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=get_Children))  Children;


// Methods

/// @brief Method get_Inline addr 0x209f564 size 0x8 virtual true final false
 bool get_Inline() ;

/// @brief Method set_Inline addr 0x209f56c size 0xc virtual true final false
 void set_Inline(bool value) ;

/// @brief Method get_Tag addr 0x209f578 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsObject addr 0x209f580 size 0x8 virtual true final false
 bool get_IsObject() ;

/// @brief Method GetEnumerator addr 0x209f588 size 0x88 virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Item addr 0x209f610 size 0xc4 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x209f700 size 0x108 virtual true final false
 void set_Item(::StringW aKey, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Item addr 0x209f808 size 0xa0 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x209f8a8 size 0x118 virtual true final false
 void set_Item(int32_t aIndex, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Count addr 0x209f9c0 size 0x50 virtual true final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x209fa10 size 0x150 virtual true final false
 void Add(::StringW aKey, HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method Remove addr 0x209fb60 size 0xc4 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(::StringW aKey) ;

/// @brief Method Remove addr 0x209fc24 size 0xdc virtual true final false
 HoudiniEngineUnity::JSONNode Remove(int32_t aIndex) ;

/// @brief Method Remove addr 0x209fd00 size 0x1c0 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method get_Children addr 0x209fec8 size 0x78 virtual true final false
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> get_Children() ;

/// @brief Method WriteToStringBuilder addr 0x209ff74 size 0x308 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

// Ctor Parameters []
explicit JSONObject() ;

/// @brief Method .ctor addr 0x209b84c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONObject____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONObject____c__DisplayClass21_0, "HoudiniEngineUnity", "JSONObject/<>c__DisplayClass21_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONObject___get_Children_d__23);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONObject___get_Children_d__23, "HoudiniEngineUnity", "JSONObject/<get_Children>d__23");
NEED_NO_BOX(HoudiniEngineUnity::JSONObject);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONObject, "HoudiniEngineUnity", "JSONObject");
