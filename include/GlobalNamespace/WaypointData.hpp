// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WaypointData
  class WaypointData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointData*, "", "WaypointData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: WaypointData
  // [TokenAttribute] Offset: FFFFFFFF
  class WaypointData : public ::GlobalNamespace::BeatmapObjectData {
    public:
    public:
    // private OffsetDirection <offsetDirection>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OffsetDirection offsetDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OffsetDirection) == 0x4);
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer <lineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    public:
    // Get instance field reference: private OffsetDirection <offsetDirection>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OffsetDirection& dyn_$offsetDirection$k__BackingField();
    // Get instance field reference: private System.Int32 <lineIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$lineIndex$k__BackingField();
    // Get instance field reference: private NoteLineLayer <lineLayer>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_$lineLayer$k__BackingField();
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x26F34F8
    ::GlobalNamespace::OffsetDirection get_offsetDirection();
    // private System.Void set_offsetDirection(OffsetDirection value)
    // Offset: 0x26F3500
    void set_offsetDirection(::GlobalNamespace::OffsetDirection value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x26F3508
    int get_lineIndex();
    // private System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x26F3510
    void set_lineIndex(int value);
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x26F3518
    ::GlobalNamespace::NoteLineLayer get_lineLayer();
    // protected System.Void set_lineLayer(NoteLineLayer value)
    // Offset: 0x26F3520
    void set_lineLayer(::GlobalNamespace::NoteLineLayer value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, OffsetDirection offsetDirection)
    // Offset: 0x26F35B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointData* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WaypointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointData*, creationType>(time, lineIndex, lineLayer, offsetDirection)));
    }
    // private System.Void MirrorTransformOffsetDirection()
    // Offset: 0x26F3628
    void MirrorTransformOffsetDirection();
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x26F3528
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // public override System.Void Mirror(System.Int32 lineCount)
    // Offset: 0x26F3614
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::Mirror(System.Int32 lineCount)
    void Mirror(int lineCount);
  }; // WaypointData
  #pragma pack(pop)
  static check_size<sizeof(WaypointData), 40 + sizeof(::GlobalNamespace::NoteLineLayer)> __GlobalNamespace_WaypointDataSizeCheck;
  static_assert(sizeof(WaypointData) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_offsetDirection
// Il2CppName: get_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_offsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::set_offsetDirection
// Il2CppName: set_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(::GlobalNamespace::OffsetDirection)>(&GlobalNamespace::WaypointData::set_offsetDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OffsetDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "set_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::set_lineIndex
// Il2CppName: set_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(int)>(&GlobalNamespace::WaypointData::set_lineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "set_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::set_lineLayer
// Il2CppName: set_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(::GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::WaypointData::set_lineLayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "set_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::MirrorTransformOffsetDirection
// Il2CppName: MirrorTransformOffsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::MirrorTransformOffsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "MirrorTransformOffsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(int)>(&GlobalNamespace::WaypointData::Mirror)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
