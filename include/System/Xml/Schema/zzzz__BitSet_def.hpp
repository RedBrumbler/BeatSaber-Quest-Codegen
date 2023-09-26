#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
class BitSet;
}
// Type: System.Xml.Schema::BitSet
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11555))
// CS Name: System.Xml.Schema.BitSet
class CORDL_TYPE BitSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BitSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: " const&", def_value: None }]
constexpr BitSet(BitSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: "&&", def_value: None }]
constexpr BitSet(BitSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitSet& operator=(BitSet&& o) noexcept = default;
  constexpr BitSet& operator=(BitSet const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_bits, put=__set_bits))  bits;

constexpr void __set_bits(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_bits() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit BitSet() ;

/// @brief Method .ctor addr 0x274bb88 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
explicit BitSet(int32_t count) ;

/// @brief Method .ctor addr 0x274bb90 size 0x70 virtual false final false
 void _ctor(int32_t count) ;

/// @brief Method get_Count addr 0x274bc08 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x274bc10 size 0x4 virtual false final false
 bool get_Item(int32_t index) ;

/// @brief Method Clear addr 0x274bc70 size 0x54 virtual false final false
 void Clear() ;

/// @brief Method Set addr 0x274bcc4 size 0x5c virtual false final false
 void Set(int32_t index) ;

/// @brief Method Get addr 0x274bc14 size 0x5c virtual false final false
 bool Get(int32_t index) ;

/// @brief Method NextSet addr 0x274bdb4 size 0x9c virtual false final false
 int32_t NextSet(int32_t startFrom) ;

/// @brief Method And addr 0x274be50 size 0xb8 virtual false final false
 void And(System::Xml::Schema::BitSet other) ;

/// @brief Method Or addr 0x274bf08 size 0xa4 virtual false final false
 void Or(System::Xml::Schema::BitSet other) ;

/// @brief Method GetHashCode addr 0x274bfac size 0x38 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x274bfe4 size 0x148 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Clone addr 0x274c12c size 0xd4 virtual false final false
 System::Xml::Schema::BitSet Clone() ;

/// @brief Method Intersects addr 0x274c200 size 0xe0 virtual false final false
 bool Intersects(System::Xml::Schema::BitSet other) ;

/// @brief Method Subscript addr 0x274bc00 size 0x8 virtual false final false
 int32_t Subscript(int32_t bitIndex) ;

/// @brief Method EnsureLength addr 0x274bd20 size 0x94 virtual false final false
 void EnsureLength(int32_t nRequiredLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::BitSet);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::BitSet, "System.Xml.Schema", "BitSet");
