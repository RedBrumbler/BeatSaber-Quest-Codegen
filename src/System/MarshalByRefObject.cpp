// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
// Including type: System.Runtime.Remoting.ObjRef
#include "System/Runtime/Remoting/ObjRef.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.MarshalByRefObject.get_ObjectIdentity
System::Runtime::Remoting::ServerIdentity* System::MarshalByRefObject::get_ObjectIdentity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ServerIdentity*>(this, "get_ObjectIdentity"));
}
// Autogenerated method: System.MarshalByRefObject.set_ObjectIdentity
void System::MarshalByRefObject::set_ObjectIdentity(System::Runtime::Remoting::ServerIdentity* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ObjectIdentity", value));
}
// Autogenerated method: System.MarshalByRefObject.CreateObjRef
System::Runtime::Remoting::ObjRef* System::MarshalByRefObject::CreateObjRef(System::Type* requestedType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ObjRef*>(this, "CreateObjRef", requestedType));
}
// Autogenerated method: System.MarshalByRefObject.InitializeLifetimeService
::CsObject* System::MarshalByRefObject::InitializeLifetimeService() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "InitializeLifetimeService"));
}
// Autogenerated method: System.MarshalByRefObject..ctor
System::MarshalByRefObject* System::MarshalByRefObject::New_ctor() {
  return (MarshalByRefObject*)THROW_UNLESS(il2cpp_utils::New("System", "MarshalByRefObject"));
}
