// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
#include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEventCollectorSingleton.hpp"
// Including type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
#include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton/<>c");
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/UnityEngine.ResourceManagement.Diagnostics.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiagnosticEventCollectorSingleton::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/UnityEngine.ResourceManagement.Diagnostics.<>c <>9
    static ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/UnityEngine.ResourceManagement.Diagnostics.<>c <>9
    static void _set_$$9(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32> <>9__8_0
    static ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32> <>9__8_0
    static void _set_$$9__8_0(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int>* value);
    // Get static field: static public System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> <>9__11_0
    static ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* _get_$$9__11_0();
    // Set static field: static public System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> <>9__11_0
    static void _set_$$9__11_0(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);
    // static private System.Void .cctor()
    // Offset: 0x1F85EAC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1F85F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticEventCollectorSingleton::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticEventCollectorSingleton::$$c*, creationType>()));
    }
    // System.Int32 <RegisterEventHandler>b__8_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent evt)
    // Offset: 0x1F85F18
    int $RegisterEventHandler$b__8_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent evt);
    // System.Void <Awake>b__11_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent diagnosticEvent)
    // Offset: 0x1F85F20
    void $Awake$b__11_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);
  }; // UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/UnityEngine.ResourceManagement.Diagnostics.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::$RegisterEventHandler$b__8_0
// Il2CppName: <RegisterEventHandler>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::*)(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::$RegisterEventHandler$b__8_0)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c*), "<RegisterEventHandler>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::$Awake$b__11_0
// Il2CppName: <Awake>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::*)(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c::$Awake$b__11_0)> {
  static const MethodInfo* get() {
    static auto* diagnosticEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c*), "<Awake>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{diagnosticEvent});
  }
};
