// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
#include "UnityEngine/AddressableAssets/ResourceLocators/IResourceLocator.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.LegacyResourcesLocator
  class LegacyResourcesLocator : public ::Il2CppObject/*, public UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*/ {
    public:
    // Creating value type constructor for type: LegacyResourcesLocator
    LegacyResourcesLocator() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
    operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() noexcept {
      return *reinterpret_cast<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(this);
    }
    // public System.Boolean Locate(System.Object key, System.Type type, out System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0x13F7608
    bool Locate(::Il2CppObject* key, System::Type* type, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& locations);
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Keys()
    // Offset: 0x13F785C
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Keys();
    // public System.String get_LocatorId()
    // Offset: 0x13F7864
    ::Il2CppString* get_LocatorId();
    // public System.Void .ctor()
    // Offset: 0x13F78AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyResourcesLocator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyResourcesLocator*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.ResourceLocators.LegacyResourcesLocator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "LegacyResourcesLocator");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::Locate
// Il2CppName: Locate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_Keys
// Il2CppName: get_Keys
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::get_LocatorId
// Il2CppName: get_LocatorId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!