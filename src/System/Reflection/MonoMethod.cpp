// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MonoMethod
#include "System/Reflection/MonoMethod.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.PInvokeAttributes
#include "System/Reflection/PInvokeAttributes.hpp"
// Including type: System.Reflection.MethodImplAttributes
#include "System/Reflection/MethodImplAttributes.hpp"
// Including type: System.RuntimeMethodHandle
#include "System/RuntimeMethodHandle.hpp"
// Including type: System.Reflection.MethodAttributes
#include "System/Reflection/MethodAttributes.hpp"
// Including type: System.Reflection.CallingConventions
#include "System/Reflection/CallingConventions.hpp"
// Including type: System.Reflection.MethodBody
#include "System/Reflection/MethodBody.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.MonoMethod.get_name
::CsString* System::Reflection::MonoMethod::get_name(System::Reflection::MethodBase* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Reflection", "MonoMethod", "get_name", method));
}
// Autogenerated method: System.Reflection.MonoMethod.get_base_method
System::Reflection::MonoMethod* System::Reflection::MonoMethod::get_base_method(System::Reflection::MonoMethod* method, bool definition) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MonoMethod*>("System.Reflection", "MonoMethod", "get_base_method", method, definition));
}
// Autogenerated method: System.Reflection.MonoMethod.InternalInvoke
::CsObject* System::Reflection::MonoMethod::InternalInvoke(::CsObject* obj, ::Array<::CsObject*>* parameters, System::Exception*& exc) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "InternalInvoke", obj, parameters, exc));
}
// Autogenerated method: System.Reflection.MonoMethod.ConvertValues
void System::Reflection::MonoMethod::ConvertValues(System::Reflection::Binder* binder, ::Array<::CsObject*>* args, ::Array<System::Reflection::ParameterInfo*>* pinfo, System::Globalization::CultureInfo* culture, System::Reflection::BindingFlags invokeAttr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Reflection", "MonoMethod", "ConvertValues", binder, args, pinfo, culture, invokeAttr));
}
// Autogenerated method: System.Reflection.MonoMethod.GetPInvoke
void System::Reflection::MonoMethod::GetPInvoke(System::Reflection::PInvokeAttributes& flags, ::CsString*& entryPoint, ::CsString*& dllName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetPInvoke", flags, entryPoint, dllName));
}
// Autogenerated method: System.Reflection.MonoMethod.GetPseudoCustomAttributes
::Array<::CsObject*>* System::Reflection::MonoMethod::GetPseudoCustomAttributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetPseudoCustomAttributes"));
}
// Autogenerated method: System.Reflection.MonoMethod.MakeGenericMethod_impl
System::Reflection::MethodInfo* System::Reflection::MonoMethod::MakeGenericMethod_impl(::Array<System::Type*>* types) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "MakeGenericMethod_impl", types));
}
// Autogenerated method: System.Reflection.MonoMethod.GetGenericMethodDefinition_impl
System::Reflection::MethodInfo* System::Reflection::MonoMethod::GetGenericMethodDefinition_impl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetGenericMethodDefinition_impl"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_core_clr_security_level
int System::Reflection::MonoMethod::get_core_clr_security_level() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Reflection", "MonoMethod", "get_core_clr_security_level"));
}
// Autogenerated method: System.Reflection.MonoMethod..ctor
System::Reflection::MonoMethod* System::Reflection::MonoMethod::New_ctor() {
  return (MonoMethod*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "MonoMethod"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetBaseDefinition
System::Reflection::MethodInfo* System::Reflection::MonoMethod::GetBaseDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetBaseDefinition"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetBaseMethod
System::Reflection::MethodInfo* System::Reflection::MonoMethod::GetBaseMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetBaseMethod"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_ReturnType
System::Type* System::Reflection::MonoMethod::get_ReturnType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ReturnType"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetMethodImplementationFlags
System::Reflection::MethodImplAttributes System::Reflection::MonoMethod::GetMethodImplementationFlags() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodImplAttributes>(this, "GetMethodImplementationFlags"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetParameters
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MonoMethod::GetParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetParameters"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetParametersInternal
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MonoMethod::GetParametersInternal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetParametersInternal"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetParametersCount
int System::Reflection::MonoMethod::GetParametersCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParametersCount"));
}
// Autogenerated method: System.Reflection.MonoMethod.Invoke
::CsObject* System::Reflection::MonoMethod::Invoke(::CsObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* parameters, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "Invoke", obj, invokeAttr, binder, parameters, culture));
}
// Autogenerated method: System.Reflection.MonoMethod.get_MethodHandle
System::RuntimeMethodHandle System::Reflection::MonoMethod::get_MethodHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::RuntimeMethodHandle>(this, "get_MethodHandle"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_Attributes
System::Reflection::MethodAttributes System::Reflection::MonoMethod::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodAttributes>(this, "get_Attributes"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_CallingConvention
System::Reflection::CallingConventions System::Reflection::MonoMethod::get_CallingConvention() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::CallingConventions>(this, "get_CallingConvention"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_ReflectedType
System::Type* System::Reflection::MonoMethod::get_ReflectedType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ReflectedType"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_DeclaringType
System::Type* System::Reflection::MonoMethod::get_DeclaringType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_DeclaringType"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_Name
::CsString* System::Reflection::MonoMethod::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Reflection.MonoMethod.IsDefined
bool System::Reflection::MonoMethod::IsDefined(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsDefined", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MonoMethod.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MonoMethod::GetCustomAttributes(bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", inherit));
}
// Autogenerated method: System.Reflection.MonoMethod.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MonoMethod::GetCustomAttributes(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MonoMethod.MakeGenericMethod
System::Reflection::MethodInfo* System::Reflection::MonoMethod::MakeGenericMethod(::Array<System::Type*>* methodInstantiation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "MakeGenericMethod", methodInstantiation));
}
// Autogenerated method: System.Reflection.MonoMethod.GetGenericArguments
::Array<System::Type*>* System::Reflection::MonoMethod::GetGenericArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetGenericArguments"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetGenericMethodDefinition
System::Reflection::MethodInfo* System::Reflection::MonoMethod::GetGenericMethodDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetGenericMethodDefinition"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_IsGenericMethodDefinition
bool System::Reflection::MonoMethod::get_IsGenericMethodDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsGenericMethodDefinition"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_IsGenericMethod
bool System::Reflection::MonoMethod::get_IsGenericMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsGenericMethod"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_ContainsGenericParameters
bool System::Reflection::MonoMethod::get_ContainsGenericParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ContainsGenericParameters"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetMethodBody
System::Reflection::MethodBody* System::Reflection::MonoMethod::GetMethodBody() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBody*>(this, "GetMethodBody"));
}
// Autogenerated method: System.Reflection.MonoMethod.GetCustomAttributesData
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::MonoMethod::GetCustomAttributesData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>(this, "GetCustomAttributesData"));
}
// Autogenerated method: System.Reflection.MonoMethod.get_IsSecurityCritical
bool System::Reflection::MonoMethod::get_IsSecurityCritical() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsSecurityCritical"));
}
