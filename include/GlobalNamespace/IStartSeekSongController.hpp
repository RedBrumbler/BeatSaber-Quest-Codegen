// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IStartSeekSongController
  class IStartSeekSongController {
    public:
    // Creating value type constructor for type: IStartSeekSongController
    IStartSeekSongController() noexcept {}
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0xFFFFFFFF
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0xFFFFFFFF
    void StartSong(float offsetTime);
    // public System.Void SeekTo(System.Single songTime)
    // Offset: 0xFFFFFFFF
    void SeekTo(float songTime);
  }; // IStartSeekSongController
  #pragma pack(pop)
  // Writing MetadataGetter for method: IStartSeekSongController::get_waitUntilIsReadyToStartTheSong
  // Il2CppName: get_waitUntilIsReadyToStartTheSong
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::WaitUntil* (IStartSeekSongController::*)()>(&IStartSeekSongController::get_waitUntilIsReadyToStartTheSong)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IStartSeekSongController*), "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IStartSeekSongController::StartSong
  // Il2CppName: StartSong
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IStartSeekSongController::*)(float)>(&IStartSeekSongController::StartSong)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IStartSeekSongController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: IStartSeekSongController::SeekTo
  // Il2CppName: SeekTo
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IStartSeekSongController::*)(float)>(&IStartSeekSongController::SeekTo)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IStartSeekSongController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IStartSeekSongController*, "", "IStartSeekSongController");
