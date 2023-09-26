#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class CharConverter;
}
// Type: System.ComponentModel::CharConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8280))
// CS Name: System.ComponentModel.CharConverter
class CORDL_TYPE CharConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CharConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharConverter", modifiers: " const&", def_value: None }]
constexpr CharConverter(CharConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharConverter", modifiers: "&&", def_value: None }]
constexpr CharConverter(CharConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr CharConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharConverter& operator=(CharConverter&& o) noexcept = default;
  constexpr CharConverter& operator=(CharConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x27a5c10 size 0xc8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method ConvertTo addr 0x27a5cd8 size 0x130 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x27a5e08 size 0x188 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters []
explicit CharConverter() ;

/// @brief Method .ctor addr 0x27a5f90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::CharConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::CharConverter, "System.ComponentModel", "CharConverter");
