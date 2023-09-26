#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataMirrorTransform;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4155))
// CS Name: BeatmapDataMirrorTransform::<>c__DisplayClass0_0
class CORDL_TYPE GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_numberOfLines, put=__set_numberOfLines))  numberOfLines;

constexpr void __set_numberOfLines(int32_t value) ;

constexpr int32_t __get_numberOfLines() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x21f0370 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateTransformedData>g__ProcessData|0 addr 0x21f0378 size 0xe0 virtual false final false
 GlobalNamespace::BeatmapDataItem _CreateTransformedData_g__ProcessData_0(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataMirrorTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4156))
// CS Name: BeatmapDataMirrorTransform
class CORDL_TYPE BeatmapDataMirrorTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_0 = GlobalNamespace::GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataMirrorTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataMirrorTransform(BeatmapDataMirrorTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataMirrorTransform(BeatmapDataMirrorTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataMirrorTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataMirrorTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataMirrorTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataMirrorTransform& operator=(BeatmapDataMirrorTransform&& o) noexcept = default;
  constexpr BeatmapDataMirrorTransform& operator=(BeatmapDataMirrorTransform const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedData addr 0x21f01e0 size 0x190 virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataMirrorTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataMirrorTransform, "", "BeatmapDataMirrorTransform");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataMirrorTransform____c__DisplayClass0_0, "", "BeatmapDataMirrorTransform/<>c__DisplayClass0_0");
