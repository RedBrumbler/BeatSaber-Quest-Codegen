#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
// Forward declare root types
namespace Oculus::Platform {
class Achievements;
}
// Type: Oculus.Platform::Achievements
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13341))
// CS Name: Oculus.Platform.Achievements
class CORDL_TYPE Achievements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Achievements() = default;

// Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: " const&", def_value: None }]
constexpr Achievements(Achievements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: "&&", def_value: None }]
constexpr Achievements(Achievements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Achievements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Achievements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Achievements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Achievements& operator=(Achievements&& o) noexcept = default;
  constexpr Achievements& operator=(Achievements const& o) noexcept = default;
                


// Methods

/// @brief Method AddCount addr 0x25bf59c size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate> AddCount(::StringW name, uint64_t count) ;

/// @brief Method AddFields addr 0x25bf70c size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate> AddFields(::StringW name, ::StringW fields) ;

/// @brief Method GetAllDefinitions addr 0x25bf87c size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList> GetAllDefinitions() ;

/// @brief Method GetAllProgress addr 0x25bf9d4 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList> GetAllProgress() ;

/// @brief Method GetDefinitionsByName addr 0x25bfb2c size 0x174 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList> GetDefinitionsByName(::ArrayW<::StringW> names) ;

/// @brief Method GetProgressByName addr 0x25bfca0 size 0x174 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList> GetProgressByName(::ArrayW<::StringW> names) ;

/// @brief Method Unlock addr 0x25bfe14 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate> Unlock(::StringW name) ;

/// @brief Method GetNextAchievementDefinitionListPage addr 0x25bff74 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList> GetNextAchievementDefinitionListPage(Oculus::Platform::Models::AchievementDefinitionList list) ;

/// @brief Method GetNextAchievementProgressListPage addr 0x25c0150 size 0x1dc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList> GetNextAchievementProgressListPage(Oculus::Platform::Models::AchievementProgressList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Achievements);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Achievements, "Oculus.Platform", "Achievements");
