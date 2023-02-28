// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoRichPresencePlatformHandler
  class NoRichPresencePlatformHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoRichPresencePlatformHandler*, "", "NoRichPresencePlatformHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NoRichPresencePlatformHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class NoRichPresencePlatformHandler : public ::Il2CppObject/*, public ::GlobalNamespace::IRichPresencePlatformHandler*/ {
    public:
    public:
    // private System.String <currentPresenceApiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW currentPresenceApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRichPresencePlatformHandler
    operator ::GlobalNamespace::IRichPresencePlatformHandler() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(this);
    }
    // Creating interface conversion operator: i_IRichPresencePlatformHandler
    inline ::GlobalNamespace::IRichPresencePlatformHandler* i_IRichPresencePlatformHandler() noexcept {
      return reinterpret_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return currentPresenceApiName;
    }
    // Get instance field reference: private System.String <currentPresenceApiName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$currentPresenceApiName$k__BackingField();
    // public System.String get_currentPresenceApiName()
    // Offset: 0x14385E8
    ::StringW get_currentPresenceApiName();
    // private System.Void set_currentPresenceApiName(System.String value)
    // Offset: 0x14385F0
    void set_currentPresenceApiName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1438710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoRichPresencePlatformHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoRichPresencePlatformHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoRichPresencePlatformHandler*, creationType>()));
    }
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0x14385F8
    void SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0x14386B8
    void Clear();
  }; // NoRichPresencePlatformHandler
  #pragma pack(pop)
  static check_size<sizeof(NoRichPresencePlatformHandler), 16 + sizeof(::StringW)> __GlobalNamespace_NoRichPresencePlatformHandlerSizeCheck;
  static_assert(sizeof(NoRichPresencePlatformHandler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoRichPresencePlatformHandler::get_currentPresenceApiName
// Il2CppName: get_currentPresenceApiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NoRichPresencePlatformHandler::*)()>(&GlobalNamespace::NoRichPresencePlatformHandler::get_currentPresenceApiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoRichPresencePlatformHandler*), "get_currentPresenceApiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoRichPresencePlatformHandler::set_currentPresenceApiName
// Il2CppName: set_currentPresenceApiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoRichPresencePlatformHandler::*)(::StringW)>(&GlobalNamespace::NoRichPresencePlatformHandler::set_currentPresenceApiName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoRichPresencePlatformHandler*), "set_currentPresenceApiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoRichPresencePlatformHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoRichPresencePlatformHandler::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData*)>(&GlobalNamespace::NoRichPresencePlatformHandler::SetPresence)> {
  static const MethodInfo* get() {
    static auto* richPresenceData = &::il2cpp_utils::GetClassFromName("", "IRichPresenceData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoRichPresencePlatformHandler*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{richPresenceData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoRichPresencePlatformHandler::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoRichPresencePlatformHandler::*)()>(&GlobalNamespace::NoRichPresencePlatformHandler::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoRichPresencePlatformHandler*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
