// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ClientIdentity
#include "System/Runtime/Remoting/ClientIdentity.hpp"
// Including type: System.WeakReference
#include "System/WeakReference.hpp"
// Including type: System.Runtime.Remoting.ObjRef
#include "System/Runtime/Remoting/ObjRef.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.ClientIdentity..ctor
System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::ClientIdentity::New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::ObjRef* objRef) {
  return (ClientIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting", "ClientIdentity", objectUri, objRef));
}
// Autogenerated method: System.Runtime.Remoting.ClientIdentity.get_ClientProxy
System::MarshalByRefObject* System::Runtime::Remoting::ClientIdentity::get_ClientProxy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::MarshalByRefObject*>(this, "get_ClientProxy"));
}
// Autogenerated method: System.Runtime.Remoting.ClientIdentity.set_ClientProxy
void System::Runtime::Remoting::ClientIdentity::set_ClientProxy(System::MarshalByRefObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ClientProxy", value));
}
// Autogenerated method: System.Runtime.Remoting.ClientIdentity.get_TargetUri
::Il2CppString* System::Runtime::Remoting::ClientIdentity::get_TargetUri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TargetUri"));
}
// Autogenerated method: System.Runtime.Remoting.ClientIdentity.CreateObjRef
System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ClientIdentity::CreateObjRef(System::Type* requestedType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ObjRef*>(this, "CreateObjRef", requestedType));
}