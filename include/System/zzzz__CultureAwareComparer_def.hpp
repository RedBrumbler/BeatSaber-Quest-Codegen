#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
class CultureAwareComparer;
}
// Type: System::CultureAwareComparer
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2473))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2474))
// CS Name: System.CultureAwareComparer
class CORDL_TYPE CultureAwareComparer : public System::StringComparer {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CultureAwareComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: " const&", def_value: None }]
constexpr CultureAwareComparer(CultureAwareComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: "&&", def_value: None }]
constexpr CultureAwareComparer(CultureAwareComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CultureAwareComparer(void* ptr) noexcept : System::StringComparer(ptr) {
}


  constexpr CultureAwareComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CultureAwareComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CultureAwareComparer& operator=(CultureAwareComparer&& o) noexcept = default;
  constexpr CultureAwareComparer& operator=(CultureAwareComparer const& o) noexcept = default;
                


// Fields

 System::Globalization::CompareInfo __declspec(property(get=__get__compareInfo, put=__set__compareInfo))  _compareInfo;

constexpr void __set__compareInfo(System::Globalization::CompareInfo value) ;

constexpr System::Globalization::CompareInfo __get__compareInfo() const;

 System::Globalization::CompareOptions __declspec(property(get=__get__options, put=__set__options))  _options;

constexpr void __set__options(System::Globalization::CompareOptions value) ;

constexpr System::Globalization::CompareOptions __get__options() const;


// Methods

// Ctor Parameters [CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: None }]
explicit CultureAwareComparer(System::Globalization::CultureInfo culture, System::Globalization::CompareOptions options) ;

/// @brief Method .ctor addr 0x2489d40 size 0x44 virtual false final false
 void _ctor(System::Globalization::CultureInfo culture, System::Globalization::CompareOptions options) ;

// Ctor Parameters [CppParam { name: "compareInfo", ty: "System::Globalization::CompareInfo", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: None }]
explicit CultureAwareComparer(System::Globalization::CompareInfo compareInfo, System::Globalization::CompareOptions options) ;

/// @brief Method .ctor addr 0x2489d94 size 0xe4 virtual false final false
 void _ctor(System::Globalization::CompareInfo compareInfo, System::Globalization::CompareOptions options) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CultureAwareComparer(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2489e78 size 0x20c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Compare addr 0x248a084 size 0x54 virtual true final false
 int32_t Compare(::StringW x, ::StringW y) ;

/// @brief Method Equals addr 0x248a0d8 size 0x50 virtual true final false
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method GetHashCode addr 0x248a128 size 0x74 virtual true final false
 int32_t GetHashCode(::StringW obj) ;

/// @brief Method Equals addr 0x248a19c size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x248a234 size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetObjectData addr 0x248a268 size 0xec virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CultureAwareComparer);
DEFINE_IL2CPP_ARG_TYPE(System::CultureAwareComparer, "System", "CultureAwareComparer");
