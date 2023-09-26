#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestion_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationSuggestionList;
}
// Type: Oculus.Platform.Models::CalApplicationSuggestionList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13418)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1134 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13419))
// CS Name: Oculus.Platform.Models.CalApplicationSuggestionList
class CORDL_TYPE CalApplicationSuggestionList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::CalApplicationSuggestion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CalApplicationSuggestionList() = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestionList", modifiers: " const&", def_value: None }]
constexpr CalApplicationSuggestionList(CalApplicationSuggestionList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestionList", modifiers: "&&", def_value: None }]
constexpr CalApplicationSuggestionList(CalApplicationSuggestionList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CalApplicationSuggestionList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::CalApplicationSuggestion>(ptr) {
}


  constexpr CalApplicationSuggestionList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CalApplicationSuggestionList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CalApplicationSuggestionList& operator=(CalApplicationSuggestionList&& o) noexcept = default;
  constexpr CalApplicationSuggestionList& operator=(CalApplicationSuggestionList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CalApplicationSuggestionList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25cd354 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CalApplicationSuggestionList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationSuggestionList, "Oculus.Platform.Models", "CalApplicationSuggestionList");
