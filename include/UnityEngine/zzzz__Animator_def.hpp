#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct StateInfoIndex;
}
namespace UnityEngine {
struct AnimatorCullingMode;
}
namespace UnityEngine {
struct AnimatorRecorderMode;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class StateMachineBehaviour;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
struct AvatarIKHint;
}
namespace UnityEngine {
struct MatchTargetWeightMask;
}
namespace UnityEngine {
struct AvatarTarget;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Animator;
}
// Type: UnityEngine::Animator
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15073))
// CS Name: UnityEngine.Animator
class CORDL_TYPE Animator : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Animator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: " const&", def_value: None }]
constexpr Animator(Animator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
constexpr Animator(Animator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Animator(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Animator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Animator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Animator& operator=(Animator&& o) noexcept = default;
  constexpr Animator& operator=(Animator const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isOptimizable))  isOptimizable;

 bool __declspec(property(get=get_isHuman))  isHuman;

 bool __declspec(property(get=get_hasRootMotion))  hasRootMotion;

 bool __declspec(property(get=get_isRootPositionOrRotationControlledByCurves))  isRootPositionOrRotationControlledByCurves;

 float_t __declspec(property(get=get_humanScale))  humanScale;

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 UnityEngine::Vector3 __declspec(property(get=get_deltaPosition))  deltaPosition;

 UnityEngine::Quaternion __declspec(property(get=get_deltaRotation))  deltaRotation;

 UnityEngine::Vector3 __declspec(property(get=get_velocity))  velocity;

 UnityEngine::Vector3 __declspec(property(get=get_angularVelocity))  angularVelocity;

 UnityEngine::Vector3 __declspec(property(get=get_rootPosition, put=set_rootPosition))  rootPosition;

 UnityEngine::Quaternion __declspec(property(get=get_rootRotation, put=set_rootRotation))  rootRotation;

 bool __declspec(property(get=get_applyRootMotion, put=set_applyRootMotion))  applyRootMotion;

 bool __declspec(property(get=get_linearVelocityBlending, put=set_linearVelocityBlending))  linearVelocityBlending;

 bool __declspec(property(get=get_animatePhysics, put=set_animatePhysics))  animatePhysics;

 UnityEngine::AnimatorUpdateMode __declspec(property(get=get_updateMode, put=set_updateMode))  updateMode;

 bool __declspec(property(get=get_hasTransformHierarchy))  hasTransformHierarchy;

 bool __declspec(property(get=get_allowConstantClipSamplingOptimization, put=set_allowConstantClipSamplingOptimization))  allowConstantClipSamplingOptimization;

 float_t __declspec(property(get=get_gravityWeight))  gravityWeight;

 UnityEngine::Vector3 __declspec(property(get=get_bodyPosition, put=set_bodyPosition))  bodyPosition;

 UnityEngine::Vector3 __declspec(property(get=get_bodyPositionInternal, put=set_bodyPositionInternal))  bodyPositionInternal;

 UnityEngine::Quaternion __declspec(property(get=get_bodyRotation, put=set_bodyRotation))  bodyRotation;

 UnityEngine::Quaternion __declspec(property(get=get_bodyRotationInternal, put=set_bodyRotationInternal))  bodyRotationInternal;

 bool __declspec(property(get=get_stabilizeFeet, put=set_stabilizeFeet))  stabilizeFeet;

 int32_t __declspec(property(get=get_layerCount))  layerCount;

 ::ArrayW<UnityEngine::AnimatorControllerParameter> __declspec(property(get=get_parameters))  parameters;

 int32_t __declspec(property(get=get_parameterCount))  parameterCount;

 float_t __declspec(property(get=get_feetPivotActive, put=set_feetPivotActive))  feetPivotActive;

 float_t __declspec(property(get=get_pivotWeight))  pivotWeight;

 UnityEngine::Vector3 __declspec(property(get=get_pivotPosition))  pivotPosition;

 bool __declspec(property(get=get_isMatchingTarget))  isMatchingTarget;

 float_t __declspec(property(get=get_speed, put=set_speed))  speed;

 UnityEngine::Vector3 __declspec(property(get=get_targetPosition))  targetPosition;

 UnityEngine::Quaternion __declspec(property(get=get_targetRotation))  targetRotation;

 UnityEngine::Transform __declspec(property(get=get_avatarRoot))  avatarRoot;

 UnityEngine::AnimatorCullingMode __declspec(property(get=get_cullingMode, put=set_cullingMode))  cullingMode;

 float_t __declspec(property(get=get_playbackTime, put=set_playbackTime))  playbackTime;

 float_t __declspec(property(get=get_recorderStartTime, put=set_recorderStartTime))  recorderStartTime;

 float_t __declspec(property(get=get_recorderStopTime, put=set_recorderStopTime))  recorderStopTime;

 UnityEngine::AnimatorRecorderMode __declspec(property(get=get_recorderMode))  recorderMode;

 UnityEngine::RuntimeAnimatorController __declspec(property(get=get_runtimeAnimatorController, put=set_runtimeAnimatorController))  runtimeAnimatorController;

 bool __declspec(property(get=get_hasBoundPlayables))  hasBoundPlayables;

 UnityEngine::Avatar __declspec(property(get=get_avatar, put=set_avatar))  avatar;

 UnityEngine::Playables::PlayableGraph __declspec(property(get=get_playableGraph))  playableGraph;

 bool __declspec(property(get=get_layersAffectMassCenter, put=set_layersAffectMassCenter))  layersAffectMassCenter;

 float_t __declspec(property(get=get_leftFeetBottomHeight))  leftFeetBottomHeight;

 float_t __declspec(property(get=get_rightFeetBottomHeight))  rightFeetBottomHeight;

 bool __declspec(property(get=get_supportsOnAnimatorMove))  supportsOnAnimatorMove;

 bool __declspec(property(get=get_logWarnings, put=set_logWarnings))  logWarnings;

 bool __declspec(property(get=get_fireEvents, put=set_fireEvents))  fireEvents;

 bool __declspec(property(get=get_keepAnimatorControllerStateOnDisable, put=set_keepAnimatorControllerStateOnDisable))  keepAnimatorControllerStateOnDisable;

 bool __declspec(property(get=get_keepAnimatorStateOnDisable, put=set_keepAnimatorStateOnDisable))  keepAnimatorStateOnDisable;


// Methods

/// @brief Method get_isOptimizable addr 0x2b4cd84 size 0x3c virtual false final false
 bool get_isOptimizable() ;

/// @brief Method get_isHuman addr 0x2b4cdc0 size 0x3c virtual false final false
 bool get_isHuman() ;

/// @brief Method get_hasRootMotion addr 0x2b4cdfc size 0x3c virtual false final false
 bool get_hasRootMotion() ;

/// @brief Method get_isRootPositionOrRotationControlledByCurves addr 0x2b4ce38 size 0x3c virtual false final false
 bool get_isRootPositionOrRotationControlledByCurves() ;

/// @brief Method get_humanScale addr 0x2b4ce74 size 0x3c virtual false final false
 float_t get_humanScale() ;

/// @brief Method get_isInitialized addr 0x2b4ceb0 size 0x3c virtual false final false
 bool get_isInitialized() ;

/// @brief Method GetFloat addr 0x2b4ceec size 0x44 virtual false final false
 float_t GetFloat(::StringW name) ;

/// @brief Method GetFloat addr 0x2b4cf74 size 0x44 virtual false final false
 float_t GetFloat(int32_t id) ;

/// @brief Method SetFloat addr 0x2b4cffc size 0x54 virtual false final false
 void SetFloat(::StringW name, float_t value) ;

/// @brief Method SetFloat addr 0x2b4d0a4 size 0x6c virtual false final false
 void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime) ;

/// @brief Method SetFloat addr 0x2b4d17c size 0x54 virtual false final false
 void SetFloat(int32_t id, float_t value) ;

/// @brief Method SetFloat addr 0x2b4d224 size 0x6c virtual false final false
 void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime) ;

