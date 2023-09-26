#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::ComponentModel {
class DateTimeOffsetConverter;
}
// Type: System.ComponentModel::DateTimeOffsetConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8341))
// CS Name: System.ComponentModel.DateTimeOffsetConverter
class CORDL_TYPE DateTimeOffsetConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeOffsetConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: " const&", def_value: None }]
constexpr DateTimeOffsetConverter(DateTimeOffsetConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: "&&", def_value: None }]
constexpr DateTimeOffsetConverter(DateTimeOffsetConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeOffsetConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr DateTimeOffsetConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeOffsetConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeOffsetConverter& operator=(DateTimeOffsetConverter&& o) noexcept = default;
  constexpr DateTimeOffsetConverter& operator=(DateTimeOffsetConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x27b8d9c size 0xa8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x27b8e44 size 0xa8 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x27b8eec size 0x380 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x27b926c size 0xac0 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

// Ctor Parameters []
explicit DateTimeOffsetConverter() ;

/// @brief Method .ctor addr 0x27b9d2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DateTimeOffsetConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DateTimeOffsetConverter, "System.ComponentModel", "DateTimeOffsetConverter");
