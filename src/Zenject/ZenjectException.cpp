// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ZenjectException
#include "Zenject/ZenjectException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ZenjectException..ctor
Zenject::ZenjectException* Zenject::ZenjectException::New_ctor(::CsString* message) {
  return (ZenjectException*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ZenjectException", message));
}
// Autogenerated method: Zenject.ZenjectException..ctor
Zenject::ZenjectException* Zenject::ZenjectException::New_ctor(::CsString* message, System::Exception* innerException) {
  return (ZenjectException*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ZenjectException", message, innerException));
}
