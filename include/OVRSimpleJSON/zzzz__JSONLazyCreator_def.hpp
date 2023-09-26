#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
class JSONObject;
}
namespace OVRSimpleJSON {
struct OVRSimpleJSON__JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONLazyCreator;
}
// Type: OVRSimpleJSON::JSONLazyCreator
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9016))
// CS Name: OVRSimpleJSON.JSONLazyCreator
class CORDL_TYPE JSONLazyCreator : public OVRSimpleJSON::JSONNode {
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
constexpr explicit JSONLazyCreator(void* ptr) noexcept : OVRSimpleJSON::JSONNode(ptr) {
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

 OVRSimpleJSON::JSONNode __declspec(property(get=__get_m_Node, put=__set_m_Node))  m_Node;

constexpr void __set_m_Node(OVRSimpleJSON::JSONNode value) ;

constexpr OVRSimpleJSON::JSONNode __get_m_Node() const;

 ::StringW __declspec(property(get=__get_m_Key, put=__set_m_Key))  m_Key;

constexpr void __set_m_Key(::StringW value) ;

constexpr ::StringW __get_m_Key() const;


// Properties

 OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 OVRSimpleJSON::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 OVRSimpleJSON::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_AsInt, put=set_AsInt))  AsInt;

 float_t __declspec(property(get=get_AsFloat, put=set_AsFloat))  AsFloat;

 double_t __declspec(property(get=get_AsDouble, put=set_AsDouble))  AsDouble;

 int64_t __declspec(property(get=get_AsLong, put=set_AsLong))  AsLong;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;

 OVRSimpleJSON::JSONArray __declspec(property(get=get_AsArray))  AsArray;

 OVRSimpleJSON::JSONObject __declspec(property(get=get_AsObject))  AsObject;


// Methods

/// @brief Method get_Tag addr 0x2671aa8 size 0x8 virtual true final false
 OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method GetEnumerator addr 0x2671ab0 size 0x14 virtual true final false
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

// Ctor Parameters [CppParam { name: "aNode", ty: "OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }]
explicit JSONLazyCreator(OVRSimpleJSON::JSONNode aNode) ;

/// @brief Method .ctor addr 0x266f3c8 size 0x28 virtual false final false
 void _ctor(OVRSimpleJSON::JSONNode aNode) ;

// Ctor Parameters [CppParam { name: "aNode", ty: "OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }, CppParam { name: "aKey", ty: "::StringW", modifiers: "", def_value: None }]
explicit JSONLazyCreator(OVRSimpleJSON::JSONNode aNode, ::StringW aKey) ;

/// @brief Method .ctor addr 0x2670054 size 0x2c virtual false final false
 void _ctor(OVRSimpleJSON::JSONNode aNode, ::StringW aKey) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Set(T aVal) ;

/// @brief Method get_Item addr 0x2671ac4 size 0x64 virtual true final false
 OVRSimpleJSON::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x2671b28 size 0x9c virtual true final false
 void set_Item(int32_t aIndex, OVRSimpleJSON::JSONNode value) ;

/// @brief Method get_Item addr 0x2671bc4 size 0x70 virtual true final false
 OVRSimpleJSON::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x2671c34 size 0xa4 virtual true final false
 void set_Item(::StringW aKey, OVRSimpleJSON::JSONNode value) ;

/// @brief Method Add addr 0x2671cd8 size 0x9c virtual true final false
 void Add(OVRSimpleJSON::JSONNode aItem) ;

/// @brief Method Add addr 0x2671d74 size 0xa4 virtual true final false
 void Add(::StringW aKey, OVRSimpleJSON::JSONNode aItem) ;

/// @brief Method op_Equality addr 0x2671e18 size 0x18 virtual false final false
static bool op_Equality(OVRSimpleJSON::JSONLazyCreator a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method op_Inequality addr 0x2671e30 size 0x18 virtual false final false
static bool op_Inequality(OVRSimpleJSON::JSONLazyCreator a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method Equals addr 0x2671e48 size 0x18 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2671e60 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_AsInt addr 0x2671e68 size 0x88 virtual true final false
 int32_t get_AsInt() ;

/// @brief Method set_AsInt addr 0x2671ef0 size 0x98 virtual true final false
 void set_AsInt(int32_t value) ;

/// @brief Method get_AsFloat addr 0x2671f88 size 0x88 virtual true final false
 float_t get_AsFloat() ;

/// @brief Method set_AsFloat addr 0x2672010 size 0x90 virtual true final false
 void set_AsFloat(float_t value) ;

/// @brief Method get_AsDouble addr 0x26720a0 size 0x88 virtual true final false
 double_t get_AsDouble() ;

/// @brief Method set_AsDouble addr 0x2672128 size 0x8c virtual true final false
 void set_AsDouble(double_t value) ;

/// @brief Method get_AsLong addr 0x26721b4 size 0x10c virtual true final false
 int64_t get_AsLong() ;

/// @brief Method set_AsLong addr 0x26722c0 size 0x148 virtual true final false
 void set_AsLong(int64_t value) ;

/// @brief Method get_AsBool addr 0x2672408 size 0x88 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x2672490 size 0x90 virtual true final false
 void set_AsBool(bool value) ;

/// @brief Method get_AsArray addr 0x2672520 size 0x78 virtual true final false
 OVRSimpleJSON::JSONArray get_AsArray() ;

/// @brief Method get_AsObject addr 0x2672598 size 0x78 virtual true final false
 OVRSimpleJSON::JSONObject get_AsObject() ;

/// @brief Method WriteToStringBuilder addr 0x2672610 size 0x54 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, OVRSimpleJSON::JSONTextMode aMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
NEED_NO_BOX(OVRSimpleJSON::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONLazyCreator, "OVRSimpleJSON", "JSONLazyCreator");
