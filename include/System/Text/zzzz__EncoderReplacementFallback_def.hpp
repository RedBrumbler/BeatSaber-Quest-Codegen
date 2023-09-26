#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallback;
}
// Type: System.Text::EncoderReplacementFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2843))
// CS Name: System.Text.EncoderReplacementFallback
class CORDL_TYPE EncoderReplacementFallback : public System::Text::EncoderFallback {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EncoderReplacementFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: " const&", def_value: None }]
constexpr EncoderReplacementFallback(EncoderReplacementFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "&&", def_value: None }]
constexpr EncoderReplacementFallback(EncoderReplacementFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderReplacementFallback(void* ptr) noexcept : System::Text::EncoderFallback(ptr) {
}


  constexpr EncoderReplacementFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderReplacementFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderReplacementFallback& operator=(EncoderReplacementFallback&& o) noexcept = default;
  constexpr EncoderReplacementFallback& operator=(EncoderReplacementFallback const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__strDefault, put=__set__strDefault))  _strDefault;

constexpr void __set__strDefault(::StringW value) ;

constexpr ::StringW __get__strDefault() const;


// Properties

 ::StringW __declspec(property(get=get_DefaultString))  DefaultString;

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

// Ctor Parameters []
explicit EncoderReplacementFallback() ;

/// @brief Method .ctor addr 0x23025a0 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EncoderReplacementFallback(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2302790 size 0x104 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2302894 size 0x5c virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: None }]
explicit EncoderReplacementFallback(::StringW replacement) ;

/// @brief Method .ctor addr 0x23025e8 size 0x1a8 virtual false final false
 void _ctor(::StringW replacement) ;

/// @brief Method get_DefaultString addr 0x23028f0 size 0x8 virtual false final false
 ::StringW get_DefaultString() ;

/// @brief Method CreateFallbackBuffer addr 0x23028f8 size 0x60 virtual true final false
 System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x23029a0 size 0x1c virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x23029bc size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x2302a3c size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderReplacementFallback, "System.Text", "EncoderReplacementFallback");
