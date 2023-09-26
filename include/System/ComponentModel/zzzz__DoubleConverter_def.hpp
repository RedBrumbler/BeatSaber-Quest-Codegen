#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DoubleConverter;
}
// Type: System.ComponentModel::DoubleConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8277))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8291))
// CS Name: System.ComponentModel.DoubleConverter
class CORDL_TYPE DoubleConverter : public System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DoubleConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: " const&", def_value: None }]
constexpr DoubleConverter(DoubleConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: "&&", def_value: None }]
constexpr DoubleConverter(DoubleConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoubleConverter(void* ptr) noexcept : System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr DoubleConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoubleConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoubleConverter& operator=(DoubleConverter&& o) noexcept = default;
  constexpr DoubleConverter& operator=(DoubleConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_AllowHex))  AllowHex;

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_AllowHex addr 0x27ad2b4 size 0x8 virtual true final false
 bool get_AllowHex() ;

/// @brief Method get_TargetType addr 0x27ad2bc size 0x6c virtual true final false
 System::Type get_TargetType() ;

/// @brief Method FromString addr 0x27ad328 size 0xc0 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x27ad3e8 size 0x70 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x27ad458 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Globalization::NumberFormatInfo formatInfo) ;

// Ctor Parameters []
explicit DoubleConverter() ;

/// @brief Method .ctor addr 0x27ad508 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DoubleConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DoubleConverter, "System.ComponentModel", "DoubleConverter");
