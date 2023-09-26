#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__OrdinalComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class OrdinalIgnoreCaseComparer;
}
// Type: System::OrdinalIgnoreCaseComparer
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2475))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2477))
// CS Name: System.OrdinalIgnoreCaseComparer
class CORDL_TYPE OrdinalIgnoreCaseComparer : public System::OrdinalComparer {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OrdinalIgnoreCaseComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrdinalIgnoreCaseComparer", modifiers: " const&", def_value: None }]
constexpr OrdinalIgnoreCaseComparer(OrdinalIgnoreCaseComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrdinalIgnoreCaseComparer", modifiers: "&&", def_value: None }]
constexpr OrdinalIgnoreCaseComparer(OrdinalIgnoreCaseComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrdinalIgnoreCaseComparer(void* ptr) noexcept : System::OrdinalComparer(ptr) {
}


  constexpr OrdinalIgnoreCaseComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrdinalIgnoreCaseComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrdinalIgnoreCaseComparer& operator=(OrdinalIgnoreCaseComparer&& o) noexcept = default;
  constexpr OrdinalIgnoreCaseComparer& operator=(OrdinalIgnoreCaseComparer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OrdinalIgnoreCaseComparer() ;

/// @brief Method .ctor addr 0x2489d8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Compare addr 0x248a710 size 0x18 virtual true final false
 int32_t Compare(::StringW x, ::StringW y) ;

/// @brief Method Equals addr 0x248a728 size 0x18 virtual true final false
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method GetHashCode addr 0x248a740 size 0x64 virtual true final false
 int32_t GetHashCode(::StringW obj) ;

/// @brief Method GetObjectData addr 0x248a7a4 size 0xb4 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::OrdinalIgnoreCaseComparer);
DEFINE_IL2CPP_ARG_TYPE(System::OrdinalIgnoreCaseComparer, "System", "OrdinalIgnoreCaseComparer");