/// @brief Method GetBool addr 0x2b4d2fc size 0x44 virtual false final false
 bool GetBool(::StringW name) ;

/// @brief Method GetBool addr 0x2b4d384 size 0x44 virtual false final false
 bool GetBool(int32_t id) ;

/// @brief Method SetBool addr 0x2b4d40c size 0x54 virtual false final false
 void SetBool(::StringW name, bool value) ;

/// @brief Method SetBool addr 0x2b4d4b4 size 0x54 virtual false final false
 void SetBool(int32_t id, bool value) ;

/// @brief Method GetInteger addr 0x2b4d55c size 0x44 virtual false final false
 int32_t GetInteger(::StringW name) ;

/// @brief Method GetInteger addr 0x2b4d5e4 size 0x44 virtual false final false
 int32_t GetInteger(int32_t id) ;

/// @brief Method SetInteger addr 0x2b4d66c size 0x54 virtual false final false
 void SetInteger(::StringW name, int32_t value) ;

/// @brief Method SetInteger addr 0x2b4d714 size 0x54 virtual false final false
 void SetInteger(int32_t id, int32_t value) ;

/// @brief Method SetTrigger addr 0x2b4d7bc size 0x44 virtual false final false
 void SetTrigger(::StringW name) ;

/// @brief Method SetTrigger addr 0x2b4d844 size 0x44 virtual false final false
 void SetTrigger(int32_t id) ;

/// @brief Method ResetTrigger addr 0x2b4d8cc size 0x44 virtual false final false
 void ResetTrigger(::StringW name) ;

/// @brief Method ResetTrigger addr 0x2b4d954 size 0x44 virtual false final false
 void ResetTrigger(int32_t id) ;

/// @brief Method IsParameterControlledByCurve addr 0x2b4d9dc size 0x44 virtual false final false
 bool IsParameterControlledByCurve(::StringW name) ;

/// @brief Method IsParameterControlledByCurve addr 0x2b4da64 size 0x44 virtual false final false
 bool IsParameterControlledByCurve(int32_t id) ;

/// @brief Method get_deltaPosition addr 0x2b4daec size 0x5c virtual false final false
 UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaRotation addr 0x2b4db8c size 0x58 virtual false final false
 UnityEngine::Quaternion get_deltaRotation() ;

/// @brief Method get_velocity addr 0x2b4dc28 size 0x5c virtual false final false
 UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_angularVelocity addr 0x2b4dcc8 size 0x5c virtual false final false
 UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_rootPosition addr 0x2b4dd68 size 0x5c virtual false final false
 UnityEngine::Vector3 get_rootPosition() ;

/// @brief Method set_rootPosition addr 0x2b4de08 size 0x54 virtual false final false
 void set_rootPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_rootRotation addr 0x2b4dea0 size 0x58 virtual false final false
 UnityEngine::Quaternion get_rootRotation() ;

/// @brief Method set_rootRotation addr 0x2b4df3c size 0x54 virtual false final false
 void set_rootRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_applyRootMotion addr 0x2b4dfd4 size 0x3c virtual false final false
 bool get_applyRootMotion() ;

/// @brief Method set_applyRootMotion addr 0x2b4e010 size 0x44 virtual false final false
 void set_applyRootMotion(bool value) ;

/// @brief Method get_linearVelocityBlending addr 0x2b4e054 size 0x3c virtual false final false
 bool get_linearVelocityBlending() ;

/// @brief Method set_linearVelocityBlending addr 0x2b4e090 size 0x44 virtual false final false
 void set_linearVelocityBlending(bool value) ;

/// @brief Method get_animatePhysics addr 0x2b4e0d4 size 0x48 virtual false final false
 bool get_animatePhysics() ;

/// @brief Method set_animatePhysics addr 0x2b4e158 size 0x4c virtual false final false
 void set_animatePhysics(bool value) ;

