#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
// Type: ::GuestNameButtonsListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13744), inst: 5050 }), TypeDefinitionIndex(TypeDefinitionIndex(13744)), TypeDefinitionIndex(TypeDefinitionIndex(5626))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5627))
// CS Name: GuestNameButtonsListItemsList
class CORDL_TYPE GuestNameButtonsListItemsList : public HMUI::UIItemsList_1<GlobalNamespace::GuestNameButtonsListItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GuestNameButtonsListItemsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: " const&", def_value: None }]
constexpr GuestNameButtonsListItemsList(GuestNameButtonsListItemsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: "&&", def_value: None }]
constexpr GuestNameButtonsListItemsList(GuestNameButtonsListItemsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuestNameButtonsListItemsList(void* ptr) noexcept : HMUI::UIItemsList_1<GlobalNamespace::GuestNameButtonsListItem>(ptr) {
}


  constexpr GuestNameButtonsListItemsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuestNameButtonsListItemsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuestNameButtonsListItemsList& operator=(GuestNameButtonsListItemsList&& o) noexcept = default;
  constexpr GuestNameButtonsListItemsList& operator=(GuestNameButtonsListItemsList const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GuestNameButtonsListItemsList() ;

/// @brief Method .ctor addr 0x217da60 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GuestNameButtonsListItemsList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GuestNameButtonsListItemsList, "", "GuestNameButtonsListItemsList");
