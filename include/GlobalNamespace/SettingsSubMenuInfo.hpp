// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SettingsSubMenuInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsSubMenuInfo*, "", "SettingsSubMenuInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SettingsSubMenuInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsSubMenuInfo : public ::Il2CppObject {
    public:
    public:
    // private HMUI.ViewController _viewController
    // Size: 0x8
    // Offset: 0x10
    ::HMUI::ViewController* viewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x112B084
    // private System.String _menuName
    // Size: 0x8
    // Offset: 0x18
    ::StringW menuName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private HMUI.ViewController _viewController
    [[deprecated("Use field access instead!")]] ::HMUI::ViewController*& dyn__viewController();
    // Get instance field reference: private System.String _menuName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__menuName();
    // public HMUI.ViewController get_viewController()
    // Offset: 0x141CEF8
    ::HMUI::ViewController* get_viewController();
    // public System.String get_localizedMenuName()
    // Offset: 0x141CF00
    ::StringW get_localizedMenuName();
    // public System.Void .ctor()
    // Offset: 0x141CF0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsSubMenuInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SettingsSubMenuInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsSubMenuInfo*, creationType>()));
    }
  }; // SettingsSubMenuInfo
  #pragma pack(pop)
  static check_size<sizeof(SettingsSubMenuInfo), 24 + sizeof(::StringW)> __GlobalNamespace_SettingsSubMenuInfoSizeCheck;
  static_assert(sizeof(SettingsSubMenuInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SettingsSubMenuInfo::get_viewController
// Il2CppName: get_viewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (GlobalNamespace::SettingsSubMenuInfo::*)()>(&GlobalNamespace::SettingsSubMenuInfo::get_viewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsSubMenuInfo*), "get_viewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName
// Il2CppName: get_localizedMenuName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SettingsSubMenuInfo::*)()>(&GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsSubMenuInfo*), "get_localizedMenuName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsSubMenuInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
