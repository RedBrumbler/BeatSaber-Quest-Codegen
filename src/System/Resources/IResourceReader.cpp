// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Resources.IResourceReader
#include "System/Resources/IResourceReader.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Resources.IResourceReader.Close
void System::Resources::IResourceReader::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Resources.IResourceReader.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Resources::IResourceReader::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}