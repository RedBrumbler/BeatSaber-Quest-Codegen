// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameServerLobbyFlowCoordinator
#include "GlobalNamespace/GameServerLobbyFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0*, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass85_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameServerLobbyFlowCoordinator/<>c__DisplayClass85_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0 : public ::Il2CppObject {
    public:
    public:
    // public GameServerLobbyFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameServerLobbyFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameServerLobbyFlowCoordinator*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public GameServerLobbyFlowCoordinator <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameServerLobbyFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // public System.Void .ctor()
    // Offset: 0x14740EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0*, creationType>()));
    }
    // System.Void <HandleServerPlayerListViewControllerKickPlayer>b__0(System.Int32 btnId)
    // Offset: 0x1475A7C
    void $HandleServerPlayerListViewControllerKickPlayer$b__0(int btnId);
  }; // GameServerLobbyFlowCoordinator/<>c__DisplayClass85_0
  #pragma pack(pop)
  static check_size<sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0), 24 + sizeof(::StringW)> __GlobalNamespace_GameServerLobbyFlowCoordinator_$$c__DisplayClass85_0SizeCheck;
  static_assert(sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0::$HandleServerPlayerListViewControllerKickPlayer$b__0
// Il2CppName: <HandleServerPlayerListViewControllerKickPlayer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0::*)(int)>(&GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0::$HandleServerPlayerListViewControllerKickPlayer$b__0)> {
  static const MethodInfo* get() {
    static auto* btnId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass85_0*), "<HandleServerPlayerListViewControllerKickPlayer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btnId});
  }
};