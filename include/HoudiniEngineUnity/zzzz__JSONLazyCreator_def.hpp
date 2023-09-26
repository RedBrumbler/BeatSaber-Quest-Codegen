#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
class JSONArray;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__Enumerator;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONLazyCreator;
}
// Type: HoudiniEngineUnity::JSONLazyCreator
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9839))
// CS Name: HoudiniEngineUnity.JSONLazyCreator
class CORDL_TYPE JSONLazyCreator : public HoudiniEngineUnity::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JSONLazyCreator() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: " const&", def_value: None }]
constexpr JSONLazyCreator(JSONLazyCreator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "&&", def_value: None }]
constexpr JSONLazyCreator(JSONLazyCreator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONLazyCreator(void* ptr) noexcept : HoudiniEngineUnity::JSONNode(ptr) {
}


  constexpr JSONLazyCreator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONLazyCreator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONLazyCreator& operator=(JSONLazyCreator&& o) noexcept = default;
  constexpr JSONLazyCreator& operator=(JSONLazyCreator const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get_m_Node, put=__set_m_Node))  m_Node;

constexpr void __set_m_Node(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get_m_Node() const;

 ::StringW __declspec(property(get=__get_m_Key, put=__set_m_Key))  m_Key;

constexpr void __set_m_Key(::StringW value) ;

constexpr ::StringW __get_m_Key() const;


// Properties

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_AsInt, put=set_AsInt))  AsInt;

 float_t __declspec(property(get=get_AsFloat, put=set_AsFloat))  AsFloat;

 double_t __declspec(property(get=get_AsDouble, put=set_AsDouble))  AsDouble;

 int64_t __declspec(property(get=get_AsLong, put=set_AsLong))  AsLong;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;

 HoudiniEngineUnity::JSONArray __declspec(property(get=get_AsArray))  AsArray;

 HoudiniEngineUnity::JSONObject __declspec(property(get=get_AsObject))  AsObject;


// Methods

/// @brief Method get_Tag addr 0x20a0ffc size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method GetEnumerator addr 0x20a1004 size 0x14 virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

// Ctor Parameters [CppParam { name: "aNode", ty: "HoudiniEngineUnity::JSONNode", modifiers: "", def_value: None }]
explicit JSONLazyCreator(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method .ctor addr 0x209eb64 size 0x28 virtual false final false
 void _ctor(HoudiniEngineUnity::JSONNode aNode) ;

// Ctor Parameters [CppParam { name: "aNode", ty: "HoudiniEngineUnity::JSONNode", modifiers: "", def_value: None }, CppParam { name: "aKey", ty: "::StringW", modifiers: "", def_value: None }]
explicit JSONLazyCreator(HoudiniEngineUnity::JSONNode aNode, ::StringW aKey) ;

/// @brief Method .ctor addr 0x209f6d4 size 0x2c virtual false final false
 void _ctor(HoudiniEngineUnity::JSONNode aNode, ::StringW aKey) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Set(T aVal) ;

/// @brief Method get_Item addr 0x20a1018 size 0x64 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x20a107c size 0x9c virtual true final false
 void set_Item(int32_t aIndex, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Item addr 0x20a1118 size 0x70 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x20a1188 size 0xa4 virtual true final false
 void set_Item(::StringW aKey, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method Add addr 0x20a122c size 0x9c virtual true final false
 void Add(HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method Add addr 0x20a12c8 size 0xa4 virtual true final false
 void Add(::StringW aKey, HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method op_Equality addr 0x20a136c size 0x18 virtual false final false
static bool op_Equality(HoudiniEngineUnity::JSONLazyCreator a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method op_Inequality addr 0x20a1384 size 0x18 virtual false final false
static bool op_Inequality(HoudiniEngineUnity::JSONLazyCreator a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method Equals addr 0x20a139c size 0x18 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x20a13b4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_AsInt addr 0x20a13bc size 0x88 virtual true final false
 int32_t get_AsInt() ;

/// @brief Method set_AsInt addr 0x20a1444 size 0x98 virtual true final false
 void set_AsInt(int32_t value) ;

/// @brief Method get_AsFloat addr 0x20a14dc size 0x88 virtual true final false
 float_t get_AsFloat() ;

/// @brief Method set_AsFloat addr 0x20a1564 size 0x90 virtual true final false
 void set_AsFloat(float_t value) ;

/// @brief Method get_AsDouble addr 0x20a15f4 size 0x88 virtual true final false
 double_t get_AsDouble() ;

/// @brief Method set_AsDouble addr 0x20a167c size 0x8c virtual true final false
 void set_AsDouble(double_t value) ;

/// @brief Method get_AsLong addr 0x20a1708 size 0x10c virtual true final false
 int64_t get_AsLong() ;

/// @brief Method set_AsLong addr 0x20a1814 size 0x148 virtual true final false
 void set_AsLong(int64_t value) ;

/// @brief Method get_AsBool addr 0x20a195c size 0x88 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x20a19e4 size 0x90 virtual true final false
 void set_AsBool(bool value) ;

/// @brief Method get_AsArray addr 0x20a1a74 size 0x78 virtual true final false
 HoudiniEngineUnity::JSONArray get_AsArray() ;

/// @brief Method get_AsObject addr 0x20a1aec size 0x78 virtual true final false
 HoudiniEngineUnity::JSONObject get_AsObject() ;

/// @brief Method WriteToStringBuilder addr 0x20a1b64 size 0x54 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONLazyCreator, "HoudiniEngineUnity", "JSONLazyCreator");
