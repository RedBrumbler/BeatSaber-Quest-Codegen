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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintPanel
  class HoverHintPanel;
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintController
  class HoverHintController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::HoverHintController::$ShowHintAfterDelay$d__10
    class $ShowHintAfterDelay$d__10;
    // Nested type: HMUI::HoverHintController::$HideHintAfterDelay$d__11
    class $HideHintAfterDelay$d__11;
    // private HMUI.HoverHintPanel _hoverHintPanelPrefab
    // Size: 0x8
    // Offset: 0x18
    HMUI::HoverHintPanel* hoverHintPanelPrefab;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintPanel*) == 0x8);
    // private HMUI.HoverHintPanel _hoverHintPanel
    // Size: 0x8
    // Offset: 0x20
    HMUI::HoverHintPanel* hoverHintPanel;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintPanel*) == 0x8);
    // private System.Boolean _isHiding
    // Size: 0x1
    // Offset: 0x28
    bool isHiding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HoverHintController
    HoverHintController(HMUI::HoverHintPanel* hoverHintPanelPrefab_ = {}, HMUI::HoverHintPanel* hoverHintPanel_ = {}, bool isHiding_ = {}) noexcept : hoverHintPanelPrefab{hoverHintPanelPrefab_}, hoverHintPanel{hoverHintPanel_}, isHiding{isHiding_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kShowHintDelay
    static constexpr const float kShowHintDelay = 0.6;
    // Get static field: static private System.Single kShowHintDelay
    static float _get_kShowHintDelay();
    // Set static field: static private System.Single kShowHintDelay
    static void _set_kShowHintDelay(float value);
    // static field const value: static private System.Single kHideHintDelay
    static constexpr const float kHideHintDelay = 0.3;
    // Get static field: static private System.Single kHideHintDelay
    static float _get_kHideHintDelay();
    // Set static field: static private System.Single kHideHintDelay
    static void _set_kHideHintDelay(float value);
    // protected System.Void Awake()
    // Offset: 0x131837C
    void Awake();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x131844C
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowHint(HMUI.HoverHint hoverHint)
    // Offset: 0x131808C
    void ShowHint(HMUI::HoverHint* hoverHint);
    // public System.Void HideHint()
    // Offset: 0x1318240
    void HideHint();
    // public System.Void HideHintInstant()
    // Offset: 0x13181FC
    void HideHintInstant();
    // private System.Collections.IEnumerator ShowHintAfterDelay(HMUI.HoverHint hoverHint, System.Single delay)
    // Offset: 0x1318628
    System::Collections::IEnumerator* ShowHintAfterDelay(HMUI::HoverHint* hoverHint, float delay);
    // private System.Collections.IEnumerator HideHintAfterDelay(System.Single delay)
    // Offset: 0x13186B4
    System::Collections::IEnumerator* HideHintAfterDelay(float delay);
    // private System.Void SetupAndShowHintPanel(HMUI.HoverHint hoverHint)
    // Offset: 0x1318474
    void SetupAndShowHintPanel(HMUI::HoverHint* hoverHint);
    // static private UnityEngine.Transform GetScreenTransformForHoverHint(HMUI.HoverHint hoverHint)
    // Offset: 0x131878C
    static UnityEngine::Transform* GetScreenTransformForHoverHint(HMUI::HoverHint* hoverHint);
    // public System.Void .ctor()
    // Offset: 0x1318B78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHintController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintController*, creationType>()));
    }
  }; // HMUI.HoverHintController
  #pragma pack(pop)
  static check_size<sizeof(HoverHintController), 40 + sizeof(bool)> __HMUI_HoverHintControllerSizeCheck;
  static_assert(sizeof(HoverHintController) == 0x29);
  // Writing MetadataGetter for method: HoverHintController::Awake
  // Il2CppName: Awake
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)()>(&HoverHintController::Awake)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::OnApplicationFocus
  // Il2CppName: OnApplicationFocus
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)(bool)>(&HoverHintController::OnApplicationFocus)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::ShowHint
  // Il2CppName: ShowHint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)(HMUI::HoverHint*)>(&HoverHintController::ShowHint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "ShowHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::HideHint
  // Il2CppName: HideHint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)()>(&HoverHintController::HideHint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "HideHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::HideHintInstant
  // Il2CppName: HideHintInstant
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)()>(&HoverHintController::HideHintInstant)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "HideHintInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::ShowHintAfterDelay
  // Il2CppName: ShowHintAfterDelay
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HoverHintController::*)(HMUI::HoverHint*, float)>(&HoverHintController::ShowHintAfterDelay)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "ShowHintAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::HideHintAfterDelay
  // Il2CppName: HideHintAfterDelay
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HoverHintController::*)(float)>(&HoverHintController::HideHintAfterDelay)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "HideHintAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::SetupAndShowHintPanel
  // Il2CppName: SetupAndShowHintPanel
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)(HMUI::HoverHint*)>(&HoverHintController::SetupAndShowHintPanel)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "SetupAndShowHintPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::GetScreenTransformForHoverHint
  // Il2CppName: GetScreenTransformForHoverHint
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(HMUI::HoverHint*)>(&HoverHintController::GetScreenTransformForHoverHint)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), "GetScreenTransformForHoverHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>()});
    }
  };
  // Writing MetadataGetter for method: HoverHintController::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)()>(&HoverHintController::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoverHintController::*)()>(&HoverHintController::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HoverHintController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintController*, "HMUI", "HoverHintController");
