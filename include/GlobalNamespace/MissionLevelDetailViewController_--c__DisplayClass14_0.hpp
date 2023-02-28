// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionLevelDetailViewController
#include "GlobalNamespace/MissionLevelDetailViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: ObjectiveListItem
  class ObjectiveListItem;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0*, "", "MissionLevelDetailViewController/<>c__DisplayClass14_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelDetailViewController/<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionLevelDetailViewController::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    public:
    // public MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionObjective*>) == 0x8);
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    public:
    // Get instance field reference: public MissionObjective[] missionObjectives
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MissionObjective*>& dyn_missionObjectives();
    // Get instance field reference: public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& dyn_modifierParamsList();
    // public System.Void .ctor()
    // Offset: 0x137FD54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelDetailViewController::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelDetailViewController::$$c__DisplayClass14_0*, creationType>()));
    }
    // System.Void <RefreshContent>b__0(System.Int32 idx, ObjectiveListItem objectiveListItem)
    // Offset: 0x137FDC8
    void $RefreshContent$b__0(int idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem);
    // System.Void <RefreshContent>b__1(System.Int32 idx, GameplayModifierInfoListItem gameplayModifierInfoListItem)
    // Offset: 0x137FF94
    void $RefreshContent$b__1(int idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);
  }; // MissionLevelDetailViewController/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelDetailViewController::$$c__DisplayClass14_0), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_MissionLevelDetailViewController_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(MissionLevelDetailViewController::$$c__DisplayClass14_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::$RefreshContent$b__0
// Il2CppName: <RefreshContent>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::*)(int, ::GlobalNamespace::ObjectiveListItem*)>(&GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::$RefreshContent$b__0)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* objectiveListItem = &::il2cpp_utils::GetClassFromName("", "ObjectiveListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0*), "<RefreshContent>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, objectiveListItem});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::$RefreshContent$b__1
// Il2CppName: <RefreshContent>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::*)(int, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0::$RefreshContent$b__1)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameplayModifierInfoListItem = &::il2cpp_utils::GetClassFromName("", "GameplayModifierInfoListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0*), "<RefreshContent>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, gameplayModifierInfoListItem});
  }
};
