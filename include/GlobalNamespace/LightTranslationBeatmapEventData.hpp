// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
// Including type: LightAxis
#include "GlobalNamespace/LightAxis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationBeatmapEventData
  class LightTranslationBeatmapEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventData*, "", "LightTranslationBeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: LightTranslationBeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightTranslationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
    public:
    public:
    // public readonly System.Int32 groupId
    // Size: 0x4
    // Offset: 0x30
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x34
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean usePreviousEventValue
    // Size: 0x1
    // Offset: 0x38
    bool usePreviousEventValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePreviousEventValue and: easeType
    char __padding2[0x3] = {};
    // public readonly EaseType easeType
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // public readonly LightAxis axis
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::LightAxis axis;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightAxis) == 0x4);
    // private System.Single <translation>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    float translation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <distribution>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    float distribution;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FB7D4
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightTranslationBeatmapEventData> _defaults
    static ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightTranslationBeatmapEventData*>* _get__defaults();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightTranslationBeatmapEventData> _defaults
    static void _set__defaults(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightTranslationBeatmapEventData*>* value);
    // Get instance field reference: public readonly System.Int32 groupId
    [[deprecated("Use field access instead!")]] int& dyn_groupId();
    // Get instance field reference: public readonly System.Int32 elementId
    [[deprecated("Use field access instead!")]] int& dyn_elementId();
    // Get instance field reference: public readonly System.Boolean usePreviousEventValue
    [[deprecated("Use field access instead!")]] bool& dyn_usePreviousEventValue();
    // Get instance field reference: public readonly EaseType easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn_easeType();
    // Get instance field reference: public readonly LightAxis axis
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightAxis& dyn_axis();
    // Get instance field reference: private System.Single <translation>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$translation$k__BackingField();
    // Get instance field reference: private System.Single <distribution>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$distribution$k__BackingField();
    // public System.Single get_translation()
    // Offset: 0x2703C58
    float get_translation();
    // private System.Void set_translation(System.Single value)
    // Offset: 0x2703C60
    void set_translation(float value);
    // public System.Single get_distribution()
    // Offset: 0x2703C68
    float get_distribution();
    // private System.Void set_distribution(System.Single value)
    // Offset: 0x2703C70
    void set_distribution(float value);
    // public System.Void .ctor(System.Single time, System.Int32 groupId, System.Int32 elementId, System.Boolean usePreviousEventValue, EaseType easeType, LightAxis axis, System.Single translation, System.Single distribution)
    // Offset: 0x2703C78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTranslationBeatmapEventData* New_ctor(float time, int groupId, int elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float translation, float distribution) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTranslationBeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTranslationBeatmapEventData*, creationType>(time, groupId, elementId, usePreviousEventValue, easeType, axis, translation, distribution)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2703F8C
    static void _cctor();
    // public System.Void ChangeTranslation(System.Single translation, System.Single distribution)
    // Offset: 0x2703D80
    void ChangeTranslation(float translation, float distribution);
    // static public System.Int32 SubtypeIdentifier(System.Int32 groupId, System.Int32 elementId, LightAxis axis)
    // Offset: 0x2703D68
    static int SubtypeIdentifier(int groupId, int elementId, ::GlobalNamespace::LightAxis axis);
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x2703D88
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // protected override BeatmapEventData GetDefault()
    // Offset: 0x2703E38
    // Implemented from: BeatmapEventData
    // Base method: BeatmapEventData BeatmapEventData::GetDefault()
    ::GlobalNamespace::BeatmapEventData* GetDefault();
  }; // LightTranslationBeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(LightTranslationBeatmapEventData), 72 + sizeof(float)> __GlobalNamespace_LightTranslationBeatmapEventDataSizeCheck;
  static_assert(sizeof(LightTranslationBeatmapEventData) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::get_translation
// Il2CppName: get_translation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&GlobalNamespace::LightTranslationBeatmapEventData::get_translation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "get_translation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::set_translation
// Il2CppName: set_translation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationBeatmapEventData::*)(float)>(&GlobalNamespace::LightTranslationBeatmapEventData::set_translation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "set_translation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::get_distribution
// Il2CppName: get_distribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&GlobalNamespace::LightTranslationBeatmapEventData::get_distribution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "get_distribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::set_distribution
// Il2CppName: set_distribution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationBeatmapEventData::*)(float)>(&GlobalNamespace::LightTranslationBeatmapEventData::set_distribution)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "set_distribution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LightTranslationBeatmapEventData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::ChangeTranslation
// Il2CppName: ChangeTranslation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationBeatmapEventData::*)(float, float)>(&GlobalNamespace::LightTranslationBeatmapEventData::ChangeTranslation)> {
  static const MethodInfo* get() {
    static auto* translation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* distribution = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "ChangeTranslation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{translation, distribution});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::SubtypeIdentifier
// Il2CppName: SubtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, ::GlobalNamespace::LightAxis)>(&GlobalNamespace::LightTranslationBeatmapEventData::SubtypeIdentifier)> {
  static const MethodInfo* get() {
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* elementId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("", "LightAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "SubtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupId, elementId, axis});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&GlobalNamespace::LightTranslationBeatmapEventData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventData::GetDefault
// Il2CppName: GetDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&GlobalNamespace::LightTranslationBeatmapEventData::GetDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventData*), "GetDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