/// @brief Method get_updateMode addr 0x2b4e11c size 0x3c virtual false final false
 UnityEngine::AnimatorUpdateMode get_updateMode() ;

/// @brief Method set_updateMode addr 0x2b4e1a4 size 0x44 virtual false final false
 void set_updateMode(UnityEngine::AnimatorUpdateMode value) ;

/// @brief Method get_hasTransformHierarchy addr 0x2b4e1e8 size 0x3c virtual false final false
 bool get_hasTransformHierarchy() ;

/// @brief Method get_allowConstantClipSamplingOptimization addr 0x2b4e224 size 0x3c virtual false final false
 bool get_allowConstantClipSamplingOptimization() ;

/// @brief Method set_allowConstantClipSamplingOptimization addr 0x2b4e260 size 0x44 virtual false final false
 void set_allowConstantClipSamplingOptimization(bool value) ;

/// @brief Method get_gravityWeight addr 0x2b4e2a4 size 0x3c virtual false final false
 float_t get_gravityWeight() ;

/// @brief Method get_bodyPosition addr 0x2b4e2e0 size 0x18 virtual false final false
 UnityEngine::Vector3 get_bodyPosition() ;

/// @brief Method set_bodyPosition addr 0x2b4e424 size 0x40 virtual false final false
 void set_bodyPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_bodyPositionInternal addr 0x2b4e3c8 size 0x5c virtual false final false
 UnityEngine::Vector3 get_bodyPositionInternal() ;

/// @brief Method set_bodyPositionInternal addr 0x2b4e464 size 0x54 virtual false final false
 void set_bodyPositionInternal(UnityEngine::Vector3 value) ;

/// @brief Method get_bodyRotation addr 0x2b4e540 size 0x18 virtual false final false
 UnityEngine::Quaternion get_bodyRotation() ;

/// @brief Method set_bodyRotation addr 0x2b4e5b0 size 0x48 virtual false final false
 void set_bodyRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_bodyRotationInternal addr 0x2b4e558 size 0x58 virtual false final false
 UnityEngine::Quaternion get_bodyRotationInternal() ;

/// @brief Method set_bodyRotationInternal addr 0x2b4e5f8 size 0x54 virtual false final false
 void set_bodyRotationInternal(UnityEngine::Quaternion value) ;

/// @brief Method GetIKPosition addr 0x2b4e6d4 size 0x28 virtual false final false
 UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetGoalPosition addr 0x2b4e6fc size 0x64 virtual false final false
 UnityEngine::Vector3 GetGoalPosition(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetIKPosition addr 0x2b4e7b4 size 0x50 virtual false final false
 void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 goalPosition) ;

/// @brief Method SetGoalPosition addr 0x2b4e804 size 0x5c virtual false final false
 void SetGoalPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 goalPosition) ;

/// @brief Method GetIKRotation addr 0x2b4e8b4 size 0x28 virtual false final false
 UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetGoalRotation addr 0x2b4e8dc size 0x60 virtual false final false
 UnityEngine::Quaternion GetGoalRotation(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetIKRotation addr 0x2b4e990 size 0x58 virtual false final false
 void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion goalRotation) ;

/// @brief Method SetGoalRotation addr 0x2b4e9e8 size 0x5c virtual false final false
 void SetGoalRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion goalRotation) ;

