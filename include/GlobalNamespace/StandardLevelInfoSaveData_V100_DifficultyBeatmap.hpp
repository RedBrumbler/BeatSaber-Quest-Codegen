// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelInfoSaveData_V100
#include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData_V100/DifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData_V100::DifficultyBeatmap : public ::Il2CppObject {
    public:
    public:
    // private System.String _difficulty
    // Size: 0x8
    // Offset: 0x10
    ::StringW difficulty;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x18
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: difficultyRank and: beatmapFilename
    char __padding1[0x4] = {};
    // private System.String _beatmapFilename
    // Size: 0x8
    // Offset: 0x20
    ::StringW beatmapFilename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x2C
    int noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String _difficulty
    [[deprecated("Use field access instead!")]] ::StringW& dyn__difficulty();
    // Get instance field reference: private System.Int32 _difficultyRank
    [[deprecated("Use field access instead!")]] int& dyn__difficultyRank();
    // Get instance field reference: private System.String _beatmapFilename
    [[deprecated("Use field access instead!")]] ::StringW& dyn__beatmapFilename();
    // Get instance field reference: private System.Single _noteJumpMovementSpeed
    [[deprecated("Use field access instead!")]] float& dyn__noteJumpMovementSpeed();
    // Get instance field reference: private System.Int32 _noteJumpStartBeatOffset
    [[deprecated("Use field access instead!")]] int& dyn__noteJumpStartBeatOffset();
    // public System.String get_difficulty()
    // Offset: 0x13BA74C
    ::StringW get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x13BA754
    int get_difficultyRank();
    // public System.String get_beatmapFilename()
    // Offset: 0x13BA75C
    ::StringW get_beatmapFilename();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x13BA764
    float get_noteJumpMovementSpeed();
    // public System.Int32 get_noteJumpStartBeatOffset()
    // Offset: 0x13BA76C
    int get_noteJumpStartBeatOffset();
    // public System.Void .ctor(System.String difficultyName, System.Int32 difficultyRank, System.String beatmapFilename, System.Single noteJumpMovementSpeed, System.Int32 noteJumpStartBeatOffset)
    // Offset: 0x13BA774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData_V100::DifficultyBeatmap* New_ctor(::StringW difficultyName, int difficultyRank, ::StringW beatmapFilename, float noteJumpMovementSpeed, int noteJumpStartBeatOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData_V100::DifficultyBeatmap*, creationType>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset)));
    }
  }; // StandardLevelInfoSaveData_V100/DifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData_V100::DifficultyBeatmap), 44 + sizeof(int)> __GlobalNamespace_StandardLevelInfoSaveData_V100_DifficultyBeatmapSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData_V100::DifficultyBeatmap) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_difficultyRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*), "get_difficultyRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_beatmapFilename
// Il2CppName: get_beatmapFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_beatmapFilename)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*), "get_beatmapFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData_V100::DifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
