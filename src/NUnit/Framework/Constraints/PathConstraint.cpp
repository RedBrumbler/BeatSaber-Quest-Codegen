// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.PathConstraint
#include "NUnit/Framework/Constraints/PathConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] DirectorySeparatorChars
::Array<::Il2CppChar>* NUnit::Framework::Constraints::PathConstraint::_get_DirectorySeparatorChars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("NUnit.Framework.Constraints", "PathConstraint", "DirectorySeparatorChars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] DirectorySeparatorChars
void NUnit::Framework::Constraints::PathConstraint::_set_DirectorySeparatorChars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Constraints", "PathConstraint", "DirectorySeparatorChars", value));
}
// Autogenerated method: NUnit.Framework.Constraints.PathConstraint.Canonicalize
::CsString* NUnit::Framework::Constraints::PathConstraint::Canonicalize(::CsString* path) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "Canonicalize", path));
}
// Autogenerated method: NUnit.Framework.Constraints.PathConstraint..cctor
void NUnit::Framework::Constraints::PathConstraint::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Constraints", "PathConstraint", ".cctor"));
}
// Autogenerated method: NUnit.Framework.Constraints.PathConstraint..ctor
NUnit::Framework::Constraints::PathConstraint* NUnit::Framework::Constraints::PathConstraint::New_ctor(::CsString* expected) {
  return (PathConstraint*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Constraints", "PathConstraint", expected));
}
// Autogenerated method: NUnit.Framework.Constraints.PathConstraint.GetStringRepresentation
::CsString* NUnit::Framework::Constraints::PathConstraint::GetStringRepresentation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetStringRepresentation"));
}
