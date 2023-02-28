// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainMenuDestinationRequestController
#include "GlobalNamespace/MainMenuDestinationRequestController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0*, "", "MainMenuDestinationRequestController/<>c__DisplayClass8_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuDestinationRequestController/<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MainMenuDestinationRequestController::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public MenuDestination menuDestination
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MenuDestination* menuDestination;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuDestination*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::MenuDestination*
    constexpr operator ::GlobalNamespace::MenuDestination*() const noexcept {
      return menuDestination;
    }
    // Get instance field reference: public MenuDestination menuDestination
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuDestination*& dyn_menuDestination();
    // public System.Void .ctor()
    // Offset: 0x1373CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuDestinationRequestController::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuDestinationRequestController::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Void <ProcessDestinationRequest>b__0(Zenject.DiContainer container)
    // Offset: 0x1373CE0
    void $ProcessDestinationRequest$b__0(::Zenject::DiContainer* container);
  }; // MainMenuDestinationRequestController/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(MainMenuDestinationRequestController::$$c__DisplayClass8_0), 16 + sizeof(::GlobalNamespace::MenuDestination*)> __GlobalNamespace_MainMenuDestinationRequestController_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(MainMenuDestinationRequestController::$$c__DisplayClass8_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0::$ProcessDestinationRequest$b__0
// Il2CppName: <ProcessDestinationRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0::$ProcessDestinationRequest$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0*), "<ProcessDestinationRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