/// @brief Method GetIKPositionWeight addr 0x2b4ea98 size 0x48 virtual false final false
 float_t GetIKPositionWeight(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetGoalWeightPosition addr 0x2b4eae0 size 0x44 virtual false final false
 float_t GetGoalWeightPosition(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetIKPositionWeight addr 0x2b4eb24 size 0x58 virtual false final false
 void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float_t value) ;

/// @brief Method SetGoalWeightPosition addr 0x2b4eb7c size 0x54 virtual false final false
 void SetGoalWeightPosition(UnityEngine::AvatarIKGoal goal, float_t value) ;

/// @brief Method GetIKRotationWeight addr 0x2b4ebd0 size 0x48 virtual false final false
 float_t GetIKRotationWeight(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetGoalWeightRotation addr 0x2b4ec18 size 0x44 virtual false final false
 float_t GetGoalWeightRotation(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetIKRotationWeight addr 0x2b4ec5c size 0x58 virtual false final false
 void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float_t value) ;

/// @brief Method SetGoalWeightRotation addr 0x2b4ecb4 size 0x54 virtual false final false
 void SetGoalWeightRotation(UnityEngine::AvatarIKGoal goal, float_t value) ;

/// @brief Method GetIKHintPosition addr 0x2b4ed08 size 0x28 virtual false final false
 UnityEngine::Vector3 GetIKHintPosition(UnityEngine::AvatarIKHint hint) ;

/// @brief Method GetHintPosition addr 0x2b4ed30 size 0x64 virtual false final false
 UnityEngine::Vector3 GetHintPosition(UnityEngine::AvatarIKHint hint) ;

/// @brief Method SetIKHintPosition addr 0x2b4ede8 size 0x50 virtual false final false
 void SetIKHintPosition(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 hintPosition) ;

/// @brief Method SetHintPosition addr 0x2b4ee38 size 0x5c virtual false final false
 void SetHintPosition(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 hintPosition) ;

/// @brief Method GetIKHintPositionWeight addr 0x2b4eee8 size 0x48 virtual false final false
 float_t GetIKHintPositionWeight(UnityEngine::AvatarIKHint hint) ;

/// @brief Method GetHintWeightPosition addr 0x2b4ef30 size 0x44 virtual false final false
 float_t GetHintWeightPosition(UnityEngine::AvatarIKHint hint) ;

/// @brief Method SetIKHintPositionWeight addr 0x2b4ef74 size 0x58 virtual false final false
 void SetIKHintPositionWeight(UnityEngine::AvatarIKHint hint, float_t value) ;

/// @brief Method SetHintWeightPosition addr 0x2b4efcc size 0x54 virtual false final false
 void SetHintWeightPosition(UnityEngine::AvatarIKHint hint, float_t value) ;

/// @brief Method SetLookAtPosition addr 0x2b4f020 size 0x40 virtual false final false
 void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal addr 0x2b4f060 size 0x54 virtual false final false
 void SetLookAtPositionInternal(UnityEngine::Vector3 lookAtPosition) ;

/// @brief Method SetLookAtWeight addr 0x2b4f0f8 size 0x60 virtual false final false
 void SetLookAtWeight(float_t weight) ;

/// @brief Method SetLookAtWeight addr 0x2b4f1d4 size 0x64 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight) ;

/// @brief Method SetLookAtWeight addr 0x2b4f238 size 0x70 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight) ;

/// @brief Method SetLookAtWeight addr 0x2b4f2a8 size 0x74 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight) ;

/// @brief Method SetLookAtWeight addr 0x2b4f31c size 0x80 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight) ;

/// @brief Method SetLookAtWeightInternal addr 0x2b4f158 size 0x7c virtual false final false
 void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight) ;

/// @brief Method SetBoneLocalRotation addr 0x2b4f39c size 0x80 virtual false final false
 void SetBoneLocalRotation(UnityEngine::HumanBodyBones humanBoneId, UnityEngine::Quaternion rotation) ;

/// @brief Method SetBoneLocalRotationInternal addr 0x2b4f41c size 0x5c virtual false final false
 void SetBoneLocalRotationInternal(int32_t humanBoneId, UnityEngine::Quaternion rotation) ;

/// @brief Method GetBehaviour addr 0x2b4f4cc size 0x44 virtual false final false
 UnityEngine::ScriptableObject GetBehaviour(System::Type type) ;

/// @brief Method GetBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetBehaviour() ;

/// @brief Method ConvertStateMachineBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ConvertStateMachineBehaviour(::ArrayW<UnityEngine::ScriptableObject> rawObjects) ;

/// @brief Method GetBehaviours addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetBehaviours() ;

/// @brief Method InternalGetBehaviours addr 0x2b4f510 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::ScriptableObject> InternalGetBehaviours(System::Type type) ;

/// @brief Method GetBehaviours addr 0x2b4f554 size 0xdc virtual false final false
 ::ArrayW<UnityEngine::StateMachineBehaviour> GetBehaviours(int32_t fullPathHash, int32_t layerIndex) ;

/// @brief Method InternalGetBehavioursByKey addr 0x2b4f630 size 0x5c virtual false final false
 ::ArrayW<UnityEngine::ScriptableObject> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, System::Type type) ;

/// @brief Method get_stabilizeFeet addr 0x2b4f68c size 0x3c virtual false final false
 bool get_stabilizeFeet() ;

/// @brief Method set_stabilizeFeet addr 0x2b4f6c8 size 0x44 virtual false final false
 void set_stabilizeFeet(bool value) ;

/// @brief Method get_layerCount addr 0x2b4f70c size 0x3c virtual false final false
 int32_t get_layerCount() ;

/// @brief Method GetLayerName addr 0x2b4f748 size 0x44 virtual false final false
 ::StringW GetLayerName(int32_t layerIndex) ;

/// @brief Method GetLayerIndex addr 0x2b4f78c size 0x44 virtual false final false
 int32_t GetLayerIndex(::StringW layerName) ;

/// @brief Method GetLayerWeight addr 0x2b4f7d0 size 0x44 virtual false final false
 float_t GetLayerWeight(int32_t layerIndex) ;

/// @brief Method SetLayerWeight addr 0x2b4f814 size 0x54 virtual false final false
 void SetLayerWeight(int32_t layerIndex, float_t weight) ;

/// @brief Method GetAnimatorStateInfo addr 0x2b4f868 size 0x5c virtual false final false
 void GetAnimatorStateInfo(int32_t layerIndex, UnityEngine::StateInfoIndex stateInfoIndex, ByRef<UnityEngine::AnimatorStateInfo> info) ;

/// @brief Method GetCurrentAnimatorStateInfo addr 0x2b4f8c4 size 0x80 virtual false final false
 UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo addr 0x2b4f944 size 0x80 virtual false final false
 UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex) ;

/// @brief Method GetAnimatorTransitionInfo addr 0x2b4f9c4 size 0x54 virtual false final false
 void GetAnimatorTransitionInfo(int32_t layerIndex, ByRef<UnityEngine::AnimatorTransitionInfo> info) ;

/// @brief Method GetAnimatorTransitionInfo addr 0x2b4fa18 size 0x70 virtual false final false
 UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex) ;

/// @brief Method GetAnimatorClipInfoCount addr 0x2b4fa88 size 0x54 virtual false final false
 int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current) ;

/// @brief Method GetCurrentAnimatorClipInfoCount addr 0x2b4fadc size 0x48 virtual false final false
 int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex) ;

/// @brief Method GetNextAnimatorClipInfoCount addr 0x2b4fb24 size 0x48 virtual false final false
 int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo addr 0x2b4fb6c size 0x44 virtual false final false
 ::ArrayW<UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo addr 0x2b4fbb0 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo addr 0x2b4fbf4 size 0xa8 virtual false final false
 void GetCurrentAnimatorClipInfo(int32_t layerIndex, System::Collections::Generic::List_1<UnityEngine::AnimatorClipInfo> clips) ;

/// @brief Method GetAnimatorClipInfoInternal addr 0x2b4fc9c size 0x5c virtual false final false
 void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::bs_hook::Il2CppWrapperType clips) ;

/// @brief Method GetNextAnimatorClipInfo addr 0x2b4fcf8 size 0xa8 virtual false final false
 void GetNextAnimatorClipInfo(int32_t layerIndex, System::Collections::Generic::List_1<UnityEngine::AnimatorClipInfo> clips) ;

