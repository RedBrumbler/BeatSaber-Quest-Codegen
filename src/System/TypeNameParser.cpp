// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeNameParser
#include "System/TypeNameParser.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Reflection.AssemblyName
#include "System/Reflection/AssemblyName.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Func`4
#include "System/Func_4.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TypeNameParser.GetType
System::Type* System::TypeNameParser::GetType(::Il2CppString* typeName, System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase, System::Threading::StackCrawlMark& stackMark) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>("System", "TypeNameParser", "GetType", typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark));
}