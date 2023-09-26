#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelSearchHelper;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelSearchHelper____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4428))
// CS Name: BeatmapLevelSearchHelper::<>c
class CORDL_TYPE GlobalNamespace__BeatmapLevelSearchHelper____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapLevelSearchHelper____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSearchHelper____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSearchHelper____c(GlobalNamespace__BeatmapLevelSearchHelper____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSearchHelper____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSearchHelper____c(GlobalNamespace__BeatmapLevelSearchHelper____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSearchHelper____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelSearchHelper____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSearchHelper____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSearchHelper____c& operator=(GlobalNamespace__BeatmapLevelSearchHelper____c&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelSearchHelper____c& operator=(GlobalNamespace__BeatmapLevelSearchHelper____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c value) ;

static GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c __get___9() ;

static System::Comparison_1<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Comparison_1<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>> value) ;

static System::Comparison_1<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>> __get___9__3_0() ;

static System::Func_2<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>,GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get___9__3_1, put=__set___9__3_1))  __9__3_1;

static void __set___9__3_1(System::Func_2<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>,GlobalNamespace::IPreviewBeatmapLevel> value) ;

static System::Func_2<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>,GlobalNamespace::IPreviewBeatmapLevel> __get___9__3_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapLevelSearchHelper____c() ;

/// @brief Method .ctor addr 0x222591c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortSearchResults>b__3_0 addr 0x2225924 size 0x2c virtual false final false
 int32_t _SortSearchResults_b__3_0(System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t> x, System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t> y) ;

/// @brief Method <SortSearchResults>b__3_1 addr 0x2225950 size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel _SortSearchResults_b__3_1(System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t> match) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelSearchHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4429))
// CS Name: BeatmapLevelSearchHelper
class CORDL_TYPE BeatmapLevelSearchHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapLevelSearchHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSearchHelper", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelSearchHelper(BeatmapLevelSearchHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSearchHelper", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelSearchHelper(BeatmapLevelSearchHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelSearchHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelSearchHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelSearchHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelSearchHelper& operator=(BeatmapLevelSearchHelper&& o) noexcept = default;
  constexpr BeatmapLevelSearchHelper& operator=(BeatmapLevelSearchHelper const& o) noexcept = default;
                


// Methods

/// @brief Method SearchAndSortBeatmapLevels addr 0x221b188 size 0x648 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> SearchAndSortBeatmapLevels(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> levels, ::StringW searchTerm) ;

/// @brief Method CalculateMatchScore addr 0x2225558 size 0x198 virtual false final false
static int32_t CalculateMatchScore(System::Collections::Generic::List_1<::StringW> searchTerm, ::StringW levelString, int32_t searchLength) ;

/// @brief Method SubstringsAtMinLength addr 0x2225430 size 0x128 virtual false final false
static System::Collections::Generic::List_1<::StringW> SubstringsAtMinLength(System::Collections::Generic::List_1<::StringW> substrings, ::StringW currentString, int32_t minLength) ;

/// @brief Method SortSearchResults addr 0x22256f0 size 0x1c8 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> SortSearchResults(System::Collections::Generic::List_1<System::ValueTuple_2<GlobalNamespace::IPreviewBeatmapLevel,int32_t>> matches) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelSearchHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSearchHelper, "", "BeatmapLevelSearchHelper");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSearchHelper____c, "", "BeatmapLevelSearchHelper/<>c");
