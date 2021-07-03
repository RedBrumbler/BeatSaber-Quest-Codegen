// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Logging.LogScope
#include "UnityEngine/TestTools/Logging/LogScope.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope/<>c
  // [CompilerGeneratedAttribute] Offset: E3DA78
  class LogScope::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static UnityEngine::TestTools::Logging::LogScope::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::Logging::LogScope::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static void _set_$$9__53_0(System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x14B8D44
    static void _cctor();
    // System.Boolean <NoUnexpectedReceived>b__53_0(UnityEngine.TestTools.Logging.LogEvent x)
    // Offset: 0x14B8DB0
    bool $NoUnexpectedReceived$b__53_0(UnityEngine::TestTools::Logging::LogEvent* x);
    // public System.Void .ctor()
    // Offset: 0x14B8DA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogScope::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Logging::LogScope::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogScope::$$c*, creationType>()));
    }
  }; // UnityEngine.TestTools.Logging.LogScope/<>c
  #pragma pack(pop)
  // Writing MetadataGetter for method: LogScope::$$c::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LogScope::$$c::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LogScope::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LogScope::$$c::$NoUnexpectedReceived$b__53_0
  // Il2CppName: <NoUnexpectedReceived>b__53_0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LogScope::$$c::*)(UnityEngine::TestTools::Logging::LogEvent*)>(&LogScope::$$c::$NoUnexpectedReceived$b__53_0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LogScope::$$c*), "<NoUnexpectedReceived>b__53_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::TestTools::Logging::LogEvent*>()});
    }
  };
  // Writing MetadataGetter for method: LogScope::$$c::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LogScope::$$c::*)()>(&LogScope::$$c::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LogScope::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LogScope::$$c::*)()>(&LogScope::$$c::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LogScope::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope::$$c*, "UnityEngine.TestTools.Logging", "LogScope/<>c");
