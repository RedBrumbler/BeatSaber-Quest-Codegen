// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.Binder.BindToMethod
System::Reflection::MethodBase* System::Reflection::Binder::BindToMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<::CsObject*>*& args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::CsString*>* names, ::CsObject*& state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "BindToMethod", bindingAttr, match, args, modifiers, culture, names, state));
}
// Autogenerated method: System.Reflection.Binder.BindToField
System::Reflection::FieldInfo* System::Reflection::Binder::BindToField(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::FieldInfo*>* match, ::CsObject* value, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::FieldInfo*>(this, "BindToField", bindingAttr, match, value, culture));
}
// Autogenerated method: System.Reflection.Binder.SelectMethod
System::Reflection::MethodBase* System::Reflection::Binder::SelectMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "SelectMethod", bindingAttr, match, types, modifiers));
}
// Autogenerated method: System.Reflection.Binder.SelectProperty
System::Reflection::PropertyInfo* System::Reflection::Binder::SelectProperty(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* indexes, ::Array<System::Reflection::ParameterModifier>* modifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::PropertyInfo*>(this, "SelectProperty", bindingAttr, match, returnType, indexes, modifiers));
}
// Autogenerated method: System.Reflection.Binder.ChangeType
::CsObject* System::Reflection::Binder::ChangeType(::CsObject* value, System::Type* type, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "ChangeType", value, type, culture));
}
// Autogenerated method: System.Reflection.Binder.ReorderArgumentArray
void System::Reflection::Binder::ReorderArgumentArray(::Array<::CsObject*>*& args, ::CsObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReorderArgumentArray", args, state));
}
// Autogenerated method: System.Reflection.Binder..ctor
System::Reflection::Binder* System::Reflection::Binder::New_ctor() {
  return (Binder*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "Binder"));
}
