// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
// Including type: System.Reflection.MonoProperty/GetterAdapter
#include "System/Reflection/MonoProperty_GetterAdapter.hpp"
// Including type: System.Reflection.MonoProperty/Getter`2
#include "System/Reflection/MonoProperty_Getter_2.hpp"
// Including type: System.Reflection.MonoProperty/StaticGetter`1
#include "System/Reflection/MonoProperty_StaticGetter_1.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Reflection.PropertyAttributes
#include "System/Reflection/PropertyAttributes.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.MonoProperty.CachePropertyInfo
void System::Reflection::MonoProperty::CachePropertyInfo(System::Reflection::PInfo flags) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CachePropertyInfo", flags));
}
// Autogenerated method: System.Reflection.MonoProperty.CreateGetterDelegate
System::Reflection::MonoProperty::GetterAdapter* System::Reflection::MonoProperty::CreateGetterDelegate(System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MonoProperty::GetterAdapter*>("System.Reflection", "MonoProperty", "CreateGetterDelegate", method));
}
// Autogenerated method: System.Reflection.MonoProperty.get_Attributes
System::Reflection::PropertyAttributes System::Reflection::MonoProperty::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::PropertyAttributes>(this, "get_Attributes"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_CanRead
bool System::Reflection::MonoProperty::get_CanRead() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanRead"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_CanWrite
bool System::Reflection::MonoProperty::get_CanWrite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanWrite"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_PropertyType
System::Type* System::Reflection::MonoProperty::get_PropertyType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_PropertyType"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_ReflectedType
System::Type* System::Reflection::MonoProperty::get_ReflectedType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ReflectedType"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_DeclaringType
System::Type* System::Reflection::MonoProperty::get_DeclaringType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_DeclaringType"));
}
// Autogenerated method: System.Reflection.MonoProperty.get_Name
::CsString* System::Reflection::MonoProperty::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Reflection.MonoProperty.GetAccessors
::Array<System::Reflection::MethodInfo*>* System::Reflection::MonoProperty::GetAccessors(bool nonPublic) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::MethodInfo*>*>(this, "GetAccessors", nonPublic));
}
// Autogenerated method: System.Reflection.MonoProperty.GetGetMethod
System::Reflection::MethodInfo* System::Reflection::MonoProperty::GetGetMethod(bool nonPublic) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetGetMethod", nonPublic));
}
// Autogenerated method: System.Reflection.MonoProperty.GetIndexParameters
::Array<System::Reflection::ParameterInfo*>* System::Reflection::MonoProperty::GetIndexParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::ParameterInfo*>*>(this, "GetIndexParameters"));
}
// Autogenerated method: System.Reflection.MonoProperty.GetSetMethod
System::Reflection::MethodInfo* System::Reflection::MonoProperty::GetSetMethod(bool nonPublic) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetSetMethod", nonPublic));
}
// Autogenerated method: System.Reflection.MonoProperty.GetConstantValue
::CsObject* System::Reflection::MonoProperty::GetConstantValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetConstantValue"));
}
// Autogenerated method: System.Reflection.MonoProperty.GetRawConstantValue
::CsObject* System::Reflection::MonoProperty::GetRawConstantValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetRawConstantValue"));
}
// Autogenerated method: System.Reflection.MonoProperty.IsDefined
bool System::Reflection::MonoProperty::IsDefined(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsDefined", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MonoProperty.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MonoProperty::GetCustomAttributes(bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", inherit));
}
// Autogenerated method: System.Reflection.MonoProperty.GetCustomAttributes
::Array<::CsObject*>* System::Reflection::MonoProperty::GetCustomAttributes(System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "GetCustomAttributes", attributeType, inherit));
}
// Autogenerated method: System.Reflection.MonoProperty.GetValue
::CsObject* System::Reflection::MonoProperty::GetValue(::CsObject* obj, ::Array<::CsObject*>* index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetValue", obj, index));
}
// Autogenerated method: System.Reflection.MonoProperty.GetValue
::CsObject* System::Reflection::MonoProperty::GetValue(::CsObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* index, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetValue", obj, invokeAttr, binder, index, culture));
}
// Autogenerated method: System.Reflection.MonoProperty.SetValue
void System::Reflection::MonoProperty::SetValue(::CsObject* obj, ::CsObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* index, System::Globalization::CultureInfo* culture) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetValue", obj, value, invokeAttr, binder, index, culture));
}
// Autogenerated method: System.Reflection.MonoProperty.GetOptionalCustomModifiers
::Array<System::Type*>* System::Reflection::MonoProperty::GetOptionalCustomModifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetOptionalCustomModifiers"));
}
// Autogenerated method: System.Reflection.MonoProperty.GetRequiredCustomModifiers
::Array<System::Type*>* System::Reflection::MonoProperty::GetRequiredCustomModifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetRequiredCustomModifiers"));
}
// Autogenerated method: System.Reflection.MonoProperty.GetCustomAttributesData
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::Reflection::MonoProperty::GetCustomAttributesData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>(this, "GetCustomAttributesData"));
}
// Autogenerated method: System.Reflection.MonoProperty..ctor
System::Reflection::MonoProperty* System::Reflection::MonoProperty::New_ctor() {
  return (MonoProperty*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "MonoProperty"));
}
