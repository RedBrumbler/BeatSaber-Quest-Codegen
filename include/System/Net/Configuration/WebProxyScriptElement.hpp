// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Autogenerated type: System.Net.Configuration.WebProxyScriptElement
  class WebProxyScriptElement : public System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0xF55418
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WebProxyScriptElement* New_ctor();
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0xF55458
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.WebProxyScriptElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebProxyScriptElement*, "System.Net.Configuration", "WebProxyScriptElement");
#pragma pack(pop)