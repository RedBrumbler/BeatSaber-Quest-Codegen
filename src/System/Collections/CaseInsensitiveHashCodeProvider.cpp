// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CaseInsensitiveHashCodeProvider
#include "System/Collections/CaseInsensitiveHashCodeProvider.hpp"
// Including type: System.Globalization.TextInfo
#include "System/Globalization/TextInfo.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.CaseInsensitiveHashCodeProvider..ctor
System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor(System::Globalization::CultureInfo* culture) {
  return (CaseInsensitiveHashCodeProvider*)THROW_UNLESS(il2cpp_utils::New("System.Collections", "CaseInsensitiveHashCodeProvider", culture));
}
// Autogenerated method: System.Collections.CaseInsensitiveHashCodeProvider.get_Default
System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::get_Default() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::CaseInsensitiveHashCodeProvider*>("System.Collections", "CaseInsensitiveHashCodeProvider", "get_Default"));
}
// Autogenerated method: System.Collections.CaseInsensitiveHashCodeProvider..ctor
System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor() {
  return (CaseInsensitiveHashCodeProvider*)THROW_UNLESS(il2cpp_utils::New("System.Collections", "CaseInsensitiveHashCodeProvider"));
}
// Autogenerated method: System.Collections.CaseInsensitiveHashCodeProvider.GetHashCode
int System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
}