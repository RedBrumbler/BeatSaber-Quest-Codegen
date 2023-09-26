#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
// Type: Oculus.Platform.Models::AchievementProgressList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1130 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13402))
// CS Name: Oculus.Platform.Models.AchievementProgressList
class CORDL_TYPE AchievementProgressList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AchievementProgress> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AchievementProgressList() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementProgressList", modifiers: " const&", def_value: None }]
constexpr AchievementProgressList(AchievementProgressList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementProgressList", modifiers: "&&", def_value: None }]
constexpr AchievementProgressList(AchievementProgressList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementProgressList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AchievementProgress>(ptr) {
}


  constexpr AchievementProgressList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementProgressList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementProgressList& operator=(AchievementProgressList&& o) noexcept = default;
  constexpr AchievementProgressList& operator=(AchievementProgressList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AchievementProgressList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25cbe2c size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementProgressList, "Oculus.Platform.Models", "AchievementProgressList");
