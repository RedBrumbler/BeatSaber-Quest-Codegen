// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Forward declaring type: ResourceManagerException
  class ResourceManagerException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");
// Type namespace: UnityEngine.ResourceManagement.Exceptions
namespace UnityEngine::ResourceManagement::Exceptions {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceManagerException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F85F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1F85FE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1F86060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo message, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1F860E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerException*, creationType>(message, context)));
    }
  }; // UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Exceptions::ResourceManagerException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
