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
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListSO*, "", "EnvironmentsListSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentsListSO
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentsListSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private EnvironmentInfoSO[] _environmentInfos
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*> environmentInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private EnvironmentInfoSO[] _environmentInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*>& dyn__environmentInfos();
    // public EnvironmentInfoSO[] get_environmentInfos()
    // Offset: 0x13C2970
    ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*> get_environmentInfos();
    // public System.Void .ctor()
    // Offset: 0x13C2AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentsListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentsListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentsListSO*, creationType>()));
    }
    // public EnvironmentInfoSO GetEnvironmentInfoBySerializedName(System.String environmentSerializedName)
    // Offset: 0x13C2978
    ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName);
    // public System.Collections.Generic.List`1<EnvironmentInfoSO> GetAllEnvironmentInfosWithType(EnvironmentTypeSO environmentType)
    // Offset: 0x13C0744
    ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);
    // public EnvironmentInfoSO GetFirstEnvironmentInfoWithType(EnvironmentTypeSO environmentType)
    // Offset: 0x13C2A04
    ::GlobalNamespace::EnvironmentInfoSO* GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);
    // public EnvironmentInfoSO GetLastEnvironmentInfoWithType(EnvironmentTypeSO environmentType)
    // Offset: 0x13C2A7C
    ::GlobalNamespace::EnvironmentInfoSO* GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);
  }; // EnvironmentsListSO
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentsListSO), 24 + sizeof(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*>)> __GlobalNamespace_EnvironmentsListSOSizeCheck;
  static_assert(sizeof(EnvironmentsListSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::get_environmentInfos
// Il2CppName: get_environmentInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*> (GlobalNamespace::EnvironmentsListSO::*)()>(&GlobalNamespace::EnvironmentsListSO::get_environmentInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "get_environmentInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetEnvironmentInfoBySerializedName
// Il2CppName: GetEnvironmentInfoBySerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::EnvironmentsListSO::*)(::StringW)>(&GlobalNamespace::EnvironmentsListSO::GetEnvironmentInfoBySerializedName)> {
  static const MethodInfo* get() {
    static auto* environmentSerializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetEnvironmentInfoBySerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentSerializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetAllEnvironmentInfosWithType
// Il2CppName: GetAllEnvironmentInfosWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* (GlobalNamespace::EnvironmentsListSO::*)(::GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::EnvironmentsListSO::GetAllEnvironmentInfosWithType)> {
  static const MethodInfo* get() {
    static auto* environmentType = &::il2cpp_utils::GetClassFromName("", "EnvironmentTypeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetAllEnvironmentInfosWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetFirstEnvironmentInfoWithType
// Il2CppName: GetFirstEnvironmentInfoWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::EnvironmentsListSO::*)(::GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::EnvironmentsListSO::GetFirstEnvironmentInfoWithType)> {
  static const MethodInfo* get() {
    static auto* environmentType = &::il2cpp_utils::GetClassFromName("", "EnvironmentTypeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetFirstEnvironmentInfoWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentsListSO::GetLastEnvironmentInfoWithType
// Il2CppName: GetLastEnvironmentInfoWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::EnvironmentsListSO::*)(::GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::EnvironmentsListSO::GetLastEnvironmentInfoWithType)> {
  static const MethodInfo* get() {
    static auto* environmentType = &::il2cpp_utils::GetClassFromName("", "EnvironmentTypeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentsListSO*), "GetLastEnvironmentInfoWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentType});
  }
};
