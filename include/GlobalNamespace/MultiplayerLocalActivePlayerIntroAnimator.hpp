// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* introPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerIntroAnimator
    MultiplayerLocalActivePlayerIntroAnimator(UnityEngine::Playables::PlayableDirector* introPlayableDirector_ = {}) noexcept : introPlayableDirector{introPlayableDirector_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetBeforeIntroValues()
    // Offset: 0x101D0B8
    void SetBeforeIntroValues();
    // public System.Void SetAfterIntroValues()
    // Offset: 0x101EA04
    void SetAfterIntroValues();
    // public System.Void .ctor()
    // Offset: 0x102DCB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerIntroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerIntroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerIntroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerIntroAnimator), 24 + sizeof(UnityEngine::Playables::PlayableDirector*)> __GlobalNamespace_MultiplayerLocalActivePlayerIntroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerIntroAnimator) == 0x20);
  // Writing MetadataGetter for method: MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues
  // Il2CppName: SetBeforeIntroValues
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerLocalActivePlayerIntroAnimator::*)()>(&MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerLocalActivePlayerIntroAnimator*), "SetBeforeIntroValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues
  // Il2CppName: SetAfterIntroValues
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerLocalActivePlayerIntroAnimator::*)()>(&MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerLocalActivePlayerIntroAnimator*), "SetAfterIntroValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerLocalActivePlayerIntroAnimator::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerLocalActivePlayerIntroAnimator::*)()>(&MultiplayerLocalActivePlayerIntroAnimator::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerLocalActivePlayerIntroAnimator*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerLocalActivePlayerIntroAnimator::*)()>(&MultiplayerLocalActivePlayerIntroAnimator::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerLocalActivePlayerIntroAnimator*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
