// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: IBeatmapDataBasicInfo
  class IBeatmapDataBasicInfo;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EmptyDifficultyBeatmap
  class EmptyDifficultyBeatmap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EmptyDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyDifficultyBeatmap*, "", "EmptyDifficultyBeatmap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: EmptyDifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyDifficultyBeatmap : public ::Il2CppObject/*, public ::GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    // Nested type: ::GlobalNamespace::EmptyDifficultyBeatmap::$GetBeatmapDataBasicInfoAsync$d__20
    struct $GetBeatmapDataBasicInfoAsync$d__20;
    // Nested type: ::GlobalNamespace::EmptyDifficultyBeatmap::$GetBeatmapDataAsync$d__21
    struct $GetBeatmapDataAsync$d__21;
    public:
    // private readonly IBeatmapLevel <level>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private readonly IDifficultyBeatmapSet <parentDifficultyBeatmapSet>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmapSet*) == 0x8);
    // private readonly BeatmapDifficulty <difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private readonly System.Int32 <difficultyRank>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Single <noteJumpMovementSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <noteJumpStartBeatOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IDifficultyBeatmap
    operator ::GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // Creating interface conversion operator: i_IDifficultyBeatmap
    inline ::GlobalNamespace::IDifficultyBeatmap* i_IDifficultyBeatmap() noexcept {
      return reinterpret_cast<::GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // Get instance field reference: private readonly IBeatmapLevel <level>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevel*& dyn_$level$k__BackingField();
    // Get instance field reference: private readonly IDifficultyBeatmapSet <parentDifficultyBeatmapSet>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmapSet*& dyn_$parentDifficultyBeatmapSet$k__BackingField();
    // Get instance field reference: private readonly BeatmapDifficulty <difficulty>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_$difficulty$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <difficultyRank>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$difficultyRank$k__BackingField();
    // Get instance field reference: private readonly System.Single <noteJumpMovementSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$noteJumpMovementSpeed$k__BackingField();
    // Get instance field reference: private readonly System.Single <noteJumpStartBeatOffset>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$noteJumpStartBeatOffset$k__BackingField();
    // Get instance field reference: private BeatmapData _beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapData*& dyn__beatmapData();
    // public IBeatmapLevel get_level()
    // Offset: 0x13BE218
    ::GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x13BE220
    ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x13BE228
    ::GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x13BE230
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x13BE238
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x13BE240
    float get_noteJumpStartBeatOffset();
    // public IBeatmapDataBasicInfo get_beatmapDataBasicInfo()
    // Offset: 0x13BE248
    ::GlobalNamespace::IBeatmapDataBasicInfo* get_beatmapDataBasicInfo();
    // public System.Void .ctor()
    // Offset: 0x13BE450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyDifficultyBeatmap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EmptyDifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyDifficultyBeatmap*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync()
    // Offset: 0x13BE250
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();
    // public System.Threading.Tasks.Task`1<IReadonlyBeatmapData> GetBeatmapDataAsync(EnvironmentInfoSO environmentInfo, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x13BE350
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
  }; // EmptyDifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(EmptyDifficultyBeatmap), 48 + sizeof(::GlobalNamespace::BeatmapData*)> __GlobalNamespace_EmptyDifficultyBeatmapSizeCheck;
  static_assert(sizeof(EmptyDifficultyBeatmap) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_level
// Il2CppName: get_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel* (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_parentDifficultyBeatmapSet
// Il2CppName: get_parentDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_parentDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_difficultyRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_difficultyRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::get_beatmapDataBasicInfo
// Il2CppName: get_beatmapDataBasicInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapDataBasicInfo* (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_beatmapDataBasicInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "get_beatmapDataBasicInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataBasicInfoAsync
// Il2CppName: GetBeatmapDataBasicInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataAsync
// Il2CppName: GetBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (GlobalNamespace::EmptyDifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataAsync)> {
  static const MethodInfo* get() {
    static auto* environmentInfo = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmptyDifficultyBeatmap*), "GetBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentInfo, playerSpecificSettings});
  }
};
