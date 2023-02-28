// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SongController
  class SongController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongController*, "", "SongController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SongController
  // [TokenAttribute] Offset: FFFFFFFF
  class SongController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Action songDidFinishEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* songDidFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action songDidFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_songDidFinishEvent();
    // public System.Void add_songDidFinishEvent(System.Action value)
    // Offset: 0x141C938
    void add_songDidFinishEvent(::System::Action* value);
    // public System.Void remove_songDidFinishEvent(System.Action value)
    // Offset: 0x141C9DC
    void remove_songDidFinishEvent(::System::Action* value);
    // protected System.Void .ctor()
    // Offset: 0x141CA94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongController*, creationType>()));
    }
    // public System.Void SendSongDidFinishEvent()
    // Offset: 0x141CA80
    void SendSongDidFinishEvent();
    // public System.Void StopSong()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StopSong();
    // public System.Void PauseSong()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PauseSong();
    // public System.Void ResumeSong()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResumeSong();
  }; // SongController
  #pragma pack(pop)
  static check_size<sizeof(SongController), 24 + sizeof(::System::Action*)> __GlobalNamespace_SongControllerSizeCheck;
  static_assert(sizeof(SongController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongController::add_songDidFinishEvent
// Il2CppName: add_songDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)(::System::Action*)>(&GlobalNamespace::SongController::add_songDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "add_songDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongController::remove_songDidFinishEvent
// Il2CppName: remove_songDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)(::System::Action*)>(&GlobalNamespace::SongController::remove_songDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "remove_songDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongController::SendSongDidFinishEvent
// Il2CppName: SendSongDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)()>(&GlobalNamespace::SongController::SendSongDidFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "SendSongDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)()>(&GlobalNamespace::SongController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongController::PauseSong
// Il2CppName: PauseSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)()>(&GlobalNamespace::SongController::PauseSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "PauseSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongController::ResumeSong
// Il2CppName: ResumeSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongController::*)()>(&GlobalNamespace::SongController::ResumeSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongController*), "ResumeSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
