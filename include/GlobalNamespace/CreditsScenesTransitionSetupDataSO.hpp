// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CreditsScenesTransitionSetupDataSO
  class CreditsScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, "", "CreditsScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: CreditsScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsScenesTransitionSetupDataSO : public ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
    public:
    public:
    // private System.Action`1<CreditsScenesTransitionSetupDataSO> didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<CreditsScenesTransitionSetupDataSO> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<CreditsScenesTransitionSetupDataSO> value)
    // Offset: 0x14405CC
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<CreditsScenesTransitionSetupDataSO> value)
    // Offset: 0x1440670
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* value);
    // public System.Void .ctor()
    // Offset: 0x1440714
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsScenesTransitionSetupDataSO*, creationType>()));
    }
    // public System.Void Finish()
    // Offset: 0x143FF78
    void Finish();
  }; // CreditsScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(CreditsScenesTransitionSetupDataSO), 56 + sizeof(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*)> __GlobalNamespace_CreditsScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(CreditsScenesTransitionSetupDataSO) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*)>(&GlobalNamespace::CreditsScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "CreditsScenesTransitionSetupDataSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*)>(&GlobalNamespace::CreditsScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "CreditsScenesTransitionSetupDataSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::CreditsScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
