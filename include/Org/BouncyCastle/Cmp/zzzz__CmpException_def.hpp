#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CmpException;
}
// Type: Org.BouncyCastle.Cmp::CmpException
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(604))
// CS Name: Org.BouncyCastle.Cmp.CmpException
class CORDL_TYPE CmpException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CmpException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: " const&", def_value: None }]
constexpr CmpException(CmpException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: "&&", def_value: None }]
constexpr CmpException(CmpException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmpException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr CmpException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmpException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmpException& operator=(CmpException&& o) noexcept = default;
  constexpr CmpException& operator=(CmpException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CmpException() ;

/// @brief Method .ctor addr 0x1158b64 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CmpException(::StringW message) ;

/// @brief Method .ctor addr 0x11587d0 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit CmpException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x1158bbc size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::CmpException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::CmpException, "Org.BouncyCastle.Cmp", "CmpException");
