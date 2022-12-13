// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicCollectionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // public System.Boolean _ignore360MovementCharacteristics
    // Size: 0x1
    // Offset: 0x18
    bool ignore360MovementCharacteristics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignore360MovementCharacteristics and: beatmapCharacteristics
    char __padding0[0x7] = {};
    // private BeatmapCharacteristicSO[] _beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*>) == 0x8);
    // private BeatmapCharacteristicSO[] _no360beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> no360beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean _ignore360MovementCharacteristics
    [[deprecated("Use field access instead!")]] bool& dyn__ignore360MovementCharacteristics();
    // Get instance field reference: private BeatmapCharacteristicSO[] _beatmapCharacteristics
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*>& dyn__beatmapCharacteristics();
    // Get instance field reference: private BeatmapCharacteristicSO[] _no360beatmapCharacteristics
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*>& dyn__no360beatmapCharacteristics();
    // public BeatmapCharacteristicSO[] get_beatmapCharacteristics()
    // Offset: 0x13B0A54
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> get_beatmapCharacteristics();
    // public System.Void .ctor()
    // Offset: 0x13B0D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicCollectionSO*, creationType>()));
    }
    // public BeatmapCharacteristicSO GetBeatmapCharacteristicBySerializedName(System.String serializedName)
    // Offset: 0x13B0AD4
    ::GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::StringW serializedName);
    // public System.Boolean ContainsBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x13B0B60
    bool ContainsBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void InitData()
    // Offset: 0x13B0AA8
    void InitData();
    // private BeatmapCharacteristicSO[] GetCharacteristicsWithout360Movement()
    // Offset: 0x13B0C40
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> GetCharacteristicsWithout360Movement();
    // protected override System.Void OnEnable()
    // Offset: 0x13B0A70
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // BeatmapCharacteristicCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicCollectionSO), 40 + sizeof(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*>)> __GlobalNamespace_BeatmapCharacteristicCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicCollectionSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::get_beatmapCharacteristics
// Il2CppName: get_beatmapCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::get_beatmapCharacteristics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "get_beatmapCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::GetBeatmapCharacteristicBySerializedName
// Il2CppName: GetBeatmapCharacteristicBySerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)(::StringW)>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::GetBeatmapCharacteristicBySerializedName)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "GetBeatmapCharacteristicBySerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::ContainsBeatmapCharacteristic
// Il2CppName: ContainsBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::ContainsBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "ContainsBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::InitData
// Il2CppName: InitData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::InitData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "InitData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::GetCharacteristicsWithout360Movement
// Il2CppName: GetCharacteristicsWithout360Movement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::GetCharacteristicsWithout360Movement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "GetCharacteristicsWithout360Movement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicCollectionSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&GlobalNamespace::BeatmapCharacteristicCollectionSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicCollectionSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
