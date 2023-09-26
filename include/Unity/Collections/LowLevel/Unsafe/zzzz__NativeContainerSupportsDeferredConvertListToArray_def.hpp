#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerSupportsDeferredConvertListToArray;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerSupportsDeferredConvertListToArray
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9980))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray
class CORDL_TYPE NativeContainerSupportsDeferredConvertListToArray : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerSupportsDeferredConvertListToArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeferredConvertListToArray", modifiers: " const&", def_value: None }]
constexpr NativeContainerSupportsDeferredConvertListToArray(NativeContainerSupportsDeferredConvertListToArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeferredConvertListToArray", modifiers: "&&", def_value: None }]
constexpr NativeContainerSupportsDeferredConvertListToArray(NativeContainerSupportsDeferredConvertListToArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerSupportsDeferredConvertListToArray(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeContainerSupportsDeferredConvertListToArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerSupportsDeferredConvertListToArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerSupportsDeferredConvertListToArray& operator=(NativeContainerSupportsDeferredConvertListToArray&& o) noexcept = default;
  constexpr NativeContainerSupportsDeferredConvertListToArray& operator=(NativeContainerSupportsDeferredConvertListToArray const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NativeContainerSupportsDeferredConvertListToArray() ;

/// @brief Method .ctor addr 0x2b5ac74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeferredConvertListToArray");
