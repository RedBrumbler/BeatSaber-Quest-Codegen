// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorBindInfo
  // [NoReflectionBakingAttribute] Offset: DDD1B4
  class SubContainerCreatorBindInfo : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDDF1EC
    // private System.String <DefaultParentName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DefaultParentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDDF1FC
    // private System.Boolean <CreateKernel>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool CreateKernel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CreateKernel and: KernelType
    char __padding1[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDDF20C
    // private System.Type <KernelType>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Type* KernelType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorBindInfo
    SubContainerCreatorBindInfo(::Il2CppString* DefaultParentName_ = {}, bool CreateKernel_ = {}, System::Type* KernelType_ = {}) noexcept : DefaultParentName{DefaultParentName_}, CreateKernel{CreateKernel_}, KernelType{KernelType_} {}
    // public System.String get_DefaultParentName()
    // Offset: 0x16E97CC
    ::Il2CppString* get_DefaultParentName();
    // public System.Void set_DefaultParentName(System.String value)
    // Offset: 0x16E97D4
    void set_DefaultParentName(::Il2CppString* value);
    // public System.Boolean get_CreateKernel()
    // Offset: 0x16E97DC
    bool get_CreateKernel();
    // public System.Void set_CreateKernel(System.Boolean value)
    // Offset: 0x16E97E4
    void set_CreateKernel(bool value);
    // public System.Type get_KernelType()
    // Offset: 0x16E97F0
    System::Type* get_KernelType();
    // public System.Void set_KernelType(System.Type value)
    // Offset: 0x16E97F8
    void set_KernelType(System::Type* value);
    // public System.Void .ctor()
    // Offset: 0x16E7880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorBindInfo*, creationType>()));
    }
  }; // Zenject.SubContainerCreatorBindInfo
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorBindInfo), 32 + sizeof(System::Type*)> __Zenject_SubContainerCreatorBindInfoSizeCheck;
  static_assert(sizeof(SubContainerCreatorBindInfo) == 0x28);
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::get_DefaultParentName
  // Il2CppName: get_DefaultParentName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (SubContainerCreatorBindInfo::*)()>(&SubContainerCreatorBindInfo::get_DefaultParentName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "get_DefaultParentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::set_DefaultParentName
  // Il2CppName: set_DefaultParentName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorBindInfo::*)(::Il2CppString*)>(&SubContainerCreatorBindInfo::set_DefaultParentName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "set_DefaultParentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::get_CreateKernel
  // Il2CppName: get_CreateKernel
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SubContainerCreatorBindInfo::*)()>(&SubContainerCreatorBindInfo::get_CreateKernel)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "get_CreateKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::set_CreateKernel
  // Il2CppName: set_CreateKernel
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorBindInfo::*)(bool)>(&SubContainerCreatorBindInfo::set_CreateKernel)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "set_CreateKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::get_KernelType
  // Il2CppName: get_KernelType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (SubContainerCreatorBindInfo::*)()>(&SubContainerCreatorBindInfo::get_KernelType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "get_KernelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::set_KernelType
  // Il2CppName: set_KernelType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorBindInfo::*)(System::Type*)>(&SubContainerCreatorBindInfo::set_KernelType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), "set_KernelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: SubContainerCreatorBindInfo::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorBindInfo::*)()>(&SubContainerCreatorBindInfo::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SubContainerCreatorBindInfo::*)()>(&SubContainerCreatorBindInfo::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SubContainerCreatorBindInfo*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorBindInfo*, "Zenject", "SubContainerCreatorBindInfo");
