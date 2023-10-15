// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PoolableSerializable
#include "GlobalNamespace/PoolableSerializable.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: SliderData/Type
#include "GlobalNamespace/SliderData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: SliderMidAnchorMode
#include "GlobalNamespace/SliderMidAnchorMode.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderSpawnInfoNetSerializable
  class SliderSpawnInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderSpawnInfoNetSerializable*, "", "SliderSpawnInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC4
  #pragma pack(push, 1)
  // Autogenerated type: SliderSpawnInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
    public:
    public:
    // public ColorType colorType
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // public SliderData/Type sliderType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::SliderData::Type sliderType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderData::Type) == 0x4);
    // public System.Boolean hasHeadNote
    // Size: 0x1
    // Offset: 0x1C
    bool hasHeadNote;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasHeadNote and: headTime
    char __padding2[0x3] = {};
    // public System.Single headTime
    // Size: 0x4
    // Offset: 0x20
    float headTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 headLineIndex
    // Size: 0x4
    // Offset: 0x24
    int headLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer headLineLayer
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::NoteLineLayer headLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public NoteLineLayer headBeforeJumpLineLayer
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single headControlPointLengthMultiplier
    // Size: 0x4
    // Offset: 0x30
    float headControlPointLengthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public NoteCutDirection headCutDirection
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::NoteCutDirection headCutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // public System.Single headCutDirectionAngleOffset
    // Size: 0x4
    // Offset: 0x38
    float headCutDirectionAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean hasTailNote
    // Size: 0x1
    // Offset: 0x3C
    bool hasTailNote;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasTailNote and: tailTime
    char __padding10[0x3] = {};
    // public System.Single tailTime
    // Size: 0x4
    // Offset: 0x40
    float tailTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 tailLineIndex
    // Size: 0x4
    // Offset: 0x44
    int tailLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer tailLineLayer
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::NoteLineLayer tailLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public NoteLineLayer tailBeforeJumpLineLayer
    // Size: 0x4
    // Offset: 0x4C
    ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single tailControlPointLengthMultiplier
    // Size: 0x4
    // Offset: 0x50
    float tailControlPointLengthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public NoteCutDirection tailCutDirection
    // Size: 0x4
    // Offset: 0x54
    ::GlobalNamespace::NoteCutDirection tailCutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // public System.Single tailCutDirectionAngleOffset
    // Size: 0x4
    // Offset: 0x58
    float tailCutDirectionAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public SliderMidAnchorMode midAnchorMode
    // Size: 0x4
    // Offset: 0x5C
    ::GlobalNamespace::SliderMidAnchorMode midAnchorMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderMidAnchorMode) == 0x4);
    // public System.Int32 sliceCount
    // Size: 0x4
    // Offset: 0x60
    int sliceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single squishAmount
    // Size: 0x4
    // Offset: 0x64
    float squishAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable headMoveStartPos
    // Size: 0xC
    // Offset: 0x68
    ::GlobalNamespace::Vector3Serializable headMoveStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable headJumpStartPos
    // Size: 0xC
    // Offset: 0x74
    ::GlobalNamespace::Vector3Serializable headJumpStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable headJumpEndPos
    // Size: 0xC
    // Offset: 0x80
    ::GlobalNamespace::Vector3Serializable headJumpEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public System.Single headJumpGravity
    // Size: 0x4
    // Offset: 0x8C
    float headJumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable tailMoveStartPos
    // Size: 0xC
    // Offset: 0x90
    ::GlobalNamespace::Vector3Serializable tailMoveStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable tailJumpStartPos
    // Size: 0xC
    // Offset: 0x9C
    ::GlobalNamespace::Vector3Serializable tailJumpStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable tailJumpEndPos
    // Size: 0xC
    // Offset: 0xA8
    ::GlobalNamespace::Vector3Serializable tailJumpEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public System.Single tailJumpGravity
    // Size: 0x4
    // Offset: 0xB4
    float tailJumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single moveDuration
    // Size: 0x4
    // Offset: 0xB8
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single jumpDuration
    // Size: 0x4
    // Offset: 0xBC
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0xC0
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public ColorType colorType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorType& dyn_colorType();
    // Get instance field reference: public SliderData/Type sliderType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderData::Type& dyn_sliderType();
    // Get instance field reference: public System.Boolean hasHeadNote
    [[deprecated("Use field access instead!")]] bool& dyn_hasHeadNote();
    // Get instance field reference: public System.Single headTime
    [[deprecated("Use field access instead!")]] float& dyn_headTime();
    // Get instance field reference: public System.Int32 headLineIndex
    [[deprecated("Use field access instead!")]] int& dyn_headLineIndex();
    // Get instance field reference: public NoteLineLayer headLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_headLineLayer();
    // Get instance field reference: public NoteLineLayer headBeforeJumpLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_headBeforeJumpLineLayer();
    // Get instance field reference: public System.Single headControlPointLengthMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_headControlPointLengthMultiplier();
    // Get instance field reference: public NoteCutDirection headCutDirection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_headCutDirection();
    // Get instance field reference: public System.Single headCutDirectionAngleOffset
    [[deprecated("Use field access instead!")]] float& dyn_headCutDirectionAngleOffset();
    // Get instance field reference: public System.Boolean hasTailNote
    [[deprecated("Use field access instead!")]] bool& dyn_hasTailNote();
    // Get instance field reference: public System.Single tailTime
    [[deprecated("Use field access instead!")]] float& dyn_tailTime();
    // Get instance field reference: public System.Int32 tailLineIndex
    [[deprecated("Use field access instead!")]] int& dyn_tailLineIndex();
    // Get instance field reference: public NoteLineLayer tailLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_tailLineLayer();
    // Get instance field reference: public NoteLineLayer tailBeforeJumpLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_tailBeforeJumpLineLayer();
    // Get instance field reference: public System.Single tailControlPointLengthMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_tailControlPointLengthMultiplier();
    // Get instance field reference: public NoteCutDirection tailCutDirection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_tailCutDirection();
    // Get instance field reference: public System.Single tailCutDirectionAngleOffset
    [[deprecated("Use field access instead!")]] float& dyn_tailCutDirectionAngleOffset();
    // Get instance field reference: public SliderMidAnchorMode midAnchorMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderMidAnchorMode& dyn_midAnchorMode();
    // Get instance field reference: public System.Int32 sliceCount
    [[deprecated("Use field access instead!")]] int& dyn_sliceCount();
    // Get instance field reference: public System.Single squishAmount
    [[deprecated("Use field access instead!")]] float& dyn_squishAmount();
    // Get instance field reference: public Vector3Serializable headMoveStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_headMoveStartPos();
    // Get instance field reference: public Vector3Serializable headJumpStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_headJumpStartPos();
    // Get instance field reference: public Vector3Serializable headJumpEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_headJumpEndPos();
    // Get instance field reference: public System.Single headJumpGravity
    [[deprecated("Use field access instead!")]] float& dyn_headJumpGravity();
    // Get instance field reference: public Vector3Serializable tailMoveStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_tailMoveStartPos();
    // Get instance field reference: public Vector3Serializable tailJumpStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_tailJumpStartPos();
    // Get instance field reference: public Vector3Serializable tailJumpEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_tailJumpEndPos();
    // Get instance field reference: public System.Single tailJumpGravity
    [[deprecated("Use field access instead!")]] float& dyn_tailJumpGravity();
    // Get instance field reference: public System.Single moveDuration
    [[deprecated("Use field access instead!")]] float& dyn_moveDuration();
    // Get instance field reference: public System.Single jumpDuration
    [[deprecated("Use field access instead!")]] float& dyn_jumpDuration();
    // Get instance field reference: public System.Single rotation
    [[deprecated("Use field access instead!")]] float& dyn_rotation();
    // static public SliderSpawnInfoNetSerializable Obtain()
    // Offset: 0x2A22BAC
    static ::GlobalNamespace::SliderSpawnInfoNetSerializable* Obtain();
    // public SliderSpawnInfoNetSerializable Init(ColorType colorType, SliderData/Type sliderType, System.Boolean hasHeadNote, System.Single headTime, System.Int32 headLineIndex, NoteLineLayer headLineLayer, NoteLineLayer headBeforeJumpLineLayer, System.Single headControlPointLengthMultiplier, NoteCutDirection headCutDirection, System.Single headCutDirectionAngleOffset, System.Boolean hasTailNote, System.Single tailTime, System.Int32 tailLineIndex, NoteLineLayer tailLineLayer, NoteLineLayer tailBeforeJumpLineLayer, System.Single tailControlPointLengthMultiplier, NoteCutDirection tailCutDirection, System.Single tailCutDirectionAngleOffset, SliderMidAnchorMode midAnchorMode, System.Int32 sliceCount, System.Single squishAmount, UnityEngine.Vector3 headMoveStartPos, UnityEngine.Vector3 headJumpStartPos, UnityEngine.Vector3 headJumpEndPos, System.Single headJumpGravity, UnityEngine.Vector3 tailMoveStartPos, UnityEngine.Vector3 tailJumpStartPos, UnityEngine.Vector3 tailJumpEndPos, System.Single tailJumpGravity, System.Single moveDuration, System.Single jumpDuration, System.Single rotation)
    // Offset: 0x2A22BF4
    ::GlobalNamespace::SliderSpawnInfoNetSerializable* Init(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::SliderData::Type sliderType, bool hasHeadNote, float headTime, int headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float headCutDirectionAngleOffset, bool hasTailNote, float tailTime, int tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, float tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int sliceCount, float squishAmount, ::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float tailJumpGravity, float moveDuration, float jumpDuration, float rotation);
    // public System.Void .ctor()
    // Offset: 0x2A22E40
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderSpawnInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderSpawnInfoNetSerializable*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A22E48
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A23120
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // SliderSpawnInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(SliderSpawnInfoNetSerializable), 192 + sizeof(float)> __GlobalNamespace_SliderSpawnInfoNetSerializableSizeCheck;
  static_assert(sizeof(SliderSpawnInfoNetSerializable) == 0xC4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain
// Il2CppName: Obtain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (*)()>(&GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderSpawnInfoNetSerializable*), "Obtain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderSpawnInfoNetSerializable::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::GlobalNamespace::ColorType, ::GlobalNamespace::SliderData::Type, bool, float, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float, ::GlobalNamespace::NoteCutDirection, float, bool, float, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float, ::GlobalNamespace::NoteCutDirection, float, ::GlobalNamespace::SliderMidAnchorMode, int, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::SliderSpawnInfoNetSerializable::Init)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* sliderType = &::il2cpp_utils::GetClassFromName("", "SliderData/Type")->byval_arg;
    static auto* hasHeadNote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* headTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* headLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* headBeforeJumpLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* headControlPointLengthMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* headCutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hasTailNote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tailTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tailLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tailLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* tailBeforeJumpLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* tailControlPointLengthMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tailCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* tailCutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* midAnchorMode = &::il2cpp_utils::GetClassFromName("", "SliderMidAnchorMode")->byval_arg;
    static auto* sliceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* squishAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headMoveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* headJumpStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* headJumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* headJumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tailMoveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailJumpStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailJumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailJumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderSpawnInfoNetSerializable*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType, sliderType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount, headMoveStartPos, headJumpStartPos, headJumpEndPos, headJumpGravity, tailMoveStartPos, tailJumpStartPos, tailJumpEndPos, tailJumpGravity, moveDuration, jumpDuration, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderSpawnInfoNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderSpawnInfoNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};