// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Array/ArrayEnumerator
#include "System/Array_ArrayEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Array/ArrayEnumerator..ctor
System::Array::ArrayEnumerator* System::Array::ArrayEnumerator::New_ctor(System::Array* array) {
  return (Array::ArrayEnumerator*)THROW_UNLESS(il2cpp_utils::New("System", "Array/ArrayEnumerator", array));
}
// Autogenerated method: System.Array/ArrayEnumerator.MoveNext
bool System::Array::ArrayEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Array/ArrayEnumerator.Reset
void System::Array::ArrayEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Array::ArrayEnumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}
// Autogenerated method: System.Array/ArrayEnumerator.Clone
::CsObject* System::Array::ArrayEnumerator::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "Clone"));
}
// Autogenerated method: System.Array/ArrayEnumerator.get_Current
::CsObject* System::Array::ArrayEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_Current"));
}
::CsObject* System::Array::ArrayEnumerator::System_Collections_IEnumerator_get_Current() {
  return get_Current();
}
