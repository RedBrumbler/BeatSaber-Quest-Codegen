#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcVisibilityTypeSettingsDropdown;
}
// Type: ::ArcVisibilityTypeSettingsDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5700)), TypeDefinitionIndex(TypeDefinitionIndex(4719)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5700), inst: 4595 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5683))
// CS Name: ArcVisibilityTypeSettingsDropdown
class CORDL_TYPE ArcVisibilityTypeSettingsDropdown : public GlobalNamespace::ValueDropdownController_1<GlobalNamespace::ArcVisibilityType> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ArcVisibilityTypeSettingsDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArcVisibilityTypeSettingsDropdown", modifiers: " const&", def_value: None }]
constexpr ArcVisibilityTypeSettingsDropdown(ArcVisibilityTypeSettingsDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArcVisibilityTypeSettingsDropdown", modifiers: "&&", def_value: None }]
constexpr ArcVisibilityTypeSettingsDropdown(ArcVisibilityTypeSettingsDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArcVisibilityTypeSettingsDropdown(void* ptr) noexcept : GlobalNamespace::ValueDropdownController_1<GlobalNamespace::ArcVisibilityType>(ptr) {
}


  constexpr ArcVisibilityTypeSettingsDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArcVisibilityTypeSettingsDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArcVisibilityTypeSettingsDropdown& operator=(ArcVisibilityTypeSettingsDropdown&& o) noexcept = default;
  constexpr ArcVisibilityTypeSettingsDropdown& operator=(ArcVisibilityTypeSettingsDropdown const& o) noexcept = default;
                


// Methods

/// @brief Method GetNamedValues addr 0x2188d94 size 0x164 virtual true final false
 System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::ArcVisibilityType,::StringW>> GetNamedValues() ;

// Ctor Parameters []
explicit ArcVisibilityTypeSettingsDropdown() ;

/// @brief Method .ctor addr 0x2188ef8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ArcVisibilityTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcVisibilityTypeSettingsDropdown, "", "ArcVisibilityTypeSettingsDropdown");
