// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
// Including type: System.Configuration.ConfigurationPropertyCollection
#include "System/Configuration/ConfigurationPropertyCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Configuration.ConfigurationElement.get_Properties
System::Configuration::ConfigurationPropertyCollection* System::Configuration::ConfigurationElement::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Configuration::ConfigurationPropertyCollection*>(this, "get_Properties"));
}
// Autogenerated method: System.Configuration.ConfigurationElement.IsModified
bool System::Configuration::ConfigurationElement::IsModified() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsModified"));
}
// Autogenerated method: System.Configuration.ConfigurationElement.Reset
void System::Configuration::ConfigurationElement::Reset(System::Configuration::ConfigurationElement* parentElement) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", parentElement));
}
// Autogenerated method: System.Configuration.ConfigurationElement.ResetModified
void System::Configuration::ConfigurationElement::ResetModified() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetModified"));
}