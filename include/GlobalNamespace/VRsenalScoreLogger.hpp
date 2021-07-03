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
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VRsenalScoreLogger
  class VRsenalScoreLogger : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRsenalScoreLogger::$Start$d__3
    class $Start$d__3;
    // [InjectAttribute] Offset: 0xE13D38
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE13D48
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [InjectAttribute] Offset: 0xE13D58
    // private ILevelEndActions _levelEndActions
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* levelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // Creating value type constructor for type: VRsenalScoreLogger
    VRsenalScoreLogger(GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::ILevelEndActions* levelEndActions_ = {}) noexcept : scoreController{scoreController_}, difficultyBeatmap{difficultyBeatmap_}, levelEndActions{levelEndActions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1DAF9BC
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1DAFA58
    void OnDestroy();
    // private System.Void HandleLevelFinishedEvent()
    // Offset: 0x1DAFB50
    void HandleLevelFinishedEvent();
    // private System.Void LogScore()
    // Offset: 0x1DAFB54
    void LogScore();
    // public System.Void .ctor()
    // Offset: 0x1DAFC7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRsenalScoreLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRsenalScoreLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRsenalScoreLogger*, creationType>()));
    }
  }; // VRsenalScoreLogger
  #pragma pack(pop)
  static check_size<sizeof(VRsenalScoreLogger), 40 + sizeof(GlobalNamespace::ILevelEndActions*)> __GlobalNamespace_VRsenalScoreLoggerSizeCheck;
  static_assert(sizeof(VRsenalScoreLogger) == 0x30);
  // Writing MetadataGetter for method: VRsenalScoreLogger::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRsenalScoreLogger::OnDestroy
  // Il2CppName: OnDestroy
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::OnDestroy)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRsenalScoreLogger::HandleLevelFinishedEvent
  // Il2CppName: HandleLevelFinishedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::HandleLevelFinishedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), "HandleLevelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRsenalScoreLogger::LogScore
  // Il2CppName: LogScore
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::LogScore)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), "LogScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VRsenalScoreLogger::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRsenalScoreLogger::*)()>(&VRsenalScoreLogger::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VRsenalScoreLogger*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalScoreLogger*, "", "VRsenalScoreLogger");
