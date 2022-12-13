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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductsModelSO*, "", "OculusLevelProductsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OculusLevelProductsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: ::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    public:
    // private OculusLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*> levelPackProductsData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> _assetFileToSku
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* assetFileToSku;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OculusLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>& dyn__levelPackProductsData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelProductData> _levelIdToProductData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>*& dyn__levelIdToProductData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,OculusLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*>*& dyn__levelPackIdToProductData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> _assetFileToSku
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn__assetFileToSku();
    // public OculusLevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0x155E6C8
    ::ArrayW<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*> get_levelPackProductsData();
    // public System.Void .ctor()
    // Offset: 0x155E980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusLevelProductsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusLevelProductsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusLevelProductsModelSO*, creationType>()));
    }
    // public OculusLevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0x15598D4
    ::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData* GetLevelProductData(::StringW levelId);
    // public OculusLevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0x155E880
    ::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);
    // public System.String GetLevelSku(System.String assetFile)
    // Offset: 0x155E900
    ::StringW GetLevelSku(::StringW assetFile);
    // protected override System.Void OnEnable()
    // Offset: 0x155E6D0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // OculusLevelProductsModelSO
  #pragma pack(pop)
  static check_size<sizeof(OculusLevelProductsModelSO), 48 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __GlobalNamespace_OculusLevelProductsModelSOSizeCheck;
  static_assert(sizeof(OculusLevelProductsModelSO) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::get_levelPackProductsData
// Il2CppName: get_levelPackProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*> (GlobalNamespace::OculusLevelProductsModelSO::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::get_levelPackProductsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO*), "get_levelPackProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::GetLevelProductData
// Il2CppName: GetLevelProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OculusLevelProductsModelSO::LevelProductData* (GlobalNamespace::OculusLevelProductsModelSO::*)(::StringW)>(&GlobalNamespace::OculusLevelProductsModelSO::GetLevelProductData)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO*), "GetLevelProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::GetLevelPackProductData
// Il2CppName: GetLevelPackProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData* (GlobalNamespace::OculusLevelProductsModelSO::*)(::StringW)>(&GlobalNamespace::OculusLevelProductsModelSO::GetLevelPackProductData)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO*), "GetLevelPackProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::GetLevelSku
// Il2CppName: GetLevelSku
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OculusLevelProductsModelSO::*)(::StringW)>(&GlobalNamespace::OculusLevelProductsModelSO::GetLevelSku)> {
  static const MethodInfo* get() {
    static auto* assetFile = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO*), "GetLevelSku", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFile});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusLevelProductsModelSO::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
