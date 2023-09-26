#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementDefinitions;
}
// Type: Oculus.Platform::MessageWithAchievementDefinitions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4430 }), TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13228))
// CS Name: Oculus.Platform.MessageWithAchievementDefinitions
class CORDL_TYPE MessageWithAchievementDefinitions : public Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementDefinitionList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAchievementDefinitions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: " const&", def_value: None }]
constexpr MessageWithAchievementDefinitions(MessageWithAchievementDefinitions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "&&", def_value: None }]
constexpr MessageWithAchievementDefinitions(MessageWithAchievementDefinitions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAchievementDefinitions(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementDefinitionList>(ptr) {
}


  constexpr MessageWithAchievementDefinitions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAchievementDefinitions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAchievementDefinitions& operator=(MessageWithAchievementDefinitions&& o) noexcept = default;
  constexpr MessageWithAchievementDefinitions& operator=(MessageWithAchievementDefinitions const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAchievementDefinitions(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25adb94 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAchievementDefinitions addr 0x25afa24 size 0x3c virtual true final false
 Oculus::Platform::Models::AchievementDefinitionList GetAchievementDefinitions() ;

/// @brief Method GetDataFromMessage addr 0x25afa60 size 0x9c virtual true final false
 Oculus::Platform::Models::AchievementDefinitionList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAchievementDefinitions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAchievementDefinitions, "Oculus.Platform", "MessageWithAchievementDefinitions");
