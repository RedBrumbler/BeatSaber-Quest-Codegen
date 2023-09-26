#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Text {
class DecoderFallbackException;
}
// Type: System.Text::DecoderFallbackException
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2828))
// CS Name: System.Text.DecoderFallbackException
class CORDL_TYPE DecoderFallbackException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~DecoderFallbackException() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: " const&", def_value: None }]
constexpr DecoderFallbackException(DecoderFallbackException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: "&&", def_value: None }]
constexpr DecoderFallbackException(DecoderFallbackException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderFallbackException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr DecoderFallbackException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderFallbackException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderFallbackException& operator=(DecoderFallbackException&& o) noexcept = default;
  constexpr DecoderFallbackException& operator=(DecoderFallbackException const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__bytesUnknown, put=__set__bytesUnknown))  _bytesUnknown;

constexpr void __set__bytesUnknown(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__bytesUnknown() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Methods

// Ctor Parameters []
explicit DecoderFallbackException() ;

/// @brief Method .ctor addr 0x24f4bc8 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesUnknown", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit DecoderFallbackException(::StringW message, ::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method .ctor addr 0x24f4b98 size 0x30 virtual false final false
 void _ctor(::StringW message, ::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit DecoderFallbackException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x24f4c24 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderFallbackException, "System.Text", "DecoderFallbackException");
