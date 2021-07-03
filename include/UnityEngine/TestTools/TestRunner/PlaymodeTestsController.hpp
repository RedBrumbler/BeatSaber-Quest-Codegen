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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: TestStartedEvent
  class TestStartedEvent;
  // Forward declaring type: TestFinishedEvent
  class TestFinishedEvent;
  // Forward declaring type: RunStartedEvent
  class RunStartedEvent;
  // Forward declaring type: RunFinishedEvent
  class RunFinishedEvent;
  // Forward declaring type: PlaymodeTestsControllerSettings
  class PlaymodeTestsControllerSettings;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestAssemblyRunner
  class UnityTestAssemblyRunner;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
  // [AddComponentMenu] Offset: E3DA88
  class PlaymodeTestsController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Start$d__12
    class $Start$d__12;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$TestRunnerCoroutine$d__15
    class $TestRunnerCoroutine$d__15;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c
    class $$c;
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$Run$d__16
    class $Run$d__16;
    // private System.Collections.IEnumerator m_TestSteps
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IEnumerator* m_TestSteps;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_AssembliesWithTests
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesWithTests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // UnityEngine.TestTools.TestRunner.TestStartedEvent testStartedEvent
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::TestStartedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.TestFinishedEvent testFinishedEvent
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::TestFinishedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.RunStartedEvent runStartedEvent
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestTools::TestRunner::RunStartedEvent* runStartedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::RunStartedEvent*) == 0x8);
    // UnityEngine.TestTools.TestRunner.RunFinishedEvent runFinishedEvent
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::TestTools::TestRunner::RunFinishedEvent* runFinishedEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::RunFinishedEvent*) == 0x8);
    // public UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings settings
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings* settings;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*) == 0x8);
    // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner m_Runner
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner* m_Runner;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*) == 0x8);
    // Creating value type constructor for type: PlaymodeTestsController
    PlaymodeTestsController(System::Collections::IEnumerator* m_TestSteps_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_AssembliesWithTests_ = {}, UnityEngine::TestTools::TestRunner::TestStartedEvent* testStartedEvent_ = {}, UnityEngine::TestTools::TestRunner::TestFinishedEvent* testFinishedEvent_ = {}, UnityEngine::TestTools::TestRunner::RunStartedEvent* runStartedEvent_ = {}, UnityEngine::TestTools::TestRunner::RunFinishedEvent* runFinishedEvent_ = {}, UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings* settings_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner* m_Runner_ = {}) noexcept : m_TestSteps{m_TestSteps_}, m_AssembliesWithTests{m_AssembliesWithTests_}, testStartedEvent{testStartedEvent_}, testFinishedEvent{testFinishedEvent_}, runStartedEvent{runStartedEvent_}, runFinishedEvent{runFinishedEvent_}, settings{settings_}, m_Runner{m_Runner_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static System.String kPlaymodeTestControllerName
    static constexpr const char* kPlaymodeTestControllerName = "Code-based tests runner";
    // Get static field: static System.String kPlaymodeTestControllerName
    static ::Il2CppString* _get_kPlaymodeTestControllerName();
    // Set static field: static System.String kPlaymodeTestControllerName
    static void _set_kPlaymodeTestControllerName(::Il2CppString* value);
    // public System.Collections.Generic.List`1<System.String> get_AssembliesWithTests()
    // Offset: 0x14BDE40
    System::Collections::Generic::List_1<::Il2CppString*>* get_AssembliesWithTests();
    // public System.Void set_AssembliesWithTests(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x14BDE48
    void set_AssembliesWithTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public System.Collections.IEnumerator Start()
    // Offset: 0x14BDE50
    System::Collections::IEnumerator* Start();
    // static System.Boolean IsControllerOnScene()
    // Offset: 0x14BDEEC
    static bool IsControllerOnScene();
    // static UnityEngine.TestTools.TestRunner.PlaymodeTestsController GetController()
    // Offset: 0x14BDF70
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsController* GetController();
    // public System.Collections.IEnumerator TestRunnerCoroutine()
    // Offset: 0x14BDFD4
    System::Collections::IEnumerator* TestRunnerCoroutine();
    // public System.Collections.IEnumerator Run()
    // Offset: 0x14BE070
    System::Collections::IEnumerator* Run();
    // public System.Void Cleanup()
    // Offset: 0x14BE10C
    void Cleanup();
    // static public System.Void TryCleanup()
    // Offset: 0x14BE1D0
    static void TryCleanup();
    // public System.Void .ctor()
    // Offset: 0x14BE264
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeTestsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::PlaymodeTestsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeTestsController*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController
  #pragma pack(pop)
  static check_size<sizeof(PlaymodeTestsController), 80 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*)> __UnityEngine_TestTools_TestRunner_PlaymodeTestsControllerSizeCheck;
  static_assert(sizeof(PlaymodeTestsController) == 0x58);
  // Writing MetadataGetter for method: PlaymodeTestsController::get_AssembliesWithTests
  // Il2CppName: get_AssembliesWithTests
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (PlaymodeTestsController::*)()>(&PlaymodeTestsController::get_AssembliesWithTests)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "get_AssembliesWithTests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::set_AssembliesWithTests
  // Il2CppName: set_AssembliesWithTests
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlaymodeTestsController::*)(System::Collections::Generic::List_1<::Il2CppString*>*)>(&PlaymodeTestsController::set_AssembliesWithTests)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "set_AssembliesWithTests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppString*>*>()});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (PlaymodeTestsController::*)()>(&PlaymodeTestsController::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::IsControllerOnScene
  // Il2CppName: IsControllerOnScene
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&PlaymodeTestsController::IsControllerOnScene)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "IsControllerOnScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::GetController
  // Il2CppName: GetController
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::TestRunner::PlaymodeTestsController* (*)()>(&PlaymodeTestsController::GetController)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "GetController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::TestRunnerCoroutine
  // Il2CppName: TestRunnerCoroutine
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (PlaymodeTestsController::*)()>(&PlaymodeTestsController::TestRunnerCoroutine)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "TestRunnerCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::Run
  // Il2CppName: Run
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (PlaymodeTestsController::*)()>(&PlaymodeTestsController::Run)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::Cleanup
  // Il2CppName: Cleanup
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlaymodeTestsController::*)()>(&PlaymodeTestsController::Cleanup)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::TryCleanup
  // Il2CppName: TryCleanup
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlaymodeTestsController::TryCleanup)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), "TryCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PlaymodeTestsController::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlaymodeTestsController::*)()>(&PlaymodeTestsController::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlaymodeTestsController::*)()>(&PlaymodeTestsController::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlaymodeTestsController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController");
