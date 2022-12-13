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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextFadeTransitions
  class TextFadeTransitions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShowTextOnGameEventController
  class ShowTextOnGameEventController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShowTextOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowTextOnGameEventController*, "", "ShowTextOnGameEventController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShowTextOnGameEventController
  // [TokenAttribute] Offset: FFFFFFFF
  class ShowTextOnGameEventController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ShowTextOnGameEventController::EventTextBinding
    class EventTextBinding;
    public:
    // private TextFadeTransitions _textFadeTransitions
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TextFadeTransitions* textFadeTransitions;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TextFadeTransitions*) == 0x8);
    // private ShowTextOnGameEventController/EventTextBinding[] _eventTextBindings
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*> eventTextBindings;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TextFadeTransitions _textFadeTransitions
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TextFadeTransitions*& dyn__textFadeTransitions();
    // Get instance field reference: private ShowTextOnGameEventController/EventTextBinding[] _eventTextBindings
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>& dyn__eventTextBindings();
    // public System.Void .ctor()
    // Offset: 0x141D764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowTextOnGameEventController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShowTextOnGameEventController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowTextOnGameEventController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x141D564
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x141D670
    void OnDestroy();
  }; // ShowTextOnGameEventController
  #pragma pack(pop)
  static check_size<sizeof(ShowTextOnGameEventController), 32 + sizeof(::ArrayW<::GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>)> __GlobalNamespace_ShowTextOnGameEventControllerSizeCheck;
  static_assert(sizeof(ShowTextOnGameEventController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::*)()>(&GlobalNamespace::ShowTextOnGameEventController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::*)()>(&GlobalNamespace::ShowTextOnGameEventController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
