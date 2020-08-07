// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MonoCustomAttrs
#include "System/MonoCustomAttrs.hpp"
// Including type: System.MonoCustomAttrs/AttributeInfo
#include "System/MonoCustomAttrs_AttributeInfo.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.AttributeUsageAttribute
#include "System/AttributeUsageAttribute.hpp"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
// Including type: System.Reflection.EventInfo
#include "System/Reflection/EventInfo.hpp"
// Including type: System.Reflection.MonoEvent
#include "System/Reflection/MonoEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Reflection.Assembly corlib
System::Reflection::Assembly* System::MonoCustomAttrs::_get_corlib() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::Assembly*>("System", "MonoCustomAttrs", "corlib"));
}
// Autogenerated static field setter
// Set static field: static private System.Reflection.Assembly corlib
void System::MonoCustomAttrs::_set_corlib(System::Reflection::Assembly* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "MonoCustomAttrs", "corlib", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* System::MonoCustomAttrs::_get_usage_cache() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>*>("System", "MonoCustomAttrs", "usage_cache")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
void System::MonoCustomAttrs::_set_usage_cache(System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "MonoCustomAttrs", "usage_cache", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
System::AttributeUsageAttribute* System::MonoCustomAttrs::_get_DefaultAttributeUsage() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::AttributeUsageAttribute*>("System", "MonoCustomAttrs", "DefaultAttributeUsage"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
void System::MonoCustomAttrs::_set_DefaultAttributeUsage(System::AttributeUsageAttribute* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "MonoCustomAttrs", "DefaultAttributeUsage", value));
}
// Autogenerated method: System.MonoCustomAttrs.IsUserCattrProvider
bool System::MonoCustomAttrs::IsUserCattrProvider(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "MonoCustomAttrs", "IsUserCattrProvider", obj));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributesInternal
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetCustomAttributesInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool pseudoAttrs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetCustomAttributesInternal", obj, attributeType, pseudoAttrs));
}
// Autogenerated method: System.MonoCustomAttrs.GetPseudoCustomAttributes
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetPseudoCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetPseudoCustomAttributes", obj, attributeType));
}
// Autogenerated method: System.MonoCustomAttrs.GetPseudoCustomAttributes
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetPseudoCustomAttributes(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetPseudoCustomAttributes", type));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributesBase
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetCustomAttributesBase(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inheritedOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetCustomAttributesBase", obj, attributeType, inheritedOnly));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributes
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetCustomAttributes", obj, attributeType, inherit));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributes
::Array<::Il2CppObject*>* System::MonoCustomAttrs::GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>("System", "MonoCustomAttrs", "GetCustomAttributes", obj, inherit));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributesDataInternal
::Array<System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesDataInternal(System::Reflection::ICustomAttributeProvider* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::CustomAttributeData*>*>("System", "MonoCustomAttrs", "GetCustomAttributesDataInternal", obj));
}
// Autogenerated method: System.MonoCustomAttrs.GetCustomAttributesData
System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesData(System::Reflection::ICustomAttributeProvider* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>*>("System", "MonoCustomAttrs", "GetCustomAttributesData", obj));
}
// Autogenerated method: System.MonoCustomAttrs.IsDefined
bool System::MonoCustomAttrs::IsDefined(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "MonoCustomAttrs", "IsDefined", obj, attributeType, inherit));
}
// Autogenerated method: System.MonoCustomAttrs.IsDefinedInternal
bool System::MonoCustomAttrs::IsDefinedInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* AttributeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "MonoCustomAttrs", "IsDefinedInternal", obj, AttributeType));
}
// Autogenerated method: System.MonoCustomAttrs.GetBasePropertyDefinition
System::Reflection::PropertyInfo* System::MonoCustomAttrs::GetBasePropertyDefinition(System::Reflection::MonoProperty* property) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::PropertyInfo*>("System", "MonoCustomAttrs", "GetBasePropertyDefinition", property));
}
// Autogenerated method: System.MonoCustomAttrs.GetBaseEventDefinition
System::Reflection::EventInfo* System::MonoCustomAttrs::GetBaseEventDefinition(System::Reflection::MonoEvent* evt) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::EventInfo*>("System", "MonoCustomAttrs", "GetBaseEventDefinition", evt));
}
// Autogenerated method: System.MonoCustomAttrs.GetBase
System::Reflection::ICustomAttributeProvider* System::MonoCustomAttrs::GetBase(System::Reflection::ICustomAttributeProvider* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::ICustomAttributeProvider*>("System", "MonoCustomAttrs", "GetBase", obj));
}
// Autogenerated method: System.MonoCustomAttrs.RetrieveAttributeUsageNoCache
System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsageNoCache(System::Type* attributeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AttributeUsageAttribute*>("System", "MonoCustomAttrs", "RetrieveAttributeUsageNoCache", attributeType));
}
// Autogenerated method: System.MonoCustomAttrs.RetrieveAttributeUsage
System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsage(System::Type* attributeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AttributeUsageAttribute*>("System", "MonoCustomAttrs", "RetrieveAttributeUsage", attributeType));
}
// Autogenerated method: System.MonoCustomAttrs..cctor
void System::MonoCustomAttrs::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "MonoCustomAttrs", ".cctor"));
}