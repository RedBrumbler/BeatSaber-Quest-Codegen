// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeInfo
#include "System/Runtime/Remoting/TypeInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.TypeInfo..ctor
System::Runtime::Remoting::TypeInfo* System::Runtime::Remoting::TypeInfo::New_ctor(System::Type* type) {
  return (TypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting", "TypeInfo", type));
}
// Autogenerated method: System.Runtime.Remoting.TypeInfo.get_TypeName
::CsString* System::Runtime::Remoting::TypeInfo::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_TypeName"));
}
// Autogenerated method: System.Runtime.Remoting.TypeInfo.CanCastTo
bool System::Runtime::Remoting::TypeInfo::CanCastTo(System::Type* fromType, ::CsObject* o) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CanCastTo", fromType, o));
}