/// @brief Method IsInTransition addr 0x2b4fda0 size 0x44 virtual false final false
 bool IsInTransition(int32_t layerIndex) ;

/// @brief Method get_parameters addr 0x2b4fde4 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::AnimatorControllerParameter> get_parameters() ;

/// @brief Method get_parameterCount addr 0x2b4fe20 size 0x3c virtual false final false
 int32_t get_parameterCount() ;

/// @brief Method GetParameter addr 0x2b4fe5c size 0x130 virtual false final false
 UnityEngine::AnimatorControllerParameter GetParameter(int32_t index) ;

/// @brief Method get_feetPivotActive addr 0x2b4ff8c size 0x3c virtual false final false
 float_t get_feetPivotActive() ;

/// @brief Method set_feetPivotActive addr 0x2b4ffc8 size 0x4c virtual false final false
 void set_feetPivotActive(float_t value) ;

/// @brief Method get_pivotWeight addr 0x2b50014 size 0x3c virtual false final false
 float_t get_pivotWeight() ;

/// @brief Method get_pivotPosition addr 0x2b50050 size 0x5c virtual false final false
 UnityEngine::Vector3 get_pivotPosition() ;

/// @brief Method MatchTarget addr 0x2b500f0 size 0x9c virtual false final false
 void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch) ;

/// @brief Method MatchTarget addr 0x2b50218 size 0x34 virtual false final false
 void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime) ;

/// @brief Method MatchTarget addr 0x2b5024c size 0x20 virtual false final false
 void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime, float_t targetNormalizedTime) ;

/// @brief Method MatchTarget addr 0x2b5026c size 0x20 virtual false final false
 void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch) ;

/// @brief Method InterruptMatchTarget addr 0x2b5028c size 0x40 virtual false final false
 void InterruptMatchTarget() ;

/// @brief Method InterruptMatchTarget addr 0x2b502cc size 0x44 virtual false final false
 void InterruptMatchTarget(bool completeMatch) ;

/// @brief Method get_isMatchingTarget addr 0x2b50310 size 0x3c virtual false final false
 bool get_isMatchingTarget() ;

/// @brief Method get_speed addr 0x2b5034c size 0x3c virtual false final false
 float_t get_speed() ;

/// @brief Method set_speed addr 0x2b50388 size 0x4c virtual false final false
 void set_speed(float_t value) ;

/// @brief Method ForceStateNormalizedTime addr 0x2b503d4 size 0x54 virtual false final false
 void ForceStateNormalizedTime(float_t normalizedTime) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b5048c size 0x8c virtual false final false
 void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b505d0 size 0x98 virtual false final false
 void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b50668 size 0x9c virtual false final false
 void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b50704 size 0xa8 virtual false final false
 void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b507ac size 0x70 virtual false final false
 void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b5081c size 0x6c virtual false final false
 void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b50888 size 0x60 virtual false final false
 void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime addr 0x2b50554 size 0x7c virtual false final false
 void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime) ;

/// @brief Method WriteDefaultValues addr 0x2b508e8 size 0x3c virtual false final false
 void WriteDefaultValues() ;

/// @brief Method CrossFade addr 0x2b50924 size 0x8 virtual false final false
 void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset) ;

/// @brief Method CrossFade addr 0x2b509d4 size 0x10 virtual false final false
 void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer) ;

/// @brief Method CrossFade addr 0x2b509e4 size 0x14 virtual false final false
 void CrossFade(::StringW stateName, float_t normalizedTransitionDuration) ;

/// @brief Method CrossFade addr 0x2b5092c size 0xa8 virtual false final false
 void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime) ;

/// @brief Method CrossFade addr 0x2b509f8 size 0x7c virtual false final false
 void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime) ;

/// @brief Method CrossFade addr 0x2b50a74 size 0x70 virtual false final false
 void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset) ;

/// @brief Method CrossFade addr 0x2b50ae4 size 0x70 virtual false final false
 void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer) ;

/// @brief Method CrossFade addr 0x2b50b54 size 0x64 virtual false final false
 void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration) ;

/// @brief Method PlayInFixedTime addr 0x2b50bb8 size 0xc virtual false final false
 void PlayInFixedTime(::StringW stateName, int32_t layer) ;

/// @brief Method PlayInFixedTime addr 0x2b50c54 size 0x10 virtual false final false
 void PlayInFixedTime(::StringW stateName) ;

/// @brief Method PlayInFixedTime addr 0x2b50bc4 size 0x90 virtual false final false
 void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime) ;

/// @brief Method PlayInFixedTime addr 0x2b50c64 size 0x64 virtual false final false
 void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime) ;

/// @brief Method PlayInFixedTime addr 0x2b50cc8 size 0x5c virtual false final false
 void PlayInFixedTime(int32_t stateNameHash, int32_t layer) ;

/// @brief Method PlayInFixedTime addr 0x2b50d24 size 0x50 virtual false final false
 void PlayInFixedTime(int32_t stateNameHash) ;

/// @brief Method Play addr 0x2b50d74 size 0xc virtual false final false
 void Play(::StringW stateName, int32_t layer) ;

/// @brief Method Play addr 0x2b50e10 size 0x10 virtual false final false
 void Play(::StringW stateName) ;

/// @brief Method Play addr 0x2b50d80 size 0x90 virtual false final false
 void Play(::StringW stateName, int32_t layer, float_t normalizedTime) ;

/// @brief Method Play addr 0x2b50428 size 0x64 virtual false final false
 void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime) ;

/// @brief Method Play addr 0x2b50e20 size 0x5c virtual false final false
 void Play(int32_t stateNameHash, int32_t layer) ;

/// @brief Method Play addr 0x2b50e7c size 0x50 virtual false final false
 void Play(int32_t stateNameHash) ;

/// @brief Method SetTarget addr 0x2b50ecc size 0x54 virtual false final false
 void SetTarget(UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime) ;

