#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
// Type: System.Runtime.Serialization.Formatters.Binary::SizedArray
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3289))
// CS Name: System.Runtime.Serialization.Formatters.Binary.SizedArray
class CORDL_TYPE SizedArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SizedArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: " const&", def_value: None }]
constexpr SizedArray(SizedArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: "&&", def_value: None }]
constexpr SizedArray(SizedArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SizedArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SizedArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SizedArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SizedArray& operator=(SizedArray&& o) noexcept = default;
  constexpr SizedArray& operator=(SizedArray const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_objects, put=__set_objects))  objects;

constexpr void __set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_objects() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_negObjects, put=__set_negObjects))  negObjects;

constexpr void __set_negObjects(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_negObjects() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit SizedArray() ;

/// @brief Method .ctor addr 0x239dc18 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit SizedArray(int32_t length) ;

/// @brief Method .ctor addr 0x239dcf0 size 0x78 virtual false final false
 void _ctor(int32_t length) ;

// Ctor Parameters [CppParam { name: "sizedArray", ty: "System::Runtime::Serialization::Formatters::Binary::SizedArray", modifiers: "", def_value: None }]
explicit SizedArray(System::Runtime::Serialization::Formatters::Binary::SizedArray sizedArray) ;

/// @brief Method .ctor addr 0x23a160c size 0xb4 virtual false final false
 void _ctor(System::Runtime::Serialization::Formatters::Binary::SizedArray sizedArray) ;

/// @brief Method Clone addr 0x23a16c0 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_Item addr 0x23a03c8 size 0x74 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x23a02c8 size 0x100 virtual false final false
 void set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IncreaseCapacity addr 0x23a1720 size 0x220 virtual false final false
 void IncreaseCapacity(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SizedArray);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SizedArray, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
