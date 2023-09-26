#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
class Array;
}
namespace UnityEngine {
struct WrapMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationEvent;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine {
class AnimationClip;
}
// Type: UnityEngine::AnimationClip
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15059))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15074))
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public UnityEngine::Motion {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimationClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: " const&", def_value: None }]
constexpr AnimationClip(AnimationClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "&&", def_value: None }]
constexpr AnimationClip(AnimationClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationClip(void* ptr) noexcept : UnityEngine::Motion(ptr) {
}


  constexpr AnimationClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationClip& operator=(AnimationClip&& o) noexcept = default;
  constexpr AnimationClip& operator=(AnimationClip const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_length))  length;

 float_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_stopTime))  stopTime;

 float_t __declspec(property(get=get_frameRate, put=set_frameRate))  frameRate;

 UnityEngine::WrapMode __declspec(property(get=get_wrapMode, put=set_wrapMode))  wrapMode;

 UnityEngine::Bounds __declspec(property(get=get_localBounds, put=set_localBounds))  localBounds;

 bool __declspec(property(get=get_legacy, put=set_legacy))  legacy;

 bool __declspec(property(get=get_humanMotion))  humanMotion;

 bool __declspec(property(get=get_empty))  empty;

 bool __declspec(property(get=get_hasGenericRootTransform))  hasGenericRootTransform;

 bool __declspec(property(get=get_hasMotionFloatCurves))  hasMotionFloatCurves;

 bool __declspec(property(get=get_hasMotionCurves))  hasMotionCurves;

 bool __declspec(property(get=get_hasRootCurves))  hasRootCurves;

 bool __declspec(property(get=get_hasRootMotion))  hasRootMotion;

 ::ArrayW<UnityEngine::AnimationEvent> __declspec(property(get=get_events, put=set_events))  events;


// Methods

// Ctor Parameters []
explicit AnimationClip() ;

/// @brief Method .ctor addr 0x2b52010 size 0x40 virtual false final false
 void _ctor() ;

/// @brief Method Internal_CreateAnimationClip addr 0x2b52050 size 0x3c virtual false final false
static void Internal_CreateAnimationClip(UnityEngine::AnimationClip self) ;

/// @brief Method SampleAnimation addr 0x2b5208c size 0x8c virtual false final false
 void SampleAnimation(UnityEngine::GameObject go, float_t time) ;

/// @brief Method SampleAnimation addr 0x2b52154 size 0x64 virtual false final false
static void SampleAnimation(UnityEngine::GameObject go, UnityEngine::AnimationClip clip, float_t inTime, UnityEngine::WrapMode wrapMode) ;

/// @brief Method get_length addr 0x2b521b8 size 0x3c virtual false final false
 float_t get_length() ;

/// @brief Method get_startTime addr 0x2b521f4 size 0x3c virtual false final false
 float_t get_startTime() ;

/// @brief Method get_stopTime addr 0x2b52230 size 0x3c virtual false final false
 float_t get_stopTime() ;

/// @brief Method get_frameRate addr 0x2b5226c size 0x3c virtual false final false
 float_t get_frameRate() ;

/// @brief Method set_frameRate addr 0x2b522a8 size 0x4c virtual false final false
 void set_frameRate(float_t value) ;

/// @brief Method SetCurve addr 0x2b522f4 size 0x6c virtual false final false
 void SetCurve(::StringW relativePath, System::Type type, ::StringW propertyName, UnityEngine::AnimationCurve curve) ;

/// @brief Method EnsureQuaternionContinuity addr 0x2b52360 size 0x3c virtual false final false
 void EnsureQuaternionContinuity() ;

/// @brief Method ClearCurves addr 0x2b5239c size 0x3c virtual false final false
 void ClearCurves() ;

/// @brief Method get_wrapMode addr 0x2b52118 size 0x3c virtual false final false
 UnityEngine::WrapMode get_wrapMode() ;

/// @brief Method set_wrapMode addr 0x2b523d8 size 0x44 virtual false final false
 void set_wrapMode(UnityEngine::WrapMode value) ;

/// @brief Method get_localBounds addr 0x2b5241c size 0x68 virtual false final false
 UnityEngine::Bounds get_localBounds() ;

/// @brief Method set_localBounds addr 0x2b524c8 size 0x44 virtual false final false
 void set_localBounds(UnityEngine::Bounds value) ;

/// @brief Method get_legacy addr 0x2b52550 size 0x3c virtual false final false
 bool get_legacy() ;

/// @brief Method set_legacy addr 0x2b5258c size 0x44 virtual false final false
 void set_legacy(bool value) ;

/// @brief Method get_humanMotion addr 0x2b525d0 size 0x3c virtual false final false
 bool get_humanMotion() ;

/// @brief Method get_empty addr 0x2b5260c size 0x3c virtual false final false
 bool get_empty() ;

/// @brief Method get_hasGenericRootTransform addr 0x2b52648 size 0x3c virtual false final false
 bool get_hasGenericRootTransform() ;

/// @brief Method get_hasMotionFloatCurves addr 0x2b52684 size 0x3c virtual false final false
 bool get_hasMotionFloatCurves() ;

/// @brief Method get_hasMotionCurves addr 0x2b526c0 size 0x3c virtual false final false
 bool get_hasMotionCurves() ;

/// @brief Method get_hasRootCurves addr 0x2b526fc size 0x3c virtual false final false
 bool get_hasRootCurves() ;

/// @brief Method get_hasRootMotion addr 0x2b52738 size 0x3c virtual false final false
 bool get_hasRootMotion() ;

/// @brief Method AddEvent addr 0x2b52774 size 0x94 virtual false final false
 void AddEvent(UnityEngine::AnimationEvent evt) ;

/// @brief Method AddEventInternal addr 0x2b52808 size 0x44 virtual false final false
 void AddEventInternal(::bs_hook::Il2CppWrapperType evt) ;

/// @brief Method get_events addr 0x2b5284c size 0x8c virtual false final false
 ::ArrayW<UnityEngine::AnimationEvent> get_events() ;

/// @brief Method set_events addr 0x2b52914 size 0x44 virtual false final false
 void set_events(::ArrayW<UnityEngine::AnimationEvent> value) ;

/// @brief Method SetEventsInternal addr 0x2b52958 size 0x44 virtual false final false
 void SetEventsInternal(System::Array value) ;

/// @brief Method GetEventsInternal addr 0x2b528d8 size 0x3c virtual false final false
 System::Array GetEventsInternal() ;

/// @brief Method get_localBounds_Injected addr 0x2b52484 size 0x44 virtual false final false
 void get_localBounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

/// @brief Method set_localBounds_Injected addr 0x2b5250c size 0x44 virtual false final false
 void set_localBounds_Injected(ByRef<UnityEngine::Bounds> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationClip, "UnityEngine", "AnimationClip");
