// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.ExceptionHelper
#include "NUnit/Framework/Internal/ExceptionHelper.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
System::Action_1<System::Exception*>* NUnit::Framework::Internal::ExceptionHelper::_get_PreserveStackTrace() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<System::Exception*>*>("NUnit.Framework.Internal", "ExceptionHelper", "PreserveStackTrace"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
void NUnit::Framework::Internal::ExceptionHelper::_set_PreserveStackTrace(System::Action_1<System::Exception*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "ExceptionHelper", "PreserveStackTrace", value));
}
// Autogenerated static field getter
// Get static field: static private System.Action`1<System.Exception> CS$<>9__CachedAnonymousMethodDelegate1
System::Action_1<System::Exception*>* NUnit::Framework::Internal::ExceptionHelper::_get_CS$$$9__CachedAnonymousMethodDelegate1() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<System::Exception*>*>("NUnit.Framework.Internal", "ExceptionHelper", "CS$<>9__CachedAnonymousMethodDelegate1")));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<System.Exception> CS$<>9__CachedAnonymousMethodDelegate1
void NUnit::Framework::Internal::ExceptionHelper::_set_CS$$$9__CachedAnonymousMethodDelegate1(System::Action_1<System::Exception*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "ExceptionHelper", "CS$<>9__CachedAnonymousMethodDelegate1", value));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper..cctor
void NUnit::Framework::Internal::ExceptionHelper::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "ExceptionHelper", ".cctor"));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper.BuildMessage
::Il2CppString* NUnit::Framework::Internal::ExceptionHelper::BuildMessage(System::Exception* exception) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Internal", "ExceptionHelper", "BuildMessage", exception));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper.BuildStackTrace
::Il2CppString* NUnit::Framework::Internal::ExceptionHelper::BuildStackTrace(System::Exception* exception) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Internal", "ExceptionHelper", "BuildStackTrace", exception));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper.GetStackTrace
::Il2CppString* NUnit::Framework::Internal::ExceptionHelper::GetStackTrace(System::Exception* exception) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Internal", "ExceptionHelper", "GetStackTrace", exception));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper.FlattenExceptionHierarchy
System::Collections::Generic::List_1<System::Exception*>* NUnit::Framework::Internal::ExceptionHelper::FlattenExceptionHierarchy(System::Exception* exception) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<System::Exception*>*>("NUnit.Framework.Internal", "ExceptionHelper", "FlattenExceptionHierarchy", exception));
}
// Autogenerated method: NUnit.Framework.Internal.ExceptionHelper.<.cctor>b__0
void NUnit::Framework::Internal::ExceptionHelper::$_cctor$b__0(System::Exception* _) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "ExceptionHelper", "<.cctor>b__0", _));
}