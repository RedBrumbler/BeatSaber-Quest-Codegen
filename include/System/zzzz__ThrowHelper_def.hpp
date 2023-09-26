#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Exception;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class ArgumentException;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
class ArgumentNullException;
}
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class Type;
}
namespace System {
class InvalidOperationException;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Type: System::ThrowHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2522))
// CS Name: System.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThrowHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: " const&", def_value: None }]
constexpr ThrowHelper(ThrowHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
constexpr ThrowHelper(ThrowHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThrowHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThrowHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThrowHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThrowHelper& operator=(ThrowHelper&& o) noexcept = default;
  constexpr ThrowHelper& operator=(ThrowHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ThrowArgumentNullException addr 0x2485488 size 0x24 virtual false final false
static void ThrowArgumentNullException(System::ExceptionArgument argument) ;

/// @brief Method CreateArgumentNullException addr 0x24948ac size 0xac virtual false final false
static System::Exception CreateArgumentNullException(System::ExceptionArgument argument) ;

/// @brief Method ThrowArrayTypeMismatchException addr 0x2494958 size 0x24 virtual false final false
static void ThrowArrayTypeMismatchException() ;

/// @brief Method CreateArrayTypeMismatchException addr 0x249497c size 0x5c virtual false final false
static System::Exception CreateArrayTypeMismatchException() ;

/// @brief Method ThrowArgumentException_DestinationTooShort addr 0x24949d8 size 0x24 virtual false final false
static void ThrowArgumentException_DestinationTooShort() ;

/// @brief Method CreateArgumentException_DestinationTooShort addr 0x24949fc size 0x74 virtual false final false
static System::Exception CreateArgumentException_DestinationTooShort() ;

/// @brief Method ThrowIndexOutOfRangeException addr 0x2494a70 size 0x24 virtual false final false
static void ThrowIndexOutOfRangeException() ;

/// @brief Method CreateIndexOutOfRangeException addr 0x2494a94 size 0x5c virtual false final false
static System::Exception CreateIndexOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException addr 0x2494af0 size 0x24 virtual false final false
static void ThrowArgumentOutOfRangeException() ;

/// @brief Method CreateArgumentOutOfRangeException addr 0x2494b14 size 0x5c virtual false final false
static System::Exception CreateArgumentOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException addr 0x2494b70 size 0x24 virtual false final false
static void ThrowArgumentOutOfRangeException(System::ExceptionArgument argument) ;

/// @brief Method CreateArgumentOutOfRangeException addr 0x2494b94 size 0xac virtual false final false
static System::Exception CreateArgumentOutOfRangeException(System::ExceptionArgument argument) ;

/// @brief Method ThrowNotSupportedException addr 0x2494c40 size 0x24 virtual false final false
static void ThrowNotSupportedException() ;

/// @brief Method CreateThrowNotSupportedException addr 0x2494c64 size 0x5c virtual false final false
static System::Exception CreateThrowNotSupportedException() ;

/// @brief Method ThrowWrongKeyTypeArgumentException addr 0x2494cc0 size 0xd8 virtual false final false
static void ThrowWrongKeyTypeArgumentException(::bs_hook::Il2CppWrapperType key, System::Type targetType) ;

/// @brief Method ThrowWrongValueTypeArgumentException addr 0x2494d98 size 0xd8 virtual false final false
static void ThrowWrongValueTypeArgumentException(::bs_hook::Il2CppWrapperType value, System::Type targetType) ;

/// @brief Method ThrowArgumentException addr 0x2494e70 size 0x58 virtual false final false
static void ThrowArgumentException(System::ExceptionResource resource) ;

/// @brief Method ThrowArgumentException addr 0x2495154 size 0x6c virtual false final false
static void ThrowArgumentException(System::ExceptionResource resource, System::ExceptionArgument argument) ;

/// @brief Method ThrowArgumentOutOfRangeException addr 0x2495344 size 0xa4 virtual false final false
static void ThrowArgumentOutOfRangeException(System::ExceptionArgument argument, System::ExceptionResource resource) ;

/// @brief Method ThrowInvalidOperationException addr 0x24953e8 size 0x58 virtual false final false
static void ThrowInvalidOperationException(System::ExceptionResource resource) ;

/// @brief Method ThrowSerializationException addr 0x2495440 size 0x58 virtual false final false
static void ThrowSerializationException(System::ExceptionResource resource) ;

/// @brief Method ThrowNotSupportedException addr 0x2495498 size 0x58 virtual false final false
static void ThrowNotSupportedException(System::ExceptionResource resource) ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion addr 0x24954f0 size 0x50 virtual false final false
static void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen addr 0x2495540 size 0x50 virtual false final false
static void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted addr 0x2495590 size 0x50 virtual false final false
static void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded addr 0x24955e0 size 0x50 virtual false final false
static void ThrowInvalidOperationException_InvalidOperation_EnumEnded() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue addr 0x2495630 size 0x50 virtual false final false
static void ThrowInvalidOperationException_InvalidOperation_NoValue() ;

/// @brief Method GetArgumentOutOfRangeException addr 0x2495680 size 0x84 virtual false final false
static System::ArgumentOutOfRangeException GetArgumentOutOfRangeException(System::ExceptionArgument argument, ::StringW resource) ;

/// @brief Method ThrowArgumentOutOfRange_IndexException addr 0x2495704 size 0x38 virtual false final false
static void ThrowArgumentOutOfRange_IndexException() ;

/// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException addr 0x249573c size 0x38 virtual false final false
static void ThrowIndexArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowArgumentException_Argument_InvalidArrayType addr 0x2495774 size 0x50 virtual false final false
static void ThrowArgumentException_Argument_InvalidArrayType() ;

/// @brief Method GetAddingDuplicateWithKeyArgumentException addr 0x24957c4 size 0x98 virtual false final false
static System::ArgumentException GetAddingDuplicateWithKeyArgumentException(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ThrowAddingDuplicateWithKeyArgumentException addr 0x249585c size 0x24 virtual false final false
static void ThrowAddingDuplicateWithKeyArgumentException(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method GetKeyNotFoundException addr 0x2495880 size 0x80 virtual false final false
static System::Collections::Generic::KeyNotFoundException GetKeyNotFoundException(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ThrowKeyNotFoundException addr 0x2495900 size 0x8 virtual false final false
static void ThrowKeyNotFoundException(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ThrowInvalidTypeWithPointersNotSupported addr 0x2495908 size 0x68 virtual false final false
static void ThrowInvalidTypeWithPointersNotSupported(System::Type targetType) ;

/// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported addr 0x2495970 size 0x30 virtual false final false
static void ThrowInvalidOperationException_ConcurrentOperationsNotSupported() ;

/// @brief Method GetInvalidOperationException addr 0x24959a0 size 0x64 virtual false final false
static System::InvalidOperationException GetInvalidOperationException(::StringW str) ;

/// @brief Method ThrowArraySegmentCtorValidationFailedExceptions addr 0x2495a04 size 0x24 virtual false final false
static void ThrowArraySegmentCtorValidationFailedExceptions(System::Array array, int32_t offset, int32_t count) ;

/// @brief Method GetArraySegmentCtorValidationFailedException addr 0x2495a28 size 0x30 virtual false final false
static System::Exception GetArraySegmentCtorValidationFailedException(System::Array array, int32_t offset, int32_t count) ;

/// @brief Method GetArgumentException addr 0x2495b8c size 0xac virtual false final false
static System::ArgumentException GetArgumentException(System::ExceptionResource resource) ;

/// @brief Method GetArgumentNullException addr 0x2495a58 size 0x74 virtual false final false
static System::ArgumentNullException GetArgumentNullException(System::ExceptionArgument argument) ;

/// @brief Method IfNullAndNullsAreIllegalThenThrow addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IfNullAndNullsAreIllegalThenThrow(::bs_hook::Il2CppWrapperType value, System::ExceptionArgument argName) ;

/// @brief Method GetArgumentName addr 0x24951c0 size 0x184 virtual false final false
static ::StringW GetArgumentName(System::ExceptionArgument argument) ;

/// @brief Method GetArgumentOutOfRangeException addr 0x2495acc size 0xc0 virtual false final false
static System::ArgumentOutOfRangeException GetArgumentOutOfRangeException(System::ExceptionArgument argument, System::ExceptionResource resource) ;

/// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index addr 0x2495c38 size 0x2c virtual false final false
static void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index() ;

/// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count addr 0x2495c64 size 0x2c virtual false final false
static void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count() ;

/// @brief Method GetResourceName addr 0x2494ec8 size 0x28c virtual false final false
static ::StringW GetResourceName(System::ExceptionResource resource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(System::ThrowHelper, "System", "ThrowHelper");
