// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeGenericParamInfoHandle
#include "Mono/RuntimeGenericParamInfoHandle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.GenericParameterAttributes
#include "System/Reflection/GenericParameterAttributes.hpp"
// Including type: Mono.RuntimeStructs/GenericParamInfo
#include "Mono/RuntimeStructs_GenericParamInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.RuntimeGenericParamInfoHandle..ctor
Mono::RuntimeGenericParamInfoHandle* Mono::RuntimeGenericParamInfoHandle::New_ctor(System::IntPtr ptr) {
  return (RuntimeGenericParamInfoHandle*)THROW_UNLESS(il2cpp_utils::New("Mono", "RuntimeGenericParamInfoHandle", ptr));
}
// Autogenerated method: Mono.RuntimeGenericParamInfoHandle.get_Constraints
::Array<System::Type*>* Mono::RuntimeGenericParamInfoHandle::get_Constraints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(*this, "get_Constraints"));
}
// Autogenerated method: Mono.RuntimeGenericParamInfoHandle.get_Attributes
System::Reflection::GenericParameterAttributes Mono::RuntimeGenericParamInfoHandle::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::GenericParameterAttributes>(*this, "get_Attributes"));
}
// Autogenerated method: Mono.RuntimeGenericParamInfoHandle.GetConstraints
::Array<System::Type*>* Mono::RuntimeGenericParamInfoHandle::GetConstraints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(*this, "GetConstraints"));
}
// Autogenerated method: Mono.RuntimeGenericParamInfoHandle.GetConstraintsCount
int Mono::RuntimeGenericParamInfoHandle::GetConstraintsCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetConstraintsCount"));
}