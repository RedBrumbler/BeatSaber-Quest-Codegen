// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingEventTypes
#include "System/Diagnostics/Tracing/TraceLoggingEventTypes.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.NameInfo
#include "System/Diagnostics/Tracing/NameInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes..ctor
System::Diagnostics::Tracing::TraceLoggingEventTypes* System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor(::CsString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Type*>* types) {
  return (TraceLoggingEventTypes*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "TraceLoggingEventTypes", name, tags, types));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes..ctor
System::Diagnostics::Tracing::TraceLoggingEventTypes* System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor(::CsString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Reflection::ParameterInfo*>* paramInfos) {
  return (TraceLoggingEventTypes*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "TraceLoggingEventTypes", name, tags, paramInfos));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes..ctor
System::Diagnostics::Tracing::TraceLoggingEventTypes* System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor(System::Diagnostics::Tracing::EventTags tags, ::CsString* defaultName, ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos) {
  return (TraceLoggingEventTypes*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "TraceLoggingEventTypes", tags, defaultName, typeInfos));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes.get_Name
::CsString* System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes.get_Tags
System::Diagnostics::Tracing::EventTags System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Tags() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::EventTags>(this, "get_Tags"));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes.GetNameInfo
System::Diagnostics::Tracing::NameInfo* System::Diagnostics::Tracing::TraceLoggingEventTypes::GetNameInfo(::CsString* name, System::Diagnostics::Tracing::EventTags tags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::NameInfo*>(this, "GetNameInfo", name, tags));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes.MakeArray
::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray(::Array<System::Reflection::ParameterInfo*>* paramInfos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*>(this, "MakeArray", paramInfos));
}
// Autogenerated method: System.Diagnostics.Tracing.TraceLoggingEventTypes.MakeArray
::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray(::Array<System::Type*>* types) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*>("System.Diagnostics.Tracing", "TraceLoggingEventTypes", "MakeArray", types));
}
