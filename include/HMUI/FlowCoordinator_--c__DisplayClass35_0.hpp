// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.FlowCoordinator/<>c__DisplayClass35_0
  // [CompilerGeneratedAttribute] Offset: DF7D00
  class FlowCoordinator::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x10
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public HMUI.FlowCoordinator flowCoordinator
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator* flowCoordinator;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // public HMUI.FlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::FlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass35_0
    $$c__DisplayClass35_0(System::Action* finishedCallback_ = {}, HMUI::FlowCoordinator* flowCoordinator_ = {}, HMUI::FlowCoordinator* $$4__this_ = {}) noexcept : finishedCallback{finishedCallback_}, flowCoordinator{flowCoordinator_}, $$4__this{$$4__this_} {}
    // System.Void <PresentFlowCoordinator>b__1()
    // Offset: 0x13130A0
    void $PresentFlowCoordinator$b__1();
    // System.Void <PresentFlowCoordinator>b__0()
    // Offset: 0x1313120
    void $PresentFlowCoordinator$b__0();
    // public System.Void .ctor()
    // Offset: 0x1311BA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::FlowCoordinator::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass35_0*, creationType>()));
    }
  }; // HMUI.FlowCoordinator/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass35_0), 32 + sizeof(HMUI::FlowCoordinator*)> __HMUI_FlowCoordinator_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass35_0) == 0x28);
  // Writing MetadataGetter for method: FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__1
  // Il2CppName: <PresentFlowCoordinator>b__1
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FlowCoordinator::$$c__DisplayClass35_0::*)()>(&FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__1)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FlowCoordinator::$$c__DisplayClass35_0*), "<PresentFlowCoordinator>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__0
  // Il2CppName: <PresentFlowCoordinator>b__0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FlowCoordinator::$$c__DisplayClass35_0::*)()>(&FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FlowCoordinator::$$c__DisplayClass35_0*), "<PresentFlowCoordinator>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: FlowCoordinator::$$c__DisplayClass35_0::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FlowCoordinator::$$c__DisplayClass35_0::*)()>(&FlowCoordinator::$$c__DisplayClass35_0::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FlowCoordinator::$$c__DisplayClass35_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FlowCoordinator::$$c__DisplayClass35_0::*)()>(&FlowCoordinator::$$c__DisplayClass35_0::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FlowCoordinator::$$c__DisplayClass35_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator::$$c__DisplayClass35_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass35_0");
