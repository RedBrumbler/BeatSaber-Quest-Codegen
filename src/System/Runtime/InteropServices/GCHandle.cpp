// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Runtime.InteropServices.GCHandleType
#include "System/Runtime/InteropServices/GCHandleType.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.InteropServices.GCHandle..ctor
System::Runtime::InteropServices::GCHandle* System::Runtime::InteropServices::GCHandle::New_ctor(System::IntPtr h) {
  return (GCHandle*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "GCHandle", h));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle..ctor
System::Runtime::InteropServices::GCHandle* System::Runtime::InteropServices::GCHandle::New_ctor(::Il2CppObject* obj) {
  return (GCHandle*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "GCHandle", obj));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle..ctor
System::Runtime::InteropServices::GCHandle* System::Runtime::InteropServices::GCHandle::New_ctor(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type) {
  return (GCHandle*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "GCHandle", value, type));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.get_IsAllocated
bool System::Runtime::InteropServices::GCHandle::get_IsAllocated() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsAllocated"));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.get_Target
::Il2CppObject* System::Runtime::InteropServices::GCHandle::get_Target() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "get_Target"));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.set_Target
void System::Runtime::InteropServices::GCHandle::set_Target(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Target", value));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.AddrOfPinnedObject
System::IntPtr System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(*this, "AddrOfPinnedObject"));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.Alloc
System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::Alloc(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::InteropServices::GCHandle>("System.Runtime.InteropServices", "GCHandle", "Alloc", value));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.Alloc
System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::InteropServices::GCHandle>("System.Runtime.InteropServices", "GCHandle", "Alloc", value, type));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.Free
void System::Runtime::InteropServices::GCHandle::Free() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Free"));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.CheckCurrentDomain
bool System::Runtime::InteropServices::GCHandle::CheckCurrentDomain(int handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.InteropServices", "GCHandle", "CheckCurrentDomain", handle));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.GetTarget
::Il2CppObject* System::Runtime::InteropServices::GCHandle::GetTarget(int handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.InteropServices", "GCHandle", "GetTarget", handle));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.GetTargetHandle
int System::Runtime::InteropServices::GCHandle::GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "GCHandle", "GetTargetHandle", obj, handle, type));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.FreeHandle
void System::Runtime::InteropServices::GCHandle::FreeHandle(int handle) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "GCHandle", "FreeHandle", handle));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.GetAddrOfPinnedObject
System::IntPtr System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject(int handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "GCHandle", "GetAddrOfPinnedObject", handle));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.FromIntPtr
System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::FromIntPtr(System::IntPtr value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::InteropServices::GCHandle>("System.Runtime.InteropServices", "GCHandle", "FromIntPtr", value));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.ToIntPtr
System::IntPtr System::Runtime::InteropServices::GCHandle::ToIntPtr(System::Runtime::InteropServices::GCHandle value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "GCHandle", "ToIntPtr", value));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.Equals
bool System::Runtime::InteropServices::GCHandle::Equals(::Il2CppObject* o) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", o));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.GetHashCode
int System::Runtime::InteropServices::GCHandle::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.Runtime.InteropServices.GCHandle.op_Equality
bool System::Runtime::InteropServices::operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.InteropServices", "GCHandle", "op_Equality", a, b));
}