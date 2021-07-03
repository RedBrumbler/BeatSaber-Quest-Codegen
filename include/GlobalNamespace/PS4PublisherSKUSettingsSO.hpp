// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _skuName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* skuName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _contentId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* contentId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _parentalLockLevel
    // Size: 0x4
    // Offset: 0x28
    int parentalLockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: parentalLockLevel and: npTitleFilenamePath
    char __padding2[0x4] = {};
    // private System.String _npTitleFilenamePath
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* npTitleFilenamePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _defaultAgeRestriction
    // Size: 0x4
    // Offset: 0x38
    int defaultAgeRestriction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PS4PublisherSKUSettingsSO
    PS4PublisherSKUSettingsSO(::Il2CppString* skuName_ = {}, ::Il2CppString* contentId_ = {}, int parentalLockLevel_ = {}, ::Il2CppString* npTitleFilenamePath_ = {}, int defaultAgeRestriction_ = {}) noexcept : skuName{skuName_}, contentId{contentId_}, parentalLockLevel{parentalLockLevel_}, npTitleFilenamePath{npTitleFilenamePath_}, defaultAgeRestriction{defaultAgeRestriction_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_skuName()
    // Offset: 0x104ACF0
    ::Il2CppString* get_skuName();
    // public System.String get_contentId()
    // Offset: 0x104ACF8
    ::Il2CppString* get_contentId();
    // public System.Int32 get_parentalLockLevel()
    // Offset: 0x104AD00
    int get_parentalLockLevel();
    // public System.String get_npTitleFilenamePath()
    // Offset: 0x104AD08
    ::Il2CppString* get_npTitleFilenamePath();
    // public System.Int32 get_defaultAgeRestriction()
    // Offset: 0x104AD10
    int get_defaultAgeRestriction();
    // public System.Void .ctor()
    // Offset: 0x104AD18
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4PublisherSKUSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4PublisherSKUSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4PublisherSKUSettingsSO*, creationType>()));
    }
  }; // PS4PublisherSKUSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(PS4PublisherSKUSettingsSO), 56 + sizeof(int)> __GlobalNamespace_PS4PublisherSKUSettingsSOSizeCheck;
  static_assert(sizeof(PS4PublisherSKUSettingsSO) == 0x3C);
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::get_skuName
  // Il2CppName: get_skuName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::get_skuName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), "get_skuName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::get_contentId
  // Il2CppName: get_contentId
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::get_contentId)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), "get_contentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::get_parentalLockLevel
  // Il2CppName: get_parentalLockLevel
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::get_parentalLockLevel)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), "get_parentalLockLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::get_npTitleFilenamePath
  // Il2CppName: get_npTitleFilenamePath
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::get_npTitleFilenamePath)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), "get_npTitleFilenamePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::get_defaultAgeRestriction
  // Il2CppName: get_defaultAgeRestriction
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::get_defaultAgeRestriction)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), "get_defaultAgeRestriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: PS4PublisherSKUSettingsSO::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PS4PublisherSKUSettingsSO::*)()>(&PS4PublisherSKUSettingsSO::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PS4PublisherSKUSettingsSO*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
