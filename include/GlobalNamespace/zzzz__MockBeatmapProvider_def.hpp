#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapProvider;
}
// Type: ::MockBeatmapProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5281))
// CS Name: MockBeatmapProvider
class CORDL_TYPE MockBeatmapProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IServerBeatmapProvider
constexpr operator  GlobalNamespace::IServerBeatmapProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MockBeatmapProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: " const&", def_value: None }]
constexpr MockBeatmapProvider(MockBeatmapProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapProvider", modifiers: "&&", def_value: None }]
constexpr MockBeatmapProvider(MockBeatmapProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockBeatmapProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockBeatmapProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockBeatmapProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockBeatmapProvider& operator=(MockBeatmapProvider&& o) noexcept = default;
  constexpr MockBeatmapProvider& operator=(MockBeatmapProvider const& o) noexcept = default;
                


// Methods

/// @brief Method VerifyBeatmapForSelectionMask addr 0x2122cd8 size 0x8 virtual true final true
 bool VerifyBeatmapForSelectionMask(GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask) ;

/// @brief Method SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks addr 0x2122ce0 size 0x90 virtual true final true
 GlobalNamespace::BeatmapIdentifierNetSerializable SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t playerCount, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable> suggestedBeatmaps, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> ownedSongPacks) ;

/// @brief Method Dispose addr 0x2122d70 size 0x4 virtual false final false
 void Dispose() ;

// Ctor Parameters []
explicit MockBeatmapProvider() ;

/// @brief Method .ctor addr 0x2122d74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockBeatmapProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapProvider, "", "MockBeatmapProvider");
