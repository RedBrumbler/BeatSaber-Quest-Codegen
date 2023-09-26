#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class WeightUtility;
}
// Type: UnityEngine.Timeline::WeightUtility
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14175))
// CS Name: UnityEngine.Timeline.WeightUtility
class CORDL_TYPE WeightUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WeightUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "WeightUtility", modifiers: " const&", def_value: None }]
constexpr WeightUtility(WeightUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WeightUtility", modifiers: "&&", def_value: None }]
constexpr WeightUtility(WeightUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WeightUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WeightUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WeightUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WeightUtility& operator=(WeightUtility&& o) noexcept = default;
  constexpr WeightUtility& operator=(WeightUtility const& o) noexcept = default;
                


// Methods

/// @brief Method NormalizeMixer addr 0x2b0dc94 size 0x188 virtual false final false
static float_t NormalizeMixer(UnityEngine::Playables::Playable mixer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::WeightUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::WeightUtility, "UnityEngine.Timeline", "WeightUtility");
