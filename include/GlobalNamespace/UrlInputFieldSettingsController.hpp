// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: InputFieldSettingsController
#include "GlobalNamespace/InputFieldSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UrlInputFieldSettingsController
  class UrlInputFieldSettingsController : public GlobalNamespace::InputFieldSettingsController {
    public:
    // Creating value type constructor for type: UrlInputFieldSettingsController
    UrlInputFieldSettingsController() noexcept {}
    // protected override System.Void HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    // Offset: 0x1DA8F78
    // Implemented from: InputFieldSettingsController
    // Base method: System.Void InputFieldSettingsController::HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    void HandleInputFieldDidChange(HMUI::InputFieldView* inputFieldView);
    // public System.Void .ctor()
    // Offset: 0x1DA9010
    // Implemented from: InputFieldSettingsController
    // Base method: System.Void InputFieldSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UrlInputFieldSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UrlInputFieldSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UrlInputFieldSettingsController*, creationType>()));
    }
  }; // UrlInputFieldSettingsController
  #pragma pack(pop)
  // Writing MetadataGetter for method: UrlInputFieldSettingsController::HandleInputFieldDidChange
  // Il2CppName: HandleInputFieldDidChange
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UrlInputFieldSettingsController::*)(HMUI::InputFieldView*)>(&UrlInputFieldSettingsController::HandleInputFieldDidChange)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UrlInputFieldSettingsController*), "HandleInputFieldDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::InputFieldView*>()});
    }
  };
  // Writing MetadataGetter for method: UrlInputFieldSettingsController::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UrlInputFieldSettingsController::*)()>(&UrlInputFieldSettingsController::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UrlInputFieldSettingsController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UrlInputFieldSettingsController::*)()>(&UrlInputFieldSettingsController::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UrlInputFieldSettingsController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UrlInputFieldSettingsController*, "", "UrlInputFieldSettingsController");
