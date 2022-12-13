// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CentralLeaderboardViewController
#include "GlobalNamespace/CentralLeaderboardViewController.hpp"
// Including type: OnlineServices.ScoresScope
#include "OnlineServices/ScoresScope.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*, "", "CentralLeaderboardViewController/ScoreScopeInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: CentralLeaderboardViewController/ScoreScopeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class CentralLeaderboardViewController::ScoreScopeInfo : public ::Il2CppObject {
    public:
    public:
    // public OnlineServices.ScoresScope scoreScope
    // Size: 0x4
    // Offset: 0x10
    ::OnlineServices::ScoresScope scoreScope;
    // Field size check
    static_assert(sizeof(::OnlineServices::ScoresScope) == 0x4);
    // Padding between fields: scoreScope and: localizedTitle
    char __padding0[0x4] = {};
    // public System.String localizedTitle
    // Size: 0x8
    // Offset: 0x18
    ::StringW localizedTitle;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Sprite icon
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public System.Int32 playerScorePos
    // Size: 0x4
    // Offset: 0x28
    int playerScorePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public OnlineServices.ScoresScope scoreScope
    [[deprecated("Use field access instead!")]] ::OnlineServices::ScoresScope& dyn_scoreScope();
    // Get instance field reference: public System.String localizedTitle
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localizedTitle();
    // Get instance field reference: public UnityEngine.Sprite icon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_icon();
    // Get instance field reference: public System.Int32 playerScorePos
    [[deprecated("Use field access instead!")]] int& dyn_playerScorePos();
    // public System.Void .ctor(OnlineServices.ScoresScope scoreScope, UnityEngine.Sprite icon, System.String localizedTitle)
    // Offset: 0x1408888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CentralLeaderboardViewController::ScoreScopeInfo* New_ctor(::OnlineServices::ScoresScope scoreScope, ::UnityEngine::Sprite* icon, ::StringW localizedTitle) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CentralLeaderboardViewController::ScoreScopeInfo*, creationType>(scoreScope, icon, localizedTitle)));
    }
  }; // CentralLeaderboardViewController/ScoreScopeInfo
  #pragma pack(pop)
  static check_size<sizeof(CentralLeaderboardViewController::ScoreScopeInfo), 40 + sizeof(int)> __GlobalNamespace_CentralLeaderboardViewController_ScoreScopeInfoSizeCheck;
  static_assert(sizeof(CentralLeaderboardViewController::ScoreScopeInfo) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
