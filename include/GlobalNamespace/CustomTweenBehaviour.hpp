// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomTweenBehaviour
  class CustomTweenBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour*, "", "CustomTweenBehaviour");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: CustomTweenBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomTweenBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CustomTweenBehaviour::$$c
    class $$c;
    public:
    // [NullAllowed] Offset: 0x112F180
    // public UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public System.Boolean startLocationCurrentPosition
    // Size: 0x1
    // Offset: 0x18
    bool startLocationCurrentPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: startLocationCurrentPosition and: startLocalPos
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x112F1B8
    // public UnityEngine.Vector3 startLocalPos
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 startLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endLocalPos
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 endLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public EaseType easeType
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // public System.Boolean endXRelativeToSelfRotation
    // Size: 0x1
    // Offset: 0x38
    bool endXRelativeToSelfRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endXRelativeToSelfRotation and: elementDelay
    char __padding5[0x3] = {};
    // public System.Single elementDelay
    // Size: 0x4
    // Offset: 0x3C
    float elementDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x112F25C
    // public System.Boolean _lockX
    // Size: 0x1
    // Offset: 0x40
    bool lockX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _lockY
    // Size: 0x1
    // Offset: 0x41
    bool lockY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _lockZ
    // Size: 0x1
    // Offset: 0x42
    bool lockZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _randomizeOrder
    // Size: 0x1
    // Offset: 0x43
    bool randomizeOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single _randomizedMinDurationMultiplier
    // Size: 0x4
    // Offset: 0x44
    float randomizedMinDurationMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x48
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _perItemDuration
    // Size: 0x4
    // Offset: 0x4C
    float perItemDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] _originalLocalPos
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> originalLocalPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x58
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: randomizedOrder
    char __padding15[0x7] = {};
    // private System.Int32[] _randomizedOrder
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<int> randomizedOrder;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Single[] _randomizedDuration
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<float> randomizedDuration;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform[] _transforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__transforms();
    // Get instance field reference: public System.Boolean startLocationCurrentPosition
    [[deprecated("Use field access instead!")]] bool& dyn_startLocationCurrentPosition();
    // Get instance field reference: public UnityEngine.Vector3 startLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startLocalPos();
    // Get instance field reference: public UnityEngine.Vector3 endLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_endLocalPos();
    // Get instance field reference: public EaseType easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn_easeType();
    // Get instance field reference: public System.Boolean endXRelativeToSelfRotation
    [[deprecated("Use field access instead!")]] bool& dyn_endXRelativeToSelfRotation();
    // Get instance field reference: public System.Single elementDelay
    [[deprecated("Use field access instead!")]] float& dyn_elementDelay();
    // Get instance field reference: public System.Boolean _lockX
    [[deprecated("Use field access instead!")]] bool& dyn__lockX();
    // Get instance field reference: public System.Boolean _lockY
    [[deprecated("Use field access instead!")]] bool& dyn__lockY();
    // Get instance field reference: public System.Boolean _lockZ
    [[deprecated("Use field access instead!")]] bool& dyn__lockZ();
    // Get instance field reference: public System.Boolean _randomizeOrder
    [[deprecated("Use field access instead!")]] bool& dyn__randomizeOrder();
    // Get instance field reference: public System.Single _randomizedMinDurationMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__randomizedMinDurationMultiplier();
    // Get instance field reference: private System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: private System.Single _perItemDuration
    [[deprecated("Use field access instead!")]] float& dyn__perItemDuration();
    // Get instance field reference: private UnityEngine.Vector3[] _originalLocalPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__originalLocalPos();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private System.Int32[] _randomizedOrder
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__randomizedOrder();
    // Get instance field reference: private System.Single[] _randomizedDuration
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__randomizedDuration();
    // public System.Void .ctor()
    // Offset: 0x1443648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTweenBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomTweenBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTweenBehaviour*, creationType>()));
    }
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1442CE0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1442E24
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1443350
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x144346C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
  }; // CustomTweenBehaviour
  #pragma pack(pop)
  static check_size<sizeof(CustomTweenBehaviour), 104 + sizeof(::ArrayW<float>)> __GlobalNamespace_CustomTweenBehaviourSizeCheck;
  static_assert(sizeof(CustomTweenBehaviour) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(&GlobalNamespace::CustomTweenBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::CustomTweenBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(&GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
