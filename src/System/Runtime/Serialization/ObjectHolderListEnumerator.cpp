// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ObjectHolderListEnumerator
#include "System/Runtime/Serialization/ObjectHolderListEnumerator.hpp"
// Including type: System.Runtime.Serialization.ObjectHolderList
#include "System/Runtime/Serialization/ObjectHolderList.hpp"
// Including type: System.Runtime.Serialization.ObjectHolder
#include "System/Runtime/Serialization/ObjectHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.ObjectHolderListEnumerator..ctor
System::Runtime::Serialization::ObjectHolderListEnumerator* System::Runtime::Serialization::ObjectHolderListEnumerator::New_ctor(System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator) {
  return (ObjectHolderListEnumerator*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "ObjectHolderListEnumerator", list, isFixupEnumerator));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolderListEnumerator.MoveNext
bool System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolderListEnumerator.get_Current
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ObjectHolder*>(this, "get_Current"));
}
