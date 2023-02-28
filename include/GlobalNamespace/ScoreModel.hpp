// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: NoteData/ScoringType
#include "GlobalNamespace/NoteData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreMultiplierCounter
  class ScoreMultiplierCounter;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreModel
  class ScoreModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreModel*, "", "ScoreModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ScoreModel
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreModel : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ScoreModel::NoteScoreDefinition
    class NoteScoreDefinition;
    // Nested type: ::GlobalNamespace::ScoreModel::MaxScoreCounterElement
    class MaxScoreCounterElement;
    // static field const value: static public System.Int32 kMaxMultiplier
    static constexpr const int kMaxMultiplier = 8;
    // Get static field: static public System.Int32 kMaxMultiplier
    static int _get_kMaxMultiplier();
    // Set static field: static public System.Int32 kMaxMultiplier
    static void _set_kMaxMultiplier(int value);
    // static field const value: static public System.Single kMaxDistanceForDistanceToCenterScore
    static constexpr const float kMaxDistanceForDistanceToCenterScore = 0.3;
    // Get static field: static public System.Single kMaxDistanceForDistanceToCenterScore
    static float _get_kMaxDistanceForDistanceToCenterScore();
    // Set static field: static public System.Single kMaxDistanceForDistanceToCenterScore
    static void _set_kMaxDistanceForDistanceToCenterScore(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1121AA0
    // Get static field: static public readonly System.Collections.Generic.HashSet`1<NoteData/ScoringType> fullScoreScoringTypes
    static ::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData::ScoringType>* _get_fullScoreScoringTypes();
    // Set static field: static public readonly System.Collections.Generic.HashSet`1<NoteData/ScoringType> fullScoreScoringTypes
    static void _set_fullScoreScoringTypes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData::ScoringType>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1121AB0
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<NoteData/ScoringType,ScoreModel/NoteScoreDefinition> _scoreDefinitions
    static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData::ScoringType, ::GlobalNamespace::ScoreModel::NoteScoreDefinition*>* _get__scoreDefinitions();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<NoteData/ScoringType,ScoreModel/NoteScoreDefinition> _scoreDefinitions
    static void _set__scoreDefinitions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData::ScoringType, ::GlobalNamespace::ScoreModel::NoteScoreDefinition*>* value);
    // static field const value: static private System.Int32 kMaxBeforeCutScore
    static constexpr const int kMaxBeforeCutScore = 70;
    // Get static field: static private System.Int32 kMaxBeforeCutScore
    static int _get_kMaxBeforeCutScore();
    // Set static field: static private System.Int32 kMaxBeforeCutScore
    static void _set_kMaxBeforeCutScore(int value);
    // static field const value: static public System.Int32 kMaxCenterDistanceCutScore
    static constexpr const int kMaxCenterDistanceCutScore = 15;
    // Get static field: static public System.Int32 kMaxCenterDistanceCutScore
    static int _get_kMaxCenterDistanceCutScore();
    // Set static field: static public System.Int32 kMaxCenterDistanceCutScore
    static void _set_kMaxCenterDistanceCutScore(int value);
    // static field const value: static private System.Int32 kMaxAfterCutScore
    static constexpr const int kMaxAfterCutScore = 30;
    // Get static field: static private System.Int32 kMaxAfterCutScore
    static int _get_kMaxAfterCutScore();
    // Set static field: static private System.Int32 kMaxAfterCutScore
    static void _set_kMaxAfterCutScore(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1121AC0
    // Get static field: static private readonly ScoreMultiplierCounter _scoreMultiplierCounter
    static ::GlobalNamespace::ScoreMultiplierCounter* _get__scoreMultiplierCounter();
    // Set static field: static private readonly ScoreMultiplierCounter _scoreMultiplierCounter
    static void _set__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);
    // public System.Void .ctor()
    // Offset: 0x148DF7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreModel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x148DF84
    static void _cctor();
    // static public ScoreModel/NoteScoreDefinition GetNoteScoreDefinition(NoteData/ScoringType scoringType)
    // Offset: 0x148D4EC
    static ::GlobalNamespace::ScoreModel::NoteScoreDefinition* GetNoteScoreDefinition(::GlobalNamespace::NoteData::ScoringType scoringType);
    // static public System.Int32 ComputeMaxMultipliedScoreForBeatmap(IReadonlyBeatmapData beatmapData)
    // Offset: 0x148D570
    static int ComputeMaxMultipliedScoreForBeatmap(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static public System.Int32 GetModifiedScoreForGameplayModifiersScoreMultiplier(System.Int32 multipliedScore, System.Single gameplayModifiersScoreMultiplier)
    // Offset: 0x148C9F0
    static int GetModifiedScoreForGameplayModifiersScoreMultiplier(int multipliedScore, float gameplayModifiersScoreMultiplier);
  }; // ScoreModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ScoreModel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::GetNoteScoreDefinition
// Il2CppName: GetNoteScoreDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreModel::NoteScoreDefinition* (*)(::GlobalNamespace::NoteData::ScoringType)>(&GlobalNamespace::ScoreModel::GetNoteScoreDefinition)> {
  static const MethodInfo* get() {
    static auto* scoringType = &::il2cpp_utils::GetClassFromName("", "NoteData/ScoringType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "GetNoteScoreDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoringType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap
// Il2CppName: ComputeMaxMultipliedScoreForBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "ComputeMaxMultipliedScoreForBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier
// Il2CppName: GetModifiedScoreForGameplayModifiersScoreMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, float)>(&GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier)> {
  static const MethodInfo* get() {
    static auto* multipliedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameplayModifiersScoreMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "GetModifiedScoreForGameplayModifiersScoreMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multipliedScore, gameplayModifiersScoreMultiplier});
  }
};