/// @brief Method get_targetPosition addr 0x2b50f20 size 0x5c virtual false final false
 UnityEngine::Vector3 get_targetPosition() ;

/// @brief Method get_targetRotation addr 0x2b50fc0 size 0x58 virtual false final false
 UnityEngine::Quaternion get_targetRotation() ;

/// @brief Method IsControlled addr 0x2b5105c size 0x8 virtual false final false
 bool IsControlled(UnityEngine::Transform transform) ;

/// @brief Method IsBoneTransform addr 0x2b51064 size 0x44 virtual false final false
 bool IsBoneTransform(UnityEngine::Transform transform) ;

/// @brief Method get_avatarRoot addr 0x2b510a8 size 0x3c virtual false final false
 UnityEngine::Transform get_avatarRoot() ;

/// @brief Method GetBoneTransform addr 0x2b510e4 size 0x108 virtual false final false
 UnityEngine::Transform GetBoneTransform(UnityEngine::HumanBodyBones humanBoneId) ;

/// @brief Method GetBoneTransformInternal addr 0x2b511ec size 0x44 virtual false final false
 UnityEngine::Transform GetBoneTransformInternal(int32_t humanBoneId) ;

/// @brief Method get_cullingMode addr 0x2b51230 size 0x3c virtual false final false
 UnityEngine::AnimatorCullingMode get_cullingMode() ;

/// @brief Method set_cullingMode addr 0x2b5126c size 0x44 virtual false final false
 void set_cullingMode(UnityEngine::AnimatorCullingMode value) ;

/// @brief Method StartPlayback addr 0x2b512b0 size 0x3c virtual false final false
 void StartPlayback() ;

/// @brief Method StopPlayback addr 0x2b512ec size 0x3c virtual false final false
 void StopPlayback() ;

/// @brief Method get_playbackTime addr 0x2b51328 size 0x3c virtual false final false
 float_t get_playbackTime() ;

/// @brief Method set_playbackTime addr 0x2b51364 size 0x4c virtual false final false
 void set_playbackTime(float_t value) ;

/// @brief Method StartRecording addr 0x2b513b0 size 0x44 virtual false final false
 void StartRecording(int32_t frameCount) ;

/// @brief Method StopRecording addr 0x2b513f4 size 0x3c virtual false final false
 void StopRecording() ;

/// @brief Method get_recorderStartTime addr 0x2b51430 size 0x3c virtual false final false
 float_t get_recorderStartTime() ;

/// @brief Method set_recorderStartTime addr 0x2b514a8 size 0x4 virtual false final false
 void set_recorderStartTime(float_t value) ;

/// @brief Method GetRecorderStartTime addr 0x2b5146c size 0x3c virtual false final false
 float_t GetRecorderStartTime() ;

/// @brief Method get_recorderStopTime addr 0x2b514ac size 0x3c virtual false final false
 float_t get_recorderStopTime() ;

/// @brief Method set_recorderStopTime addr 0x2b51524 size 0x4 virtual false final false
 void set_recorderStopTime(float_t value) ;

/// @brief Method GetRecorderStopTime addr 0x2b514e8 size 0x3c virtual false final false
 float_t GetRecorderStopTime() ;

/// @brief Method get_recorderMode addr 0x2b51528 size 0x3c virtual false final false
 UnityEngine::AnimatorRecorderMode get_recorderMode() ;

/// @brief Method get_runtimeAnimatorController addr 0x2b51564 size 0x3c virtual false final false
 UnityEngine::RuntimeAnimatorController get_runtimeAnimatorController() ;

/// @brief Method set_runtimeAnimatorController addr 0x2b515a0 size 0x44 virtual false final false
 void set_runtimeAnimatorController(UnityEngine::RuntimeAnimatorController value) ;

/// @brief Method get_hasBoundPlayables addr 0x2b515e4 size 0x3c virtual false final false
 bool get_hasBoundPlayables() ;

/// @brief Method ClearInternalControllerPlayable addr 0x2b51620 size 0x3c virtual false final false
 void ClearInternalControllerPlayable() ;

/// @brief Method HasState addr 0x2b5165c size 0x54 virtual false final false
 bool HasState(int32_t layerIndex, int32_t stateID) ;

/// @brief Method StringToHash addr 0x2b50518 size 0x3c virtual false final false
static int32_t StringToHash(::StringW name) ;

/// @brief Method get_avatar addr 0x2b516b0 size 0x3c virtual false final false
 UnityEngine::Avatar get_avatar() ;

/// @brief Method set_avatar addr 0x2b516ec size 0x44 virtual false final false
 void set_avatar(UnityEngine::Avatar value) ;

/// @brief Method GetStats addr 0x2b51730 size 0x3c virtual false final false
 ::StringW GetStats() ;

/// @brief Method get_playableGraph addr 0x2b5176c size 0x54 virtual false final false
 UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method GetCurrentGraph addr 0x2b517c0 size 0x44 virtual false final false
 void GetCurrentGraph(ByRef<UnityEngine::Playables::PlayableGraph> graph) ;

/// @brief Method CheckIfInIKPass addr 0x2b4e2f8 size 0xd0 virtual false final false
 void CheckIfInIKPass() ;

/// @brief Method IsInIKPass addr 0x2b51840 size 0x3c virtual false final false
 bool IsInIKPass() ;

/// @brief Method SetFloatString addr 0x2b4d050 size 0x54 virtual false final false
 void SetFloatString(::StringW name, float_t value) ;

/// @brief Method SetFloatID addr 0x2b4d1d0 size 0x54 virtual false final false
 void SetFloatID(int32_t id, float_t value) ;

/// @brief Method GetFloatString addr 0x2b4cf30 size 0x44 virtual false final false
 float_t GetFloatString(::StringW name) ;

/// @brief Method GetFloatID addr 0x2b4cfb8 size 0x44 virtual false final false
 float_t GetFloatID(int32_t id) ;

