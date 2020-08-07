// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Skipping declaration: UltimateResourceFallbackLocation because it is already included!
  // Forward declaring type: ResourceSet
  class ResourceSet;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ManifestBasedResourceGroveler
  class ManifestBasedResourceGroveler : public ::Il2CppObject, public System::Resources::IResourceGroveler {
    public:
    // private System.Resources.ResourceManager/ResourceManagerMediator _mediator
    // Offset: 0x10
    System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // public System.Void .ctor(System.Resources.ResourceManager/ResourceManagerMediator mediator)
    // Offset: 0x114392C
    static ManifestBasedResourceGroveler* New_ctor(System::Resources::ResourceManager::ResourceManagerMediator* mediator);
    // private System.Globalization.CultureInfo UltimateFallbackFixup(System.Globalization.CultureInfo lookForCulture)
    // Offset: 0x1143BE8
    System::Globalization::CultureInfo* UltimateFallbackFixup(System::Globalization::CultureInfo* lookForCulture);
    // static System.Globalization.CultureInfo GetNeutralResourcesLanguage(System.Reflection.Assembly a, System.Resources.UltimateResourceFallbackLocation fallbackLocation)
    // Offset: 0x1144FF8
    static System::Globalization::CultureInfo* GetNeutralResourcesLanguage(System::Reflection::Assembly* a, System::Resources::UltimateResourceFallbackLocation& fallbackLocation);
    // System.Resources.ResourceSet CreateResourceSet(System.IO.Stream store, System.Reflection.Assembly assembly)
    // Offset: 0x1144384
    System::Resources::ResourceSet* CreateResourceSet(System::IO::Stream* store, System::Reflection::Assembly* assembly);
    // private System.IO.Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, System.String fileName, System.Threading.StackCrawlMark stackMark)
    // Offset: 0x11442A8
    System::IO::Stream* GetManifestResourceStream(System::Reflection::RuntimeAssembly* satellite, ::Il2CppString* fileName, System::Threading::StackCrawlMark& stackMark);
    // private System.IO.Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, System.String name)
    // Offset: 0x1145648
    System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(System::Reflection::RuntimeAssembly* satellite, ::Il2CppString* name);
    // private System.Reflection.RuntimeAssembly GetSatelliteAssembly(System.Globalization.CultureInfo lookForCulture, System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1143DB0
    System::Reflection::RuntimeAssembly* GetSatelliteAssembly(System::Globalization::CultureInfo* lookForCulture, System::Threading::StackCrawlMark& stackMark);
    // private System.Boolean CanUseDefaultResourceClasses(System.String readerTypeName, System.String resSetTypeName)
    // Offset: 0x11453C4
    bool CanUseDefaultResourceClasses(::Il2CppString* readerTypeName, ::Il2CppString* resSetTypeName);
    // private System.String GetSatelliteAssemblyName()
    // Offset: 0x1145A98
    ::Il2CppString* GetSatelliteAssemblyName();
    // private System.Void HandleSatelliteMissing()
    // Offset: 0x1143F5C
    void HandleSatelliteMissing();
    // private System.Void HandleResourceStreamMissing(System.String fileName)
    // Offset: 0x1144CE8
    void HandleResourceStreamMissing(::Il2CppString* fileName);
    // static private System.Boolean GetNeutralResourcesLanguageAttribute(System.Reflection.Assembly assembly, System.String cultureName, System.Int16 fallbackLocation)
    // Offset: 0x114533C
    static bool GetNeutralResourcesLanguageAttribute(System::Reflection::Assembly* assembly, ::Il2CppString*& cultureName, int16_t& fallbackLocation);
    // public System.Resources.ResourceSet GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1143960
    // Implemented from: System.Resources.IResourceGroveler
    // Base method: System.Resources.ResourceSet IResourceGroveler::GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, System.Threading.StackCrawlMark stackMark)
    System::Resources::ResourceSet* GrovelForResourceSet(System::Globalization::CultureInfo* culture, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* localResourceSets, bool tryParents, bool createIfNotExists, System::Threading::StackCrawlMark& stackMark);
  }; // System.Resources.ManifestBasedResourceGroveler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
#pragma pack(pop)