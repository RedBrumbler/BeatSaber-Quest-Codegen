// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: PS4ApplicationCategory
#include "GlobalNamespace/PS4ApplicationCategory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PS4PublisherSKUSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4PublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.String _skuName
    // Size: 0x8
    // Offset: 0x18
    ::StringW skuName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _serviceIdPrefix
    // Size: 0x8
    // Offset: 0x20
    ::StringW serviceIdPrefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _titleId
    // Size: 0x8
    // Offset: 0x28
    ::StringW titleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _productLabel
    // Size: 0x8
    // Offset: 0x30
    ::StringW productLabel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _parentalLockLevel
    // Size: 0x4
    // Offset: 0x38
    int parentalLockLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: parentalLockLevel and: npTitleFilenamePath
    char __padding4[0x4] = {};
    // private System.String _npTitleFilenamePath
    // Size: 0x8
    // Offset: 0x40
    ::StringW npTitleFilenamePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _defaultAgeRestriction
    // Size: 0x4
    // Offset: 0x48
    int defaultAgeRestriction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private PS4ApplicationCategory _applicationCategory
    // Size: 0x4
    // Offset: 0x4C
    ::GlobalNamespace::PS4ApplicationCategory applicationCategory;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PS4ApplicationCategory) == 0x4);
    // private System.String _masterVersion
    // Size: 0x8
    // Offset: 0x50
    ::StringW masterVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _applicationVersion
    // Size: 0x8
    // Offset: 0x58
    ::StringW applicationVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _skuName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__skuName();
    // Get instance field reference: private System.String _serviceIdPrefix
    [[deprecated("Use field access instead!")]] ::StringW& dyn__serviceIdPrefix();
    // Get instance field reference: private System.String _titleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__titleId();
    // Get instance field reference: private System.String _productLabel
    [[deprecated("Use field access instead!")]] ::StringW& dyn__productLabel();
    // Get instance field reference: private System.Int32 _parentalLockLevel
    [[deprecated("Use field access instead!")]] int& dyn__parentalLockLevel();
    // Get instance field reference: private System.String _npTitleFilenamePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__npTitleFilenamePath();
    // Get instance field reference: private System.Int32 _defaultAgeRestriction
    [[deprecated("Use field access instead!")]] int& dyn__defaultAgeRestriction();
    // Get instance field reference: private PS4ApplicationCategory _applicationCategory
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PS4ApplicationCategory& dyn__applicationCategory();
    // Get instance field reference: private System.String _masterVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn__masterVersion();
    // Get instance field reference: private System.String _applicationVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn__applicationVersion();
    // public System.String get_skuName()
    // Offset: 0x138FD50
    ::StringW get_skuName();
    // public System.String get_serviceIdPrefix()
    // Offset: 0x138FD58
    ::StringW get_serviceIdPrefix();
    // public System.String get_titleId()
    // Offset: 0x138FD60
    ::StringW get_titleId();
    // public System.String get_productLabel()
    // Offset: 0x138FD68
    ::StringW get_productLabel();
    // public System.Int32 get_parentalLockLevel()
    // Offset: 0x138FD70
    int get_parentalLockLevel();
    // public System.String get_npTitleFilenamePath()
    // Offset: 0x138FD78
    ::StringW get_npTitleFilenamePath();
    // public System.Int32 get_defaultAgeRestriction()
    // Offset: 0x138FD80
    int get_defaultAgeRestriction();
    // public PS4ApplicationCategory get_applicationCategory()
    // Offset: 0x138FD88
    ::GlobalNamespace::PS4ApplicationCategory get_applicationCategory();
    // public System.String get_masterVersion()
    // Offset: 0x138FD90
    ::StringW get_masterVersion();
    // public System.String get_applicationVersion()
    // Offset: 0x138FD98
    ::StringW get_applicationVersion();
    // public System.Void .ctor()
    // Offset: 0x138FDA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4PublisherSKUSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4PublisherSKUSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4PublisherSKUSettingsSO*, creationType>()));
    }
  }; // PS4PublisherSKUSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(PS4PublisherSKUSettingsSO), 88 + sizeof(::StringW)> __GlobalNamespace_PS4PublisherSKUSettingsSOSizeCheck;
  static_assert(sizeof(PS4PublisherSKUSettingsSO) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_skuName
// Il2CppName: get_skuName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_skuName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_skuName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_serviceIdPrefix
// Il2CppName: get_serviceIdPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_serviceIdPrefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_serviceIdPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_titleId
// Il2CppName: get_titleId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_titleId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_titleId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_productLabel
// Il2CppName: get_productLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_productLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_productLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel
// Il2CppName: get_parentalLockLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_parentalLockLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath
// Il2CppName: get_npTitleFilenamePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_npTitleFilenamePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction
// Il2CppName: get_defaultAgeRestriction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_defaultAgeRestriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationCategory
// Il2CppName: get_applicationCategory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PS4ApplicationCategory (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationCategory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_applicationCategory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_masterVersion
// Il2CppName: get_masterVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_masterVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_masterVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationVersion
// Il2CppName: get_applicationVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PublisherSKUSettingsSO*), "get_applicationVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PublisherSKUSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