/// @brief Method SetBoolString addr 0x2b4d460 size 0x54 virtual false final false
 void SetBoolString(::StringW name, bool value) ;

/// @brief Method SetBoolID addr 0x2b4d508 size 0x54 virtual false final false
 void SetBoolID(int32_t id, bool value) ;

/// @brief Method GetBoolString addr 0x2b4d340 size 0x44 virtual false final false
 bool GetBoolString(::StringW name) ;

/// @brief Method GetBoolID addr 0x2b4d3c8 size 0x44 virtual false final false
 bool GetBoolID(int32_t id) ;

/// @brief Method SetIntegerString addr 0x2b4d6c0 size 0x54 virtual false final false
 void SetIntegerString(::StringW name, int32_t value) ;

/// @brief Method SetIntegerID addr 0x2b4d768 size 0x54 virtual false final false
 void SetIntegerID(int32_t id, int32_t value) ;

/// @brief Method GetIntegerString addr 0x2b4d5a0 size 0x44 virtual false final false
 int32_t GetIntegerString(::StringW name) ;

/// @brief Method GetIntegerID addr 0x2b4d628 size 0x44 virtual false final false
 int32_t GetIntegerID(int32_t id) ;

/// @brief Method SetTriggerString addr 0x2b4d800 size 0x44 virtual false final false
 void SetTriggerString(::StringW name) ;

/// @brief Method SetTriggerID addr 0x2b4d888 size 0x44 virtual false final false
 void SetTriggerID(int32_t id) ;

/// @brief Method ResetTriggerString addr 0x2b4d910 size 0x44 virtual false final false
 void ResetTriggerString(::StringW name) ;

/// @brief Method ResetTriggerID addr 0x2b4d998 size 0x44 virtual false final false
 void ResetTriggerID(int32_t id) ;

/// @brief Method IsParameterControlledByCurveString addr 0x2b4da20 size 0x44 virtual false final false
 bool IsParameterControlledByCurveString(::StringW name) ;

/// @brief Method IsParameterControlledByCurveID addr 0x2b4daa8 size 0x44 virtual false final false
 bool IsParameterControlledByCurveID(int32_t id) ;

/// @brief Method SetFloatStringDamp addr 0x2b4d110 size 0x6c virtual false final false
 void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime) ;

/// @brief Method SetFloatIDDamp addr 0x2b4d290 size 0x6c virtual false final false
 void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime) ;

/// @brief Method get_layersAffectMassCenter addr 0x2b5187c size 0x3c virtual false final false
 bool get_layersAffectMassCenter() ;

/// @brief Method set_layersAffectMassCenter addr 0x2b518b8 size 0x44 virtual false final false
 void set_layersAffectMassCenter(bool value) ;

/// @brief Method get_leftFeetBottomHeight addr 0x2b518fc size 0x3c virtual false final false
 float_t get_leftFeetBottomHeight() ;

/// @brief Method get_rightFeetBottomHeight addr 0x2b51938 size 0x3c virtual false final false
 float_t get_rightFeetBottomHeight() ;

/// @brief Method get_supportsOnAnimatorMove addr 0x2b51974 size 0x3c virtual false final false
 bool get_supportsOnAnimatorMove() ;

/// @brief Method OnUpdateModeChanged addr 0x2b519b0 size 0x3c virtual false final false
 void OnUpdateModeChanged() ;

/// @brief Method OnCullingModeChanged addr 0x2b519ec size 0x3c virtual false final false
 void OnCullingModeChanged() ;

/// @brief Method WriteDefaultPose addr 0x2b51a28 size 0x3c virtual false final false
 void WriteDefaultPose() ;

/// @brief Method Update addr 0x2b51a64 size 0x4c virtual false final false
 void Update(float_t deltaTime) ;

/// @brief Method Rebind addr 0x2b51ab0 size 0x40 virtual false final false
 void Rebind() ;

/// @brief Method Rebind addr 0x2b51af0 size 0x44 virtual false final false
 void Rebind(bool writeDefaultValues) ;

/// @brief Method ApplyBuiltinRootMotion addr 0x2b51b34 size 0x3c virtual false final false
 void ApplyBuiltinRootMotion() ;

/// @brief Method EvaluateController addr 0x2b51b70 size 0x40 virtual false final false
 void EvaluateController() ;

/// @brief Method EvaluateController addr 0x2b51bb0 size 0x4c virtual false final false
 void EvaluateController(float_t deltaTime) ;

/// @brief Method GetCurrentStateName addr 0x2b51bfc size 0x48 virtual false final false
 ::StringW GetCurrentStateName(int32_t layerIndex) ;

/// @brief Method GetNextStateName addr 0x2b51c98 size 0x48 virtual false final false
 ::StringW GetNextStateName(int32_t layerIndex) ;

/// @brief Method GetAnimatorStateName addr 0x2b51c44 size 0x54 virtual false final false
 ::StringW GetAnimatorStateName(int32_t layerIndex, bool current) ;

/// @brief Method ResolveHash addr 0x2b51ce0 size 0x44 virtual false final false
 ::StringW ResolveHash(int32_t hash) ;

/// @brief Method get_logWarnings addr 0x2b51804 size 0x3c virtual false final false
 bool get_logWarnings() ;

/// @brief Method set_logWarnings addr 0x2b51d24 size 0x44 virtual false final false
 void set_logWarnings(bool value) ;

/// @brief Method get_fireEvents addr 0x2b51d68 size 0x3c virtual false final false
 bool get_fireEvents() ;

/// @brief Method set_fireEvents addr 0x2b51da4 size 0x44 virtual false final false
 void set_fireEvents(bool value) ;

/// @brief Method get_keepAnimatorControllerStateOnDisable addr 0x2b51de8 size 0x3c virtual false final false
 bool get_keepAnimatorControllerStateOnDisable() ;

/// @brief Method set_keepAnimatorControllerStateOnDisable addr 0x2b51e60 size 0x44 virtual false final false
 void set_keepAnimatorControllerStateOnDisable(bool value) ;

