// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLocalActivePlayerInGameMenuController
#include "GlobalNamespace/MultiplayerLocalActivePlayerInGameMenuController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0*, "", "MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass19_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean value
    // Size: 0x1
    // Offset: 0x10
    bool value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Boolean value
    [[deprecated("Use field access instead!")]] bool& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x13E7C78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0*, creationType>()));
    }
    // System.Void <get_canShowInGameMenu>b__0(System.Boolean newValue)
    // Offset: 0x13E8B38
    void $get_canShowInGameMenu$b__0(bool newValue);
  }; // MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0), 16 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerInGameMenuController_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0::$get_canShowInGameMenu$b__0
// Il2CppName: <get_canShowInGameMenu>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0::*)(bool)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0::$get_canShowInGameMenu$b__0)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass19_0*), "<get_canShowInGameMenu>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
