// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode/LinqEnumerator
#include "OVRSimpleJSON/JSONNode_LinqEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator..ctor
OVRSimpleJSON::JSONNode::LinqEnumerator* OVRSimpleJSON::JSONNode::LinqEnumerator::New_ctor(OVRSimpleJSON::JSONNode* aNode) {
  return (JSONNode::LinqEnumerator*)THROW_UNLESS(il2cpp_utils::New("OVRSimpleJSON", "JSONNode/LinqEnumerator", aNode));
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.GetEnumerator
System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode::LinqEnumerator::GetEnumerator() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*>(this, "GetEnumerator")));
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.get_Current
System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode::LinqEnumerator::get_Current() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>(this, "get_Current")));
}
System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_Generic_IEnumerator_1_get_Current() {
  return get_Current();
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.System.Collections.IEnumerator.get_Current
::Il2CppObject* OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerator_get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.MoveNext
bool OVRSimpleJSON::JSONNode::LinqEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.Dispose
void OVRSimpleJSON::JSONNode::LinqEnumerator::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void OVRSimpleJSON::JSONNode::LinqEnumerator::System_IDisposable_Dispose() {
  Dispose();
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.Reset
void OVRSimpleJSON::JSONNode::LinqEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}
// Autogenerated method: OVRSimpleJSON.JSONNode/LinqEnumerator.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* OVRSimpleJSON::JSONNode::LinqEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}