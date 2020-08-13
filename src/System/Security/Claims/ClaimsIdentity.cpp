// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
// Including type: System.Security.Claims.ClaimsIdentity/<get_Claims>d__51
#include "System/Security/Claims/ClaimsIdentity_-get_Claims-d__51.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Security.Claims.Claim
#include "System/Security/Claims/Claim.hpp"
// Including type: System.Collections.ObjectModel.Collection`1
#include "System/Collections/ObjectModel/Collection_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims) {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity", claims));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::CsString* authenticationType, ::CsString* nameType, ::CsString* roleType) {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity", identity, claims, authenticationType, nameType, roleType));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::CsString* authenticationType, ::CsString* nameType, ::CsString* roleType, bool checkAuthType) {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity", identity, claims, authenticationType, nameType, roleType, checkAuthType));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor(System::Security::Claims::ClaimsIdentity* other) {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity", other));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity", info, context));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.get_Actor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::get_Actor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Claims::ClaimsIdentity*>(this, "get_Actor"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.set_Actor
void System::Security::Claims::ClaimsIdentity::set_Actor(System::Security::Claims::ClaimsIdentity* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Actor", value));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.get_Claims
System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* System::Security::Claims::ClaimsIdentity::get_Claims() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>(this, "get_Claims"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.get_NameClaimType
::CsString* System::Security::Claims::ClaimsIdentity::get_NameClaimType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_NameClaimType"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.Clone
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Claims::ClaimsIdentity*>(this, "Clone"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.AddClaim
void System::Security::Claims::ClaimsIdentity::AddClaim(System::Security::Claims::Claim* claim) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddClaim", claim));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.SafeAddClaims
void System::Security::Claims::ClaimsIdentity::SafeAddClaims(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SafeAddClaims", claims));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.SafeAddClaim
void System::Security::Claims::ClaimsIdentity::SafeAddClaim(System::Security::Claims::Claim* claim) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SafeAddClaim", claim));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.FindFirst
System::Security::Claims::Claim* System::Security::Claims::ClaimsIdentity::FindFirst(::CsString* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Claims::Claim*>(this, "FindFirst", type));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.OnSerializingMethod
void System::Security::Claims::ClaimsIdentity::OnSerializingMethod(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializingMethod", context));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.OnDeserializedMethod
void System::Security::Claims::ClaimsIdentity::OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializedMethod", context));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.OnDeserializingMethod
void System::Security::Claims::ClaimsIdentity::OnDeserializingMethod(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializingMethod", context));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.GetObjectData
void System::Security::Claims::ClaimsIdentity::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.DeserializeClaims
void System::Security::Claims::ClaimsIdentity::DeserializeClaims(::CsString* serializedClaims) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DeserializeClaims", serializedClaims));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.SerializeClaims
::CsString* System::Security::Claims::ClaimsIdentity::SerializeClaims() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "SerializeClaims"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.IsCircular
bool System::Security::Claims::ClaimsIdentity::IsCircular(System::Security::Claims::ClaimsIdentity* subject) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsCircular", subject));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.Deserialize
void System::Security::Claims::ClaimsIdentity::Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, bool useContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", info, context, useContext));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity..ctor
System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsIdentity::New_ctor() {
  return (ClaimsIdentity*)THROW_UNLESS(il2cpp_utils::New("System.Security.Claims", "ClaimsIdentity"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.get_AuthenticationType
::CsString* System::Security::Claims::ClaimsIdentity::get_AuthenticationType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_AuthenticationType"));
}
// Autogenerated method: System.Security.Claims.ClaimsIdentity.get_Name
::CsString* System::Security::Claims::ClaimsIdentity::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
