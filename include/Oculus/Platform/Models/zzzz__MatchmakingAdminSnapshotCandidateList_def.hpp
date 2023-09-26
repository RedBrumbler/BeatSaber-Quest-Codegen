#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidate_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshotCandidateList;
}
// Type: Oculus.Platform.Models::MatchmakingAdminSnapshotCandidateList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1143 }), TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13458))
// CS Name: Oculus.Platform.Models.MatchmakingAdminSnapshotCandidateList
class CORDL_TYPE MatchmakingAdminSnapshotCandidateList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MatchmakingAdminSnapshotCandidateList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidateList", modifiers: " const&", def_value: None }]
constexpr MatchmakingAdminSnapshotCandidateList(MatchmakingAdminSnapshotCandidateList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidateList", modifiers: "&&", def_value: None }]
constexpr MatchmakingAdminSnapshotCandidateList(MatchmakingAdminSnapshotCandidateList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingAdminSnapshotCandidateList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate>(ptr) {
}


  constexpr MatchmakingAdminSnapshotCandidateList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingAdminSnapshotCandidateList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingAdminSnapshotCandidateList& operator=(MatchmakingAdminSnapshotCandidateList&& o) noexcept = default;
  constexpr MatchmakingAdminSnapshotCandidateList& operator=(MatchmakingAdminSnapshotCandidateList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingAdminSnapshotCandidateList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25d0088 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidateList");
