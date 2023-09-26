#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Type: System.Linq.Expressions::Error
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14602))
// CS Name: System.Linq.Expressions.Error
class CORDL_TYPE Error : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Error() = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: " const&", def_value: None }]
constexpr Error(Error const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
constexpr Error(Error&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Error(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Error& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Error& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Error& operator=(Error&& o) noexcept = default;
  constexpr Error& operator=(Error const& o) noexcept = default;
                


// Methods

/// @brief Method ExtensionNodeMustOverrideProperty addr 0x26b3454 size 0x74 virtual false final false
static System::Exception ExtensionNodeMustOverrideProperty(::bs_hook::Il2CppWrapperType p0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
NEED_NO_BOX(System::Linq::Expressions::Error);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::Error, "System.Linq.Expressions", "Error");
