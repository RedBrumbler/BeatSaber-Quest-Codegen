// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
// Including type: System.Resources.ResourceTypeCode
#include "System/Resources/ResourceTypeCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Resources.ResourceLocator..ctor
System::Resources::ResourceLocator* System::Resources::ResourceLocator::New_ctor(int dataPos, ::CsObject* value) {
  return (ResourceLocator*)THROW_UNLESS(il2cpp_utils::New("System.Resources", "ResourceLocator", dataPos, value));
}
// Autogenerated method: System.Resources.ResourceLocator.get_DataPosition
int System::Resources::ResourceLocator::get_DataPosition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_DataPosition"));
}
// Autogenerated method: System.Resources.ResourceLocator.get_Value
::CsObject* System::Resources::ResourceLocator::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "get_Value"));
}
// Autogenerated method: System.Resources.ResourceLocator.set_Value
void System::Resources::ResourceLocator::set_Value(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Value", value));
}
// Autogenerated method: System.Resources.ResourceLocator.CanCache
bool System::Resources::ResourceLocator::CanCache(System::Resources::ResourceTypeCode value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Resources", "ResourceLocator", "CanCache", value));
}
