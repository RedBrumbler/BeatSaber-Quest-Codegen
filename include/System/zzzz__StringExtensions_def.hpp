#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class StringExtensions;
}
// Type: System::StringExtensions
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7735))
// CS Name: System.StringExtensions
class CORDL_TYPE StringExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: " const&", def_value: None }]
constexpr StringExtensions(StringExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
constexpr StringExtensions(StringExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringExtensions& operator=(StringExtensions&& o) noexcept = default;
  constexpr StringExtensions& operator=(StringExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SubstringTrim addr 0x27e4140 size 0x170 virtual false final false
static ::StringW SubstringTrim(::StringW value, int32_t startIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::StringExtensions, "System", "StringExtensions");
