// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.DelegateData
#include "System/DelegateData.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Delegate.get_Method
System::Reflection::MethodInfo* System::Delegate::get_Method() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "get_Method"));
}
// Autogenerated method: System.Delegate.GetVirtualMethod_internal
System::Reflection::MethodInfo* System::Delegate::GetVirtualMethod_internal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetVirtualMethod_internal"));
}
// Autogenerated method: System.Delegate.get_Target
::Il2CppObject* System::Delegate::get_Target() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Target"));
}
// Autogenerated method: System.Delegate.CreateDelegate_internal
System::Delegate* System::Delegate::CreateDelegate_internal(System::Type* type, ::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate_internal", type, target, info, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.arg_type_match
bool System::Delegate::arg_type_match(System::Type* delArgType, System::Type* argType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Delegate", "arg_type_match", delArgType, argType));
}
// Autogenerated method: System.Delegate.arg_type_match_this
bool System::Delegate::arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Delegate", "arg_type_match_this", delArgType, argType, boxedThis));
}
// Autogenerated method: System.Delegate.return_type_match
bool System::Delegate::return_type_match(System::Type* delReturnType, System::Type* returnType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Delegate", "return_type_match", delReturnType, returnType));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, firstArgument, method, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, firstArgument, method, throwOnBindFailure, allowClosed));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, firstArgument, method));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, method, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, method));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, target, method));
}
// Autogenerated method: System.Delegate.GetCandidateMethod
System::Reflection::MethodInfo* System::Delegate::GetCandidateMethod(System::Type* type, System::Type* target, ::Il2CppString* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>("System", "Delegate", "GetCandidateMethod", type, target, method, bflags, ignoreCase, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, target, method, ignoreCase, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, target, method));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, target, method, ignoreCase, throwOnBindFailure));
}
// Autogenerated method: System.Delegate.CreateDelegate
System::Delegate* System::Delegate::CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegate", type, target, method, ignoreCase));
}
// Autogenerated method: System.Delegate.GetMethodImpl
System::Reflection::MethodInfo* System::Delegate::GetMethodImpl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetMethodImpl"));
}
// Autogenerated method: System.Delegate.GetInvocationList
::Array<System::Delegate*>* System::Delegate::GetInvocationList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Delegate*>*>(this, "GetInvocationList"));
}
// Autogenerated method: System.Delegate.Combine
System::Delegate* System::Delegate::Combine(System::Delegate* a, System::Delegate* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "Combine", a, b));
}
// Autogenerated method: System.Delegate.Combine
System::Delegate* System::Delegate::Combine(::Array<System::Delegate*>* delegates) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "Combine", delegates));
}
// Autogenerated method: System.Delegate.CombineImpl
System::Delegate* System::Delegate::CombineImpl(System::Delegate* d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>(this, "CombineImpl", d));
}
// Autogenerated method: System.Delegate.Remove
System::Delegate* System::Delegate::Remove(System::Delegate* source, System::Delegate* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "Remove", source, value));
}
// Autogenerated method: System.Delegate.RemoveImpl
System::Delegate* System::Delegate::RemoveImpl(System::Delegate* d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>(this, "RemoveImpl", d));
}
// Autogenerated method: System.Delegate.CreateDelegateNoSecurityCheck
System::Delegate* System::Delegate::CreateDelegateNoSecurityCheck(System::RuntimeType* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Delegate*>("System", "Delegate", "CreateDelegateNoSecurityCheck", type, firstArgument, method));
}
// Autogenerated method: System.Delegate.AllocDelegateLike_internal
System::MulticastDelegate* System::Delegate::AllocDelegateLike_internal(System::Delegate* d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::MulticastDelegate*>("System", "Delegate", "AllocDelegateLike_internal", d));
}
// Autogenerated method: System.Delegate.Clone
::Il2CppObject* System::Delegate::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Clone"));
}
// Autogenerated method: System.Delegate.Equals
bool System::Delegate::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Delegate.GetHashCode
int System::Delegate::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Delegate.GetObjectData
void System::Delegate::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Delegate::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
// Autogenerated method: System.Delegate.op_Equality
bool System::operator ==(System::Delegate* d1, System::Delegate& d2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Delegate", "op_Equality", d1, &d2));
}