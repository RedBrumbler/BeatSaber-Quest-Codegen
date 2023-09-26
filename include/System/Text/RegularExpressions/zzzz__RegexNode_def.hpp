#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexNode;
}
// Type: System.Text.RegularExpressions::RegexNode
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7794))
// CS Name: System.Text.RegularExpressions.RegexNode
class CORDL_TYPE RegexNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RegexNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: " const&", def_value: None }]
constexpr RegexNode(RegexNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: "&&", def_value: None }]
constexpr RegexNode(RegexNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexNode& operator=(RegexNode&& o) noexcept = default;
  constexpr RegexNode& operator=(RegexNode const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_NType, put=__set_NType))  NType;

constexpr void __set_NType(int32_t value) ;

constexpr int32_t __get_NType() const;

 System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode> __declspec(property(get=__get_Children, put=__set_Children))  Children;

constexpr void __set_Children(System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode> value) ;

constexpr System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode> __get_Children() const;

 ::StringW __declspec(property(get=__get_Str, put=__set_Str))  Str;

constexpr void __set_Str(::StringW value) ;

constexpr ::StringW __get_Str() const;

 char16_t __declspec(property(get=__get_Ch, put=__set_Ch))  Ch;

constexpr void __set_Ch(char16_t value) ;

constexpr char16_t __get_Ch() const;

 int32_t __declspec(property(get=__get_M, put=__set_M))  M;

constexpr void __set_M(int32_t value) ;

constexpr int32_t __get_M() const;

 int32_t __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(int32_t value) ;

constexpr int32_t __get_N() const;

 System::Text::RegularExpressions::RegexOptions __declspec(property(get=__get_Options, put=__set_Options))  Options;

constexpr void __set_Options(System::Text::RegularExpressions::RegexOptions value) ;

constexpr System::Text::RegularExpressions::RegexOptions __get_Options() const;

 System::Text::RegularExpressions::RegexNode __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(System::Text::RegularExpressions::RegexNode value) ;

constexpr System::Text::RegularExpressions::RegexNode __get_Next() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }]
explicit RegexNode(int32_t type, System::Text::RegularExpressions::RegexOptions options) ;

/// @brief Method .ctor addr 0x27ff82c size 0x30 virtual false final false
 void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options) ;

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "ch", ty: "char16_t", modifiers: "", def_value: None }]
explicit RegexNode(int32_t type, System::Text::RegularExpressions::RegexOptions options, char16_t ch) ;

/// @brief Method .ctor addr 0x27ff85c size 0x40 virtual false final false
 void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, char16_t ch) ;

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit RegexNode(int32_t type, System::Text::RegularExpressions::RegexOptions options, ::StringW str) ;

/// @brief Method .ctor addr 0x27ff89c size 0x40 virtual false final false
 void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, ::StringW str) ;

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }]
explicit RegexNode(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m) ;

/// @brief Method .ctor addr 0x27ff8dc size 0x40 virtual false final false
 void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m) ;

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "n", ty: "int32_t", modifiers: "", def_value: None }]
explicit RegexNode(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n) ;

/// @brief Method .ctor addr 0x27ff91c size 0x44 virtual false final false
 void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n) ;

/// @brief Method UseOptionR addr 0x27ff960 size 0xc virtual false final false
 bool UseOptionR() ;

/// @brief Method ReverseLeft addr 0x27ff96c size 0x7c virtual false final false
 System::Text::RegularExpressions::RegexNode ReverseLeft() ;

/// @brief Method MakeRep addr 0x27ff9e8 size 0x18 virtual false final false
 void MakeRep(int32_t type, int32_t min, int32_t max) ;

/// @brief Method Reduce addr 0x27ffa00 size 0x68 virtual false final false
 System::Text::RegularExpressions::RegexNode Reduce() ;

/// @brief Method StripEnation addr 0x280045c size 0xbc virtual false final false
 System::Text::RegularExpressions::RegexNode StripEnation(int32_t emptyType) ;

/// @brief Method ReduceGroup addr 0x2800314 size 0x2c virtual false final false
 System::Text::RegularExpressions::RegexNode ReduceGroup() ;

/// @brief Method ReduceRep addr 0x2800188 size 0x18c virtual false final false
 System::Text::RegularExpressions::RegexNode ReduceRep() ;

/// @brief Method ReduceSet addr 0x2800340 size 0x11c virtual false final false
 System::Text::RegularExpressions::RegexNode ReduceSet() ;

/// @brief Method ReduceAlternation addr 0x27ffa68 size 0x3b8 virtual false final false
 System::Text::RegularExpressions::RegexNode ReduceAlternation() ;

/// @brief Method ReduceConcatenation addr 0x27ffe20 size 0x368 virtual false final false
 System::Text::RegularExpressions::RegexNode ReduceConcatenation() ;

/// @brief Method MakeQuantifier addr 0x2800518 size 0x11c virtual false final false
 System::Text::RegularExpressions::RegexNode MakeQuantifier(bool lazy, int32_t min, int32_t max) ;

/// @brief Method AddChild addr 0x2800634 size 0x114 virtual false final false
 void AddChild(System::Text::RegularExpressions::RegexNode newChild) ;

/// @brief Method Child addr 0x27fc3a0 size 0x58 virtual false final false
 System::Text::RegularExpressions::RegexNode Child(int32_t i) ;

/// @brief Method ChildCount addr 0x27fc354 size 0x4c virtual false final false
 int32_t ChildCount() ;

/// @brief Method Type addr 0x2800748 size 0x8 virtual false final false
 int32_t Type() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexNode);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexNode, "System.Text.RegularExpressions", "RegexNode");
