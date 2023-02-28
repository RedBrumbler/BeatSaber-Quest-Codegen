// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
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
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmap
  class PreviewDifficultyBeatmap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmap*, "", "PreviewDifficultyBeatmap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: PreviewDifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewDifficultyBeatmap : public ::Il2CppObject/*, public ::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*/ {
    public:
    public:
    // private IPreviewBeatmapLevel <beatmapLevel>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>
    operator ::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*>(this);
    }
    // Creating interface conversion operator: i_PreviewDifficultyBeatmap
    inline ::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* i_PreviewDifficultyBeatmap() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*>(this);
    }
    // Get instance field reference: private IPreviewBeatmapLevel <beatmapLevel>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_$beatmapLevel$k__BackingField();
    // Get instance field reference: private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_$beatmapCharacteristic$k__BackingField();
    // Get instance field reference: private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_$beatmapDifficulty$k__BackingField();
    // public IPreviewBeatmapLevel get_beatmapLevel()
    // Offset: 0x145C828
    ::GlobalNamespace::IPreviewBeatmapLevel* get_beatmapLevel();
    // public System.Void set_beatmapLevel(IPreviewBeatmapLevel value)
    // Offset: 0x145C830
    void set_beatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x145C838
    ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x145C840
    void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0x145C848
    ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // public System.Void set_beatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0x145C850
    void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);
    // public System.Void .ctor(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x145C858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewDifficultyBeatmap* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PreviewDifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewDifficultyBeatmap*, creationType>(beatmapLevel, beatmapCharacteristic, beatmapDifficulty)));
    }
    // public System.Boolean Equals(PreviewDifficultyBeatmap other)
    // Offset: 0x145C898
    bool Equals(::GlobalNamespace::PreviewDifficultyBeatmap* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x145C95C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x145CA6C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // PreviewDifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(PreviewDifficultyBeatmap), 32 + sizeof(::GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_PreviewDifficultyBeatmapSizeCheck;
  static_assert(sizeof(PreviewDifficultyBeatmap) == 0x24);
  // static public System.Boolean op_Equality(PreviewDifficultyBeatmap a, PreviewDifficultyBeatmap b)
  // Offset: 0x145CB44
  bool operator ==(::GlobalNamespace::PreviewDifficultyBeatmap* a, ::GlobalNamespace::PreviewDifficultyBeatmap& b);
  // static public System.Boolean op_Inequality(PreviewDifficultyBeatmap a, PreviewDifficultyBeatmap b)
  // Offset: 0x145CB60
  bool operator !=(::GlobalNamespace::PreviewDifficultyBeatmap* a, ::GlobalNamespace::PreviewDifficultyBeatmap& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapLevel
// Il2CppName: get_beatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::PreviewDifficultyBeatmap::*)()>(&GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "get_beatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapLevel
// Il2CppName: set_beatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewDifficultyBeatmap::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "set_beatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::PreviewDifficultyBeatmap::*)()>(&GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapCharacteristic
// Il2CppName: set_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewDifficultyBeatmap::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "set_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapDifficulty
// Il2CppName: get_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (GlobalNamespace::PreviewDifficultyBeatmap::*)()>(&GlobalNamespace::PreviewDifficultyBeatmap::get_beatmapDifficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "get_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapDifficulty
// Il2CppName: set_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewDifficultyBeatmap::*)(::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::PreviewDifficultyBeatmap::set_beatmapDifficulty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "set_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PreviewDifficultyBeatmap::*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(&GlobalNamespace::PreviewDifficultyBeatmap::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PreviewDifficultyBeatmap::*)(::Il2CppObject*)>(&GlobalNamespace::PreviewDifficultyBeatmap::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PreviewDifficultyBeatmap::*)()>(&GlobalNamespace::PreviewDifficultyBeatmap::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmap*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmap::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
