// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader_TopLevelAssemblyTypeResolver.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver..ctor
System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver* System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::New_ctor(System::Reflection::Assembly* topLevelAssembly) {
  return (ObjectReader::TopLevelAssemblyTypeResolver*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver", topLevelAssembly));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver.ResolveType
System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::ResolveType(System::Reflection::Assembly* assembly, ::CsString* simpleTypeName, bool ignoreCase) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "ResolveType", assembly, simpleTypeName, ignoreCase));
}