/// @brief Method get_keepAnimatorStateOnDisable addr 0x2b51e24 size 0x3c virtual false final false
 bool get_keepAnimatorStateOnDisable() ;

/// @brief Method set_keepAnimatorStateOnDisable addr 0x2b51ea4 size 0x44 virtual false final false
 void set_keepAnimatorStateOnDisable(bool value) ;

/// @brief Method GetVector addr 0x2b51ee8 size 0x44 virtual false final false
 UnityEngine::Vector3 GetVector(::StringW name) ;

/// @brief Method GetVector addr 0x2b51f2c size 0x44 virtual false final false
 UnityEngine::Vector3 GetVector(int32_t id) ;

/// @brief Method SetVector addr 0x2b51f70 size 0x4 virtual false final false
 void SetVector(::StringW name, UnityEngine::Vector3 value) ;

/// @brief Method SetVector addr 0x2b51f74 size 0x4 virtual false final false
 void SetVector(int32_t id, UnityEngine::Vector3 value) ;

/// @brief Method GetQuaternion addr 0x2b51f78 size 0x44 virtual false final false
 UnityEngine::Quaternion GetQuaternion(::StringW name) ;

/// @brief Method GetQuaternion addr 0x2b51fbc size 0x44 virtual false final false
 UnityEngine::Quaternion GetQuaternion(int32_t id) ;

/// @brief Method SetQuaternion addr 0x2b52000 size 0x4 virtual false final false
 void SetQuaternion(::StringW name, UnityEngine::Quaternion value) ;

/// @brief Method SetQuaternion addr 0x2b52004 size 0x4 virtual false final false
 void SetQuaternion(int32_t id, UnityEngine::Quaternion value) ;

// Ctor Parameters []
explicit Animator() ;

/// @brief Method .ctor addr 0x2b52008 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_deltaPosition_Injected addr 0x2b4db48 size 0x44 virtual false final false
 void get_deltaPosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_deltaRotation_Injected addr 0x2b4dbe4 size 0x44 virtual false final false
 void get_deltaRotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method get_velocity_Injected addr 0x2b4dc84 size 0x44 virtual false final false
 void get_velocity_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_angularVelocity_Injected addr 0x2b4dd24 size 0x44 virtual false final false
 void get_angularVelocity_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_rootPosition_Injected addr 0x2b4ddc4 size 0x44 virtual false final false
 void get_rootPosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_rootPosition_Injected addr 0x2b4de5c size 0x44 virtual false final false
 void set_rootPosition_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_rootRotation_Injected addr 0x2b4def8 size 0x44 virtual false final false
 void get_rootRotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method set_rootRotation_Injected addr 0x2b4df90 size 0x44 virtual false final false
 void set_rootRotation_Injected(ByRef<UnityEngine::Quaternion> value) ;

/// @brief Method get_bodyPositionInternal_Injected addr 0x2b4e4b8 size 0x44 virtual false final false
 void get_bodyPositionInternal_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_bodyPositionInternal_Injected addr 0x2b4e4fc size 0x44 virtual false final false
 void set_bodyPositionInternal_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_bodyRotationInternal_Injected addr 0x2b4e64c size 0x44 virtual false final false
 void get_bodyRotationInternal_Injected(ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method set_bodyRotationInternal_Injected addr 0x2b4e690 size 0x44 virtual false final false
 void set_bodyRotationInternal_Injected(ByRef<UnityEngine::Quaternion> value) ;

/// @brief Method GetGoalPosition_Injected addr 0x2b4e760 size 0x54 virtual false final false
 void GetGoalPosition_Injected(UnityEngine::AvatarIKGoal goal, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method SetGoalPosition_Injected addr 0x2b4e860 size 0x54 virtual false final false
 void SetGoalPosition_Injected(UnityEngine::AvatarIKGoal goal, ByRef<UnityEngine::Vector3> goalPosition) ;

/// @brief Method GetGoalRotation_Injected addr 0x2b4e93c size 0x54 virtual false final false
 void GetGoalRotation_Injected(UnityEngine::AvatarIKGoal goal, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method SetGoalRotation_Injected addr 0x2b4ea44 size 0x54 virtual false final false
 void SetGoalRotation_Injected(UnityEngine::AvatarIKGoal goal, ByRef<UnityEngine::Quaternion> goalRotation) ;

/// @brief Method GetHintPosition_Injected addr 0x2b4ed94 size 0x54 virtual false final false
 void GetHintPosition_Injected(UnityEngine::AvatarIKHint hint, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method SetHintPosition_Injected addr 0x2b4ee94 size 0x54 virtual false final false
 void SetHintPosition_Injected(UnityEngine::AvatarIKHint hint, ByRef<UnityEngine::Vector3> hintPosition) ;

/// @brief Method SetLookAtPositionInternal_Injected addr 0x2b4f0b4 size 0x44 virtual false final false
 void SetLookAtPositionInternal_Injected(ByRef<UnityEngine::Vector3> lookAtPosition) ;

/// @brief Method SetBoneLocalRotationInternal_Injected addr 0x2b4f478 size 0x54 virtual false final false
 void SetBoneLocalRotationInternal_Injected(int32_t humanBoneId, ByRef<UnityEngine::Quaternion> rotation) ;

/// @brief Method get_pivotPosition_Injected addr 0x2b500ac size 0x44 virtual false final false
 void get_pivotPosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method MatchTarget_Injected addr 0x2b5018c size 0x8c virtual false final false
 void MatchTarget_Injected(ByRef<UnityEngine::Vector3> matchPosition, ByRef<UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart, ByRef<UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch) ;

/// @brief Method get_targetPosition_Injected addr 0x2b50f7c size 0x44 virtual false final false
 void get_targetPosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_targetRotation_Injected addr 0x2b51018 size 0x44 virtual false final false
 void get_targetRotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animator, "UnityEngine", "Animator");
