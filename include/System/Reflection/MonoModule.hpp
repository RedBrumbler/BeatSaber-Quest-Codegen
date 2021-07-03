// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeModule
#include "System/Reflection/RuntimeModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MonoModule
  // [ComVisibleAttribute] Offset: D7C508
  // [ClassInterfaceAttribute] Offset: D7C508
  // [ComDefaultInterfaceAttribute] Offset: D7C508
  class MonoModule : public System::Reflection::RuntimeModule {
    public:
    // Creating value type constructor for type: MonoModule
    MonoModule() noexcept {}
    // System.Reflection.RuntimeAssembly GetRuntimeAssembly()
    // Offset: 0x1C80BB4
    System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1C809D4
    // Implemented from: System.Reflection.Module
    // Base method: System.Reflection.Assembly Module::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_ScopeName()
    // Offset: 0x1C809DC
    // Implemented from: System.Reflection.Module
    // Base method: System.String Module::get_ScopeName()
    ::Il2CppString* get_ScopeName();
    // public override System.Guid get_ModuleVersionId()
    // Offset: 0x1C809E4
    // Implemented from: System.Reflection.Module
    // Base method: System.Guid Module::get_ModuleVersionId()
    System::Guid get_ModuleVersionId();
    // public override System.Boolean IsResource()
    // Offset: 0x1C809F0
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsResource()
    bool IsResource();
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C809F8
    // Implemented from: System.Reflection.Module
    // Base method: System.Object[] Module::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C80A78
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C80AF8
    // Implemented from: System.Reflection.Module
    // Base method: System.Void Module::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x1C80C34
    // Implemented from: System.Reflection.RuntimeModule
    // Base method: System.Void RuntimeModule::.ctor()
    // Base method: System.Void Module::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoModule*, creationType>()));
    }
  }; // System.Reflection.MonoModule
  #pragma pack(pop)
  // Writing MetadataGetter for method: MonoModule::GetRuntimeAssembly
  // Il2CppName: GetRuntimeAssembly
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly* (MonoModule::*)()>(&MonoModule::GetRuntimeAssembly)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "GetRuntimeAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MonoModule::get_Assembly
  // Il2CppName: get_Assembly
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (MonoModule::*)()>(&MonoModule::get_Assembly)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MonoModule::get_ScopeName
  // Il2CppName: get_ScopeName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MonoModule::*)()>(&MonoModule::get_ScopeName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "get_ScopeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MonoModule::get_ModuleVersionId
  // Il2CppName: get_ModuleVersionId
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (MonoModule::*)()>(&MonoModule::get_ModuleVersionId)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "get_ModuleVersionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MonoModule::IsResource
  // Il2CppName: IsResource
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MonoModule::*)()>(&MonoModule::IsResource)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "IsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MonoModule::GetCustomAttributes
  // Il2CppName: GetCustomAttributes
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (MonoModule::*)(System::Type*, bool)>(&MonoModule::GetCustomAttributes)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: MonoModule::IsDefined
  // Il2CppName: IsDefined
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MonoModule::*)(System::Type*, bool)>(&MonoModule::IsDefined)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: MonoModule::GetObjectData
  // Il2CppName: GetObjectData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MonoModule::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&MonoModule::GetObjectData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  // Writing MetadataGetter for method: MonoModule::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MonoModule::*)()>(&MonoModule::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MonoModule::*)()>(&MonoModule::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MonoModule*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoModule*, "System.Reflection", "MonoModule");
