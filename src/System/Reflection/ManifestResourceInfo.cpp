// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ManifestResourceInfo
#include "System/Reflection/ManifestResourceInfo.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.ManifestResourceInfo..ctor
System::Reflection::ManifestResourceInfo* System::Reflection::ManifestResourceInfo::New_ctor(System::Reflection::Assembly* containingAssembly, ::Il2CppString* containingFileName, System::Reflection::ResourceLocation resourceLocation) {
  return (ManifestResourceInfo*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "ManifestResourceInfo", containingAssembly, containingFileName, resourceLocation));
}
// Autogenerated method: System.Reflection.ManifestResourceInfo.get_ReferencedAssembly
System::Reflection::Assembly* System::Reflection::ManifestResourceInfo::get_ReferencedAssembly() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "get_ReferencedAssembly"));
}
// Autogenerated method: System.Reflection.ManifestResourceInfo.get_FileName
::Il2CppString* System::Reflection::ManifestResourceInfo::get_FileName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_FileName"));
}
// Autogenerated method: System.Reflection.ManifestResourceInfo.get_ResourceLocation
System::Reflection::ResourceLocation System::Reflection::ManifestResourceInfo::get_ResourceLocation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::ResourceLocation>(this, "get_ResourceLocation"));
}