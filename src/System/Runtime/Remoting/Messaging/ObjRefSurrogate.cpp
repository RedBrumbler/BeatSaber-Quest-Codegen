// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "System/Runtime/Remoting/Messaging/ObjRefSurrogate.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.ObjRefSurrogate.GetObjectData
void System::Runtime::Remoting::Messaging::ObjRefSurrogate::GetObjectData(::CsObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", obj, si, sc));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ObjRefSurrogate.SetObjectData
::CsObject* System::Runtime::Remoting::Messaging::ObjRefSurrogate::SetObjectData(::CsObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc, System::Runtime::Serialization::ISurrogateSelector* selector) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "SetObjectData", obj, si, sc, selector));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ObjRefSurrogate..ctor
System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::ObjRefSurrogate::New_ctor() {
  return (ObjRefSurrogate*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ObjRefSurrogate"));
}
