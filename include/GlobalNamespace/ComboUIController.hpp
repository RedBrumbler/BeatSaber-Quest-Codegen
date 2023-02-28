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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IComboController
  class IComboController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ComboUIController
  class ComboUIController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ComboUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboUIController*, "", "ComboUIController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: ComboUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class ComboUIController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0x1125F78
    // private readonly IComboController _comboController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IComboController* comboController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IComboController*) == 0x8);
    // private System.Int32 _comboLostId
    // Size: 0x4
    // Offset: 0x30
    int comboLostId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _fullComboLost
    // Size: 0x1
    // Offset: 0x34
    bool fullComboLost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _comboText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__comboText();
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private readonly IComboController _comboController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IComboController*& dyn__comboController();
    // Get instance field reference: private System.Int32 _comboLostId
    [[deprecated("Use field access instead!")]] int& dyn__comboLostId();
    // Get instance field reference: private System.Boolean _fullComboLost
    [[deprecated("Use field access instead!")]] bool& dyn__fullComboLost();
    // public System.Void .ctor()
    // Offset: 0x1443E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ComboUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboUIController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14438B4
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1443BFC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1443C00
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x1443930
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1443C04
    void UnregisterFromEvents();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x1443DA4
    void HandleComboDidChange(int combo);
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0x1443DE8
    void HandleComboBreakingEventHappened();
  }; // ComboUIController
  #pragma pack(pop)
  static check_size<sizeof(ComboUIController), 52 + sizeof(bool)> __GlobalNamespace_ComboUIControllerSizeCheck;
  static_assert(sizeof(ComboUIController) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::RegisterForEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "RegisterForEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::UnregisterFromEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "UnregisterFromEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::HandleComboDidChange
// Il2CppName: HandleComboDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)(int)>(&GlobalNamespace::ComboUIController::HandleComboDidChange)> {
  static const MethodInfo* get() {
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "HandleComboDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened
// Il2CppName: HandleComboBreakingEventHappened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "HandleComboBreakingEventHappened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
