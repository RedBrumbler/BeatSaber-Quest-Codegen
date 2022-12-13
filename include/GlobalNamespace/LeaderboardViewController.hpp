// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardViewController : public ::HMUI::ViewController {
    public:
    // protected System.Void .ctor()
    // Offset: 0x13D9908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardViewController*, creationType>()));
    }
    // public System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void RefreshLevelStats()
    // Offset: 0x13D9904
    void RefreshLevelStats();
  }; // LeaderboardViewController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardViewController::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::RefreshLevelStats
// Il2CppName: RefreshLevelStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardViewController::*)()>(&GlobalNamespace::LeaderboardViewController::RefreshLevelStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardViewController*), "RefreshLevelStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
