#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ObstacleExecutionRating__Rating;
}
namespace GlobalNamespace {
class ObstacleExecutionRating;
}
// Type: ::Rating
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4614))
// CS Name: ObstacleExecutionRating::Rating
struct CORDL_TYPE GlobalNamespace__ObstacleExecutionRating__Rating : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ObstacleExecutionRating__Rating(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ObstacleExecutionRating__Rating(GlobalNamespace__ObstacleExecutionRating__Rating const&) = default;
                    constexpr GlobalNamespace__ObstacleExecutionRating__Rating(GlobalNamespace__ObstacleExecutionRating__Rating&&) = default;
                    constexpr GlobalNamespace__ObstacleExecutionRating__Rating& operator=(GlobalNamespace__ObstacleExecutionRating__Rating const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ObstacleExecutionRating__Rating& operator=(GlobalNamespace__ObstacleExecutionRating__Rating&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObstacleExecutionRating__Rating(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ObstacleExecutionRating__Rating_Unwrapped : int32_t {
__OK = 0,
__NotGood = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ObstacleExecutionRating__Rating_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ObstacleExecutionRating__Rating_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating const OK;

/// @brief Field NotGood offset 0
static GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating const NotGood;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObstacleExecutionRating
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4615))
// CS Name: ObstacleExecutionRating
class CORDL_TYPE ObstacleExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
public:
// Declarations
using Rating = GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ObstacleExecutionRating() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: " const&", def_value: None }]
constexpr ObstacleExecutionRating(ObstacleExecutionRating const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: "&&", def_value: None }]
constexpr ObstacleExecutionRating(ObstacleExecutionRating&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleExecutionRating(void* ptr) noexcept : GlobalNamespace::BeatmapObjectExecutionRating(ptr) {
}


  constexpr ObstacleExecutionRating& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleExecutionRating& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleExecutionRating& operator=(ObstacleExecutionRating&& o) noexcept = default;
  constexpr ObstacleExecutionRating& operator=(ObstacleExecutionRating const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating __declspec(property(get=__get__rating_k__BackingField, put=__set__rating_k__BackingField))  _rating_k__BackingField;

constexpr void __set__rating_k__BackingField(GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating value) ;

constexpr GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating __get__rating_k__BackingField() const;


// Properties

 GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating __declspec(property(get=get_rating))  rating;


// Methods

/// @brief Method get_rating addr 0x224f804 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating get_rating() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rating", ty: "GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating", modifiers: "", def_value: None }]
explicit ObstacleExecutionRating(float_t time, GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating rating) ;

/// @brief Method .ctor addr 0x224f80c size 0x28 virtual false final false
 void _ctor(float_t time, GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating rating) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObstacleExecutionRating__Rating, "", "ObstacleExecutionRating/Rating");
NEED_NO_BOX(GlobalNamespace::ObstacleExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleExecutionRating, "", "ObstacleExecutionRating");
