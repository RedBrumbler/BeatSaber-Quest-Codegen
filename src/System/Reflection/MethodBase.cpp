// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.RuntimeMethodHandle
#include "System/RuntimeMethodHandle.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Reflection.MethodImplAttributes
#include "System/Reflection/MethodImplAttributes.hpp"
// Including type: System.Reflection.MethodAttributes
#include "System/Reflection/MethodAttributes.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Reflection.CallingConventions
#include "System/Reflection/CallingConventions.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.MethodBody
#include "System/Reflection/MethodBody.hpp"
// Including type: System.RuntimeTypeHandle
#include "System/RuntimeTypeHandle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.MethodBase.GetMethodFromHandle
System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandle(System::RuntimeMethodHandle handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Reflection", "MethodBase", "GetMethodFromHandle", handle));
}
// Autogenerated method: System.Reflection.MethodBase.GetParametersNoCopy
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MethodBase::GetParametersNoCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetParametersNoCopy"));
}
// Autogenerated method: System.Reflection.MethodBase.GetParameters
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MethodBase::GetParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetParameters"));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodImplementationFlags
System::Reflection::MethodImplAttributes System::Reflection::MethodBase::GetMethodImplementationFlags() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodImplAttributes>(this, "GetMethodImplementationFlags"));
}
// Autogenerated method: System.Reflection.MethodBase.get_MethodHandle
System::RuntimeMethodHandle System::Reflection::MethodBase::get_MethodHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::RuntimeMethodHandle>(this, "get_MethodHandle"));
}
// Autogenerated method: System.Reflection.MethodBase.get_Attributes
System::Reflection::MethodAttributes System::Reflection::MethodBase::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodAttributes>(this, "get_Attributes"));
}
// Autogenerated method: System.Reflection.MethodBase.Invoke
::CsObject* System::Reflection::MethodBase::Invoke(::CsObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* parameters, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "Invoke", obj, invokeAttr, binder, parameters, culture));
}
// Autogenerated method: System.Reflection.MethodBase.get_CallingConvention
System::Reflection::CallingConventions System::Reflection::MethodBase::get_CallingConvention() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::CallingConventions>(this, "get_CallingConvention"));
}
// Autogenerated method: System.Reflection.MethodBase.GetGenericArguments
::Array<System::Type*>* System::Reflection::MethodBase::GetGenericArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetGenericArguments"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsGenericMethodDefinition
bool System::Reflection::MethodBase::get_IsGenericMethodDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsGenericMethodDefinition"));
}
// Autogenerated method: System.Reflection.MethodBase.get_ContainsGenericParameters
bool System::Reflection::MethodBase::get_ContainsGenericParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ContainsGenericParameters"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsGenericMethod
bool System::Reflection::MethodBase::get_IsGenericMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsGenericMethod"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsSecurityCritical
bool System::Reflection::MethodBase::get_IsSecurityCritical() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsSecurityCritical"));
}
// Autogenerated method: System.Reflection.MethodBase.Invoke
::CsObject* System::Reflection::MethodBase::Invoke(::CsObject* obj, ::Array<::CsObject*>* parameters) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "Invoke", obj, parameters));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsPublic
bool System::Reflection::MethodBase::get_IsPublic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPublic"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsFamily
bool System::Reflection::MethodBase::get_IsFamily() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsFamily"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsStatic
bool System::Reflection::MethodBase::get_IsStatic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsStatic"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsVirtual
bool System::Reflection::MethodBase::get_IsVirtual() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsVirtual"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsAbstract
bool System::Reflection::MethodBase::get_IsAbstract() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsAbstract"));
}
// Autogenerated method: System.Reflection.MethodBase.get_IsConstructor
bool System::Reflection::MethodBase::get_IsConstructor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsConstructor"));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodBody
System::Reflection::MethodBody* System::Reflection::MethodBase::GetMethodBody() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBody*>(this, "GetMethodBody"));
}
// Autogenerated method: System.Reflection.MethodBase.ConstructParameters
::CsString* System::Reflection::MethodBase::ConstructParameters(::Array<System::Type*>* parameterTypes, System::Reflection::CallingConventions callingConvention, bool serialization) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Reflection", "MethodBase", "ConstructParameters", parameterTypes, callingConvention, serialization));
}
// Autogenerated method: System.Reflection.MethodBase.FormatNameAndSig
::CsString* System::Reflection::MethodBase::FormatNameAndSig(bool serialization) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "FormatNameAndSig", serialization));
}
// Autogenerated method: System.Reflection.MethodBase.GetParameterTypes
::Array<System::Type*>* System::Reflection::MethodBase::GetParameterTypes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetParameterTypes"));
}
// Autogenerated method: System.Reflection.MethodBase.GetParametersInternal
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MethodBase::GetParametersInternal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetParametersInternal"));
}
// Autogenerated method: System.Reflection.MethodBase.GetParametersCount
int System::Reflection::MethodBase::GetParametersCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParametersCount"));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodFromHandleNoGenericCheck
System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Reflection", "MethodBase", "GetMethodFromHandleNoGenericCheck", handle));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodFromHandleNoGenericCheck
System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle, System::RuntimeTypeHandle reflectedType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Reflection", "MethodBase", "GetMethodFromHandleNoGenericCheck", handle, reflectedType));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodBodyInternal
System::Reflection::MethodBody* System::Reflection::MethodBase::GetMethodBodyInternal(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBody*>("System.Reflection", "MethodBase", "GetMethodBodyInternal", handle));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodBody
System::Reflection::MethodBody* System::Reflection::MethodBase::GetMethodBody(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBody*>("System.Reflection", "MethodBase", "GetMethodBody", handle));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodFromHandleInternalType
System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandleInternalType(System::IntPtr method_handle, System::IntPtr type_handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Reflection", "MethodBase", "GetMethodFromHandleInternalType", method_handle, type_handle));
}
// Autogenerated method: System.Reflection.MethodBase.GetMethodFromHandleInternalType_native
System::Reflection::MethodBase* System::Reflection::MethodBase::GetMethodFromHandleInternalType_native(System::IntPtr method_handle, System::IntPtr type_handle, bool genericCheck) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Reflection", "MethodBase", "GetMethodFromHandleInternalType_native", method_handle, type_handle, genericCheck));
}
// Autogenerated method: System.Reflection.MethodBase..ctor
System::Reflection::MethodBase* System::Reflection::MethodBase::New_ctor() {
  return (MethodBase*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "MethodBase"));
}
// Autogenerated method: System.Reflection.MethodBase.Equals
bool System::Reflection::MethodBase::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Reflection.MethodBase.GetHashCode
int System::Reflection::MethodBase::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Reflection.MethodBase.op_Equality
bool System::Reflection::operator ==(System::Reflection::MethodBase* left, System::Reflection::MethodBase& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MethodBase", "op_Equality", left, &right));
}
// Autogenerated method: System.Reflection.MethodBase.op_Inequality
bool System::Reflection::operator !=(System::Reflection::MethodBase* left, System::Reflection::MethodBase& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MethodBase", "op_Inequality", left, &right));
}
