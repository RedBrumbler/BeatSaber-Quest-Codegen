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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioPlayerBase
  class AudioPlayerBase;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SongPreviewPlayerPauseOnInputFocusLost
  class SongPreviewPlayerPauseOnInputFocusLost : public UnityEngine::MonoBehaviour {
    public:
    // private AudioPlayerBase _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioPlayerBase* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPlayerBase*) == 0x8);
    // [InjectAttribute] Offset: 0xE1527C
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // Creating value type constructor for type: SongPreviewPlayerPauseOnInputFocusLost
    SongPreviewPlayerPauseOnInputFocusLost(GlobalNamespace::AudioPlayerBase* songPreviewPlayer_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}) noexcept : songPreviewPlayer{songPreviewPlayer_}, vrPlatformHelper{vrPlatformHelper_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1157E28
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x115808C
    void OnDestroy();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x1158038
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x1158228
    void HandleInputFocusReleased();
    // public System.Void .ctor()
    // Offset: 0x115827C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPreviewPlayerPauseOnInputFocusLost* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPreviewPlayerPauseOnInputFocusLost*, creationType>()));
    }
  }; // SongPreviewPlayerPauseOnInputFocusLost
  #pragma pack(pop)
  static check_size<sizeof(SongPreviewPlayerPauseOnInputFocusLost), 32 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_SongPreviewPlayerPauseOnInputFocusLostSizeCheck;
  static_assert(sizeof(SongPreviewPlayerPauseOnInputFocusLost) == 0x28);
  // Writing MetadataGetter for method: SongPreviewPlayerPauseOnInputFocusLost::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SongPreviewPlayerPauseOnInputFocusLost::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured
  // Il2CppName: HandleInputFocusCaptured
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased
  // Il2CppName: HandleInputFocusReleased
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SongPreviewPlayerPauseOnInputFocusLost::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SongPreviewPlayerPauseOnInputFocusLost::*)()>(&SongPreviewPlayerPauseOnInputFocusLost::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SongPreviewPlayerPauseOnInputFocusLost*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*, "", "SongPreviewPlayerPauseOnInputFocusLost");
