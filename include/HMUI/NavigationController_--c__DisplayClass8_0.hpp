// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.NavigationController/<>c__DisplayClass8_0
  // [CompilerGeneratedAttribute] Offset: DF7DA0
  class NavigationController::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Single[] startPositions
    // Size: 0x8
    // Offset: 0x10
    ::Array<float>* startPositions;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // public HMUI.NavigationController <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::NavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::NavigationController*) == 0x8);
    // public HMUI.ViewController viewController
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* viewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single[] endPositions
    // Size: 0x8
    // Offset: 0x28
    ::Array<float>* endPositions;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(::Array<float>* startPositions_ = {}, HMUI::NavigationController* $$4__this_ = {}, HMUI::ViewController* viewController_ = {}, ::Array<float>* endPositions_ = {}) noexcept : startPositions{startPositions_}, $$4__this{$$4__this_}, viewController{viewController_}, endPositions{endPositions_} {}
    // System.Void <PushViewController>g__AnimationLayouter|0(System.Single t, HMUI.ViewController[] viewControllers)
    // Offset: 0x12B33D8
    void $PushViewController$g__AnimationLayouter_0(float t, ::Array<HMUI::ViewController*>* viewControllers);
    // public System.Void .ctor()
    // Offset: 0x12B2EA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavigationController::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::NavigationController::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavigationController::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // HMUI.NavigationController/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(NavigationController::$$c__DisplayClass8_0), 40 + sizeof(::Array<float>*)> __HMUI_NavigationController_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(NavigationController::$$c__DisplayClass8_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController::$$c__DisplayClass8_0*, "HMUI", "NavigationController/<>c__DisplayClass8_0");
// Writing MetadataGetter for method: HMUI::NavigationController::$$c__DisplayClass8_0::$PushViewController$g__AnimationLayouter_0
// Il2CppName: <PushViewController>g__AnimationLayouter|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::$$c__DisplayClass8_0::*)(float, ::Array<HMUI::ViewController*>*)>(&HMUI::NavigationController::$$c__DisplayClass8_0::$PushViewController$g__AnimationLayouter_0)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController::$$c__DisplayClass8_0*), "<PushViewController>g__AnimationLayouter|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, viewControllers});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
