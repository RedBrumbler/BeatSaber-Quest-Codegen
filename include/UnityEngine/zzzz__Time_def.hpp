#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class Time;
}
// Type: UnityEngine::Time
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10142))
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Time() = default;

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: " const&", def_value: None }]
constexpr Time(Time const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
constexpr Time(Time&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Time(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Time& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Time& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Time& operator=(Time&& o) noexcept = default;
  constexpr Time& operator=(Time const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_time))  time;

static float_t __declspec(property(get=get_timeSinceLevelLoad))  timeSinceLevelLoad;

static float_t __declspec(property(get=get_deltaTime))  deltaTime;

static float_t __declspec(property(get=get_unscaledTime))  unscaledTime;

static float_t __declspec(property(get=get_fixedUnscaledTime))  fixedUnscaledTime;

static float_t __declspec(property(get=get_unscaledDeltaTime))  unscaledDeltaTime;

static float_t __declspec(property(get=get_fixedDeltaTime))  fixedDeltaTime;

static float_t __declspec(property(get=get_maximumDeltaTime))  maximumDeltaTime;

static float_t __declspec(property(get=get_smoothDeltaTime))  smoothDeltaTime;

static float_t __declspec(property(get=get_timeScale, put=set_timeScale))  timeScale;

static int32_t __declspec(property(get=get_frameCount))  frameCount;

static float_t __declspec(property(get=get_realtimeSinceStartup))  realtimeSinceStartup;

static float_t __declspec(property(get=get_captureDeltaTime, put=set_captureDeltaTime))  captureDeltaTime;

static int32_t __declspec(property(get=get_captureFramerate, put=set_captureFramerate))  captureFramerate;


// Methods

/// @brief Method get_time addr 0x2b87180 size 0x28 virtual false final false
static float_t get_time() ;

/// @brief Method get_timeSinceLevelLoad addr 0x2b871a8 size 0x28 virtual false final false
static float_t get_timeSinceLevelLoad() ;

/// @brief Method get_deltaTime addr 0x2b871d0 size 0x28 virtual false final false
static float_t get_deltaTime() ;

/// @brief Method get_unscaledTime addr 0x2b871f8 size 0x28 virtual false final false
static float_t get_unscaledTime() ;

/// @brief Method get_fixedUnscaledTime addr 0x2b87220 size 0x28 virtual false final false
static float_t get_fixedUnscaledTime() ;

/// @brief Method get_unscaledDeltaTime addr 0x2b87248 size 0x28 virtual false final false
static float_t get_unscaledDeltaTime() ;

/// @brief Method get_fixedDeltaTime addr 0x2b87270 size 0x28 virtual false final false
static float_t get_fixedDeltaTime() ;

/// @brief Method get_maximumDeltaTime addr 0x2b87298 size 0x28 virtual false final false
static float_t get_maximumDeltaTime() ;

/// @brief Method get_smoothDeltaTime addr 0x2b872c0 size 0x28 virtual false final false
static float_t get_smoothDeltaTime() ;

/// @brief Method get_timeScale addr 0x2b872e8 size 0x28 virtual false final false
static float_t get_timeScale() ;

/// @brief Method set_timeScale addr 0x2b87310 size 0x38 virtual false final false
static void set_timeScale(float_t value) ;

/// @brief Method get_frameCount addr 0x2b87348 size 0x28 virtual false final false
static int32_t get_frameCount() ;

/// @brief Method get_realtimeSinceStartup addr 0x2b87370 size 0x28 virtual false final false
static float_t get_realtimeSinceStartup() ;

/// @brief Method get_captureDeltaTime addr 0x2b87398 size 0x28 virtual false final false
static float_t get_captureDeltaTime() ;

/// @brief Method set_captureDeltaTime addr 0x2b873c0 size 0x38 virtual false final false
static void set_captureDeltaTime(float_t value) ;

/// @brief Method get_captureFramerate addr 0x2b873f8 size 0x104 virtual false final false
static int32_t get_captureFramerate() ;

/// @brief Method set_captureFramerate addr 0x2b874fc size 0x4c virtual false final false
static void set_captureFramerate(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Time);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Time, "UnityEngine", "Time");
