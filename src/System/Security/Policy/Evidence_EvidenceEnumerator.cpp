// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Policy.Evidence/EvidenceEnumerator
#include "System/Security/Policy/Evidence_EvidenceEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Policy.Evidence/EvidenceEnumerator..ctor
System::Security::Policy::Evidence::EvidenceEnumerator* System::Security::Policy::Evidence::EvidenceEnumerator::New_ctor(System::Collections::IEnumerator* hostenum, System::Collections::IEnumerator* assemblyenum) {
  return (Evidence::EvidenceEnumerator*)THROW_UNLESS(il2cpp_utils::New("System.Security.Policy", "Evidence/EvidenceEnumerator", hostenum, assemblyenum));
}
// Autogenerated method: System.Security.Policy.Evidence/EvidenceEnumerator.MoveNext
bool System::Security::Policy::Evidence::EvidenceEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Security.Policy.Evidence/EvidenceEnumerator.Reset
void System::Security::Policy::Evidence::EvidenceEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Security::Policy::Evidence::EvidenceEnumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}
// Autogenerated method: System.Security.Policy.Evidence/EvidenceEnumerator.get_Current
::CsObject* System::Security::Policy::Evidence::EvidenceEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_Current"));
}
::CsObject* System::Security::Policy::Evidence::EvidenceEnumerator::System_Collections_IEnumerator_get_Current() {
  return get_Current();
}
