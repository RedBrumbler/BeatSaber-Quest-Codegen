// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
#include "System/Runtime/Serialization/Formatters/Binary/ObjectMapInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo..ctor
System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo* System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::New_ctor(int objectId, int numMembers, ::Array<::CsString*>* memberNames, ::Array<System::Type*>* memberTypes) {
  return (ObjectMapInfo*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo", objectId, numMembers, memberNames, memberTypes));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo.isCompatible
bool System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible(int numMembers, ::Array<::CsString*>* memberNames, ::Array<System::Type*>* memberTypes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "isCompatible", numMembers, memberNames, memberTypes));
}
