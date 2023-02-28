// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteData/GameplayType
#include "GlobalNamespace/NoteData.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockNoteData
  class MockNoteData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockNoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNoteData*, "", "MockNoteData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MockNoteData
  // [TokenAttribute] Offset: FFFFFFFF
  class MockNoteData : public ::Il2CppObject {
    public:
    public:
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteData/GameplayType <gameplayType>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::NoteData::GameplayType gameplayType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::GameplayType) == 0x4);
    // private ColorType <colorType>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // private NoteCutDirection <cutDirection>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single <time>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField();
    // Get instance field reference: private System.Int32 <lineIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$lineIndex$k__BackingField();
    // Get instance field reference: private NoteData/GameplayType <gameplayType>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteData::GameplayType& dyn_$gameplayType$k__BackingField();
    // Get instance field reference: private ColorType <colorType>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorType& dyn_$colorType$k__BackingField();
    // Get instance field reference: private NoteCutDirection <cutDirection>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_$cutDirection$k__BackingField();
    // Get instance field reference: private NoteLineLayer <noteLineLayer>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_$noteLineLayer$k__BackingField();
    // Get instance field reference: private System.Single <duration>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$duration$k__BackingField();
    // public System.Single get_time()
    // Offset: 0x2B5634C
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x2B56354
    void set_time(float value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x2B5635C
    int get_lineIndex();
    // public System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x2B56364
    void set_lineIndex(int value);
    // public NoteData/GameplayType get_gameplayType()
    // Offset: 0x2B5636C
    ::GlobalNamespace::NoteData::GameplayType get_gameplayType();
    // public System.Void set_gameplayType(NoteData/GameplayType value)
    // Offset: 0x2B56374
    void set_gameplayType(::GlobalNamespace::NoteData::GameplayType value);
    // public ColorType get_colorType()
    // Offset: 0x2B5637C
    ::GlobalNamespace::ColorType get_colorType();
    // public System.Void set_colorType(ColorType value)
    // Offset: 0x2B56384
    void set_colorType(::GlobalNamespace::ColorType value);
    // public NoteCutDirection get_cutDirection()
    // Offset: 0x2B5638C
    ::GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void set_cutDirection(NoteCutDirection value)
    // Offset: 0x2B56394
    void set_cutDirection(::GlobalNamespace::NoteCutDirection value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x2B5639C
    ::GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // public System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x2B563A4
    void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);
    // public System.Single get_duration()
    // Offset: 0x2B563AC
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x2B563B4
    void set_duration(float value);
    // public System.Void .ctor()
    // Offset: 0x2B56414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNoteData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockNoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNoteData*, creationType>()));
    }
    // public System.Void Mirror(System.Int32 lineCount)
    // Offset: 0x2B563BC
    void Mirror(int lineCount);
  }; // MockNoteData
  #pragma pack(pop)
  static check_size<sizeof(MockNoteData), 40 + sizeof(float)> __GlobalNamespace_MockNoteDataSizeCheck;
  static_assert(sizeof(MockNoteData) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(float)>(&GlobalNamespace::MockNoteData::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_lineIndex
// Il2CppName: set_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(int)>(&GlobalNamespace::MockNoteData::set_lineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_gameplayType
// Il2CppName: get_gameplayType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData::GameplayType (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_gameplayType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_gameplayType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_gameplayType
// Il2CppName: set_gameplayType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteData::GameplayType)>(&GlobalNamespace::MockNoteData::set_gameplayType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteData/GameplayType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_gameplayType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_colorType
// Il2CppName: get_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_colorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_colorType
// Il2CppName: set_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(::GlobalNamespace::ColorType)>(&GlobalNamespace::MockNoteData::set_colorType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_cutDirection
// Il2CppName: get_cutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_cutDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_cutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_cutDirection
// Il2CppName: set_cutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteCutDirection)>(&GlobalNamespace::MockNoteData::set_cutDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_cutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_noteLineLayer
// Il2CppName: get_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_noteLineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_noteLineLayer
// Il2CppName: set_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::MockNoteData::set_noteLineLayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockNoteData::*)()>(&GlobalNamespace::MockNoteData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(float)>(&GlobalNamespace::MockNoteData::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockNoteData::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNoteData::*)(int)>(&GlobalNamespace::MockNoteData::Mirror)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNoteData*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
